#include "tc_rt.h"

void fn_801dfec0(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
    r31 = r3;
    r3 = tc_call(0x801ddb58u, &a);
    r0 = rd32(r3 + 4u);
    wr32(param_1, rd32(r3));
    wr32(param_1 + 4u, r0);
    wr32(param_1 + 8u, rd32(r3 + 8u));
    a.r[0] = param_1;
    a.r[1] = r31;
    a.r[2] = param_1;
    (void)tc_call(0x802343a4u, &a);
    f1 = (f64)rdf32(0x805761f0u);
    r0 = 0u;
    f0 = (f64)rdf32(param_1);
    wrf32d(param_1 + 4u, f1);
    if ((f1 == f0 && f1 == f1) && f1 == (f64)rdf32(param_1 + 8u)) {
        r0 = 1u;
    }
    if (r0 == 0u) {
        a.r[0] = param_1;
        a.r[1] = param_1;
        (void)tc_call(0x802343e4u, &a);
    }
    return;
}
