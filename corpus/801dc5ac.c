#include "tc_rt.h"

void fn_801dc5ac(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.f[0] = (f64)rdf32((u32)param_1 + 0x20u);
    a.f[1] = (f64)rdf32((u32)param_1 + 0x24u);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = (u32)param_1 + 8u;
    a.r[3] = param_2;
    a.r[4] = 0u;
    a.r[5] = rd32((u32)param_1 + 0x30u);
    (void)tc_call(0x8006f570u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8006ff58u, &a);
    r3 = rd32((u32)param_1 + 0x30u);
    wr32((u32)param_1 + 0x1a0u, 1u);
    wr32((u32)param_1 + 0x19cu, r3);
    wr32((u32)param_1 + 0x30u, 0u);
    return;
}
