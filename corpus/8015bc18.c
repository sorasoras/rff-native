#include "tc_rt.h"

void fn_8015bc18(s32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    a.f[0] = (f64)rdf32((u32)param_1 + 0x174u);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = rd32((u32)param_1 + 0x16cu);
    a.r[3] = rd32((u32)param_1 + 0x170u);
    a.r[4] = param_3;
    (void)tc_call(0x8015bc2cu, &a);
    return;
}
