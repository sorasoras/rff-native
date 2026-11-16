#include "tc_rt.h"

s32 fn_800a2854(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_3;
    a.r[1] = param_1;
    a.r[2] = param_2;
    r3 = tc_call(0x800a6b80u, &a);
    r3 = (u32)(s8)r3;
    return (s32)r3;
}
