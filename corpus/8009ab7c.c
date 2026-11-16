#include "tc_rt.h"

s32 fn_8009ab7c(u32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_4;
    a.r[1] = param_1;
    a.r[2] = param_2;
    a.r[3] = (u32)(s8)param_3;
    r3 = tc_call(0x800a6ce0u, &a);
    r3 = (u32)(s8)r3;
    return (s32)r3;
}
