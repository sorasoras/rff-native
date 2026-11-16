#include "tc_rt.h"

void fn_801afe50(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 8u, 0u);
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x20cu), &a);
    a.r[0] = param_2;
    a.r[1] = r3;
    a.r[2] = 0u;
    a.r[3] = 1u;
    a.f[0] = (f64)rdf32(0x80575af8u);
    (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
    return;
}
