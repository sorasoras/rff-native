#include "tc_rt.h"

void fn_801e1b20(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1 + 0x24u) + 0x28u), &a);
    r4 = tc_lastr4();
    f2 = (f64)rdf32(0x805761f0u);
    f0 = (f64)(f32)((f64)rdf32(param_1 + 0x28u) - f1);
    wrf32d(param_1 + 0x28u, f0);
    if (!(f2 > f0)) {
        f2 = f0;
    }
    wrf32d(param_1 + 0x28u, f2);
    r3 = rd32(param_1);
    f0 = (f64)rdf32(0x805761f0u);
    wrf32d(r3 + 0xd0u, (f64)(f32)f2);
    wr32(r3 + 0xccu, 1u);
    f1 = (f64)rdf32(param_1 + 0x28u);
    if (!(f1 > f0)) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        r3 = tc_call(rd32(rd32(param_1 + 0x24u) + 0x30u), &a);
        a.r[0] = param_1;
        a.r[1] = r3;
        (void)tc_call(0x801dd9ecu, &a);
        a.r[0] = param_1;
        r3 = tc_call(0x801dda54u, &a);
        a.r[0] = 0x239fu;
        a.r[1] = r3;
        (void)tc_call(0x801dc4b4u, &a);
        wrf32d(rd32(param_1 + 0x1cu) + 0x18u, (f64)rdf32(0x80576218u));
        wr32(rd32(param_1) + 0xccu, 0u);
        a.r[0] = param_1;
        r3 = tc_call(0x801ddaf4u, &a);
        a.f[0] = (f64)rdf32(0x805762d8u);
        a.f[1] = (f64)rdf32(0x80576220u);
        a.r[0] = param_1;
        a.r[1] = 0x52u;
        a.r[2] = r3;
        (void)tc_call(0x801dda7cu, &a);
    }
    return;
}
