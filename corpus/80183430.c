#include "tc_rt.h"

u32 fn_80183430(u32 param_r4, u32 param_r5, u32 param_r6, u32 param_r3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = (u32)(s8)param_r6;
    r3 = tc_call(0x80183414u, &a);
    r3 = rd32(r3);
    return r3;
}
