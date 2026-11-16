#include "tc_rt.h"

u32 fn_800f8060(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = param_3;
    if (param_3 == 0u) {
        r3 = 1u;
    } else {
        if ((u32)(s8)rd8(param_3) == 0u) {
            r3 = 0u;
        } else {
            a.r[0] = param_1;
            a.r[1] = param_2;
            r3 = tc_call(0x800f7fecu, &a);
            for (;;) {
                r5 = (u32)rd8(r31);
                r6 = (u32)rd8(r3);
                if ((u32)(s8)r6 != (u32)(s8)r5) break;
                if ((u32)(s8)r5 == 0u) {
                    r3 = 1u;
                    return r3;
                }
                if ((u32)(s8)r6 == 0u) {
                    r3 = 0u;
                    return r3;
                }
                r3 = r3 + 1u;
                r31 = r31 + 1u;
            }
            r3 = 0u;
        }
    }
    return r3;
}
