/* The native boot: load the retail DOL (the real game state, byte for byte), point the registers
 * at the game's own boot state, and call __start through the same dispatch every other function
 * uses. The code_ranges file marks the executable bytes (the judge's artifact; the boot doesn't
 * need it, tcrt_init accepts NULL-paths gracefully only for base_mem). */
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include "tc_rt.h"
#include "tc_rt_internal.h"
#include "../gen/dispatch.h"
#include "render.h"

extern int tcrt_init(const char *dol, const char *code_ranges, const char *base_mem);
extern u32 tcrt_sp(void);
extern void tcrt_set_sp(u32 sp);
extern volatile unsigned tcrt_calls;
extern volatile unsigned tcrt_last;
extern volatile unsigned tcrt_depth;

static DWORD WINAPI watcher(LPVOID p)
{
    (void)p;
    for (;;) {
        Sleep(1500);
        {
            printf("[watch] calls=%u last=0x%08x depth=%u frames=%d\n", tcrt_calls, tcrt_last, tcrt_depth, render_frames()); { extern volatile unsigned gx_framebuffer; extern volatile unsigned gx_begin_count, gx_bytes;
fprintf(stderr, "[fb] %08x begin=%u fifo=%u drawgate=%08x/%08x/%08x", gx_framebuffer, gx_begin_count,
        gx_bytes, rd32(0x80571270u), rd32(0x80570fc4u), rd32(0x80570664u)); fputc(10, stderr); } { extern void gx_opcode_hist(void); gx_opcode_hist(); }
            {
                extern volatile u32 tcrt_stack[64];
                unsigned d = tcrt_depth < 64 ? tcrt_depth : 64;
                printf("[stack]");
                for (unsigned j = 0; j < d; j++) printf(" %08x", tcrt_stack[j]);
                printf("\n");
            }
            printf("[sd] af9=%02x ab0=%02x ad2=%04x ad4=%02x aee=%02x\n",
                   (unsigned)rd8(0x80571af9u), (unsigned)rd8(0x80571ab0u),
                   (unsigned)rd16(0x80571ad2u), (unsigned)rd8(0x80571ad4u), (unsigned)rd8(0x80571aeeu));
            {
                /* the draw gate's own chain, counted rather than sampled */
                extern u32 tcrt_hit(u32);
                printf("[dvd] conv=%u fastopen=%u open=%u read=%u init=%u readprio=%u ", tcrt_hit(0x8023456cu),
                       tcrt_hit(0x80234874u), tcrt_hit(0x802348dcu), tcrt_hit(0x80234db8u),
                       tcrt_hit(0x80235088u), tcrt_hit(0x80234ea0u));
            { extern volatile unsigned g_disc_reads, g_disc_bytes;
                printf("[disc] reads=%u bytes=%u ", g_disc_reads, g_disc_bytes); }
            { extern u32 host_dvd_reads(void), host_dvd_read_bytes(void);
              printf("[fread] %u/%u ", host_dvd_reads(), host_dvd_read_bytes()); }
              printf("[gate] dvdstatus=%u f37910=%u f36660=%u f3cdc0=%u f50a04=%u gxbegin=%u gxcall=%u\n",
                       tcrt_hit(0x802391bcu), tcrt_hit(0x80037910u), tcrt_hit(0x80036660u),
                       tcrt_hit(0x8003cdc0u), tcrt_hit(0x80050a04u), tcrt_hit(0x80250b74u),
                       tcrt_hit(0x8024cca4u));
            }
            {
                /* the GX context the SDK keeps at 0x80576c88, and what the capture actually holds */
                extern volatile unsigned gx_bytes;
                extern const unsigned char *gx_bytes_ptr(void);
                u32 ctx = rd32(0x80576c88u);
                const unsigned char *b = gx_bytes_ptr();
                printf("[gx] ctx=%08x ctx0=%08x ctx4=%08x bytes=%u head=", ctx,
                       ctx ? rd32(ctx) : 0u, ctx ? rd32(ctx + 4u) : 0u, gx_bytes);
                for (unsigned j = 0; j < 16u && j < gx_bytes; j++) printf("%02x", b[j]);
                printf("\n");
            }
            { extern void gx_raw_hist(void); gx_raw_hist(); }
            { extern void gx_dump_state(void); static int once; if (!once++) gx_dump_state(); }
            { extern void gx_bp_dump(void); static int once2; if (!once2++) gx_bp_dump(); }
            { extern void gx_tex_dump(void); static int once3; if (!once3++) gx_tex_dump(); }
            { extern volatile unsigned gx_guard_zero, gx_guard_nonzero, gx_prim[16], gx_fmt[8];
              { extern unsigned render_last_tris(void); printf("[tris] %u", render_last_tris()); }
              { extern volatile unsigned gx_w16; printf("[w16] %u ", gx_w16); }
              printf("[prim] guard0=%u guardN=%u fmt=", gx_guard_zero, gx_guard_nonzero);
              for (unsigned j = 0; j < 8; j++) printf("%u", gx_fmt[j]);
              extern volatile unsigned gx_sizes[9];
              printf(" sizes=%u/%u/%u/%u/%u/%u/%u/%u/%u", gx_sizes[0],gx_sizes[1],gx_sizes[2],gx_sizes[3],
                     gx_sizes[4],gx_sizes[5],gx_sizes[6],gx_sizes[7],gx_sizes[8]);
              printf(" prim=");
              for (unsigned j = 0; j < 16; j++) if (gx_prim[j]) printf("%02x:%u ", j * 8 + 0x80, gx_prim[j]);
              fputc(10, stdout); }
        }
        {
            extern volatile unsigned tcrt_hw_i;
            extern volatile u32 tcrt_hw_addr[16], tcrt_hw_val[16];
            unsigned k = tcrt_hw_i;
            printf("[hw]");
            for (unsigned j = 0; j < 16; j++) {
                unsigned i = (k + j) & 15;
                printf(" %08x=%08x", tcrt_hw_addr[i] & 0x7fffffffu, tcrt_hw_val[i]);
            }
            printf("\n");
            {
                extern volatile u32 tcrt_hw_read_n[0x40], tcrt_hw_write_n[0x40];
                extern volatile u32 tcrt_call_ring[32];
                unsigned k2 = tcrt_calls;
                printf("[ring]");
                for (unsigned j = 0; j < 24; j++) printf(" %08x", tcrt_call_ring[(k2 + j) & 31]);
                printf("\n");
                {
                    /* stall detector: when the dispatch count stops advancing, dump the last 32
                     * calls in chronological order so the spinning loop is visible. */
                    static unsigned prev, stall;
                    if (k2 == prev) {
                        if (++stall == 3) {
                            printf("[stall] calls frozen at %u, last 32 in order:", k2);
                            for (unsigned j = 31; j > 0; j--) printf(" %08x", tcrt_call_ring[(k2 - j) & 31]);
                            printf(" %08x\n", tcrt_call_ring[k2 & 31]);
                            {
                                /* walk the free list of the heap the frozen call actually used */
                                extern volatile u32 tcrt_last_a0, tcrt_last_a1, tcrt_last_a2;
                                extern volatile unsigned tcrt_last;
                                u32 heap = (tcrt_last == 0x8003ad30u) ? tcrt_last_a0 : rd32(0x80571018u);
                                u32 fb = heap ? rd32(heap + 0x10u) : 0u;
                                printf("[stall-args] last=%08x r3=%08x r4=%08x r5=%08x\n", tcrt_last, tcrt_last_a0, tcrt_last_a1, tcrt_last_a2);
                                printf("[freelist] heap=%08x head=%08x cnt=%u:", heap, fb, heap ? rd32(heap + 0x14u) : 0u);
                                for (unsigned j = 0; j < 24 && fb; j++) {
                                    printf(" [%08x sz=%08x used=%u prv=%08x nxt=%08x]",
                                           fb, rd32(fb + 8u), rd32(fb + 0x1cu), rd32(fb + 0x14u), rd32(fb + 0x18u));
                                    fb = rd32(fb + 0x18u);
                                }
                                printf("\n");
                            }
                        }
                    } else { stall = 0; prev = k2; }
                }
                printf("[cnt]");
                for (unsigned j = 0; j < 0x40; j++)
                    if (tcrt_hw_read_n[j] || tcrt_hw_write_n[j])
                        printf(" %02x:R%u/W%u", j * 4, tcrt_hw_read_n[j], tcrt_hw_write_n[j]);
                printf("\n");
            }
        }
        fflush(stdout);
    }
    return 0;
}

/* The DI interrupt's stand-in: __DVDCheckDevice spins on this flag, which the drive raises when a
 * transfer completes. A host serves the disc from files synchronously, so the frame thread raises
 * it once per video frame. */
static DWORD WINAPI di_thread(LPVOID p)
{
    (void)p;
    u32 n = 0;
    for (;;) {
        Sleep(16);                       /* one video frame at 60 Hz */
        wr32(0x80570ae8u, 1u);           /* the DI transfer-complete flag */

        wr32(0x8057174cu, ++n);          /* the VI retrace counter */
        wr32(0x80570dd0u, 0u);           /* the USB stack's init flag: settled */
        /* The audio DMA cursors: the AI/AX block advances them once per video frame, so the
           game's stream-position polls measure a real interval. */
        wr32(0x805717acu, (n * 0x40u) & 0xffffffffu);   /* AI current address (lo) */
        wr32(0x805717ccu, (n * 0x40u) & 0xffffffffu);   /* ARAM current address (lo) */
        wr32(0xcc00202cu, n);            /* and its hardware register mirror */
        /* the Vulkan present runs on the main thread (see render_init's note) */
        /* The EXI channels' transfer-in-progress bits (channel control blocks at 0x80500a30,
           stride 0x40; the status word's bit 2). On hardware the EXI interrupt handler clears it;
           a host completes every transfer at once, so it is cleared here each frame. */
        for (u32 ch = 0; ch < 3; ch++)
            wr32(0x80500a30u + 0x40u * ch + 0xcu, 0u);
    }
    return 0;
}

static LONG WINAPI crash_filter(EXCEPTION_POINTERS *ep)
{
    fprintf(stderr, "[crash] code=%08x rip=%p base=%p\n",
            (unsigned)ep->ExceptionRecord->ExceptionCode,
            (void *)ep->ContextRecord->Rip, (void *)GetModuleHandle(NULL));
    fflush(stderr);
    return EXCEPTION_EXECUTE_HANDLER;
}

int main(int argc, char **argv)
{
    SetUnhandledExceptionFilter(crash_filter);
    setvbuf(stdout, NULL, _IONBF, 0);
    printf("boot: starting\n");
    const char *dol = argc > 1 ? argv[1] : "E:/Games/wii-decomp/dtk-template/build/RUFEMV/main.dol";
    const char *ranges = argc > 2 ? argv[2] : "E:/Games/wii-decomp/rff_rq1/state/code_ranges.txt";
    const char *base = argc > 3 ? argv[3] : "E:/Games/wii-decomp/rff_rq1/state/mem1_base.bin";

    if (!tcrt_init(dol, ranges, base)) {
        printf("boot: tcrt_init failed\n");
        return 1;
    }
    printf("boot: guest memory loaded (%s)\n", dol);
    {
        /* The disc's files. RFF_DISC_IMG names a decrypted disc image: its boot header gives the
         * FST location, the FST is loaded into guest MEM1 and 0x80000038 pointed at it, exactly as
         * the console's loader does - so the SDK's own path resolution runs on real data.
         * RFF_DISC_DIR is the fallback: a host directory tree, for an image that is not to hand. */
        extern int host_disc_open_image(const char *path);
        extern void host_disc_open(const char *dir);
        const char *di = getenv("RFF_DISC_IMG");
        const char *dd = getenv("RFF_DISC_DIR");
        if (di && *di) {
            if (!host_disc_open_image(di)) printf("boot: disc image %s unusable\n", di);
        } else if (dd && *dd) {
            host_disc_open(dd);
            printf("boot: disc tree %s\n", dd);
        } else {
            /* Default: the decrypted data-area image built by work/make_dec_img.py from the
             * retail ISO (Wii title key derived with Dolphin's common key). Try the usual spots. */
            const char *cand[] = { "../work/disc_dec.img", "work/disc_dec.img",
                                   "E:/Games/wii-decomp/work/disc_dec.img" };
            unsigned k;
            for (k = 0; k < sizeof cand / sizeof cand[0]; k++) {
                if (host_disc_open_image(cand[k])) {
                    printf("boot: disc image %s (default)\n", cand[k]);
                    break;
                }
            }
        }
    }
    /* The console's boot clocks. 0x800000f8 is OSBusClock and 0x800000fc OSCoreClock; 0x800000f4
     * is NOT a clock - __start (0x8000409c..0x80004110) loads it as a pointer to the loader's
     * relocation table, walks it and writes the aligned result to OSBootInfo.arenaHi (0x80000034)
     * and 0x80003110. Writing 0x1D000000 there made __start relocate 486 MHz of garbage and set the
     * MEM1 arena hi to 0x817d22c0, which in turn made the game's own heap 19 MB short of what
     * MEMCreateExpHeapEx needs for its first carve. Left zero: the console loader's value. */
    extern void wr32(u32 a, u32 v);
    wr32(0x800000f8u, 0x0E7BE2C0u);   /* OSBusClock 243 MHz */
    wr32(0x800000fcu, 0x1D000000u);   /* OSCoreClock 486 MHz */
    extern void hal_defaults(void);
    hal_defaults();
    printf("boot: clocks set bus=%08x core=%08x\n", rd32(0x800000f8u), rd32(0x800000fcu));

    /* the game's entry: __start at 0x8000403c. The PPC ABI gives it r3..r10 from the loader
     * (all the boot uses is the disc context the SDK sets up itself). */
    TcArgs a = {0};
    a.r[0] = 0;               /* r3 */
    a.r[1] = 0;               /* r4 */
    a.r[2] = 0;               /* r5 */
    a.r[3] = 0;               /* r6 */
    a.r[4] = 0;               /* r7 */
    a.r[5] = 0;               /* r8 */
    a.r[6] = 0;               /* r9 */
    a.r[7] = 0;               /* r10 */

    { extern void gx_tex_selftest(void); gx_tex_selftest(); }
    if (!render_init()) {
        fputs("boot: renderer unavailable; continuing headless", stdout); putchar(10);
    }
    { extern void render_tick(void); render_tick(); }   /* prove one frame presents */
    printf("boot: entering __start (0x8000403c)\n");
    CreateThread(NULL, 0, watcher, NULL, 0, NULL);
    CreateThread(NULL, 0, di_thread, NULL, 0, NULL);
    u32 rv = tc_call(0x8000403cu, &a);
    printf("boot: __start returned 0x%08x after %u call(s)\n", rv, 0);
    return 0;
}
