#include "tc_rt.h"

s32 fn_800a2830(u32 param_r3, u32 param_r4, u32 param_r5)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    r3 = tc_call(0x800a6a24u, &a);
    r3 = (u32)(s8)r3;
    return (s32)r3;
}
