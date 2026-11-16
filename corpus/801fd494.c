#include "tc_rt.h"

s32 fn_801fd494(s32 param_1, u32 param_r4, u32 param_r5)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    (void)tc_call(0x801fa3a4u, &a);
    wr32((u32)param_1 + 0xc8u, 0x80377130u);
    return param_1;
}
