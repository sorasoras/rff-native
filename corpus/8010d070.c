#include "tc_rt.h"

void fn_8010d070(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r7 = 0, r8 = 0;
    r3 = (u32)param_1;
    c0lt = param_1 < 6;
    if ((u32)param_1 != 6u) {
        if (!c0lt) {
            c0lt = param_1 < 10;
            if ((u32)param_1 != 0xau) {
                if (!c0lt) {
                    return;
                }
                r0 = rd32(0x80339460u);
                r8 = rd32(0x80339464u);
                r7 = rd32(0x80339468u);
                if (r0 != 9u) {
                    r0 = (r0 << 3u) & 0xfffffff8u;
                    r4 = r0 - 0x7fb6d800u;
                    wr32(r4 + 0x400u, 0u);
                    wr32(r4 + 0x404u, 0u);
                }
                if (r8 != 9u) {
                    r4 = ((r8 << 3u) & 0xfffffff8u) - 0x7fb6d800u;
                    wr32(r4 + 0x400u, 0u);
                    wr32(r4 + 0x404u, 0u);
                }
                if (r7 != 9u) {
                    r4 = ((r7 << 3u) & 0xfffffff8u) - 0x7fb6d800u;
                    wr32(r4 + 0x400u, 0u);
                    wr32(r4 + 0x404u, 0u);
                }
                if ((u32)param_1 == 9u) {
                    r3 = 8u;
                }
                r3 = ((r3 << 3u) & 0xfffffff8u) - 0x7fb6d800u;
                wr32(r3 + 0x400u, 1u);
                wr32(r3 + 0x404u, 6u);
                return;
            }
        } else {
            c0lt = param_1 < 1;
            if ((u32)param_1 != 1u) {
                if (c0lt) {
                    return;
                }
                wr32(0x80492c10u, 0u);
                wr32(0x80492c14u, 0u);
                wr32(0x80492c18u, 0u);
                wr32(0x80492c1cu, 0u);
                wr32(0x80492c20u, 0u);
                wr32(0x80492c24u, 0u);
                wr32(0x80492c28u, 0u);
                wr32(0x80492c2cu, 0u);
            }
        }
    }
    r3 = (((u32)param_1 << 3u) & 0xfffffff8u) - 0x7fb6d800u;
    wr32(r3 + 0x400u, 1u);
    wr32(r3 + 0x404u, 1u);
    return;
}
