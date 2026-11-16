#include "tc_rt.h"

s32 fn_8009ab48(u32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_3;
    a.r[2] = param_4;
    a.r[3] = (u32)(s8)param_2;
    r3 = tc_call(0x800a6adcu, &a);
    r3 = (u32)(s8)r3;
    return (s32)r3;
}
