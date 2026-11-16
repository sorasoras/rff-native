#include "tc_rt.h"

void fn_801d6cbc(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801d5530u, &a);
    r0 = rd32((u32)param_1 + 0x68u);
    wr32((u32)param_1 + 0x70u, 0u);
    if (r0 == 0u) {
        a.f[0] = (f64)rdf32(0x80576054u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801d5548u, &a);
        wr32((u32)param_1 + 0x70u, 2u);
    }
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801d55f8u, &a);
    a.f[0] = (f64)rdf32(0x8057600cu);
    a.f[1] = (f64)rdf32(r3);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801d5560u, &a);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801d55e4u, &a);
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0x23f0u;
    a.r[2] = r3;
    (void)tc_call(0x8010a794u, &a);
    wr32((u32)param_1 + 0x10u, 0u);
    return;
}
