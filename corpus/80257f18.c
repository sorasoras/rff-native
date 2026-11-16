#include "tc_rt.h"

void fn_80257f18(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0gt = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r4 = param_2;
    wr16(param_1 + 2u, (u16)param_3);
    r7 = 0u;
    wr8(param_1, 0u);
    while ((s32)r7 < 36 && (u32)(s8)rd8(r4) != 0u) {
        r6 = (u32)rd8(r4);
        r5 = param_1 + r7;
        r4 = r4 + 1u;
        r7 = r7 + 1u;
        wr8(r5 + 5u, (u8)(r6 - 0x30u));
    }
    r0 = (u32)rd8(r4);
    wr8(param_1 + 4u, (u8)r7);
    r0 = (u32)(s8)r0;
    if (r0 == 0u) {
        return;
    }
    c0gt = (s32)r0 > 5;
    if ((s32)r0 < 5) {
        return;
    }
    if (!c0gt) {
        r5 = r4 + 1u;
        for (;;) {
            r4 = (u32)rd8(r5);
            if ((u32)(s8)r4 == 0u) {
                if (((u32)rd8(r7 + param_1 + 4u) & 1u) == 0u) {
                    return;
                }
                break;
            }
            if ((u32)(s8)r4 != 0x30u) break;
            r5 = r5 + 1u;
        }
    }
    r6 = param_1 + 5u;
    r5 = r6 + (u32)rd8(param_1 + 4u) - 1u;
    for (;;) {
        r4 = (u32)rd8(r5);
        if (r4 < 9u) {
            wr8(r5, (u8)(r4 + 1u));
            return;
        }
        if (r5 == r6) break;
        wr8(r5, 0u);
        r5 = r5 - 1u;
    }
    wr8(r5, 1u);
    wr16(param_1 + 2u, (u16)((u32)(s16)rd16(param_1 + 2u) + 1u));
    return;
}
