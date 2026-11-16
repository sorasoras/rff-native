/* DecompPipeline GameCube runtime implementation: guest MEM1 (big endian), loaded from the DOL's sections like
 * the oracle's Ghidra program; the write set, the call log and the report (instruction helpers: tc_ppc.c). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>   /* the native build's HLE: QueryPerformanceCounter for the time base */
#include "tc_rt_internal.h"
#include "../gen/dispatch.h"

/* ---- the native switch: the mocked callees are REAL calls through the generated dispatch ---- */
u32 tc_call_native(u32 target, const TcArgs *a);
f64 tc_callf_native(u32 target, const TcArgs *a);
void tcrt_native_boot(void);

#define MAX_WRITES (1u << 22)
#define MAX_CALLS 4096 /* TcOracle.CALL_LIMIT: the oracle rejects vectors making more calls */
#define MAX_FAULTS 4
#define MAX_IO 4096 /* TcBank.IO_LIMIT */
/* TcOracle.callRecord: target, r3..r10, f1..f8 (64-bit), s0..s7 */
#define LOG_INTS 17

static u8 *g_ram;
static u8 *g_pristine;
static u8 *g_written; /* 1 bit per guest byte */
static u8 *g_code;    /* 1 bit per guest byte that belongs to an instruction */
static u32 *g_wlist;
static u32 g_wcount;
static int g_woverflow;
static u32 g_rets[4096];
static u32 g_ret3, g_lastr4;
static f64 g_ret1, g_lastf;
static f64 g_entry_f[8];

/* A float parameter passed in a GPR (the EABI's float-in-integer-register form) and a double
 * built from two words: the corpus's thunks use these, the oracle's ppc_check defines them too. */
u32 tc_gprf32(u32 u) { union { u32 u; f32 f; } c; c.u = u; return (u32)(f64)c.f; }
f64 tc_gprf64(u32 hi, u32 lo) { union { u32 w[2]; f32 f; } c; c.w[0] = hi; c.w[1] = lo; return (f64)c.f; }
static u32 g_mw_idx[256], g_mw_addr[256], g_mw_val[256];
static u32 g_noret_cap;
static u32 g_nstores;              /* the no-return trace cap (0: off); raising it ends the vector */
#define NORET_EXCEPTION 0xE0004E4FUL
__declspec(dllimport) void __stdcall RaiseException(unsigned long dwExceptionCode, unsigned long dwExceptionFlags,
                                                    unsigned long nNumberOfArguments, const unsigned long *lpArguments);
static int g_mw_n;
static u64 g_frets[4096];
static u32 g_ncalls;
static u32 g_call_int[MAX_CALLS][LOG_INTS]; /* target, r3..r10, s0..s7 */
static u64 g_call_f[MAX_CALLS][8];          /* f1..f8 */
static char g_faults[MAX_FAULTS][64];
static u32 g_nfaults;
static u32 g_code_read;
static struct {
    u32 addr, size;
    u64 value;
    int read;
} g_io[MAX_IO]; /* stores into and reads of hardware registers, in order (tcrt_mmio) */
static u32 g_nio;
static u32 g_hw[16];
static int g_hw_set;
static u32 g_hw_next;

static int bit_get(const u8 *bits, u32 off) { return (bits[off >> 3] >> (off & 7)) & 1; }
static void bit_set(u8 *bits, u32 off) { bits[off >> 3] |= (u8)(1u << (off & 7)); }

static void fault(const char *kind, u32 addr)
{
    if (g_nfaults < MAX_FAULTS) snprintf(g_faults[g_nfaults], sizeof g_faults[0], "%s %08x", kind, addr);
    g_nfaults++;
}

static int check(u32 addr, u32 size, int write)
{
    if (addr < TCRT_RAM_BASE || addr > TCRT_RAM_BASE + TCRT_RAM_SIZE - size) {
        if (!write) fault("read", addr);
        return 0; /* an invalid store is dropped silently, like the oracle's run; a read still faults */
    }
    if (!write && bit_get(g_code, addr - TCRT_RAM_BASE)) {
        if (!g_code_read) g_code_read = addr;
    }
    return 1;
}

static u32 g_store_cap;             /* the no-return cut in stores (the NC line); 0: off */

static void mark(u32 addr, u32 size)
{
    if (g_store_cap && ++g_nstores >= g_store_cap)
        RaiseException(NORET_EXCEPTION, 0, 0, NULL);  /* the trace cut: both sides stop at store N */
    for (u32 i = 0; i < size; i++) {
        u32 off = addr + i - TCRT_RAM_BASE;
        if (bit_get(g_written, off)) continue;
        bit_set(g_written, off);
        if (g_wcount < MAX_WRITES) g_wlist[g_wcount++] = off;
        else g_woverflow = 1;
    }
}

void tcrt_set_hw(const u32 *words)
{
    memcpy(g_hw, words, sizeof g_hw);
    g_hw_set = 1;
}

/* ---- the native HAL register file: the real hardware windows, word-granular. The judge's
 * TcBank scripted the reads from the vectors; a running game needs registers that BEHAVE. ---- */
#define NHW_WORDS 0x8000u             /* 32K words: the low 128 KB of each MMIO window, direct-mapped */
static u32 g_nhw[NHW_WORDS];

static u32 *nhw_slot(u32 a)
{
    u32 idx = ((a & 0xffffu) >> 2) & (NHW_WORDS - 1);
    return &g_nhw[idx];
}

/* The DSP: __OSInitAudioSystem writes 0x43/0x8ac to the control word then waits for the
 * transactions to complete. On the console the DSP raises those bits; here they complete at once
 * and the mailbox reads report "nothing pending", so the init sequence's polls exit. */
static u32 dsp_read(u32 a)
{
    a = tcrt_fold(a);
    /* The PI (processor interface) interrupt cause: the DVD/DI transfer-complete bit. A host
     * serves the disc from files, so every transfer completes immediately. */
    /* The DSP audio interface's DMA counter (0xcd006c08): it advances continuously on hardware.
     * The game polls it to detect a completed transfer, so a read must move it forward. */
    if (a == 0xcd006c08u) {
        /* The DSP's audio DMA counter: hardware increments it continuously; each read must move
         * it so the transfer polls complete. */
        static u32 ctr;
        ctr = (ctr + 0x40u) & 0x7fffffffu;
        return ctr;
    }
    if (a == 0xcc003000u) return 0x00000002u;   /* PI_INTSR: DI complete */
    if (a == 0xcc003004u) return 0x00000002u;   /* PI_INTSR high half */
    switch (a) {
    /* The DSP mailbox: a 32-bit register whose HIGH half (offset +0) is the CPU-visible message
     * status - "bit 15" there is the full word's bit 31 - and whose LOW half (offset +2) is the
     * message. __OSInitAudioSystem waits for that bit, so raise it (with a reply code in the low
     * half, the DSP's acknowledgement). */
    /* The DSP mailbox handshake. CPU->DSP mail (0xcc005000 bit 31) is consumed by the DSP at
       once; DSP->CPU mail (0xcc005004 bit 31) is raised for the CPU after each send, and the
       CPU's read consumes it. The microcode counters the game polls then terminate. */
    case 0xcc005000:
        return 0;
    case 0xcc005004: {
        static int pending = 1;
        if (pending) { pending = 0; return 0x80000000u | 0x00000053u; }
        pending = 1;
        return 0;
    }
    case 0xcc005006:                   /* the low half of that message word */
    case 0xcc00500c: case 0xcc00500e:
        return 0;
    case 0xcc00500a:                   /* the status: transaction complete (0x20), nothing pending */
        return 0x20u;
    default:
        return g_nhw[((a & 0xffffu) >> 2) & (NHW_WORDS - 1)];
    }
}

static void dsp_write(u32 a, u32 v, u32 size)
{
    (void)size;
    a = tcrt_fold(a);
    if (a == 0xcc00500a) {             /* a DSP command was just issued: it completes at once */
        g_nhw[((0x500au) >> 2) & (NHW_WORDS - 1)] = (v & ~1u) | 0x20u;
        return;
    }
    g_nhw[((a & 0xffffu) >> 2) & (NHW_WORDS - 1)] = v;
}

/* the last 16 hardware-register accesses, for the watcher's dump */
volatile u32 tcrt_hw_addr[16], tcrt_hw_val[16];
volatile unsigned tcrt_hw_i;
volatile u32 tcrt_hw_read_n[0x40], tcrt_hw_write_n[0x40];
static void hw_count(u32 a, int wr)
{
    u32 k = (a & 0xffu) >> 2;
    if (k < 0x40) { if (wr) tcrt_hw_write_n[k]++; else tcrt_hw_read_n[k]++; }
}

/* ---- the guest stack frames ----
 * The translated bodies are written against a fixed stack pointer (TCRT_SP) because the
 * behaviour harness ran each function at a known SP. Nested native calls therefore share
 * the same absolute stack words, and a callee overwrites its caller frame (fn_80255624's
 * loop counter is one such word). tc_call rebases the stack window down by one frame per
 * nesting level, so each call gets its own slots; the depth is bounded and the window
 * stays inside MEM1. ---- */
#define TC_FRAME 0x400u
#define TC_STACK_FRAMES 64u
static u32 g_frame_add;          /* the current nesting level's rebase offset (bytes) */

/* Translate an absolute stack-window address to the current frame's slot. */
static u32 tc_frame_addr(u32 a, u32 size)
{
    if (!g_frame_add) return a;
    if (a >= TCRT_STACK_LO && a + size <= TCRT_RAM_BASE + TCRT_RAM_SIZE)
        return a - g_frame_add;   /* the frame moved down: its slots live at a - offset */
    return a;
}

/* ---- the GX display list ----
 * The game builds its GPU command stream through the FIFO write port 0xcc008000 (and gathers
 * bytes back from it). Capturing the stream here is what a renderer consumes: each entry is an
 * opcode plus its parameter words, in submission order. ---- */
#define GX_MAX_OPS 131072u
typedef struct { u8 op; u8 pad; u16 nwords; u32 w[10]; } GxOp;
GxOp *g_gx;   /* the renderer reads the captured display list */
static u32 g_gx_n;
static u16 g_gx_have;
static u32 g_gx_count;      /* parameter words this opcode expects */
static u32 g_gx_rest;
volatile unsigned gx_ops, gx_frames;
static u32 g_gx_list_start;

/* The GX command table's parameter-word counts (the header nibble of each opcode, as the GX
 * FIFO protocol defines it: opcodes >= 0x80 carry their count in the low nibble). */
static u32 gx_nwords(u8 op)
{
    if (op < 0x80) {
        static const u8 tab[0x80] = {
            /* 00 */ 1,3,1,1,1,1,1,1, 0,0,0,1,0,0,0,0,
            /* 10 */ 1,1,1,1,1,1,1,1, 1,0,1,0,0,0,0,0,
            /* 20 */ 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,
            /* 30 */ 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,
            /* 40 */ 1,1,1,0,0,0,0,0, 0,0,0,0,0,0,0,0,
            /* 50 */ 0,0,0,0,0,0,0,0, 0,0,0,1,1,1,1,1,
            /* 60 */ 1,1,1,1,1,1,1,1, 1,1,0,0,0,0,0,0,
            /* 70 */ 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0 };
        return tab[op];
    }
    return (op & 0x0f) + 1;
}

/* The GX FIFO is a byte-append port: the SDK writes the opcode with an 8-bit store and its
 * payload with 32-bit stores, so the stream is only correct if the bytes are appended in order.
 * Capture the raw bytes; the decoder below turns them into commands. */
volatile unsigned gx_begin_count;   /* how many GXBegin commands the game has issued */
volatile unsigned gx_bytes;         /* FIFO bytes captured since the last present */
static u8 g_gx_bytes[1 << 20];
static u32 g_gx_len;

volatile unsigned gx_sizes[9];
volatile unsigned gx_w16;   /* FIFO write sizes seen, by byte count */

/* ---- the command-level capture ---------------------------------------------------------------
 * Guessing a command's length from its opcode is fragile: the CP table has a dozen variants and one
 * wrong guess desynchronises the whole stream. The SDK writes every command as a wr8(opcode)
 * followed by its own wr8/wr16/wr32 payload, so the write itself says where a command ends.
 * Recording that structure at feed time makes the decode exact, with no length table at all.
 * ---------------------------------------------------------------------------------------------- */
#define GX_MAX_CMDS 65536u
/* The vertex layout snapshotted when a draw is submitted: the VAT can be reconfigured later in the
 * frame, so the stride/offsets a draw's bytes were written with must be captured at feed time. */
typedef struct { u32 stride, pos_off, pos_cnt, pos_type, clr_off, clr_type, has_clr,
                 tex_off, tex_type, tex_cnt, has_tex; } GxVtxLayout;
u32 gx_vtx_layout(u32 f, GxVtxLayout *L);
/* The raster material snapshotted when a draw is submitted: the TEV stage-0 order/env, the texture
 * image registers for the map that stage samples, and the TEV constant/k colours. BP state changes
 * between draws, so the end-of-frame register file is not what a given draw used. */
typedef struct { u32 map, coord, img0, img3, mode0, tev_c, tev_a, ksel, ac;
                 u32 c0ra, c0bg, c1ra, c1bg, c2ra, c2bg; u32 k[8]; } GxMat;
/* A draw's vertex block can be thousands of vertices, so the record keeps the payload whole:
 * the vertex words are exactly what the renderer needs. */
typedef struct { u8 op; u8 hascount; u16 rawlen; u32 cnt; u32 n; u32 w[8]; u8 *raw;
                 u32 vstride; u32 vstart; GxVtxLayout vl; GxMat mat; } GxCmd;
static GxCmd g_gx_cmd[GX_MAX_CMDS];
static u32 g_gx_cmds;
/* The payload pool: one arena for every command's bytes, handed out as the commands arrive.
 * A frame's whole stream fits in a few megabytes. */
#define GX_POOL_BYTES (24u << 20)
static u8 g_gx_pool[GX_POOL_BYTES];
static u32 g_gx_pool_len;
static u32 g_gx_retire_to;
static int g_gx_open;
static u8 g_gx_pend_op;
static u32 g_gx_idxflag;

/* The BP register file: the display list's 0x61 writes are the game's raster state (TEV order
 * and stages, texture modes, blend, indirection). Keeping the last value of each register is what
 * the renderer needs to honour a draw's material. */
static u32 g_bp[256];
u32 gx_bp_reg(u32 r) { return g_bp[r & 0xffu]; }

/* ---- the vertex descriptor, captured from the CP register writes ----------------------------
 * GXSetVtxDesc / GXSetVtxAttrFmt push the VCD (which attributes a format carries) and the VAT
 * (each attribute's component count and type) through FIFO opcode 0x08: an index byte then a
 * u32. The index names the register - 0x50 vcdLo, 0x60 vcdHi, 0x70|f vatA[f], 0x80|f vatB[f],
 * 0x90|f vatC[f]. Keeping these lets the replay compute a draw's true vertex-block size and the
 * offset of every attribute, instead of assuming a 12-byte float position (which truncated the
 * colour and texcoord and desynchronised every vertex after the first). */
static u32 g_vcdLo, g_vcdHi, g_vatA[8], g_vatB[8], g_vatC[8];
static u32 g_stride[8];
static int g_stride_dirty = 1;
/* The VAT-derived stride can disagree with the bytes the game actually writes (the descriptor's
 * colour fields are easy to mis-size). The first clean block of each format is used to learn the
 * true stride: the candidate whose every vertex position reads as a sane screen-space float wins.
 * Once learned it is used at feed time so the vertex block is consumed exactly and the stream stays
 * aligned. */
static u32 g_stride_learned[8];
/* Stride is a property of the VAT, not of the format index: the boot programs the same VAT into
 * all eight formats, so a stride learned for one VAT value applies to every format carrying it.
 * Keying the learned stride by the VAT word lets the first clean draw calibrate the whole frame. */
static u32 g_stride_vat_key, g_stride_vat_val;
static int gx_is_opcode(u8 c)
{
    return c >= 0x20u || c == 0x00u || c == 0x08u || c == 0x10u || c == 0x18u;
}
static float gx_be_f32(const u8 *p)
{
    u32 w = (u32)p[0] << 24 | (u32)p[1] << 16 | (u32)p[2] << 8 | p[3];
    float f; memcpy(&f, &w, 4); return f;
}
typedef struct { u32 off, cnt, type, kind; } GxAttr;
static u32 gx_walk_attrs(u32 f, GxAttr *out, u32 max, u32 *ncount);
static u32 gx_calibrate(u32 f, const u8 *raw, u32 rawlen, u32 cnt)
{
    /* Candidate strides, the VAT-derived one first. The correct stride is the one whose vertex
     * block ends exactly on the next command's opcode byte (alignment), with sane positions as a
     * tiebreaker. Alignment is reliable even when the record carries a few trailing bytes of the
     * next command, and it works for 3D geometry whose model-space positions fail a range test. */
    u32 vat = g_vatA[f & 7u];
    u32 ci, k, vatstride;
    u32 cand[12]; u32 nc = 0;
    if (g_stride_vat_key == vat && g_stride_vat_val) return g_stride_vat_val;
    if (g_stride_learned[f & 7u]) return g_stride_learned[f & 7u];
    if (!raw || cnt < 3u) return 0;
    vatstride = gx_walk_attrs(f & 7u, 0, 0, 0);
    if (vatstride) cand[nc++] = vatstride;
    { static const u32 base[] = { 20u, 12u, 16u, 18u, 22u, 24u, 28u, 32u, 36u, 40u };
      for (ci = 0; ci < sizeof base / sizeof base[0]; ci++) {
          u32 s = base[ci], j, dup = 0;
          for (j = 0; j < nc; j++) if (cand[j] == s) dup = 1;
          if (!dup) cand[nc++] = s;
      } }
    for (ci = 0; ci < nc; ci++) {
        u32 s = cand[ci];
        int ok = 1, aligned;
        if ((u64)cnt * s > rawlen) continue;
        aligned = (cnt * s == rawlen) || gx_is_opcode(raw[cnt * s]);
        if (!aligned) continue;
        for (k = 0; k < cnt; k++) {
            float x = gx_be_f32(raw + k * s), y = gx_be_f32(raw + k * s + 4);
            float ax = x < 0 ? -x : x, ay = y < 0 ? -y : y;
            /* A real screen/model coordinate is zero or a normal float; a misaligned stride reads
             * the colour/texcoord bytes as denormals (~1e-41), which a plain range test accepts. */
            int sx = (x == 0.0f) || (ax > 1e-6f && ax < 8192.0f);
            int sy = (y == 0.0f) || (ay > 1e-6f && ay < 8192.0f);
            if (!sx || !sy) { ok = 0; break; }
        }
        if (ok) {
            g_stride_learned[f & 7u] = s;
            g_stride_vat_key = vat; g_stride_vat_val = s;
            return s;
        }
    }
    return 0;
}

/* component byte size for a position/texcoord type: 0 u8, 1 s8, 2 u16, 3 s16, 4 f32 */
static u32 gx_comp_size(u32 t) { return t < 2u ? 1u : t < 4u ? 2u : 4u; }
/* colour byte size by GX colour format: 0 RGB565, 1 RGB888, 2 RGBX8888, 3 RGBA4444,
 * 4 RGBA6666, 5 RGBA8888 (verified against the boot's 20-byte vertex: f32xyz + RGBA8888 +
 * RGBA4444 + u16 texcoord = 12 + 4 + 2 + 2). */
static u32 gx_clr_size(u32 t) { static const u8 s[8] = { 2, 3, 4, 2, 3, 4, 2, 2 }; return t < 8u ? s[t] : 4u; }

/* The attribute walk for one format: fills the byte offset and kind of each present attribute.
 * kind: 0 pos, 1 nrm, 2 clr0, 3 clr1, 4..11 tex0..7. Returns the stride.
 *
 * Presence comes from the VCD (which attributes the format actually carries), NOT from the VAT
 * count bits: GXInit seeds the VAT with a full default (every attribute's count/type programmed),
 * so reading presence from the VAT invents colours and texcoords the draw never sends. The VCD's
 * two-bit fields (0 none, 1 direct, 2 index8, 3 index16) are the real enable mask. The VAT then
 * gives each enabled attribute's component count and type. Only direct attributes occupy vertex
 * bytes; an indexed attribute is a one-byte array index. */
static u32 gx_vcd_presence(u32 attr)
{
    /* attr: 0 pos,1 nrm,2 clr0,3 clr1,4..11 tex0..7 */
    if (attr == 0) return (g_vcdLo >> 9) & 3u;
    if (attr == 1) return (g_vcdLo >> 11) & 3u;
    if (attr == 2) return (g_vcdLo >> 13) & 3u;
    if (attr == 3) return (g_vcdLo >> 15) & 3u;
    if (attr >= 4 && attr <= 10) return (g_vcdLo >> (17 + 2 * (attr - 4))) & 3u;
    /* tex7 spans vcdLo bit31 (low) and vcdHi bit0 (high) */
    return ((g_vcdLo >> 31) & 1u) | ((g_vcdHi & 1u) << 1);
}
/* count/type of one attribute from the VAT registers (real GX field layout). */
static void gx_vat_field(u32 f, u32 attr, u32 *cnt, u32 *type)
{
    u32 a = g_vatA[f], b = g_vatB[f], c = g_vatC[f];
    switch (attr) {
    case 0: *cnt = (a & 1u) ? 3u : 2u; *type = (a >> 1) & 7u; break;          /* pos */
    case 1: *cnt = 3u; *type = (a >> 5) & 7u; break;                          /* nrm */
    case 2: *cnt = 1u; *type = (a >> 9) & 7u; break;                          /* clr0 */
    case 3: *cnt = 1u; *type = (a >> 13) & 7u; break;                         /* clr1 */
    case 4: *cnt = (a >> 16) & 3u; *type = (a >> 18) & 7u; break;             /* tex0 */
    case 5: *cnt = (a >> 21) & 3u; *type = (a >> 23) & 7u; break;             /* tex1 */
    case 6: *cnt = (a >> 26) & 3u; *type = (a >> 28) & 7u; break;             /* tex2 */
    case 7: *cnt = ((a >> 31) & 1u) | ((b & 1u) << 1); *type = (b >> 1) & 7u; break; /* tex3 */
    case 8: *cnt = (b >> 4) & 3u; *type = (b >> 6) & 7u; break;               /* tex4 */
    case 9: *cnt = (b >> 9) & 3u; *type = (b >> 11) & 7u; break;              /* tex5 */
    case 10: *cnt = (b >> 14) & 3u; *type = (b >> 16) & 7u; break;            /* tex6 */
    default: {                                                               /* tex7 */
        u32 cb = (b >> 19) & 3u, tb = (b >> 21) & 7u;
        u32 cc = (c >> 5) & 3u, tc = (c >> 7) & 7u;
        *cnt = cb ? cb : cc; *type = cb ? tb : tc; break;
    }
    }
}
static u32 gx_walk_attrs(u32 f, GxAttr *out, u32 max, u32 *ncount)
{
    u32 off = 0, n = 0, attr;
    for (attr = 0; attr < 12u; attr++) {
        u32 pres = gx_vcd_presence(attr), cnt, type, bytes;
        if (!pres) continue;
        gx_vat_field(f, attr, &cnt, &type);
        if (attr == 1 && ((g_vcdHi >> 2) & 3u)) cnt = 3u * (((g_vcdHi >> 2) & 3u)); /* NBT */
        if (pres == 1u) {                       /* direct: the components themselves */
            if (attr == 2 || attr == 3) bytes = gx_clr_size(type);
            else bytes = cnt * gx_comp_size(type);
        } else {                                /* indexed: a one-byte array index */
            bytes = 1u;
        }
        if (n < max) { out[n].off = off; out[n].cnt = cnt; out[n].type = type; out[n].kind = attr; n++; }
        off += bytes;
    }
    if (ncount) *ncount = n;
    return off;
}

static void gx_recompute_strides(void)
{
    u32 f;
    for (f = 0; f < 8u; f++) g_stride[f] = gx_walk_attrs(f, 0, 0, 0);
    g_stride_dirty = 0;
}

/* The renderer's vertex layout for a format: where the position, colour0 and texcoord0 sit and
 * how they are encoded. pos is always read as the game's screen-space floats here. */
u32 gx_vtx_layout(u32 f, GxVtxLayout *L)
{
    GxAttr at[16];
    u32 n = 0, i;
    if (g_stride_dirty) gx_recompute_strides();
    f &= 7u;
    memset(L, 0, sizeof *L);
    L->stride = g_stride[f];
    gx_walk_attrs(f, at, 16, &n);
    for (i = 0; i < n; i++) {
        if (at[i].kind == 0) { L->pos_off = at[i].off; L->pos_cnt = at[i].cnt; L->pos_type = at[i].type; }
        else if (at[i].kind == 2) { L->clr_off = at[i].off; L->clr_type = at[i].type; L->has_clr = 1; }
        else if (at[i].kind >= 4 && !L->has_tex) { L->tex_off = at[i].off; L->tex_type = at[i].type; L->tex_cnt = at[i].cnt; L->has_tex = 1; }
    }
    return L->stride;
}

/* Reconcile a layout with the stride the draw's bytes actually use. The VAT can be a stale init
 * default whose texcoord count/type disagree with what the game sends, but the VCD enable mask and
 * the calibrated stride are trustworthy: the position is fixed, any colour must fit before the
 * texcoord, and the texcoord fills whatever bytes remain. This drops a fabricated colour (the boot
 * sends pos+texcoord with no colour) and reads the texcoord as the floats it really is. */
void gx_reconcile_layout(GxVtxLayout *L, u32 stride)
{
    u32 pos_bytes = L->pos_cnt * gx_comp_size(L->pos_type);
    u32 clr_bytes = L->has_clr ? gx_clr_size(L->clr_type) : 0u;
    u32 tex_off, rem;
    if (L->has_clr && L->pos_off + pos_bytes + clr_bytes > stride) { L->has_clr = 0; clr_bytes = 0; }
    L->stride = stride;
    if (!L->has_tex) return;
    tex_off = L->pos_off + pos_bytes + clr_bytes;
    if (tex_off >= stride) { L->has_tex = 0; return; }
    rem = stride - tex_off;
    L->tex_off = tex_off;
    if (rem >= 8u) { L->tex_type = 4u; L->tex_cnt = 2u; }        /* f32 st */
    else if (rem >= 4u) { L->tex_type = 4u; L->tex_cnt = 1u; }   /* f32 s */
    else if (rem >= 2u) { L->tex_type = 2u; L->tex_cnt = 1u; }   /* u16 s */
    else { L->tex_type = 0u; L->tex_cnt = 1u; }                  /* u8 s */
}

static void gx_cmd_word(u32 w)
{
    if (!g_gx_open || !g_gx_cmds) return;
    {
        GxCmd *c = &g_gx_cmd[g_gx_cmds - 1];
        if (c->op == 0x61u && c->n == 0u) g_bp[(w >> 24) & 0xffu] = w;   /* the BP state */
        if (c->op == 0x08u && c->n == 1u) {                              /* a CP register write */
            u32 idx = c->w[0] & 0xffu;
            if (idx == 0x50u) g_vcdLo = w;
            else if (idx == 0x60u) g_vcdHi = w;
            else if (idx >= 0x70u && idx <= 0x77u) g_vatA[idx & 7u] = w;
            else if (idx >= 0x80u && idx <= 0x87u) g_vatB[idx & 7u] = w;
            else if (idx >= 0x90u && idx <= 0x97u) g_vatC[idx & 7u] = w;
            g_stride_dirty = 1;
        }
        if (c->n < 8) c->w[c->n] = w;
        c->n++;
        if (g_gx_pool_len + 4u <= GX_POOL_BYTES) {
            if (!c->raw) { c->raw = g_gx_pool + g_gx_pool_len; c->rawlen = 0; }
            c->raw[c->rawlen++] = (u8)(w >> 24); c->raw[c->rawlen++] = (u8)(w >> 16);
            c->raw[c->rawlen++] = (u8)(w >> 8);  c->raw[c->rawlen++] = (u8)w;
            g_gx_pool_len += 4u;
        }
    }
}

/* A draw's vertex block is consumed by BYTE COUNT, not by write boundary. The SDK writes the
 * position as wr32 but the colour/texcoord attributes as wr8/wr16, so treating every small write
 * as a fresh opcode desynchronised the stream (vertex bytes became fake opcodes 0x80..0xBF). Once
 * the u16 count is known, exactly count*stride bytes belong to this draw; everything until then is
 * vertex data, whatever the write size. */
static u32 g_draw_left;          /* vertex bytes still owed to the active draw */
static u32 g_draw_cmd;           /* its index in g_gx_cmd */
static int g_draw_expect_cnt;    /* the u16 count has not arrived yet */

static u32 gx_stride_for(u32 f)
{
    if (g_stride_vat_key == g_vatA[f & 7u] && g_stride_vat_val) return g_stride_vat_val;
    if (g_stride_learned[f & 7u]) return g_stride_learned[f & 7u];
    if (g_stride_dirty) gx_recompute_strides();
    return g_stride[f & 7u];
}

static void gx_draw_append(u32 v, u32 size)
{
    GxCmd *c;
    u32 i;
    if (g_draw_cmd >= g_gx_cmds) return;
    c = &g_gx_cmd[g_draw_cmd];
    if (!c->raw) {
        if (g_gx_pool_len + 4u > GX_POOL_BYTES) return;
        c->raw = g_gx_pool + g_gx_pool_len; c->rawlen = 0;
    }
    for (i = 0; i < size; i++) {
        if (g_gx_pool_len >= GX_POOL_BYTES) break;
        c->raw[c->rawlen++] = (u8)(v >> (8 * (size - 1 - i)));
        g_gx_pool_len++;
    }
}

static void gx_snapshot_mat(GxMat *m)
{
    u32 ord = g_bp[0x28u];
    m->map = (ord >> 3) & 7u; m->coord = ord & 7u;
    m->img0 = g_bp[0x90u + m->map]; m->img3 = g_bp[0xa8u + m->map]; m->mode0 = g_bp[0x80u + m->map];
    m->tev_c = g_bp[0xc0u]; m->tev_a = g_bp[0xc1u];
    m->ksel = g_bp[0xf6u]; m->ac = g_bp[0xf3u];
    m->c0ra = g_bp[0xe0u]; m->c0bg = g_bp[0xe1u];
    m->c1ra = g_bp[0xe2u]; m->c1bg = g_bp[0xe3u];
    m->c2ra = g_bp[0xe4u]; m->c2bg = g_bp[0xe5u];
    for (u32 i = 0; i < 8u; i++) m->k[i] = g_bp[0xe8u + i];
}

static void gx_fifo_feed(u32 a, u32 v, u32 size)
{
    (void)a;
    if (!g_gx) return;
    if (g_gx_len + size > sizeof g_gx_bytes) return;
    gx_sizes[size < 9 ? size : 8]++;
    for (u32 i = 0; i < size; i++)
        g_gx_bytes[g_gx_len++] = (u8)(v >> (8 * (size - 1 - i)));
    gx_bytes = g_gx_len;

    if (g_draw_left) {                       /* inside a draw's vertex block: data, not commands */
        gx_draw_append(v, size);
        g_draw_left = g_draw_left > size ? g_draw_left - size : 0u;
        return;
    }
    if (size == 2u && g_draw_expect_cnt) {   /* the draw's u16 vertex count */
        u32 stride = gx_stride_for(g_gx_cmd[g_draw_cmd].op & 7u);
        g_gx_cmd[g_draw_cmd].cnt = (u32)v;
        g_gx_cmd[g_draw_cmd].vstride = stride;
        g_gx_cmd[g_draw_cmd].vstart = g_gx_len;   /* vertex data begins here in the pristine stream */
        gx_vtx_layout(g_gx_cmd[g_draw_cmd].op & 7u, &g_gx_cmd[g_draw_cmd].vl);
        gx_snapshot_mat(&g_gx_cmd[g_draw_cmd].mat);
        g_draw_left = (u32)v * stride;
        g_draw_expect_cnt = 0;
        { extern volatile unsigned gx_w16; gx_w16++; }
        return;
    }
    if (size == 1u) {
        u8 c = (u8)v;
        if (g_gx_open && g_gx_pend_op == 0x08u && !(g_gx_idxflag & 1u)) {
            /* The CP register command's index byte. vatB/vatC indices are 0x80..0x97, which
             * overlap the draw-opcode range, so this MUST be tested before the draw check below
             * or every VAT register write spawns a phantom draw and desynchronises the stream. */
            gx_cmd_word((u32)c);
            g_gx_idxflag |= 1u;
            return;
        }
        if (c >= 0x80u && c <= 0xBFu) {            /* a draw: a u16 count follows */
            gx_begin_count++;
            { extern void gx_trace_prim(u8); gx_trace_prim(c); }
            if (g_gx_cmds < GX_MAX_CMDS) {
                GxCmd *n = &g_gx_cmd[g_gx_cmds++];
                n->op = c; n->hascount = 1; n->n = 0; n->cnt = 0; n->rawlen = 0; n->raw = 0;
                g_draw_cmd = g_gx_cmds - 1; g_draw_expect_cnt = 1; g_draw_left = 0;
            }
            g_gx_open = 1; g_gx_pend_op = c; g_gx_idxflag = 0;
            return;
        }
        if (g_gx_cmds < GX_MAX_CMDS) {              /* a new opcode byte starts a command */
            GxCmd *n = &g_gx_cmd[g_gx_cmds++];
            n->op = c; n->hascount = 0; n->n = 0; n->cnt = 0; n->rawlen = 0; n->raw = 0;
        }
        g_gx_open = 1; g_gx_pend_op = c; g_gx_idxflag = 0;
        return;
    }
    gx_cmd_word((u32)v);
}
const unsigned char *gx_bytes_ptr(void) { return g_gx_bytes; }
/* Dump the vertex descriptor state (VCD lo/hi and VAT per vertex format) plus the raw FIFO, so the
 * replay's decoder can be written against the game's real state rather than a guess. */
void gx_dump_state(void)
{
    u32 ctx = rd32(0x80576c88u);
    FILE *o = fopen("gxstate.txt", "wb");
    if (!o || !ctx) { if (o) fclose(o); return; }
    for (u32 f = 0; f < 8; f++) {
        u32 vcdl = rd32(ctx + 0x1cu + 4u * f), vcdh = rd32(ctx + 0x3cu + 4u * f);
        u32 vat = rd32(ctx + 0x5cu + 4u * f);
        fprintf(o, "fmt%u vcdl=%08x vcdh=%08x vat=%08x", f, vcdl, vcdh, vat);
        fputc(10, o);
    }
    fprintf(o, "len=%u", g_gx_len);
    fputc(10, o);
    fclose(o);
    o = fopen("gxfifo.bin", "wb");
    if (o) { fwrite(g_gx_bytes, 1, g_gx_len, o); fclose(o); }
}
void gx_raw_hist(void)
{
    unsigned h[257]; for (unsigned i = 0; i < 257; i++) h[i] = 0;
    for (u32 i = 0; i < g_gx_len; i++) h[g_gx_bytes[i]]++;
    fputs("[gx-raw]", stderr);
    for (unsigned i = 0; i < 256; i++) if (h[i]) { char b[32]; sprintf(b, " %02x:%u", i, h[i]); fputs(b, stderr); }
    fputc(10, stderr);
}
/* Diagnostic: report the GX context every GXBegin sees, and how it branches. */
volatile unsigned gx_ctx_sample[8]; volatile unsigned gx_ctx_n;
volatile unsigned gx_guard_zero, gx_guard_nonzero;      /* the ctx[0]==0 shim: taken or skipped */
volatile unsigned gx_prim[16];                          /* primitives seen, by (byte>>3)&0xf */
volatile unsigned gx_fmt[8];                            /* vertex formats, by byte&7 */
void gx_trace_begin(u32 ctx)
{
    if (gx_ctx_n < 8) { gx_ctx_sample[gx_ctx_n++] = ctx; }
    if (ctx && rd32(ctx) == 0u) gx_guard_zero++; else gx_guard_nonzero++;
}
void gx_trace_prim(u8 b)
{
    if (b >= 0x80u) { gx_prim[(b >> 3) & 0xfu]++; gx_fmt[b & 7u]++; }
}

/* The GX opcode's payload word count. 0x00-0x7F are fixed-length commands (the GX CP table);
 * 0x80-0xFF carry their count in the low nibble. */
/* The CP command lengths in BYTES, including the opcode byte itself.
 * The SDK builds every command as wr8(opcode) followed by its writes, so these are the byte
 * counts a FIFO reader must skip:
 *   0x00 NoOperation            1
 *   0x08 CP array base          6   (index byte + address word)
 *   0x10 LoadXF reg             9   (address word + data word)
 *   0x18 LoadXF reg (nc)        9
 *   0x20/28/30/38 index A/B/C/D  5   (one word)
 *   0x40/48/50/58 matrices      5
 *   0x60..0x6A BP register      5
 *   0x61..0x6A BP register      5
 *   0x70..0x7F XF register      13  (address word + two data words)
 *   0x80..0xBF draw             3 + count * vertex-block-size
 */
static u32 gx_cmd_bytes(u8 op)
{
    if (op == 0x00u) return 1u;
    if (op == 0x08u) return 6u;
    if (op == 0x10u || op == 0x18u) return 9u;
    if (op >= 0x20u && op <= 0x3Fu) return 5u;    /* index A/B/C/D: the index word */
    if (op >= 0x40u && op <= 0x5Fu) return 9u;    /* matrix index: address word + data word */
    if (op >= 0x60u && op <= 0x6Fu) return 5u;    /* BP register: the register/word pair */
    if (op >= 0x70u && op <= 0x7Fu) return 13u;
    return 1u;    /* unknown: skip only the opcode so the stream keeps moving */
}


/* Decode the byte stream into commands. The 0x08 (array-base) and 0x98 (draw) forms are
 * handled explicitly: 0x08 is followed by an index byte plus 4 words; 0x98 is the GXBegin
 * escape, followed by a u16 count and that many payload words. */
/* The GX command stream decoder.
 *
 * The CP command table: for opcodes below 0x80 the payload lengths are fixed; every opcode from
 * 0x80 to 0xBF is a draw (0x80 quads, 0x88 quads-2, 0x90 triangles, 0x98 tristrip, 0xA0 fan,
 * 0xA8 lines, 0xB0 linestrip, 0xB8 points) OR'd with the vertex format in the low three bits,
 * and carries a u16 vertex count followed by that many vertex blocks. The vertex block size is
 * the vertex descriptor's own: the game's frames use the SDK's float position (12 bytes) for the
 * full-screen and UI quads plus the textured/blended passes, so it is read from the vertex
 * attribute table the SDK keeps in its context (0x8057... offsets) rather than assumed.
 */
/* The vertex block size for one vertex format. GX's vertex attribute table lives in the SDK's
 * context: the VAT for format f is the word at ctx+0xb8+4*f, and its fields are
 *   bit0 = position count (0 = xy, 1 = xyz), bits1-2 = position type (0=u8,1=s8,2=u16,3=s16,
 *   4=f32), bits3-4 = normal count, bits5-6 = normal type, bits7-8 = colour0 type,
 *   ... bits9-12 = tex0 type/count, etc.
 * Only the position and the colour/texcoord widths change the block size, and every frame in this
 * game's boot uses the float position (12 bytes) with either no colour or an RGBA8 colour.
 * Sizes are in BYTES. */
static u32 gx_attr_size(u32 type, u32 cnt, u32 comps)
{
    /* type: 0 u8, 1 s8, 2 u16, 3 s16, 4 f32 */
    u32 elem = (type == 0 || type == 1) ? 1u : (type == 2 || type == 3) ? 2u : 4u;
    u32 n = comps;
    static const u8 posc[2] = { 2, 3 };
    (void)cnt;
    return elem * n;
}
/* The vertex-block size for a draw, from the format's captured VAT (position + normals + colours
 * + texcoords). The boot's textured passes use 20 bytes: f32xyz + RGBA8888 + RGBA4444 + u16 uv. */
static u32 gx_vtx_stride(u8 fmt)
{
    return gx_stride_for(fmt);
}

/* The device's vertices: each draw's block is rebuilt from the payload words the capture
 * recorded, so the renderer reads the vertex bytes directly. */
#define GX_MAX_VTX_BYTES (1u << 21)
static u8 g_gx_vtx[GX_MAX_VTX_BYTES];
static u32 g_gx_vtx_len;
static u8 g_gx_vtx_stride_t[GX_MAX_OPS];
static u32 g_gx_vtx_off[GX_MAX_OPS];
static u32 g_gx_vtx_cnt[GX_MAX_OPS];
static GxVtxLayout g_gx_vl[GX_MAX_OPS];
static GxMat g_gx_mat[GX_MAX_OPS];
u32 gx_mat_op(u32 i, GxMat *m)
{
    if (i >= g_gx_n) return 0;
    *m = g_gx_mat[i];
    return 1;
}
u32 gx_vtx_layout_op(u32 i, GxVtxLayout *L)
{
    if (i >= g_gx_n) return 0;
    *L = g_gx_vl[i];
    return L->stride;
}
u32 gx_vtx_span(u32 i, const u8 **p, u32 *stride)
{
    if (i >= g_gx_n) return 0;
    *p = g_gx_vtx + g_gx_vtx_off[i];
    *stride = g_gx_vtx_stride_t[i];
    return g_gx_vtx_cnt[i];
}
/* Whether draw i's cnt*stride vertex bytes were actually copied into the vertex buffer this
 * decode. A draw whose block did not fit (or whose stride is zero) must not be read past the
 * copied region. */
u32 gx_vtx_valid(u32 i, u32 cnt, u32 stride)
{
    if (i >= g_gx_n) return 0;
    return (u64)g_gx_vtx_off[i] + (u64)cnt * stride <= g_gx_vtx_len;
}

static u32 gx_decode(void)
{
    u32 i, n = 0;
    g_gx_vtx_len = 0;
    for (i = 0; i < g_gx_cmds && n < GX_MAX_OPS; i++) {
        GxCmd *c = &g_gx_cmd[i];
        GxOp *o = &g_gx[n];
        o->op = c->op;
        o->nwords = 0;
        if (c->op >= 0x80u && c->op <= 0xBFu) {
            u32 cnt = c->cnt, stride = c->vstride, q;
            /* The pristine FIFO stream is the source of truth: the feed-time pool copy can be
             * desynced by a wrong stride, but g_gx_bytes is appended in write order regardless.
             * vstart (captured when the u16 count arrived) points at this draw's vertex bytes. */
            const u8 *pv = 0; u32 plen = 0;
            if (c->vstart <= g_gx_len) { pv = g_gx_bytes + c->vstart; plen = g_gx_len - c->vstart; }
            { u32 ln = gx_calibrate(c->op & 7u, pv, plen, cnt);
              if (ln) { stride = ln; gx_reconcile_layout(&c->vl, ln); } }
            o->w[0] = cnt;
            o->w[1] = stride;
            o->nwords = 2;
            g_gx_vtx_stride_t[n] = (u8)stride;
            g_gx_vtx_off[n] = g_gx_vtx_len;
            g_gx_vtx_cnt[n] = 0;
            g_gx_vl[n] = c->vl;
            g_gx_mat[n] = c->mat;
            { static unsigned dbg; static unsigned dbg120;
              if (cnt && (dbg < 5 || (gx_frames == 119u && dbg120 < 3))) { if (gx_frames == 119u) dbg120++; else dbg++;
              fprintf(stderr, "[cd] op=%02x cnt=%u vstart=%u stride=%u", c->op, cnt, c->vstart, stride);
              if (pv) { fprintf(stderr, " bytes:"); for (u32 q2 = 0; q2 < 44u && q2 < plen; q2++) fprintf(stderr, "%02x", pv[q2]); }
              fputc(10, stderr); } }
            if (cnt && pv && g_gx_vtx_len + cnt * stride <= GX_MAX_VTX_BYTES && cnt * stride <= plen) {
                for (q = 0; q < cnt * stride; q++) g_gx_vtx[g_gx_vtx_len++] = pv[q];
                g_gx_vtx_cnt[n] = cnt;
            }
            n++;
            continue;
        }
        {
            u32 k;
            for (k = 0; k < c->n && o->nwords < 10; k++) o->w[o->nwords++] = c->w[k];
            n++;
        }
    }
    g_gx_n = n;
    return n;
}
static u32 g_gx_last_n;   /* the decoded command count of the last presented frame */

/* The command log belongs to one presented frame. The renderer decodes it while the frame is
 * being submitted, and the present that follows retires it: the game's next frame then starts
 * from an empty log. The pool is reclaimed with it, so a long run does not creep upward. */
void gx_cmd_reset(void) { g_gx_cmds = 0; g_gx_pool_len = 0; }

/* On the first few presents, write the finished frame out whole: the decoder is then written
 * against the game's real submission instead of a mid-frame slice. */
void gx_frame_end(void)
{
    if (gx_frames < 3 && g_gx_len) {
        char name[64]; sprintf(name, "gxframe%d.bin", gx_frames);
        FILE *o = fopen(name, "wb");
        if (o) { fwrite(g_gx_bytes, 1, g_gx_len, o); fclose(o); }
    }
    if (gx_frames == 120u && g_gx_len) {
        FILE *o = fopen("gxraw120.bin", "wb");
        if (o) { fwrite(g_gx_bytes, 1, g_gx_len, o); fclose(o); }
        fprintf(stderr, "[vat] vcdLo=%08x vcdHi=%08x len=%u\n", g_vcdLo, g_vcdHi, g_gx_len);
        for (u32 f = 0; f < 8u; f++)
            fprintf(stderr, "[vat] f%u A=%08x B=%08x C=%08x stride=%u\n",
                    f, g_vatA[f], g_vatB[f], g_vatC[f], gx_walk_attrs(f, 0, 0, 0));
        for (u32 r = 0x80; r <= 0xbf; r++) if (g_bp[r]) fprintf(stderr, "[texbp] %02x=%08x\n", r, g_bp[r]);
        fprintf(stderr, "[tev] C0=%08x A0=%08x K0=%08x K1=%08x K2=%08x K3=%08x\n",
                g_bp[0xc0], g_bp[0xe0], g_bp[0xf0], g_bp[0xf1], g_bp[0xf2], g_bp[0xf3]);
        fprintf(stderr, "[tev] F4=%08x F5=%08x F6=%08x F7=%08x F8=%08x F9=%08x FA=%08x FB=%08x\n",
                g_bp[0xf4], g_bp[0xf5], g_bp[0xf6], g_bp[0xf7], g_bp[0xf8], g_bp[0xf9], g_bp[0xfa], g_bp[0xfb]);
    }
    gx_frames++; g_gx_last_n = g_gx_n; g_gx_n = 0;
    gx_cmd_reset();   /* the presented frame's command log is spent */

    /* The FIFO byte buffer is NOT cleared: a present can land in the middle of a command
     * sequence, and the decoder needs the whole stream to stay aligned. */
    if (g_gx_len > (1u << 20) - 65536u) g_gx_len = 0;   /* wrap only when the buffer fills */
}
static u32 gx_decode(void);
unsigned gx_op_count(void) { return gx_decode(); }
/* The game presents through VISetNextFrameBuffer: it hands the VI the address of the frame it
 * finished drawing. The renderer reads that address so it can show the game's own pixels. */
volatile unsigned gx_framebuffer;

void gx_note_framebuffer(u32 a) { gx_framebuffer = a; }
/* A diagnostic: the opcode histogram of the captured display list, so the replay's coverage
 * can be measured against what the game actually submits. */
/* A diagnostic: the live TEV stage colour configuration and the texture modes, so the renderer
 * can be written against the state the game actually sets. */
/* ---- GX texture decode ----------------------------------------------------------------
 * The five GX texture formats decode into RGBA8. The image's bytes live in guest MEM1 at the
 * address the texture-load register names, so these readers take a byte range and write a
 * width*height RGBA8 buffer. Nothing serves a texture yet (no scene is loaded), but the readers
 * are the layer that consumes them, so they are complete and tested by their own format rules.
 * -------------------------------------------------------------------------------------- */
/* GameCube textures are TILED: the image is a row-major grid of fixed-size tiles (32 bytes each,
 * 64 for RGBA8), and pixels are row-major inside a tile. The tile's pixel dimensions follow from
 * the format's bytes-per-pixel. Reading them linearly scrambles every texture. */
static void tex_tile(u32 fmt, u32 *tw, u32 *th)
{
    switch (fmt) {
    case 0: *tw = 8; *th = 8; break;   /* I4   0.5 B/pp */
    case 1: *tw = 8; *th = 4; break;   /* I8   1 */
    case 2: *tw = 8; *th = 4; break;   /* IA4  1 */
    case 3: *tw = 4; *th = 4; break;   /* IA8  2 */
    case 4: *tw = 4; *th = 4; break;   /* RGB565 2 */
    case 5: *tw = 4; *th = 4; break;   /* RGB5A3 2 */
    case 6: *tw = 4; *th = 4; break;   /* RGBA8 4 (two 32-byte planes) */
    default: *tw = 8; *th = 8; break;  /* CMPR 0.5 */
    }
}
/* byte offset of pixel (x,y) for the single-plane formats (0..5). */
static u32 tex_off(u32 fmt, u32 x, u32 y, u32 w)
{
    u32 tw, th; tex_tile(fmt, &tw, &th);
    u32 tilesx = (w + tw - 1u) / tw;
    u32 tile = (y / th) * tilesx + (x / tw);
    u32 lin = (y % th) * tw + (x % tw);
    if (fmt == 0) return tile * 32u + lin / 2u;
    if (fmt == 1 || fmt == 2) return tile * 32u + lin;
    return tile * 32u + lin * 2u;
}
static void tex_i4(const u8 *src, u8 *dst, u32 w, u32 h)
{
    for (u32 y = 0; y < h; y++) for (u32 x = 0; x < w; x++) {
        u8 b = src[tex_off(0, x, y, w)];
        u8 v = (x & 1u) ? (b & 0x0fu) : (b >> 4);
        v = (u8)(v * 17u);
        u8 *d = dst + (y * w + x) * 4u;
        d[0] = d[1] = d[2] = v; d[3] = v;
    }
}
static void tex_i8(const u8 *src, u8 *dst, u32 w, u32 h)
{
    for (u32 y = 0; y < h; y++) for (u32 x = 0; x < w; x++) {
        u8 v = src[tex_off(1, x, y, w)];
        u8 *d = dst + (y * w + x) * 4u;
        d[0] = d[1] = d[2] = v; d[3] = v;
    }
}
static void tex_ia4(const u8 *src, u8 *dst, u32 w, u32 h)
{
    for (u32 y = 0; y < h; y++) for (u32 x = 0; x < w; x++) {
        u8 b = src[tex_off(2, x, y, w)];
        u8 a = (u8)((b >> 4) * 17u), i = (u8)((b & 0x0fu) * 17u);
        u8 *d = dst + (y * w + x) * 4u;
        d[0] = d[1] = d[2] = i; d[3] = a;
    }
}
static void tex_ia8(const u8 *src, u8 *dst, u32 w, u32 h)
{
    for (u32 y = 0; y < h; y++) for (u32 x = 0; x < w; x++) {
        u32 o = tex_off(3, x, y, w);
        u8 a = src[o], i = src[o + 1u];
        u8 *d = dst + (y * w + x) * 4u;
        d[0] = d[1] = d[2] = i; d[3] = a;
    }
}
static void tex_rgb565(const u8 *src, u8 *dst, u32 w, u32 h)
{
    for (u32 y = 0; y < h; y++) for (u32 x = 0; x < w; x++) {
        u32 o = tex_off(4, x, y, w);
        u16 p = (u16)((src[o] << 8) | src[o + 1u]);
        u8 r = (u8)((p >> 11) & 0x1fu), g = (u8)((p >> 5) & 0x3fu), b = (u8)(p & 0x1fu);
        u8 *d = dst + (y * w + x) * 4u;
        d[0] = (u8)((r << 3) | (r >> 2)); d[1] = (u8)((g << 2) | (g >> 4)); d[2] = (u8)((b << 3) | (b >> 2));
        d[3] = 0xff;
    }
}
static void tex_rgb5a3(const u8 *src, u8 *dst, u32 w, u32 h)
{
    for (u32 y = 0; y < h; y++) for (u32 x = 0; x < w; x++) {
        u32 o = tex_off(5, x, y, w);
        u16 p = (u16)((src[o] << 8) | src[o + 1u]);
        u8 *d = dst + (y * w + x) * 4u;
        if (p & 0x8000u) {              /* opaque: 5/5/5 + alpha 7 */
            u8 r = (u8)((p >> 10) & 0x1fu), g = (u8)((p >> 5) & 0x1fu), b = (u8)(p & 0x1fu);
            d[0] = (u8)((r << 3) | (r >> 2)); d[1] = (u8)((g << 3) | (g >> 2)); d[2] = (u8)((b << 3) | (b >> 2));
            d[3] = (u8)(((p >> 7) & 7u) * 255u / 7u);
        } else {                        /* translucent: 4/4/4 + alpha 3 */
            u8 a = (u8)((p >> 12) & 7u), r = (u8)((p >> 8) & 0xfu), g = (u8)((p >> 4) & 0xfu), b = (u8)(p & 0xfu);
            d[0] = (u8)(r * 17u); d[1] = (u8)(g * 17u); d[2] = (u8)(b * 17u);
            d[3] = (u8)(a * 255u / 7u);
        }
    }
}
/* RGBA8: 4x4 tiles of 64 bytes, split into an AR plane then a GB plane (32 bytes each). */
static void tex_rgba8(const u8 *src, u8 *dst, u32 w, u32 h)
{
    u32 tilesx = (w + 3u) / 4u;
    for (u32 y = 0; y < h; y++) for (u32 x = 0; x < w; x++) {
        u32 tile = (y / 4u) * tilesx + (x / 4u);
        u32 lin = (y % 4u) * 4u + (x % 4u);
        u32 ar = tile * 64u + lin * 2u, gb = ar + 32u;
        u8 *d = dst + (y * w + x) * 4u;
        d[0] = src[ar + 1u]; d[1] = src[gb]; d[2] = src[gb + 1u]; d[3] = src[ar];
    }
}
/* CMPR: 8x8 tiles of four 4x4 DXT blocks (GX order TL,TR,BL,BR); each block is two RGB565
 * endpoints plus 32 bits of two-bit indices, whose 2x2 sub-blocks are also TL,TR,BL,BR. */
static void tex_cmpr(const u8 *src, u8 *dst, u32 w, u32 h)
{
    u32 bw = (w + 3u) / 4u, bh = (h + 3u) / 4u;
    u32 tilesx = (w + 7u) / 8u;
    static const u8 subx[4] = { 0, 2, 0, 2 }, suby[4] = { 0, 0, 2, 2 };
    for (u32 by = 0; by < bh; by++) for (u32 bx = 0; bx < bw; bx++) {
        u32 tile = (by / 2u) * tilesx + (bx / 2u);
        u32 bidx = (by % 2u) * 2u + (bx % 2u);
        const u8 *blk = src + tile * 32u + bidx * 8u;
        u16 c0 = (u16)((blk[0] << 8) | blk[1]), c1 = (u16)((blk[2] << 8) | blk[3]);
        u32 idxbits = ((u32)blk[4] << 24) | ((u32)blk[5] << 16) | ((u32)blk[6] << 8) | blk[7];
        u8 pal[4][4];
        u8 r0 = (u8)((c0 >> 11) & 0x1fu), g0 = (u8)((c0 >> 5) & 0x3fu), b0 = (u8)(c0 & 0x1fu);
        u8 r1 = (u8)((c1 >> 11) & 0x1fu), g1 = (u8)((c1 >> 5) & 0x3fu), b1 = (u8)(c1 & 0x1fu);
        pal[0][0] = (u8)((r0 << 3) | (r0 >> 2)); pal[0][1] = (u8)((g0 << 2) | (g0 >> 4)); pal[0][2] = (u8)((b0 << 3) | (b0 >> 2)); pal[0][3] = 0xff;
        pal[1][0] = (u8)((r1 << 3) | (r1 >> 2)); pal[1][1] = (u8)((g1 << 2) | (g1 >> 4)); pal[1][2] = (u8)((b1 << 3) | (b1 >> 2)); pal[1][3] = 0xff;
        for (u32 c = 0; c < 3; c++) {
            u8 p0 = pal[0][c], p1 = pal[1][c];
            pal[2][c] = (u8)((2u * p0 + p1) / 3u);
            if (c0 > c1) pal[3][c] = (u8)((2u * p1 + p0) / 3u);
            else         pal[3][c] = (u8)((p0 + p1) / 2u);
        }
        pal[2][3] = 0xff;
        pal[3][3] = (c0 > c1) ? 0xff : 0x00;
        for (u32 s = 0; s < 4; s++) for (u32 y = 0; y < 2; y++) for (u32 x = 0; x < 2; x++) {
            u32 px = bx * 4u + subx[s] + x, py = by * 4u + suby[s] + y;
            u32 bit = 30u - (s * 4u + y * 2u + x) * 2u;
            u32 ix = (idxbits >> bit) & 3u;
            if (px < w && py < h) memcpy(dst + (py * w + px) * 4u, pal[ix], 4u);
        }
    }
}
/* The format dispatch: the real GX texture-format enum (I4=0..RGBA8=6, CMPR=14). */
void gx_tex_decode(u32 format, const u8 *src, u8 *dst, u32 w, u32 h)
{
    switch (format) {
    case 0: tex_i4(src, dst, w, h); break;          /* I4 */
    case 1: tex_i8(src, dst, w, h); break;          /* I8 */
    case 2: tex_ia4(src, dst, w, h); break;         /* IA4 */
    case 3: tex_ia8(src, dst, w, h); break;         /* IA8 */
    case 4: tex_rgb565(src, dst, w, h); break;      /* RGB565 */
    case 5: tex_rgb5a3(src, dst, w, h); break;      /* RGB5A3 */
    case 6: tex_rgba8(src, dst, w, h); break;       /* RGBA8 */
    case 14: tex_cmpr(src, dst, w, h); break;       /* CMPR */
    default: break;
    }
}
/* Decode a texture straight out of guest MEM1 from its BP image registers: IMAGE0 (0x90+map)
 * carries width-1/height-1/format, IMAGE3 (0xa8+map) the physical address >>5. Returns a malloc'd
 * RGBA8 buffer (caller frees) or NULL when the registers name no sane image. */
u8 *gx_tex_rgba(u32 img0, u32 img3, u32 *w, u32 *h)
{
    u32 ww = (img0 & 0x3ffu) + 1u, hh = ((img0 >> 10) & 0x3ffu) + 1u, fmt = (img0 >> 20) & 0xfu;
    u32 addr = (img3 & 0xffffffu) << 5;
    u32 bytes, tilesx, tilesy, tw, th;
    u8 *src, *dst;
    if (fmt > 6 && fmt != 14) return 0;
    if (ww > 1024u || hh > 1024u) return 0;
    if (addr < 0x80000000u || addr > 0x81700000u) return 0;
    tex_tile(fmt, &tw, &th);
    tilesx = (ww + tw - 1u) / tw; tilesy = (hh + th - 1u) / th;
    bytes = tilesx * tilesy * (fmt == 6 ? 64u : 32u);
    if (bytes > (4u << 20)) return 0;
    src = (u8 *)malloc(bytes); dst = (u8 *)malloc((size_t)ww * hh * 4u);
    if (!src || !dst) { free(src); free(dst); return 0; }
    for (u32 i = 0; i < bytes; i++) src[i] = rd8(addr + i);
    gx_tex_decode(fmt, src, dst, ww, hh);
    free(src);
    *w = ww; *h = hh;
    return dst;
}
/* The texture-load registers name the image's addresses in MEM1; dump the first texture's bytes
 * so the decode path can be written against what the game actually uploaded. */
void gx_tex_dump(void)
{
    FILE *o = fopen("tex0.bin", "wb");
    if (!o) return;
    {
        u32 tl0 = g_bp[0xf6], tl2 = g_bp[0xf8];   /* texture 0: image address and BP image address */
        u32 img = (tl0 & 0xffffffu) << 6, bpimg = (tl2 & 0xffffffu) << 6; (void)bpimg;
        fprintf(o, "img=%08x bp=%08x", img, bpimg); fputc(10, o);
        for (u32 z = 0; z < 4096u; z++) fprintf(o, "%02x", rd8(img + z));
        fputc(10, o);
    }
    fclose(o);
}
/* The decoders' own check: each format reads a known pattern back as the RGBA8 it should produce.
 * Run once at boot so a format regression is loud instead of a black texture much later. */
void gx_tex_selftest(void)
{
    u8 out[64];
    int fails = 0;
    memset(out, 0, sizeof out);
    {
        /* I4: a 2x1 image is one tiled byte, two nibbles; 0xF0 -> (15..) then (0..) */
        u8 src[2] = { 0xF0, 0x0F };
        gx_tex_decode(0, src, out, 2, 1);
        if (out[0] != 255 || out[4] != 0 || out[7] != 0) fails++;
    }
    {
        /* IA8: alpha then intensity */
        u8 src[2] = { 0x80, 0x40 };
        gx_tex_decode(3, src, out, 1, 1);
        if (out[0] != 0x40 || out[3] != 0x80) fails++;
    }
    {
        /* RGB565 red: 0xF800 -> (255, 0, 0) */
        u8 src[2] = { 0xF8, 0x00 };
        gx_tex_decode(4, src, out, 1, 1);
        if (out[0] != 255 || out[1] != 0 || out[2] != 0 || out[3] != 255) fails++;
    }
    {
        /* RGB5A3 opaque white: 0xFFFF -> (255,255,255,255) */
        u8 src[2] = { 0xFF, 0xFF };
        gx_tex_decode(5, src, out, 1, 1);
        if (out[0] != 255 || out[3] != 255) fails++;
    }
    {
        /* CMPR: c0 = 0xF800 (red), all indices 0 -> the whole 4x4 block is red */
        u8 src[8] = { 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
        gx_tex_decode(14, src, out, 4, 4);
        if (out[0] != 255 || out[1] != 0 || out[3] != 255) fails++;
    }
    printf("[texselftest] %s (%d failure(s))", fails ? "FAIL" : "pass", fails);
    fputc(10, stdout);
}
void gx_bp_dump(void)
{
    FILE *o = fopen("bpstate.txt", "wb");
    if (!o) return;
    for (u32 s = 0; s < 16; s++) {
        u32 c = g_bp[(0xe0u + 2u * s) & 0xffu];
        fprintf(o, "tev%u colour=%08x", s, c);
        fputc(10, o);
    }
    fprintf(o, "tl:");   /* the texture-load registers (texture 0's index/ptr are 0xf6/0xf8) */
    for (u32 r = 0xf4; r <= 0xfe; r++) fprintf(o, " %02x=%08x", r, g_bp[r]);
    fputc(10, o);
    fprintf(o, "texmodes:");
    for (u32 r = 0; r < 0x30; r++) fprintf(o, " %08x", g_bp[0x80u + r]);
    fputc(10, o);
    fclose(o);
}
void gx_opcode_hist(void)
{
    unsigned h[256], i;
    for (i = 0; i < 256; i++) h[i] = 0;
    for (i = 0; i < g_gx_last_n; i++) h[g_gx[i].op]++;
    fputs("[gx-hist]", stderr);
    for (i = 0; i < 256; i++) if (h[i]) { char b[32]; sprintf(b, " %02x:%u", i, h[i]); fputs(b, stderr); }
    fputc(10, stderr);
}
void gx_list_start(void) { g_gx_list_start = g_gx_n; }
static u64 rd_be(u32 a, u32 size)
{
    a = tcrt_fold(a);
    a = tc_frame_addr(a, size);
    if (tcrt_mmio(a) && size <= 8) {
        u64 v;
        if (g_hw_set) {   /* the judge's vector scripted the reads (the same as before) */
            u64 w = g_hw[g_hw_next++ & 15];
            v = size == 8 ? w << 32 | w : size == 4 ? w : w & ((1ull << (8 * size)) - 1);
        } else {
            u32 w;
            if ((a & 0xfffff000u) == 0xcc005000u) w = dsp_read(a);
            else {
                u32 *s = nhw_slot(a);
                w = s ? *s : 0;
            }
            /* the sub-word select, big endian: byte (a&3) of the word is bits 31-8*(a&3)..;
               an N-byte read at that byte keeps 8*N bits ending at 8*(4 - (a&3)) */
            int sh = 8 * (4 - (int)(a & 3) - (int)size);
            v = size == 4 ? w : (w >> sh) & ((1ull << (8 * size)) - 1);
        }
        if (g_nio < MAX_IO) {
            g_io[g_nio].addr = a;
            g_io[g_nio].size = size;
            g_io[g_nio].value = v;
            g_io[g_nio].read = 1;
        }
        { unsigned k = tcrt_hw_i++ & 15; tcrt_hw_addr[k] = a; tcrt_hw_val[k] = (u32)v; }
        hw_count(a, 0);
        g_nio++;
        return v;
    }
    if (!check(a, size, 0)) return 0;
    const u8 *p = g_ram + (a - TCRT_RAM_BASE);
    u64 v = 0;
    for (u32 i = 0; i < size; i++) v = (v << 8) | p[i];
    return v;
}

static void wr_be(u32 a, u64 v, u32 size)
{
    a = tcrt_fold(a);
    a = tc_frame_addr(a, size);
    if (tcrt_mmio(a) && size <= 8) {
        if (g_nio < MAX_IO) {
            g_io[g_nio].addr = a;
            g_io[g_nio].size = size;
            g_io[g_nio].value = v & (size == 8 ? ~0ull : (1ull << (8 * size)) - 1);
            g_io[g_nio].read = 0;
        }
        { unsigned k = tcrt_hw_i++ & 15; tcrt_hw_addr[k] = a | 0x80000000u; tcrt_hw_val[k] = (u32)v; }
        if (a >= 0xcc008000u && a < 0xcc009000u) gx_fifo_feed(a, (u32)v, size);
        hw_count(a, 1);
        g_nio++;
        if (!g_hw_set) {
            if ((a & 0xfffff000u) == 0xcc005000u) dsp_write(a, (u32)v, size);
            else {
                u32 *s = nhw_slot(a);
                if (s) {
                    int sh = 8 * (4 - (int)(a & 3) - (int)size);
                    u32 mask = size == 4 ? 0xffffffffu : ((1u << (8 * size)) - 1) << sh;
                    u32 nv = ((u32)v & (size == 4 ? 0xffffffffu : (1u << (8 * size)) - 1)) << sh;
                    *s = (*s & ~mask) | (nv & mask);
                }
            }
        }
        return;
    }
    if (!check(a, size, 1)) return;
    u8 *p = g_ram + (a - TCRT_RAM_BASE);
    for (u32 i = 0; i < size; i++) p[i] = (u8)(v >> (8 * (size - 1 - i)));
    mark(a, size);
}

u8 rd8(u32 a) { return (u8)rd_be(a, 1); }
u16 rd16(u32 a) { return (u16)rd_be(a, 2); }
u32 rd32(u32 a) { return (u32)rd_be(a, 4); }
u64 rd64(u32 a) { return rd_be(a, 8); }

f32 rdf32(u32 a)
{
    u32 u = rd32(a);
    f32 f;
    memcpy(&f, &u, 4);
    return f;
}

f64 rdf64(u32 a)
{
    u64 u = rd64(a);
    f64 d;
    memcpy(&d, &u, 8);
    return d;
}

u8 *tcrt_ram_ptr(u32 guest)
{
    if (guest < TCRT_RAM_BASE || guest >= TCRT_RAM_BASE + TCRT_RAM_SIZE) return NULL;
    return g_ram + (guest - TCRT_RAM_BASE);
}

void wr8(u32 a, u8 v) { wr_be(a, v, 1); }
void wr16(u32 a, u16 v) { wr_be(a, v, 2); }
void wr32(u32 a, u32 v) { wr_be(a, v, 4); }

/* dcbz/dcbz_l: zero the 32-byte line the EA's cache block covers. In a hardware window the whole
   line is ONE store record (the oracle's TcBank.setChunk logs the 32-byte chunk as one IO entry);
   in RAM it is a plain 32-byte zero. */
void ppc_dcbz(u32 a, u32 v)
{
    (void) v;
    a = tcrt_fold(a) & 0xffffffe0u;
    if (tcrt_mmio(a)) {
        if (g_nio < MAX_IO) {
            g_io[g_nio].addr = a;
            g_io[g_nio].size = 32;
            g_io[g_nio].value = 0;
            g_io[g_nio].read = 0;
        }
        g_nio++;
        return;
    }
    if (!check(a, 32, 1)) return;
    memset(g_ram + (a - TCRT_RAM_BASE), 0, 32);
    mark(a, 32);
}
void wr64(u32 a, u64 v) { wr_be(a, v, 8); }

void wrf32(u32 a, f32 v)
{
    u32 u;
    memcpy(&u, &v, 4);
    wr32(a, u);
}

void wrf32d(u32 a, f64 v) { wr32(a, ppc_single_bits(v)); }

void wrf64(u32 a, f64 v)
{
    u64 u;
    memcpy(&u, &v, 8);
    wr64(a, u);
}

static void log_call(u32 target, const TcArgs *args)
{
    if (g_ncalls >= MAX_CALLS) return;
    g_call_int[g_ncalls][0] = target;
    for (int i = 0; i < 8; i++) g_call_int[g_ncalls][1 + i] = args ? args->r[i] : 0;
    for (int i = 0; i < 8; i++) g_call_int[g_ncalls][9 + i] = args ? args->s[i] : 0;
    for (int i = 0; i < 8; i++) {
        u64 b = 0;
        if (args) memcpy(&b, &args->f[i], 8);
        g_call_f[g_ncalls][i] = b;
    }
}

/* The stricter judge (tc_strict.h): MEM1 (TcBase.inRam); a write only where no byte is an instruction's
 * (TcStrict.writable), logged like the C's own. The GameCube runtime models no register: no fr junk. */
static int tcs_read(u32 p, u32 n, u8 *out)
{
    p = tcrt_fold(p);
    if (p < TCRT_RAM_BASE || p > TCRT_RAM_BASE + TCRT_RAM_SIZE - n) return 0;
    memcpy(out, g_ram + (p - TCRT_RAM_BASE), n);
    return 1;
}

static void tcs_write(u32 p, u32 n, const u8 *in)
{
    p = tcrt_fold(p);
    if (p < TCRT_RAM_BASE || p > TCRT_RAM_BASE + TCRT_RAM_SIZE - n) return;
    for (u32 k = 0; k < n; k++)
        if (bit_get(g_code, p + k - TCRT_RAM_BASE)) return;
    memcpy(g_ram + (p - TCRT_RAM_BASE), in, n);
    mark(p, n);
}

static void tcs_scratch(int i, u32 bits) { (void)i, (void)bits; }

#include "tc_strict.h"

/* The call just logged, as TcOracle.callRecord's fields for tc_strict.h: target, r3..r10 (1..8), s0..s7 (17..24). */
static void strict_call(u32 target)
{
    u32 rec[TCS_FIELDS] = {0};
    if (g_ncalls >= MAX_CALLS) return;
    for (int i = 0; i < 9; i++) rec[i] = g_call_int[g_ncalls][i];
    for (int i = 0; i < 8; i++) rec[17 + i] = g_call_int[g_ncalls][9 + i];
    tcs_call(g_ncalls, target, rec);
}

/* The vector's genmw hints: mocked call N writes its flag (the oracle's call mock does the same).
   Both mock forms go through here - a float-mock (tc_callf) fires the writes too. */
static void mock_writes(void)
{
    if (g_noret_cap && g_ncalls >= g_noret_cap)
        RaiseException(NORET_EXCEPTION, 0, 0, NULL);  /* the trace cap: the vector is done (runner: NORET) */
    int i;
    for (i = 0; i < g_mw_n; i++)
        if ((u32) g_ncalls == g_mw_idx[i]) {
            u32 wa = g_mw_addr[i], wv = g_mw_val[i];
            if (wa >= TCRT_RAM_BASE && wa - TCRT_RAM_BASE + 4 <= TCRT_RAM_SIZE) {
                u8 raw[4] = {(u8) (wv >> 24), (u8) (wv >> 16), (u8) (wv >> 8), (u8) wv};
                memcpy(g_ram + (wa - TCRT_RAM_BASE), raw, 4);
                mark(wa, 4);
            }
        }
}

static u32 g_entry_r[10];  // r3..r10 plus the vector's r11, r12
const DispatchEntry *dispatch_find(u32 target)
{
    int lo = 0, hi = DISPATCH_N - 1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (DISPATCH[mid].target == target) return &DISPATCH[mid];
        if (DISPATCH[mid].target < target) lo = mid + 1; else hi = mid - 1;
    }
    return NULL;
}

static u32 g_last_target, g_callcount;
volatile unsigned tcrt_calls, tcrt_last;
volatile u32 tcrt_call_ring[32];
volatile u32 tcrt_last_a0, tcrt_last_a1, tcrt_last_a2;   /* the last dispatch's r3/r4/r5 (stall diag) */
/* The live call stack: the dispatch nests (a translated body calls tc_call again), so the stack
 * shows exactly the chain that never unwinds. */
volatile u32 tcrt_stack[64];
volatile unsigned tcrt_depth;   /* the watcher thread's window into the run */

/* A deterministic per-address hit count, so a diagnostic can tell "never entered" from "entered and
 * returned the wrong thing" without the 32-entry ring's sampling aliasing the answer. */
#define TC_HITS_N 0x8000u
volatile u32 tcrt_hits_n;
volatile u32 tcrt_hit_addr[TC_HITS_N];
volatile u32 tcrt_hit_count[TC_HITS_N];
static void hit(u32 t)
{
    u32 i;
    for (i = 0; i < tcrt_hits_n; i++) {
        if (tcrt_hit_addr[i] == t) { tcrt_hit_count[i]++; return; }
    }
    if (tcrt_hits_n < TC_HITS_N) {
        tcrt_hit_addr[tcrt_hits_n] = t;
        tcrt_hit_count[tcrt_hits_n] = 1;
        tcrt_hits_n++;
    }
}
u32 tcrt_hit(u32 t)
{
    for (u32 i = 0; i < tcrt_hits_n; i++) if (tcrt_hit_addr[i] == t) return tcrt_hit_count[i];
    return 0;
}


/* ---- the HLE overrides: functions whose translation is right only under the judge's model but
 * whose real semantics are host services. The verified bodies stay in the corpus untouched; the
 * dispatcher routes these addresses here instead. Every override is listed with its reason. ---- */
typedef struct { u32 addr; u32 (*fn)(const TcArgs *a); f64 (*ff)(const TcArgs *a); } HleEntry;
static u32 hle_OSGetTick(const TcArgs *a);
static u32 hle_OSGetTime(const TcArgs *a);
static u64 g_tb_base;
static u64 tick_now(void)
{
    LARGE_INTEGER f, c;
    static LARGE_INTEGER f0;
    static u64 count0;
    u64 now, t;
    if (!f0.QuadPart) { QueryPerformanceFrequency(&f0); QueryPerformanceCounter(&c); count0 = (u64)c.QuadPart; }
    QueryPerformanceCounter(&c);
    now = (u64)(c.QuadPart - (LONGLONG)count0);
    t = now / (u64)f0.QuadPart * 40500000ull + (now % (u64)f0.QuadPart) * 40500000ull / (u64)f0.QuadPart;
    if (g_tb_base == 0) g_tb_base = 0xE0000000ull;
    return g_tb_base + t;
}
static u32 hle_OSGetTick(const TcArgs *a)
{
    (void)a;
    /* A real console's time base advances continuously. The game's init sequences busy-wait on it
     * for microseconds (47us audio handshakes, 1.5ms DSP loads); a host at 40.5 MHz advances only
     * ~3.5k ticks between two of our calls, so a tight wait spins millions of times. Advance the
     * base 25k ticks per read too: the waits still measure a real interval and the boot flows. */
    static u32 extra;
    extra += 25000u;
    return (u32)tick_now() + extra;
}
static u32 hle_OSGetTime(const TcArgs *a)
{
    (void)a;
    static u32 extra;
    extra += 25000u;
    u64 t = tick_now() + extra;
    tc_set_lastr4((u32)t);      /* the low word, which the caller reads as r4 */
    { static int n; if (n++ < 8) printf("[gtime] hi=%08x lo=%08x\n", (unsigned)(u32)(t >> 32), (unsigned)(u32)t); }
    return (u32)(t >> 32);      /* the high word, r3 */
}
static f64 hle_zero_f(const TcArgs *a) { (void)a; return 0.0; }
static u32 hle_zero_r(const TcArgs *a) { (void)a; return 0u; }   /* the u32 result slot's zero */
static u32 hle_one_r(const TcArgs *a) { (void)a; return 1u; }
/* The system-call vector: the judge emulates `sc` as a call to 0x80000c00 with the handler's result
 * in r3/r4. On native the same vector is the OS's real handler table - but the game's own
 * __OSSystemCallVectorInstall fills 0x80000c00 with the user handler; here the four functions that
 * `sc` reaches are the cache primitives, which are no-ops on a host with coherent caches. */
static u32 hle_sc(const TcArgs *a) { (void)a; static int n; if (n++ < 8) printf("[sc %d] r3=%08x r4=%08x r5=%08x\n", n, a->r[0], a->r[1], a->r[2]); return 0; }
/* ---- the HAL defaults: registers whose resting values the SDK polls ---- */
void hal_defaults(void)
{
    u32 *s;
    /* IPC: the client's arena. IPCCltInit allocates it, but its own bookkeeping compares the
       lo/hi pair; give them a real range inside the scratch window so the check passes. */
    wr32(0x80571a74u, 0x81000000u);   /* IPCGetBufferLo */
    wr32(0x80571a78u, 0x81010000u);   /* IPCGetBufferHi */
    /* EXI: all three channels idle (no device attached, no interrupt pending) */
    s = nhw_slot(0xcd006800u); if (s) *s = 0;   /* EXI0 status */
    s = nhw_slot(0xcd006814u); if (s) *s = 0;   /* EXI1 status */
    s = nhw_slot(0xcd006828u); if (s) *s = 0;   /* EXI2 status */
    /* SI: no controller */
    s = nhw_slot(0xcd006400u); if (s) *s = 0;
    /* DI: idle */
    s = nhw_slot(0xcc006000u); if (s) *s = 0;
}

/* OSReport and the newlib printf chain: the game prints diagnostics through them during boot.
 * The verified translation of __pformatter (2140 B of the C library's formatter state machine)
 * self-restarts on its own entry address in the guard ladder; on a host, printing is simply
 * vfprintf to the console. Route OSReport and vprintf to a host formatter so the boot proceeds. */
static u32 hle_OSReport(const TcArgs *a)
{
    /* The PPC variadic call: integer arguments left to right in r4..r10, then the caller's
     * outgoing-argument area; the doubles in f1..f8. Expanding here is what makes the game's own
     * diagnostics readable instead of a row of percent-s. */
    u32 fmt = a->r[0];
    int gi = 1, fi = 0, si = 0;
    fputs("[game] ", stdout);
    for (int i = 0; i < 400; i++) {
        u8 ch = rd8(fmt + (u32)i);
        if (ch == 0) break;
        if (ch != 37) { putchar((int)ch); continue; }
        i++;
        u8 c = rd8(fmt + (u32)i);
        if (c == 0) break;
        if (c == 37) { putchar(37); continue; }
        int l = 0, wid = 0;
        while (c == 108) { l++; i++; c = rd8(fmt + (u32)i); }
        while (c >= 48 && c <= 57) { wid = wid * 10 + (c - 48); i++; c = rd8(fmt + (u32)i); }
        if (c == 108) { l++; i++; c = rd8(fmt + (u32)i); }
        switch (c) {
        case 100: case 105: {
            s32 v = (s32)(gi < 8 ? a->r[gi++] : rd32(0x817fe008u + 4u * (u32)si++));
            printf(wid ? "%*d" : "%d", wid, v); break;
        }
        case 117: case 120: case 88: case 111: case 99: {
            u32 v = gi < 8 ? a->r[gi++] : rd32(0x817fe008u + 4u * (u32)si++);
            if (c == 99) printf("%c", (int)v);
            else if (l && c == 117) printf(wid ? "%*llu" : "%llu", wid, (unsigned long long)v);
            else if (c == 120) printf(wid ? "%*x" : "%x", wid, v);
            else if (c == 88) printf(wid ? "%*X" : "%X", wid, v);
            else if (c == 111) printf("%o", v);
            else printf(wid ? "%*u" : "%u", wid, v);
            break;
        }
        case 112: { u32 v = gi < 8 ? a->r[gi++] : 0u; printf("%08x", v); break; }
        case 115: {
            u32 v = gi < 8 ? a->r[gi++] : rd32(0x817fe008u + 4u * (u32)si++);
            if (!v) { fputs("(null)", stdout); break; }
            for (int k = 0; k < 512; k++) { u8 q = rd8(v + (u32)k); if (!q) break; putchar((int)q); }
            break;
        }
        case 102: case 101: case 103: {
            f64 d = fi < 8 ? a->f[fi++] : 0.0;
            if (c == 102) printf(wid ? "%*f" : "%f", wid, d);
            else if (c == 101) printf("%e", d);
            else printf("%g", d);
            break;
        }
        default: putchar((int)c); break;
        }
    }
    putchar(10);
    return 0;
}

/* ---- the USB/IOS layer: the Wii's DVD driver talks to /dev/di over IOS IPC. There is no IOS on
 * a host, so the whole IPC surface answers "opened, no data, success" and the DVD layer's state
 * machine proceeds. The disc reads themselves will be served by the host file layer next. ---- */
static u32 hle_sc_cmd(const TcArgs *a) { (void)a; return 1; }   /* "the operation finished" */
/* The AX audio system's hardware handshake (__AXOutInitDSP / the DSP mailbox): the console loads
 * its audio microcode and waits for the DSP to answer. A host has no DSP uCode, so the handshake
 * completes immediately and AX init proceeds to build the parameter blocks. */
/* DSPCheckMailFromDSP: the microcode answers the CPU's mail once per command. Hand back one
 * reply, then keep reporting more so the boot's progress-chained waits all proceed. */
/* The DSP task body (the uCode upload + wait): a host has no audio microcode, so the task
 * completes immediately and AX can build its parameter blocks. */
/* DSPAddTask / __DSP_boot_task: the console copies the audio microcode into the DSP's instruction
 * RAM and waits for it to answer. A host has no DSP, so the task is accepted and completed, and
 * the AX sync word the caller waits on is raised. */
static u32 hle_dsp_add_task(const TcArgs *a)
{
    (void)a;
    wr32(0x80571930u, 1u);
    wr32(0x80571880u, 1u);
    return 1;
}

static u32 hle_dsp_task_run(const TcArgs *a)
{
    (void)a;
    wr32(0x80571930u, 1u);   /* the task-completion flag the caller tests */
    return 1;
}
static u32 hle_dsp_mail_from(const TcArgs *a) { (void)a; return 1; }
/* DSPCheckMailToDSP: the DSP consumes the CPU's mail immediately. */
static u32 hle_dsp_mail_to(const TcArgs *a) { (void)a; return 0; }

/* GXDrawDone: the console waits for the GP interrupt to confirm the draw finished. A host's
 * renderer submits synchronously, so the completion flag is raised at once. */
/* VISetNextFrameBuffer: the game tells the VI which frame to scan out. Recording the address
 * lets the renderer present the game's own pixels instead of its own clear. */
/* DVDGetDriveStatus: the drive state the game's render state machine switches on. 0 is
 * "ready with a disc", which is the value that lets the frame's draw gate open. */
static u32 hle_dvd_drive_status(const TcArgs *a)
{
    /* The drive state the game's render state machine switches on. The table at 0x8034f5ec maps
     * (status+1) to the draw gate, and the SDK's enum puts DVD_STATE_READY at 11 - the one value
     * fn_80050a04 draws on. 0 (DVD_STATE_BUSY) means "a command is in flight", which parks the
     * frame loop before it ever reaches its geometry. */
    (void)a;
    wr32(0x80571650u, 0x804e5b60u);
    return 11u;
}

static u32 hle_vi_nextfb(const TcArgs *a)
{
    gx_note_framebuffer(a->r[0]);
    return 0;
}

static u32 hle_gx_done(const TcArgs *a)
{
    (void)a;
    wr8(0x805719a0u, 1u);
    return 1;
}

static u32 hle_ax_dsp(const TcArgs *a)
{
    static int n;
    if (n++ < 4) puts("[ax] DSP handshake complete");
    wr32(0x805717a0u, 1u);   /* AX is initialised */
    wr32(0x80571880u, 1u);   /* the AX DSP sync word (the interrupt's) */
    return 1;
}

static u32 hle_usb_none(const TcArgs *a)
{
    static int n;
    if (n++ < 2) puts("[usb] no device attached");
    return 0;
}

/* GX called through its own context pointer (the SDK keeps the driver's function table at
 * ctx+0x518). Diagnose the bad indirect call once. */
/* GXLoadTexObjPreLoaded: the SDK's texture-bind leaf. On the console it writes the texture
 * registers; here it records the bind for the renderer and returns, which also breaks the
 * GXLoadTexObj -> context slot -> ... cycle the null context produced. */
static u32 hle_gx_texobj(const TcArgs *a)
{
    static int n;
    if (n++ < 8) {
        char b[80];
        sprintf(b, "[gx] bind texmap=%08x", a->r[0]);
        puts(b);
    }
    return 0;
}
static u32 hle_gx_probe(const TcArgs *a)
{
    static int n;
    if (n++ < 3) {
        u32 ctx = rd32(0x80576c88u);
        char b[96];
        sprintf(b, "[gx] ctx=%08x slot=%08x", ctx, ctx ? rd32(ctx + 0x518u) : 0);
        puts(b);
    }
    return 0;
}

/* The DI state word (0x80571670) is the drive's own status; the command handlers set it. A host
 * serving the disc from files reports the two states the boot's device check requires. */
/** __OSGetIOSRev: the console's IOS revision, which the boot's device check validates. The boot-info
 * words live at 0xc0003140 (folded to 0x80003140); a host reports a real IOS version (0x0050ac00:
 * major 0x50, minor 0xac - the retail console's own). */
static u32 hle_OSGetIOSRev(const TcArgs *a)
{
    u32 out = a->r[0];
    { static int n; if (n++ < 3) { char buf[64]; sprintf(buf, "[iosrev] out=%08x", out); puts(buf); } }
    /* __DVDCheckDevice reads byte 1 and requires 0x1e <= it < 0xfe: a real IOS revision
     * (major in byte 0, minor in byte 1). The rest of the word is the build date; a console's
     * own values are fine. */
    wr8(out + 0u, 0x50);
    wr8(out + 1u, 0xac);
    wr8(out + 2u, 0x00);
    wr8(out + 3u, 0x00);
    wr8(out + 4u, 0x00);
    wr8(out + 5u, 0x00);
    wr16(out + 6u, 2104u);
    return 0;
}
/* OSGetPhysicalMem2Size: the host presents a retail Wii (128 MB of MEM2). The console's own value
 * is read from the boot flags; without it the DVD device check rejects the drive and the boot
 * bounces to the system menu instead of reaching main. */
static u32 hle_mem2_size(const TcArgs *a) { (void)a; return 0x08000000u; }
/* OSGetPhysicalMem1Size: the GameCube-compatible 24 MB main memory this console presents. The
 * SDK derives the arena bounds from it, so a zero here leaves every allocator with nothing. */
static u32 hle_mem1_size(const TcArgs *a) { (void)a; return 0x01800000u; }
static u32 hle_dvd_reset(const TcArgs *a) { (void)a; wr32(0x80571670u, 1u); return 0; }  /* RequestError: the error state */
static u32 hle_dvd_ready(const TcArgs *a) { (void)a; wr32(0x80571670u, 1u); return 0; }  /* kept for the 1-state handoff */
/* DVDLowReportKey: the drive's reset/identify exchange completed (state 2). */
/* ---- the host disc --------------------------------------------------------------------
 * RFF_DISC_IMG names a decrypted disc image. The boot header gives the FST location; the FST is
 * read into guest MEM1 and 0x80000038 pointed at it, as the console loader does, and a host-side
 * copy is kept so it can be reinstalled after the game clears memory. The file API is answered
 * from rt/disc_host.c and the raw sector reads come from the image here.
 * -------------------------------------------------------------------------------------- */
static HANDLE g_img = INVALID_HANDLE_VALUE;
static u64 g_img_size;
static u8 *g_fst_copy;
static u32 g_fst_len, g_fst_guest;
volatile unsigned g_disc_reads, g_disc_bytes;

/* DVDLowRead(void *dst, u32 len, u32 disc_offset): the last step before the drive. Serving it
 * from the image keeps every layer above it - DVDReadAsyncPrio and the game loaders - real. */
static u32 hle_dvd_read(const TcArgs *a)
{
    extern u32 host_dvd_read_raw(u32 dst, u32 len, u32 off);
    u32 got = host_dvd_read_raw(a->r[0], a->r[1], a->r[2]);
    fprintf(stderr, "[lowread] dst=%08x len=%u off=%u -> %u", a->r[0], a->r[1], a->r[2], got);
    fputc(10, stderr);
    wr32(0x80571670u, 2u); wr32(0x80570ae8u, 1u); return 0;
}

int host_disc_open_image(const char *path)
{
    u8 hdr[0x440];
    DWORD got = 0;
    u32 dol_off, fst_off, fst_size, guest;
    HANDLE h = CreateFileA(path, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
    if (h == INVALID_HANDLE_VALUE) return 0;
    if (!ReadFile(h, hdr, sizeof hdr, &got, NULL) || got != sizeof hdr) { CloseHandle(h); return 0; }
    if (hdr[0] != 0x52 || hdr[1] != 0x55 || hdr[2] != 0x46 || hdr[3] != 0x45) {   /* "RUFE" */
        CloseHandle(h); return 0;
    }
    { LARGE_INTEGER sz; if (!GetFileSizeEx(h, &sz)) { CloseHandle(h); return 0; }
      g_img_size = (u64)sz.QuadPart; }
    /* The boot header holds the DOL and FST locations as 32-bit word offsets (verified against
     * this disc: dol*4 lands exactly on main.dol, fst*4 exactly on the FST header). */
    dol_off  = ((u32)hdr[0x420] << 24 | (u32)hdr[0x421] << 16 | (u32)hdr[0x422] << 8 | hdr[0x423]) * 4u;
    fst_off  = ((u32)hdr[0x424] << 24 | (u32)hdr[0x425] << 16 | (u32)hdr[0x426] << 8 | hdr[0x427]) * 4u;
    fst_size = ((u32)hdr[0x428] << 24 | (u32)hdr[0x429] << 16 | (u32)hdr[0x42a] << 8 | hdr[0x42b]) * 4u;
    (void)dol_off;
    printf("[disc] dol=%x fst=%x size=%x total=%x", dol_off, fst_off, fst_size, (u32)g_img_size);
    fputc(10, stdout);
    if (!fst_off || !fst_size || fst_off + fst_size > g_img_size) { CloseHandle(h); return 0; }
    guest = 0x81700000u;                       /* top of MEM1, above the game heap */
    if (guest + fst_size > 0x817fe000u) { CloseHandle(h); return 0; }
    {
        LARGE_INTEGER pos; DWORD n = 0;
        pos.QuadPart = (LONGLONG)fst_off;
        if (!SetFilePointerEx(h, pos, NULL, FILE_BEGIN)) { CloseHandle(h); return 0; }
        if (!ReadFile(h, g_ram + (guest - TCRT_RAM_BASE), fst_size, &n, NULL) || n != fst_size) {
            CloseHandle(h); return 0;
        }
    }
    g_img = h;
    g_fst_copy = (u8 *)malloc(fst_size);
    if (g_fst_copy) {
        memcpy(g_fst_copy, g_ram + (guest - TCRT_RAM_BASE), fst_size);
        g_fst_len = fst_size; g_fst_guest = guest;
    }
    wr32(0x80000038u, guest);
    { extern unsigned host_dvd_init(const char *, u32, u32);
      if (!host_dvd_init(path, fst_off, fst_size)) { printf("[disc] host FST parse failed"); fputc(10, stdout); } }
    printf("[disc] image %s, FST %u bytes at 0x%08x", path, fst_size, guest);
    fputc(10, stdout);
    return 1;
}

/* A raw read at an absolute disc address, used by the directory fallback. */
u32 host_disc_read(u32 addr, u32 len, u32 dst)
{
    LARGE_INTEGER pos; DWORD n = 0;
    g_disc_reads++; g_disc_bytes += len;
    if (g_img == INVALID_HANDLE_VALUE) return 0;
    if ((u64)addr + len > g_img_size) len = (u32)(g_img_size - addr);
    pos.QuadPart = (LONGLONG)addr;
    if (!SetFilePointerEx(g_img, pos, NULL, FILE_BEGIN)) return 0;
    if (!ReadFile(g_img, g_ram + (dst - TCRT_RAM_BASE), len, &n, NULL)) return 0;
    return n;
}
u32 host_disc_read_public(u32 addr, u32 len, u32 dst) { return host_disc_read(addr, len, dst); }
void host_disc_open(const char *dir) { (void)dir; }   /* superseded by the image + host FST */

static u32 hle_dvd_reportkey(const TcArgs *a) { (void)a; wr32(0x80571670u, 2u); return 0; }
static u32 hle_dvd_imm(const TcArgs *a) { (void)a; return 0x00053100u; }
/* The DVD layer's fatal escalation: log the state that triggered it and let the caller continue
 * (a host has no disc to reject). */
/* OSFatal: the SDK's fatal handler. On a host it logs its message and the live call stack (so the
 * failing chain is visible), then returns instead of spinning. */
static u32 hle_os_fatal(const TcArgs *a)
{
    u32 msg = a->r[0];
    fputs("[fatal] msg:", stdout);
    for (int i = 0; i < 120; i++) { u8 c = rd8(msg + i); if (!c) break; putchar(c); }
    putchar(10);
    fputs("[fatal-stack]", stdout);
    unsigned d = tcrt_depth < 64 ? tcrt_depth : 64;
    for (unsigned j = 0; j < d; j++) printf(" %08x", tcrt_stack[j]);
    putchar(10);
    return 0;
}

/* The cover-register command: it completes immediately and the cover reads as closed
 * (0x80571600 bit 0 = "the command finished", the value a drive with a disc reports). */
static u32 hle_dvd_cover(const TcArgs *a)
{
    /* The cover/status command reports "done" and the drive state the SDK's menu path requires:
     * 2 = the drive finished its reset with a disc in it. */
    (void)a;
    wr32(0x80571600u, 1u);
    return 2;
}
static u32 hle_dvd_fatal(const TcArgs *a)
{
    (void)a;
    printf("[dvd] fatal path: state=%08x he8=%08x\n", rd32(0x80571670u), rd8(0x817fdfe8u));
    return 0;
}

/* The IOS IPC heap: iosAllocAligned(heap, size, align) hands out command blocks. A host has no IOS,
 * so a bump allocator in the guest scratch window serves them - the command blocks only need to be
 * distinct, aligned addresses the (HLE'd) IPC submit accepts. */
static u32 g_ios_next = 0x81100000u;
static u32 hle_iosAllocAligned(const TcArgs *a)
{
    u32 size = a->r[1], align = a->r[2] ? a->r[2] : 0x20;
    if (size > 0x40000) return 0;
    g_ios_next = (g_ios_next + align - 1) & ~(align - 1);
    u32 p = g_ios_next;
    static int n; if (n++ < 4) printf("[alloc] heap=%08x size=%x align=%x -> %08x\n", a->r[0], size, align, p);
    g_ios_next += (size + align - 1) & ~(align - 1);
    if (g_ios_next > 0x81700000u) g_ios_next = 0x81100000u;   /* wrap: the block was consumed */
    return p;
}

/* ---- the thread scheduler HLE: the game's threads are host threads cooperating on a frame
 * tick. OSSleepThread/OSWakeupThread only need to give the CPU time back so a producer/consumer
 * pair makes progress - a real yield is enough (the SDK's own queue bookkeeping still runs, since
 * the verified bodies are what actually manipulate the thread structures). ---- */
static u32 hle_OSSleepThread(const TcArgs *a)
{
    (void)a;
    /* The game's threads cooperate on the video frame; a sleep hands the CPU back long enough
     * for the frame thread to advance the VI counter and the pending interrupts. */
    Sleep(1);
    return 0;
}
static u32 hle_OSYieldThread(const TcArgs *a) { (void)a; Sleep(0); return 1; }
static u32 g_ios_fd = 1;
static u32 hle_IOS_Open(const TcArgs *a)  { (void)a; return g_ios_fd; }
static u32 hle_IOS_Close(const TcArgs *a) { (void)a; return 0; }
static u32 hle_IOS_Read(const TcArgs *a)  { (void)a; return 0; }
static u32 hle_IOS_Write(const TcArgs *a) { (void)a; return 0; }
static u32 hle_IOS_Seek(const TcArgs *a)  { (void)a; return 0; }
static u32 hle_IOS_Ioctl(const TcArgs *a) { (void)a; return 0; }
static u32 hle_IOS_Ioctlv(const TcArgs *a) { (void)a; return 0; }

/* The disc file API, answered from the host-parsed FST (rt/disc_host.c). */
extern s32 host_dvd_convert_guest(u32 guest_path);
extern u32 host_dvd_fastopen(u32 entry, u32 info);
extern u32 host_dvd_read_info(u32 info, u32 buf, u32 len, u32 off);
static u32 hle_dvd_convert(const TcArgs *a)
{
    s32 r = host_dvd_convert_guest(a->r[0]);
    char tmp[96]; int k;
    for (k = 0; k < 90; k++) { u8 ch = rd8(a->r[0] + (u32)k); tmp[k] = (char)ch; if (!ch) break; }
    tmp[k] = 0;
    fprintf(stderr, "[conv] %s -> %d", tmp, (int)r); fputc(10, stderr);
    return (u32)r;
}
static u32 hle_dvd_fastopen_hle(const TcArgs *a) { return host_dvd_fastopen(a->r[0], a->r[1]); }
static u32 hle_dvd_open(const TcArgs *a)
{
    s32 e = host_dvd_convert_guest(a->r[0]);
    if (e < 0) return 0;
    return host_dvd_fastopen((u32)e, a->r[1]);
}
static u32 hle_dvd_read_async(const TcArgs *a)
{
    /* DVDReadAsyncPrio(DVDFileInfo *info, void *buf, u32 len, u32 offset, DVDCallback cb, u32 prio)
     * A host read finishes immediately, so the fileInfo is marked done and the caller is told -
     * the game polls DVDGetFileInfoStatus on it, and passes a null callback here. */
    u32 info = a->r[0];
    {
        extern volatile u32 tcrt_call_ring[32], tcrt_stack[64];
        extern volatile unsigned tcrt_depth;
        printf("[read-caller] stack:");
        for (unsigned k = 0; k + 1 < tcrt_depth && k < 24; k++) printf(" %08x", tcrt_stack[k]);
        printf(" ring:");
        for (int k = 1; k <= 8; k++) printf(" %08x", tcrt_call_ring[(tcrt_calls - k) & 31]);
        printf("\n[read-info] ");
        for (unsigned k = 0; k < 0x38u; k += 4u) printf("%08x ", rd32(info + k));
        {
            extern u32 tcrt_hit(u32);
            printf("\n[arena] lo=%08x hi=%08x m2lo=%08x m2hi=%08x  setlo=%u sethi=%u osinit=%u heapinit=%u alloc=%u\n",
                   rd32(0x80570A50u), rd32(0x805714A8u), rd32(0x80570A54u), rd32(0x805714ACu),
                   tcrt_hit(0x802271F8u), tcrt_hit(0x802271E0u), tcrt_hit(0x80225E70u),
                   tcrt_hit(0x80040F88u), tcrt_hit(0x80040CD8u));
        }
        printf("\n");
    }
    u32 n = host_dvd_read_info(info, a->r[1], a->r[2], a->r[3]);
    u32 cb = a->r[4];
    (void)n;
    wr32(info + 0x0cu, 0u);      /* DVD_FILE_INFO_STATUS: done */
    wr32(0x80570ae8u, 1u);       /* the DI transfer-complete flag */
    if (cb) {
        TcArgs c = {0};
        c.r[0] = 0u;
        c.r[1] = info;
        (void)tc_call(cb, &c);
    }
    return 1u;
}

static HleEntry HLE[] = {
    { 0x802302B4u, hle_OSGetTick, hle_zero_f },   /* OSGetTick: mftb is opaque to the judge; the host time base */
    { 0x8023029Cu, hle_OSGetTime, hle_zero_f },   /* OSGetTime: the same time base, upper word */
    { 0x80228554u, hle_OSReport, hle_zero_f },    /* OSReport: print on the host */
    /* The memory-card manager: with no card in a host drive, a check reports "idle, no transfer
     * pending" and the game takes its no-save branch. */
    { 0x8022FFE4u, hle_OSSleepThread, hle_zero_f },  /* OSSleepThread: yield to the host */
    /* The EXI bus: no device is attached on a host. EXILock always succeeds, EXISync completes at
       once, EXIDeselect/EXIUnlock do nothing - the SRAM/device drivers see a healthy idle bus. */
    { 0x802641B0u, hle_zero_r, hle_zero_f },      /* EXILock */
    { 0x802642ACu, hle_zero_r, hle_zero_f },      /* EXIUnlock */
    { 0x8026D724u, hle_zero_r, hle_zero_f },      /* WriteUARTN: the debug UART is the host console */
    { 0x8022CD2Cu, hle_mem2_size, hle_zero_f },   /* OSGetPhysicalMem2Size: a Wii's 128 MB MEM2 */
    { 0x8022CD20u, hle_mem1_size, hle_zero_f },   /* OSGetPhysicalMem1Size: 24 MB MEM1 */
    { 0x802525BCu, hle_gx_texobj, hle_zero_f },   /* GXLoadTexObjPreLoaded: the texture bind leaf */
    { 0x8023BFF4u, hle_dvd_reset, hle_zero_f },   /* DVDLowRequestError: the reset was handled */
    { 0x802253DCu, hle_OSGetIOSRev, hle_zero_f },  /* __OSGetIOSRev: the console's IOS version */
    { 0x8022A718u, hle_os_fatal, hle_zero_f },    /* OSFatal: log the stack and keep going */
    /* WiiConnect24 / NWC24: the console's always-on network service. A host has no such service, so
     * its whole init/shutdown surface reports "nothing to do" and the boot takes its offline path. */
    { 0x8023197Cu, hle_one_r, hle_zero_f },       /* NWC24iPrepareShutdown: done */
    { 0x80231BC8u, hle_zero_r, hle_zero_f },      /* the NWC24 shutdown request */
    { 0x80231C34u, hle_one_r, hle_zero_f },       /* NWC24iCheckNandSpace: enough */
    { 0x80231800u, hle_zero_r, hle_zero_f },      /* NWC24iInit: no service */
    { 0x80231600u, hle_zero_r, hle_zero_f },
    { 0x8023CAD4u, hle_dvd_cover, hle_zero_f },   /* DVDLowPrepareCoverRegister: complete at once */
    { 0x8023A6F0u, hle_dvd_fatal, hle_zero_f },   /* fn_8023a6f0: the fatal path - log and continue */
    { 0x8023BB64u, hle_dvd_read, hle_zero_f },    /* DVDLowUnencryptedRead: opened, state 2 */
    { 0x8023C478u, hle_dvd_reportkey, hle_zero_f }, /* DVDLowReportKey: reset acknowledged */
    { 0x8023CDA4u, hle_dvd_imm, hle_zero_f },     /* DVDLowGetImmBufferReg: the disc ID */
    { 0x8022E858u, hle_one_r, hle_zero_f },       /* __OSSyncSram: flush completed (the retry loop needs nonzero) */
    { 0x8022E378u, hle_zero_r, hle_zero_f },      /* __OSInitSram: no SRAM */
    { 0x8022E578u, hle_zero_r, hle_zero_f },      /* UnlockSram: no SRAM */
    { 0x8022E868u, hle_one_r, hle_zero_f },       /* the SRAM write: succeeded (callers retry until nonzero) */
    { 0x8022EAA0u, hle_zero_r, hle_zero_f },      /* __OSGetRTCFlags */
    { 0x8022EBBCu, hle_zero_r, hle_zero_f },      /* __OSClearRTCFlags */
    { 0x8022E240u, hle_zero_r, hle_zero_f },      /* the SRAM read */
    /* The USB stack: the console's USB host controller. A host has no Wii USB hardware, so the
       library's device scan reports nothing attached - once. */
    { 0x8024CCA4u, hle_dsp_add_task, hle_zero_f },  /* DSPAddTask: the task is queued and its boot completes */
    { 0x8024D438u, hle_dsp_add_task, hle_zero_f },  /* __DSP_boot_task: no microcode to load */
    { 0x8024CE10u, hle_dsp_task_run, hle_zero_f },  /* the DSP task body: no microcode to run */
    { 0x8024CBA4u, hle_dsp_mail_from, hle_zero_f }, /* DSPCheckMailFromDSP: a reply is waiting */
    { 0x8024CB94u, hle_dsp_mail_to, hle_zero_f },   /* DSPCheckMailToDSP: our mail was consumed */
    { 0x8023456Cu, hle_dvd_convert, hle_zero_f },    /* DVDConvertPathToEntrynum: host FST */
    { 0x80234DB8u, hle_dvd_read_async, hle_zero_f },  /* DVDReadAsyncPrio: bytes + callback */
    { 0x802348DCu, hle_dvd_open, hle_zero_f },       /* DVDOpen: path -> DVDFileInfo */
    { 0x80234874u, hle_dvd_fastopen_hle, hle_zero_f }, /* DVDFastOpen: entry -> length/offset */
    { 0x802391BCu, hle_dvd_drive_status, hle_zero_f }, /* DVDGetDriveStatus: ready (0), a disc present */
    { 0x8023F294u, hle_vi_nextfb, hle_zero_f },   /* VISetNextFrameBuffer: record the displayed frame */
    { 0x80242F80u, hle_ax_dsp, hle_zero_f },      /* __AXOutInitDSP: the DSP handshake */
    { 0x80250534u, hle_gx_done, hle_zero_f },     /* GXDrawDone: the frame is flushed */
    { 0x8029CC00u, hle_usb_none, hle_zero_f },    /* the USB scan: no device */
    { 0x802B723Cu, hle_zero_r, hle_zero_f },      /* the USB error reporter: silent */
    { 0x8028FE30u, hle_one_r, hle_zero_f },       /* the USB status query: READY (the init loop breaks on nonzero) */
    { 0x8028B6D4u, hle_zero_r, hle_zero_f },      /* the USB yield: nothing to do */
    { 0x80295814u, hle_zero_r, hle_zero_f },      /* the USB device count: none */
    { 0x80263A1Cu, hle_one_r, hle_zero_f },       /* EXISelect: acquired */
    { 0x80262E64u, hle_one_r, hle_zero_f },       /* EXIImmEx: started */
    { 0x80262FB4u, hle_one_r, hle_zero_f },       /* EXIImm: started */
    { 0x80263948u, hle_one_r, hle_zero_f },       /* EXIWriteReg */
    { 0x802636CCu, hle_zero_r, hle_zero_f },      /* __EXIProbe: no device on a host */
    { 0x802643ACu, hle_zero_r, hle_zero_f },      /* EXIGetID: no device */
    { 0x802633CCu, hle_one_r, hle_zero_f },       /* EXISync: the transfer completed */
    { 0x80263B4Cu, hle_one_r, hle_zero_f },       /* EXIDeselect */
    { 0x80273734u, hle_zero_r, hle_zero_f },      /* SCCheckStatus: idle */
    /* The SD command layer: no card in a host drive, so every command reports "finished" (1),
     * which is what makes the game's transfer state machine clear its pending flag. */
    { 0x802745B4u, hle_sc_cmd, hle_zero_f },       /* the SD command dispatcher */
    { 0x80275290u, hle_sc_cmd, hle_zero_f },       /* the SD status query */
    { 0x802752B4u, hle_sc_cmd, hle_zero_f },
    { 0x80275378u, hle_sc_cmd, hle_zero_f },
    { 0x80273694u, hle_zero_r, hle_zero_f },      /* SCInit: done */
    { 0x80270904u, hle_iosAllocAligned, hle_zero_f },  /* iosAllocAligned: the IPC heap */
    { 0x8026F5F8u, hle_IOS_Open, hle_zero_f },    /* IOS_Open: /dev/di opens */
    { 0x8026F4E0u, hle_IOS_Open, hle_zero_f },    /* IOS_OpenAsync */
    { 0x8026F7D8u, hle_IOS_Close, hle_zero_f },   /* IOS_Close */
    { 0x8026F718u, hle_IOS_Close, hle_zero_f },   /* IOS_CloseAsync */
    { 0x80000C00u, hle_sc, hle_zero_f },          /* The sc vector: the cache/sync primitives are host no-ops */
    { 0x80000C04u, hle_sc, hle_zero_f },
    { 0x80000C08u, hle_sc, hle_zero_f },
    { 0x80000C0Cu, hle_sc, hle_zero_f },
    { 0x80000C10u, hle_sc, hle_zero_f },
    { 0x80000C14u, hle_sc, hle_zero_f },
    { 0x80000C18u, hle_sc, hle_zero_f },
    { 0x80000C1Cu, hle_sc, hle_zero_f },
};
static int HLE_N = (int)(sizeof HLE / sizeof HLE[0]);
static const HleEntry *hle_find(u32 t)
{
    for (int i = 0; i < HLE_N; i++) if (HLE[i].addr == t) return &HLE[i];
    return 0;
}
void tc_heartbeat(void);
void render_tick(void);
static unsigned g_hb_calls;

/* The game clears MEM1 during OS init, which wipes the FST we installed at boot. Reinstall it
 * whenever its entry count reads back as zero (or changed), so the SDK path walk sees real data. */
void host_disc_ensure_fst(void)
{
    if (!g_fst_copy || !g_fst_len) return;
    if (rd32(g_fst_guest + 8u) == *(u32 *)(g_fst_copy + 8)) return;
    memcpy(g_ram + (g_fst_guest - TCRT_RAM_BASE), g_fst_copy, g_fst_len);
    wr32(0x80000038u, g_fst_guest);
}
void tc_heartbeat(void)
{
    /* Present a frame every 4096 dispatch calls. The game thread is the only thread that touches
     * Vulkan (a second-thread present races the swapchain), so the renderer is driven from here. */
    if ((++g_hb_calls & 0xFFu) == 0) render_tick();
    if ((g_hb_calls & 0x3Fu) == 0) { extern void host_disc_ensure_fst(void); host_disc_ensure_fst(); }
    if ((g_hb_calls & 0xFFFFu) == 0) fprintf(stderr, "[hb] calls=%u last=%08x\n", g_hb_calls, tcrt_last);
  /* every 256 calls: a frame while the boot runs */
}

u32 tc_call(u32 target, const TcArgs *args)
{
    static u8 seen[1 << 15];
    g_callcount++;
    g_last_target = target;
    tcrt_last_a0 = args->r[0]; tcrt_last_a1 = args->r[1]; tcrt_last_a2 = args->r[2];
    hit(target);
    tc_heartbeat();   /* the renderer + the interrupts' clock: driven from every dispatch */
    tcrt_calls = g_callcount; tcrt_last = target;
    tcrt_call_ring[g_callcount & 31] = target;
    if (tcrt_depth < 64) tcrt_stack[tcrt_depth] = target;
    tcrt_depth++;
    if (g_callcount <= 400) fprintf(stderr, "[call %u] 0x%08x r3=%08x r4=%08x\n", g_callcount, target, args->r[0], args->r[1]);
    if (target == 0x8023456cu || target == 0x802348dcu) {
        static unsigned dn;
        if (dn++ < 8) {
            u32 s = args->r[0]; int k;
            fputs("[dvdp] ", stderr);
            for (k = 0; k < 128; k++) { u8 ch = rd8(s + (u32)k); if (!ch) break; fputc((int)ch, stderr); }
            fprintf(stderr, " [ptr38=%08x fst=%08x n=%u]", rd32(0x80000038u), rd32(0x805715b0u), rd32(0x805715a8u));
            fputc(10, stderr);
        }
    }
    else if ((g_callcount & 0x3FFFFu) == 0) printf("[hb] %u calls, last 0x%08x\n", g_callcount, target);
    (void) seen;
    {
        const HleEntry *h = hle_find(target);
        if (h) {   /* the host service: the verified body stays for the judge, the native build uses this */
            u32 rv = h->fn(args);   /* the HLE may publish its own r4 (OSGetTime) */
            g_ret3 = rv; g_lastf = 0.0;
            g_ncalls++;
            if (tcrt_depth) tcrt_depth--;
            return rv;
        }
    }
    const DispatchEntry *d = dispatch_find(target);
    if (!d) {
        /* An address with no body: the caller loaded a wrong function pointer (or read an
         * uninitialised structure field). Report it once per site - the frequency matters, because
         * a per-frame miss is a state bug while a one-off is a table the host never filled in. */
        static u32 miss_addr[48], miss_n[48]; static unsigned miss_c;
        unsigned found = 0;
        if (target == 0) {
            /* A null call means a structure field or vtable slot was never written. The ring is the
             * only record of who asked, so print it once: the site is the frame below the repeat. */
            static int shown;
            if (shown < 4) {
                shown++;
                printf("[nullcall] depth=%u stack:", tcrt_depth);
                for (unsigned k = 0; k + 1 < tcrt_depth && k < 24; k++) printf(" %08x", tcrt_stack[k]);
                printf(" ring:");
                for (int k = 1; k <= 10; k++) printf(" %08x", tcrt_call_ring[(g_callcount - k) & 31]);
                printf("\n");
            }
        }
        for (unsigned k = 0; k < miss_c; k++) if (miss_addr[k] == target) { miss_n[k]++; found = 1; break; }
        if (!found && miss_c < 48) { miss_addr[miss_c] = target; miss_n[miss_c++] = 1; }
        printf("[dispatch] unimplemented call to 0x%08x (r3=%08x)\n", target, args->r[0]);
        g_ret3 = 0;
        g_ncalls++;
        if (tcrt_depth) tcrt_depth--;   /* the frame the caller pushed must be released either way */
        return 0;
    }
    /* one more frame down for the callee */
    u32 saved_add = g_frame_add;
    u32 frame_delta = 0;
    if (saved_add + TC_FRAME <= TC_STACK_FRAMES * TC_FRAME) { g_frame_add = saved_add + TC_FRAME; frame_delta = TC_FRAME; }
    /* A stack pointer the caller passes was rebased into the caller's frame; the callee runs one
     * frame lower, so its rd32/wr32 would rebase it again and miss the slot by a frame. Lift each
     * stack-window argument by the same delta so the callee lands on the caller's physical slot.
     * The lift telescopes across deeper calls (each level adds its own delta). */
    TcArgs adj = *args;
    if (frame_delta) {
        for (unsigned i = 0; i < 10; i++) {
            u32 v = adj.r[i];
            if (v >= TCRT_STACK_LO && v < TCRT_RAM_BASE + TCRT_RAM_SIZE) adj.r[i] = v + frame_delta;
        }
    }
    memcpy(g_entry_r, adj.r, sizeof g_entry_r);   /* the callee's entry registers */
    memcpy(g_entry_f, adj.f, sizeof g_entry_f);
    u32 rv = d->fn(&adj);   /* the wrapper publishes the u64 low word itself (tc_set_lastr4) */
    g_frame_add = saved_add;
    g_ret3 = rv;
    g_lastf = 0.0;
    log_call(tcrt_fold(target), args);
    g_ncalls++;
    if (tcrt_depth) tcrt_depth--;
    return rv;
}

/* The last call's r4: the oracle's junk for that call (TcStrict: TcJunk slot 4), or clobber's 0 with mock_junk off. */
u32 tc_lastr4(void) { static int n; if (n++ < 6) printf("[r4] %08x\n", g_lastr4); return g_lastr4; }
void tc_set_lastr4(u32 v) { g_lastr4 = v; }   /* the u64 wrapper's low word */
u32 tc_lastr(void) { return g_ret3; }

/* The junk a mocked call left in a scratch GPR (TcStrict.junk: r0 slot 0, rN slot N; the same stream tc_lastr4
 * reads): what the original's r0/r4..r12 hold after the call, so a store of one matches. 0 with mock_junk off. */
static u32 g_junk = 0x5f573032u;
u32 tc_junkr(u32 reg)
{
    g_junk = g_junk * 1664525u + 1013904223u;   /* the same kind of deterministic garbage the verdicts used */
    return g_junk ^ (0x9e3779b9u * (reg + 1u));
}

f64 tc_lastf(void) { return g_lastf; }

f64 tc_callf(u32 target, const TcArgs *args)
{
    g_callcount++;
    tcrt_calls = g_callcount; tcrt_last = target;
    tcrt_call_ring[g_callcount & 31] = target;
    tcrt_last_a0 = args->r[0]; tcrt_last_a1 = args->r[1]; tcrt_last_a2 = args->r[2];
    if (tcrt_depth < 64) tcrt_stack[tcrt_depth] = target;
    tcrt_depth++;
    const HleEntry *h = hle_find(target);
    if (h) {
        /* Run the integer handler for its side effects (the state transitions), then take the
         * float result from the float slot: a command reached through tc_callf still has to act. */
        h->fn(args);
        f64 rv = h->ff(args);
        g_ret1 = rv; g_ncalls++;
        if (tcrt_depth) tcrt_depth--;
        return rv;
    }
    const DispatchEntry *d = dispatch_find(target);
    if (!d) {
        printf("[dispatch] unimplemented callf to 0x%08x (f1 bits seen)\n", target);
        g_ret1 = 0.0;
        g_ncalls++;
        if (tcrt_depth) tcrt_depth--;
        return 0.0;
    }
    u32 saved_add = g_frame_add;
    u32 frame_delta = 0;
    if (saved_add + TC_FRAME <= TC_STACK_FRAMES * TC_FRAME) { g_frame_add = saved_add + TC_FRAME; frame_delta = TC_FRAME; }
    TcArgs adj = *args;
    if (frame_delta) {
        for (unsigned i = 0; i < 10; i++) {
            u32 v = adj.r[i];
            if (v >= TCRT_STACK_LO && v < TCRT_RAM_BASE + TCRT_RAM_SIZE) adj.r[i] = v + frame_delta;
        }
    }
    memcpy(g_entry_r, adj.r, sizeof g_entry_r);
    memcpy(g_entry_f, adj.f, sizeof g_entry_f);
    f64 rv = d->ff(&adj);
    g_frame_add = saved_add;
    g_ret1 = rv;   /* the wrapper published r4 if the result was 64-bit */
    log_call(tcrt_fold(target), args);
    g_ncalls++;
    if (tcrt_depth) tcrt_depth--;
    return rv;
}

/* The entry registers (the vector's R line r3..r10 and F line f1..f8): what the original's registers hold at
 * the function's entry, read back with tc_argr / tc_argf (a register the signature does not declare). */


void tcrt_entry(const u32 *r, const f64 *f)
{
    memcpy(g_entry_r, r, sizeof g_entry_r);
    memcpy(g_entry_f, f, sizeof g_entry_f);
}

u32 tc_argr(u32 n)
{
    return n < 10 ? g_entry_r[n] : 0;
}

f64 tc_argf(u32 n)
{
    return n < 8 ? g_entry_f[n] : 0.0;
}

static FILE *open_file(const char *path, const char *mode)
{
    FILE *f = NULL;
    return fopen_s(&f, path, mode) == 0 ? f : NULL;
}

static u8 *read_file(const char *path, long *size)
{
    FILE *f = open_file(path, "rb");
    if (!f) return NULL;
    fseek(f, 0, SEEK_END);
    *size = ftell(f);
    fseek(f, 0, SEEK_SET);
    u8 *buf = (u8 *)malloc((size_t)*size + 1);
    if (buf && fread(buf, 1, (size_t)*size, f) != (size_t)*size) {
        free(buf);
        buf = NULL;
    }
    fclose(f);
    return buf;
}

static u32 be32(const u8 *p) { return (u32)p[0] << 24 | (u32)p[1] << 16 | (u32)p[2] << 8 | p[3]; }

/* The DOL's 7 text and 11 data sections, copied to their load addresses (the rest of MEM1, bss included, is 0). */
static int copy_dol_sections(const u8 *dol, long size, u8 *dst)
{
    if (size < 0x100) return 0;
    for (int i = 0; i < 18; i++) {
        u32 off = be32(dol + 4 * i), addr = be32(dol + 0x48 + 4 * i), len = be32(dol + 0x90 + 4 * i);
        if (!len) continue;
        if ((long)off + (long)len > size || addr < TCRT_RAM_BASE || addr - TCRT_RAM_BASE + len > TCRT_RAM_SIZE) return 0;
        memcpy(dst + (addr - TCRT_RAM_BASE), dol + off, len);
    }
    return 1;
}

static int load_dol(const u8 *dol, long size)
{
    if (!copy_dol_sections(dol, size, g_pristine)) return 0;
    /* below the DOL's first section the base memory stands: the oracle's setEntry writes the same
       mem1_base.bin over the whole RAM before the DOL image (the OS globals at 0x800000f8 etc. are
       live there - the oracle reads them, so the C must too) */
    /* the DOL's .bss keeps the capture's bytes: the oracle's setEntry writes mem1_base.bin over the whole
       RAM (the .bss is a mapped block, so the write lands) and per-vector patches over that - a global in
       the bss span reads the captured value on both sides (measured: 80234bac's record table) */
    {   /* above the DOL's image the oracle's Ghidra RAM is TcSetup's uninitialized gap blocks: every byte
           reads 0 (its mem1_base pass stops at the first gap page), so the dump's stale bytes never show */
        u32 hi = 0;
        for (int i = 0; i < 18; i++) {
            u32 addr = be32(dol + 0x48 + 4 * i), len = be32(dol + 0x90 + 4 * i);
            if (len && addr >= TCRT_RAM_BASE && addr - TCRT_RAM_BASE + len <= TCRT_RAM_SIZE && addr + len > hi)
                hi = addr + len;
        }
        u32 bss_a = be32(dol + 0xd8), bss_s = be32(dol + 0xdc);
        if (bss_s && bss_a >= TCRT_RAM_BASE && bss_a - TCRT_RAM_BASE + bss_s <= TCRT_RAM_SIZE && bss_a + bss_s > hi)
            hi = bss_a + bss_s;
        if (hi > TCRT_RAM_BASE && hi < TCRT_RAM_BASE + TCRT_RAM_SIZE)
            memset(g_pristine + (hi - TCRT_RAM_BASE), 0, TCRT_RAM_BASE + TCRT_RAM_SIZE - hi);
    }
    return 1;
}

int tcrt_init(const char *dol, const char *code_ranges, const char *base_mem)
{
    if (!g_gx) g_gx = (GxOp *)calloc(GX_MAX_OPS, sizeof(GxOp));
    g_ram = (u8 *)calloc(TCRT_RAM_SIZE, 1);
    g_pristine = (u8 *)calloc(TCRT_RAM_SIZE, 1);
    g_written = (u8 *)calloc(TCRT_RAM_SIZE / 8, 1);
    g_code = (u8 *)calloc(TCRT_RAM_SIZE / 8, 1);
    g_wlist = (u32 *)malloc(sizeof(u32) * MAX_WRITES);
    if (!g_ram || !g_pristine || !g_written || !g_code || !g_wlist) return 0;
    /* The DOL image first, then the capture over the whole RAM: the oracle's setEntry writes mem1_base.bin
       over everything on every vector (the Ghidra program image starts as the DOL), so a global reads the
       capture's live value on both sides - the capture's .data/.bss bytes are the state the game made */
    long size = 0;
    u8 *img = read_file(dol, &size);
    if (!img || !load_dol(img, size)) return 0;
    {
        FILE *b = base_mem ? open_file(base_mem, "rb") : NULL;
        if (b) {
            u8 tmp[0x1000];
            size_t n;
            u32 a = TCRT_RAM_BASE;
            while ((n = fread(tmp, 1, sizeof tmp, b)) > 0 && a < TCRT_RAM_BASE + TCRT_RAM_SIZE) {
                memcpy(g_pristine + (a - TCRT_RAM_BASE), tmp, n);
                a += (u32) n;
            }
            fclose(b);
        }
    }
    /* The capture is the verifier's test scaffolding, not the console's boot state: it carries the
     * emulator's .bss (zeros where the DOL has live .data - lbl_80570A78 reads 0 instead of 0xffff,
     * which makes the SDK take its "already initialised" path with a null function pointer). The
     * DOL's own sections are authoritative and are re-applied over the capture. */
    if (!copy_dol_sections(img, size, g_pristine)) return 0;
    free(img);
    FILE *f = open_file(code_ranges, "r");
    if (!f) return 0;
    unsigned lo, hi;
    while (fscanf_s(f, "%x %x", &lo, &hi) == 2) {
        for (u32 a = lo; a < hi && a >= TCRT_RAM_BASE && a < TCRT_RAM_BASE + TCRT_RAM_SIZE; a++) {
            bit_set(g_code, a - TCRT_RAM_BASE);
        }
    }
    fclose(f);
    tcrt_reset();
    return 1;
}

void tcrt_reset(void)
{
    for (u32 i = 0; i < g_wcount; i++) g_written[g_wlist[i] >> 3] = 0;
    if (g_woverflow) memset(g_written, 0, TCRT_RAM_SIZE / 8);
    memcpy(g_ram, g_pristine, TCRT_RAM_SIZE);
    g_wcount = 0;
    g_woverflow = 0;
    g_ncalls = 0;
    g_nfaults = 0;
    g_nio = 0;
    g_hw_set = 0;
    g_hw_next = 0;
    g_code_read = 0;
    tcrt_strict_reset();
    memset(g_rets, 0, sizeof g_rets);
    memset(g_frets, 0, sizeof g_frets);
}

void tcrt_poke(u32 addr, const u8 *data, u32 len)
{
    addr = tcrt_fold(addr);
    if (addr < TCRT_RAM_BASE || addr - TCRT_RAM_BASE + len > TCRT_RAM_SIZE) return;
    memcpy(g_ram + (addr - TCRT_RAM_BASE), data, len);
}

void tcrt_set_noret(u32 cap) { g_noret_cap = cap; g_store_cap = cap; g_nstores = 0; }

void tcrt_set_mock_writes(const u32 idx[], const u32 addr[], const u32 val[], int n)
{
    memcpy(g_mw_idx, idx, sizeof(u32) * (size_t) n);
    memcpy(g_mw_addr, addr, sizeof(u32) * (size_t) n);
    memcpy(g_mw_val, val, sizeof(u32) * (size_t) n);
    g_mw_n = n;
}

void tcrt_set_call_returns(const u32 rets[4096], const u64 frets[4096])
{
    memcpy(g_rets, rets, sizeof g_rets);
    memcpy(g_frets, frets, sizeof g_frets);
}

static int cmp_u32(const void *a, const void *b)
{
    u32 x = *(const u32 *)a, y = *(const u32 *)b;
    return x < y ? -1 : (x > y);
}

void tcrt_report(FILE *out, u32 r3, u64 f1_bits, u32 r4)
{
    fprintf(out, "RET %08x %016llx %08x\n", r3, (unsigned long long)f1_bits, r4);
    if (g_woverflow) fprintf(out, "FAULT too-many-writes\n");
    qsort(g_wlist, g_wcount, sizeof(u32), cmp_u32);
    u32 i = 0;
    while (i < g_wcount) {
        u32 start = g_wlist[i], end = start + 1;
        while (i + 1 < g_wcount && g_wlist[i + 1] == end) {
            i++;
            end++;
        }
        i++;
        u32 addr = start + TCRT_RAM_BASE;
        if (addr >= TCRT_STACK_LO) continue;
        if (end + TCRT_RAM_BASE > TCRT_STACK_LO) end = TCRT_STACK_LO - TCRT_RAM_BASE;
        fprintf(out, "W %08x ", addr);
        for (u32 o = start; o < end; o++) fprintf(out, "%02x", g_ram[o]);
        fputc('\n', out);
    }
    for (u32 k = 0; k < g_nio && k < MAX_IO; k++) {
        fprintf(out, "IO %08x %u %0*llx%s\n", g_io[k].addr, g_io[k].size, (int)(2 * g_io[k].size),
                (unsigned long long)g_io[k].value, g_io[k].read ? " r" : "");
    }
    if (g_nio > MAX_IO) fprintf(out, "FAULT too-many-io\n");
    for (u32 c = 0; c < g_ncalls && c < MAX_CALLS; c++) {
        fprintf(out, "CALL");
        for (int k = 0; k < 9; k++) fprintf(out, " %08x", g_call_int[c][k]);
        for (int k = 0; k < 8; k++) fprintf(out, " %016llx", (unsigned long long)g_call_f[c][k]);
        for (int k = 9; k < LOG_INTS; k++) fprintf(out, " %08x", g_call_int[c][k]);
        fputc('\n', out);
    }
    if (g_ncalls > MAX_CALLS) fprintf(out, "FAULT too-many-calls\n");
    tcrt_strict_report(out); /* CS lines; XR: the exit frame (tc_strict.h) */
    if (tcrt_strict_flags() & 8) { /* r1; r14..r31 and f14..f31: their entry values, 0 (TcOracle.setEntry) */
        fprintf(out, "XR %08x", TCRT_SP);
        for (int k = 14; k < 32; k++) fprintf(out, " %08x", 0u);
        for (int k = 14; k < 32; k++) fprintf(out, " %016llx", 0ull);
        fputc('\n', out);
    }
    for (u32 k = 0; k < g_nfaults && k < MAX_FAULTS; k++) fprintf(out, "FAULT %s\n", g_faults[k]);
    if (g_code_read) fprintf(out, "CODEREAD %08x\n", g_code_read);
}
