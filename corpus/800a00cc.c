#include "tc_rt.h"

void fn_800a00cc(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(param_3);
    a.r[0] = r31 + 1u;
    a.r[1] = (u32)param_2;
    a.r[2] = param_3;
    a.f[0] = 0.0;
    r3 = tc_call(rd32((u32)param_2 + 8u), &a);
    a.r[0] = r3;
    a.r[1] = param_1;
    (void)tc_call(0x8009f574u, &a);
    wr32(param_3, r31 + 5u);
    return;
}
