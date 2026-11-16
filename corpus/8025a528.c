#include "tc_rt.h"

void fn_8025a528(s32 param_1, s32 param_2)
{
    u32 ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    r4 = (u32)param_2;
    if (param_2 >= 0) {
        r7 = (u32)rd8((u32)param_1 + 4u);
        if (param_2 >= (s32)r7) {
            return;
        }
        r6 = (u32)param_1 + (u32)param_2;
        r8 = r6 + 5u;
        r6 = (u32)(s8)((u32)rd8(r6 + 5u) - 0x30u);
        if (r6 != 5u) {
            r0 = r6 ^ 5u;
            r5 = (u32)((s32)r0 >> 1);
            r0 = r0 & r6;
            r0 = r5 - r0;
            r5 = (r0 >> 0x1fu) & 1u;
        } else {
            r5 = (u32)param_1 + r7 + 5u;
            do {
                r5 = r5 - 1u;
            } while (r5 > r8 && (u32)rd8(r5) == 0x30u);
            if (r5 != r8) {
                r5 = 1u;
            } else {
                r5 = (u32)rd8(r8 - 1u) & 1u;
            }
        }
        ctr = (u32)param_2;
        if ((u32)param_2 != 0u) {
            do {
                r8 = r8 - 1u;
                r5 = (u32)rd8(r8) + r5;
                r6 = (u32)(s8)(r5 - 0x30u);
                r0 = r6 ^ 9u;
                r5 = (u32)((s32)r0 >> 1);
                r0 = r0 & r6;
                r0 = r5 - r0;
                r5 = (r0 >> 0x1fu) & 1u;
                if (r5 == 0u && r6 != 0u) {
                    wr8(r8, (u8)(r6 + 0x30u));
                    break;
                }
                r4 = r4 - 1u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
        if (r5 != 0u) {
            r5 = (u32)(s16)rd16((u32)param_1 + 2u);
            wr8((u32)param_1 + 4u, 1u);
            wr16((u32)param_1 + 2u, (u16)(r5 + 1u));
            wr8((u32)param_1 + 5u, 0x31u);
            return;
        }
        if (r4 != 0u) {
            wr8((u32)param_1 + 4u, (u8)r4);
            return;
        }
    }
    wr16((u32)param_1 + 2u, 0u);
    wr8((u32)param_1 + 4u, 1u);
    wr8((u32)param_1 + 5u, 0x30u);
    return;
}
