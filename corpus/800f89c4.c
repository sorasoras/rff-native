#include "tc_rt.h"

s32 fn_800f89c4(u32 param_1, s32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r5 = 0;
    r3 = param_1;
    r5 = 0u;
    ctr = (u32)param_2;
    if (param_2 > 0) {
        do {
            r5 = r5 * 0xau;
            r0 = (u32)(s8)rd8(r3);
            if (r0 != 0x20u) {
                if (r0 == 0u) {
                    return (s32)r5;
                }
                r5 = r5 + r0 - 0x30u;
            }
            r3 = r3 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    return (s32)r5;
}
