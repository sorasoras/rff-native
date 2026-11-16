/* The host-side disc file layer.
 *
 * The SDK's own path walk (DVDConvertPathToEntrynum) reads the FST out of guest memory, which
 * means the table has to survive the game's own memory clearing and match the format byte for
 * byte. Both are fragile on a host. This module instead parses the FST once, on the host, and
 * answers the three questions the SDK's file API actually asks:
 *
 *   DVDConvertPathToEntrynum(path)          -> an entry index, or -1
 *   DVDFastOpen(entry, DVDFileInfo*)        -> the file's length and disc offset
 *   DVDReadAsyncPrio(info, buf, len, off,cb)-> the bytes, then the game's callback
 *
 * Everything above that layer (DVDOpen, DVDReadPrio, the game's own resource loaders) stays the
 * game's verified code.
 *
 * FST entry layout (12 bytes):
 *   file: u32 type|name_offset (type 0), u32 disc_offset, u32 size
 *   dir : u32 type|name_offset (type 1), u32 parent_index, u32 subtree_end  (exclusive)
 * The root is entry 0 and its subtree_end is the entry count, so a directory's children are the
 * entries in (index, subtree_end) with the nesting given by the children's own subtree_ends.
 */
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tc_rt.h"

typedef struct {
    u32 name_off;
    u32 a;          /* file: disc offset   | dir: parent index */
    u32 b;          /* file: size          | dir: subtree end  */
    u32 is_dir;
} FstEntry;

static FstEntry *g_e;
static u32 g_e_n;
static char *g_str;
static u32 g_str_len;
static HANDLE g_img = INVALID_HANDLE_VALUE;
static u64 g_img_size;
static u32 g_reads, g_read_bytes;

u8 *tcrt_ram_ptr(u32 guest);   /* the runtime's window onto guest MEM1 */

unsigned host_dvd_init(const char *image_path, u32 fst_off, u32 fst_size)
{
    u8 *raw;
    DWORD got = 0;
    LARGE_INTEGER pos;

    g_img = CreateFileA(image_path, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
    if (g_img == INVALID_HANDLE_VALUE) return 0;
    {
        LARGE_INTEGER sz;
        if (!GetFileSizeEx(g_img, &sz)) return 0;
        g_img_size = (u64)sz.QuadPart;
    }
    raw = (u8 *)malloc(fst_size);
    if (!raw) return 0;
    pos.QuadPart = (LONGLONG)fst_off;
    if (!SetFilePointerEx(g_img, pos, NULL, FILE_BEGIN)) return 0;
    if (!ReadFile(g_img, raw, fst_size, &got, NULL) || got != fst_size) return 0;
    if (got < 12) return 0;

    g_e_n = (u32)raw[8] << 24 | (u32)raw[9] << 16 | (u32)raw[10] << 8 | raw[11];
    if (!g_e_n || g_e_n > 20000 || 12u * g_e_n > fst_size) return 0;
    g_e = (FstEntry *)calloc(g_e_n, sizeof(FstEntry));
    if (!g_e) return 0;
    {
        u32 k;
        for (k = 0; k < g_e_n; k++) {
            const u8 *p = raw + k * 12;   /* entry 0 (the root) is the table's first record */
            g_e[k].name_off = (((u32)p[0] << 24 | (u32)p[1] << 16 | (u32)p[2] << 8 | p[3]) & 0x00FFFFFFu);
            g_e[k].is_dir   = (p[0] != 0);
            g_e[k].a        = (u32)p[4] << 24 | (u32)p[5] << 16 | (u32)p[6] << 8 | p[7];
            g_e[k].b        = (u32)p[8] << 24 | (u32)p[9] << 16 | (u32)p[10] << 8 | p[11];
        }
    }
    g_str_len = fst_size - 12 * g_e_n;
    g_str = (char *)malloc(g_str_len + 1);
    if (!g_str) return 0;
    memcpy(g_str, raw + 12 * g_e_n, g_str_len);
    g_str[g_str_len] = 0;
    free(raw);
    printf("[dvd] FST %u entries, strings %u bytes, root_end=%u first=%s\n",
           g_e_n, g_str_len, g_e[0].b, g_str + g_e[0].name_off);
    return 1;
}

static const char *ent_name(u32 i)
{
    if (i >= g_e_n || g_e[i].name_off >= g_str_len) return "";
    return g_str + g_e[i].name_off;
}

static int name_eq_n(const char *a, const char *b, size_t n)
{
    size_t k;
    for (k = 0; k < n; k++) {
        char x = a[k], y = b[k];
        if (!x || !y) return 0;
        if (x >= 'A' && x <= 'Z') x = (char)(x - 'A' + 'a');
        if (y >= 'A' && y <= 'Z') y = (char)(y - 'A' + 'a');
        if (x != y) return 0;
    }
    return a[n] == 0;
}

/* Match one component inside the directory whose children are [from, end). Returns the entry
 * index or 0 when not found; *next_from / *next_end describe the subtree to descend into. */
static u32 find_child(u32 from, u32 end, const char *comp, size_t clen, u32 *next_end)
{
    u32 i = from;
    while (i < end) {
        u32 stop = g_e[i].is_dir ? (g_e[i].b ? g_e[i].b : end) : i + 1;
        if (name_eq_n(ent_name(i), comp, clen)) {
            *next_end = g_e[i].is_dir ? stop : i + 1;
            return i;
        }
        i = stop;
    }
    return 0;
}

s32 host_dvd_convert(const char *path)
{
    u32 from = 1, end, cur = 0;
    if (!g_e || !*path) return -1;
    end = g_e[0].b ? g_e[0].b : g_e_n;
    for (;;) {
        const char *slash;
        size_t clen;
        u32 hit, sub_end = end;
        while (*path == '/') path++;
        if (!*path) return (s32)cur;
        slash = path;
        while (*slash && *slash != '/') slash++;
        clen = (size_t)(slash - path);
        hit = find_child(from, end, path, clen, &sub_end);
        if (!hit) return -1;
        cur = hit;
        if (!*slash) return (s32)hit;
        if (!g_e[hit].is_dir) return -1;
        from = hit + 1;
        end = sub_end;
        path = slash;
    }
}

s32 host_dvd_convert_guest(u32 guest_path)
{
    char buf[512];
    u32 k;
    for (k = 0; k + 1 < sizeof buf; k++) {
        u8 ch = rd8(guest_path + k);
        buf[k] = (char)ch;
        if (!ch) break;
    }
    buf[sizeof buf - 1] = 0;
    return host_dvd_convert(buf);
}

u32 host_dvd_fastopen(u32 entry, u32 info)
{
    if (entry >= g_e_n || g_e[entry].is_dir) return 0;
    /* DVDFileInfo: +0x30 startAddr (the disc byte offset), +0x34 length. Retail DVDFastOpen
     * (0x80234874) stores them in exactly this order - the loader reads +0x34 as the file size,
     * so swapping them makes it allocate the disc offset (300 MB) and read into a null buffer.
     * The FST offset field is a WORD offset on Wii (Dolphin FileSystemGCWii shifts it <<2), so
     * the byte offset into the decrypted data area is a*4; the length field is already bytes. */
    wr32(info + 0x30u, g_e[entry].a * 4u); /* startAddr: disc byte offset */
    wr32(info + 0x34u, g_e[entry].b);      /* length */
    wr32(info + 0x38u, 0u);
    wr32(info + 0x0cu, 0u);
    return 1;
}

/* The first argument of DVDReadAsyncPrio is the DVDFileInfo the open filled in, so a read
 * takes its base offset and length from those fields - the same ones DVDFastOpen set. */
u32 host_dvd_read_info(u32 info, u32 buf, u32 len, u32 off)
{
    LARGE_INTEGER pos;
    DWORD n = 0;
    u64 start;
    u8 *dst;
    static unsigned dbg;
    u32 length = rd32(info + 0x34u), foff = rd32(info + 0x30u);
    if (off >= length) return 0;
    if (off + len > length) len = length - off;
    start = (u64)foff + off;
    if (start + len > g_img_size) return 0;
    dst = tcrt_ram_ptr(buf);
    if (!dst) return 0;
    pos.QuadPart = (LONGLONG)start;
    if (!SetFilePointerEx(g_img, pos, NULL, FILE_BEGIN)) return 0;
    if (!ReadFile(g_img, dst, len, &n, NULL)) return 0;
    if (dbg++ < 4) {
        fprintf(stderr, "[rd] buf=%08x start=%llu n=%lu head=", buf, (unsigned long long)start, n);
        { unsigned k; for (k = 0; k < 0x10u && k < n; k++) fprintf(stderr, "%02x", dst[k]); }
        fputc(10, stderr);
    }
    g_reads++; g_read_bytes += n;
    return n;
}

/* DVDLowRead(void *dst, u32 len, u32 disc_offset): a raw sector read at an absolute disc
 * address, which is what the drive is handed after the file layer resolves the offset. */
u32 host_dvd_read_raw(u32 dst, u32 len, u32 off)
{
    LARGE_INTEGER pos;
    DWORD n = 0;
    u8 *p;
    if ((u64)off + len > g_img_size) return 0;
    if (!dst) return len;   /* the caller asked for no destination: count it as served */
    p = tcrt_ram_ptr(dst);
    if (!p) return 0;
    pos.QuadPart = (LONGLONG)off;
    if (!SetFilePointerEx(g_img, pos, NULL, FILE_BEGIN)) return 0;
    if (!ReadFile(g_img, p, len, &n, NULL)) return 0;
    g_reads++; g_read_bytes += n;
    return n;
}

u32 host_dvd_reads(void) { return g_reads; }
u32 host_dvd_read_bytes(void) { return g_read_bytes; }
u32 host_dvd_entries(void) { return g_e_n; }
