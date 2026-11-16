#include "tc_rt.h"

s32 fn_800f8a08(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    r3 = param_1;
    r5 = 0u;
    for (;;) {
        r4 = (u32)rd8(r3);
        if ((u32)(s8)r4 == 0u) break;
        r0 = (u32)(s8)r4;
        r5 = r5 * 0xau;
        if (r0 != 0x20u) {
            r5 = r5 + r0 - 0x30u;
        } else {
            if (r5 != 0u) {
                return (s32)r5;
            }
        }
        r3 = r3 + 1u;
    }
    return (s32)r5;
}
