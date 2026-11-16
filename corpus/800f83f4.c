#include "tc_rt.h"

void fn_800f83f4(u32 param_1, s32 param_2)
{
    u32 c1lt = 0, ctr = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0;
    c1lt = param_2 < 0;
    r3 = rd32(param_1 + 0x1cu);
    r8 = 0u;
    if (param_2 > 0) {
        r6 = (u32)param_2 - 8u;
        if (param_2 > 8) {
            r7 = 0u;
            if (!c1lt && param_2 <= 2147483646) {
                r7 = 1u;
            }
            if (r7 != 0u) {
                ctr = ((r6 + 7u) >> 3u) & 0x1fffffffu;
                if ((s32)r6 > 0) {
                    do {
                        r3 = rd32(r3 + 0x18u);
                        r8 = r8 + 8u;
                        r3 = rd32(r3 + 0x18u);
                        r3 = rd32(r3 + 0x18u);
                        r3 = rd32(r3 + 0x18u);
                        r3 = rd32(r3 + 0x18u);
                        r3 = rd32(r3 + 0x18u);
                        r3 = rd32(r3 + 0x18u);
                        r3 = rd32(r3 + 0x18u);
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        ctr = (u32)param_2 - r8;
        if ((s32)r8 >= param_2) {
            return;
        }
        do {
            r3 = rd32(r3 + 0x18u);
            ctr = ctr - 1u;
        } while (ctr != 0u);
        return;
    }
    return;
}
