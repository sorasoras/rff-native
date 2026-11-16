#include "tc_rt.h"

void fn_80313dfc(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = rd32(param_2 + 4u);
    a.r[2] = rd32(param_2 + 8u);
    a.r[3] = (u32)rd8(param_2 + 0xcu);
    a.r[4] = 0u;
    r3 = tc_call(0x80313e44u, &a);
    wr32(param_2, rd32(param_2) + r3);
    return;
}
