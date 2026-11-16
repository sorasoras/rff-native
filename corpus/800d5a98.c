#include "tc_rt.h"

void fn_800d5a98(f64 param_1, f64 param_2, f64 param_3, f64 param_4)
{
    f64 f0 = 0.0, f5 = 0.0, f6 = 0.0;
    TcArgs a = {0};
    f6 = (f64)rdf32(0x80570790u);
    f5 = (f64)rdf32(0x80570794u);
    f0 = (f64)rdf32(0x80573144u);
    a.r[0] = 1u;
    (void)tc_call(0x8004ca7cu, &a);
    a.r[0] = 0u;
    a.r[1] = 0u;
    (void)tc_call(0x8004cb58u, &a);
    a.f[0] = (f64)(f32)(param_1 - f6);
    a.f[1] = (f64)(f32)(param_2 - f5);
    a.f[2] = ppc_fmadds(f0, f6, param_3);
    a.f[3] = ppc_fmadds(f0, f5, param_4);
    a.f[4] = (f64)rdf32(0x805711f8u);
    a.f[5] = (f64)rdf32(0x80570798u);
    a.f[6] = (f64)rdf32(0x8057079cu);
    a.f[7] = (f64)rdf32(0x805707a0u);
    (void)tc_call(0x800a3928u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x8004ca7cu, &a);
    return;
}
