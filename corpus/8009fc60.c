#include "tc_rt.h"

u32 fn_8009fc60(u32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 r3 = 0, r28 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r28 = (u32)param_3;
    r31 = 0u;
    r30 = 0u;
    while (r30 < param_4) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = r28;
        r3 = tc_call(0x8009fcd4u, &a);
        if ((u32)(s8)r3 != 0u) {
            r31 = 1u;
            return r31;
        }
        r30 = r30 + 1u;
        r28 = r28 + 8u;
    }
    return r31;
}
