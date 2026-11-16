#include "tc_rt.h"

s32 fn_801c0da0(u32 param_1, s32 param_2)
{
    u32 c0gt = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = 0u;
    for (;;) {
        a.r[0] = param_1;
        a.r[1] = r30;
        a.r[2] = 0u;
        r3 = tc_call(0x801c0edcu, &a);
        c0gt = (s32)r3 > param_2;
        if (r3 == (u32)param_2) break;
        if (c0gt) {
            return (s32)r31;
        }
        r30 = r30 + 1u;
        if ((s32)r30 >= 29) {
            return (s32)r31;
        }
    }
    r31 = (u32)(s8)rd8(r30 - 0x7fcc43ecu);
    return (s32)r31;
}
