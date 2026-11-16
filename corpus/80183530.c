#include "tc_rt.h"

u32 fn_80183530(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = rd32(param_1);
    a.r[2] = param_2;
    a.r[3] = (u32)(s8)rd32(param_1 + 0x18u);
    r3 = tc_call(0x80183414u, &a);
    r3 = rd32(r3) & 0xffffu;
    return r3;
}
