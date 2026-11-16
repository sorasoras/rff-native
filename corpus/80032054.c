#include "tc_rt.h"

s32 fn_80032054(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_1 == 0u) {
        r31 = 0u;
    } else {
        r31 = (u32)param_2 + (u32)param_1;
    }
    if (r31 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = r31;
        a.r[1] = (u32)param_2;
        (void)tc_call(0x80031fe0u, &a);
        r3 = r31;
    }
    return (s32)r3;
}
