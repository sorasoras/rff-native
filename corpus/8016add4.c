#include "tc_rt.h"

void fn_8016add4(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x1bcu), &a);
    a.r[0] = param_2;
    a.r[1] = r3;
    a.r[2] = 1u;
    a.r[3] = 1u;
    a.f[0] = (f64)rdf32(0x80574c80u);
    (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
    a.r[0] = param_2;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = (f64)rdf32(0x80574c80u);
    (void)tc_call(rd32(rd32(param_2) + 0x50u), &a);
    r0 = rd32(param_2 + 0x9cu);
    wr32(param_2 + 0x1b0u, 1u);
    r0 = r0 | 0x24000000u;
    wr32(param_2 + 0x9cu, r0);
    return;
}
