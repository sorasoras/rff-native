#include "tc_rt.h"

u32 fn_802550f0(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    r6 = param_1;
    r0 = 8u;
    r7 = (u32)(s8)rd8(param_1);
    r8 = 4u;
    r9 = 1u;
    r5 = 0u;
    r10 = 0u;
    r11 = 4u;
    if ((u32)param_2 == 3u) {
        r6 = param_1 + 1u;
        r8 = 8u;
        r10 = 0x20u;
        r7 = (u32)(s8)rd8(param_1 + 1u);
        r11 = 8u;
    }
    if ((u32)param_2 == 2u) {
        r8 = 8u;
        r0 = 7u;
        if ((r7 & 1u) != 0u) {
            r5 = 1u;
        }
        r9 = 2u;
    }
    if ((s32)r7 < (s32)r0) {
        r7 = r7 + r5;
        r3 = rd32(param_1 + 8u) + r10;
        wr8(r6, (u8)(r7 + r9));
        r5 = (r7 * r11) + r3;
    } else {
        r0 = r8 - 1u;
        wr8(r6, 8u);
        r5 = ~(r0 | r0) & (r8 + rd32(param_1 + 4u) - 1u);
        wr32(param_1 + 4u, r5 + r8);
    }
    if ((u32)param_2 == 0u) {
        r5 = rd32(r5);
    }
    return r5;
}
