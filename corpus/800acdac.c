#include "tc_rt.h"

void fn_800acdac(s32 param_1, u32 param_2, s32 param_3)
{
    u32 c1lt = 0, ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    r6 = rd32(param_2);
    r7 = (u32)param_3 - 1u;
    if ((s32)(r6 + r7) <= 16) {
        c1lt = (s32)r7 < 0;
        r8 = param_2 + 4u;
        r6 = (u32)param_1 + ((r6 << 2u) & 0xfffffffcu) + 0x88u;
        r9 = 0u;
        if ((s32)r7 <= 0) {
            return;
        }
        r4 = r7 - 8u;
        if ((s32)r7 > 8) {
            r5 = 0u;
            if (!c1lt && (s32)r7 <= 2147483646) {
                r5 = 1u;
            }
            if (r5 != 0u) {
                ctr = ((r4 + 7u) >> 3u) & 0x1fffffffu;
                if ((s32)r4 > 0) {
                    do {
                        r9 = r9 + 8u;
                        wr32(r6, rd32(r8));
                        wr32(r6 + 4u, rd32(r8 + 4u));
                        wr32(r6 + 8u, rd32(r8 + 8u));
                        wr32(r6 + 0xcu, rd32(r8 + 0xcu));
                        wr32(r6 + 0x10u, rd32(r8 + 0x10u));
                        wr32(r6 + 0x14u, rd32(r8 + 0x14u));
                        wr32(r6 + 0x18u, rd32(r8 + 0x18u));
                        r0 = rd32(r8 + 0x1cu);
                        r8 = r8 + 0x20u;
                        wr32(r6 + 0x1cu, r0);
                        r6 = r6 + 0x20u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        ctr = r7 - r9;
        if ((s32)r9 >= (s32)r7) {
            return;
        }
        do {
            r0 = rd32(r8);
            r8 = r8 + 4u;
            wr32(r6, r0);
            r6 = r6 + 4u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        return;
    }
    return;
}
