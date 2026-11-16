#include "tc_rt.h"

void fn_801f100c(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1);
    a.r[1] = rd32(param_1 + 0x40u);
    a.r[2] = rd32(param_1 + 0x44u);
    r3 = tc_call(0x800fe848u, &a);
    wr32(param_1 + 0x4cu, r3);
    wr32(param_1 + 0x40u, param_2);
    return;
}
