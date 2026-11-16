#include "tc_rt.h"

void fn_800f8a4c(u32 param_1, u32 param_r4, u32 param_r5)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    r3 = param_1;
    r7 = 0u;
    for (;;) {
        r6 = (u32)rd8(r3);
        if ((u32)(s8)r6 == 0u) break;
        r0 = (u32)(s8)r6;
        if (r0 != 0x20u) {
            r7 = r7 * 0xau;
            r7 = r7 + r0 - 0x30u;
        }
        r3 = r3 + 1u;
    }
    a.r[0] = r7;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    (void)tc_call(0x800f8a84u, &a);
    return;
}
