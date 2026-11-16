#include "tc_rt.h"

void fn_8009ffa4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(param_3);
    a.r[0] = r31 + 1u;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(param_2), &a);
    r3 = r3 & 0xffffu;
    a.r[0] = r3;
    a.r[1] = param_1;
    (void)tc_call(0x8009f49cu, &a);
    wr32(param_3, r31 + 3u);
    return;
}
