#include "tc_rt.h"

u32 fn_801cb2c0(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x801cb2c4u, &a);
    return r3;
}
