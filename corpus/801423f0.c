#include "tc_rt.h"

u32 fn_801423f0(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    r3 = tc_call(0x801423ccu, &a);
    r3 = (u32)rd8(r3);
    return r3;
}
