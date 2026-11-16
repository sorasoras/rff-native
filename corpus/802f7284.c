#include "tc_rt.h"

void fn_802f7284(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x24u), &a);
    wr32(r3 + 0x18u, param_2);
    return;
}
