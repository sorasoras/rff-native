#include "tc_rt.h"

void fn_8004da2c(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x58u);
    a.r[1] = param_2;
    r3 = tc_call(0x80032054u, &a);
    wr32((u32)param_1 + 0x58u, r3);
    a.r[0] = (u32)(s8)rd8((u32)param_1 + 0x68u);
    a.r[1] = rd32((u32)param_1 + 0x5cu);
    a.r[2] = param_2;
    r3 = tc_call(0x80031d44u, &a);
    wr32((u32)param_1 + 0x5cu, r3);
    a.r[0] = (u32)(s8)rd8((u32)param_1 + 0x6au);
    a.r[1] = rd32((u32)param_1 + 0x64u);
    a.r[2] = param_2;
    r3 = tc_call(0x80031d44u, &a);
    wr32((u32)param_1 + 0x64u, r3);
    a.r[0] = (u32)(s8)rd8((u32)param_1 + 0x69u);
    a.r[1] = rd32((u32)param_1 + 0x60u);
    a.r[2] = param_2;
    r3 = tc_call(0x80031d44u, &a);
    wr32((u32)param_1 + 0x60u, r3);
    return;
}
