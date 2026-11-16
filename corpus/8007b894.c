#include "tc_rt.h"

u32 fn_8007b894(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8004d97cu, &a);
    f0 = (f64)rdf32(param_2);
    r31 = r3;
    f1 = (f64)rdf32(param_2 + 0x10u);
    f3 = (f64)(f32)(f0 * f0);
    f0 = (f64)rdf32(param_2 + 0x20u);
    a.f[0] = (f64)(f32)((f64)(f32)(f0 * f0) + (f64)(f32)(f3 + (f64)(f32)(f1 * f1)));
    f1 = tc_callf(0x80262ec0u, &a);
    f0 = (f64)rdf32(param_2 + 4u);
    f31 = (f64)(f32)f1;
    f1 = (f64)rdf32(param_2 + 0x14u);
    f3 = (f64)(f32)(f0 * f0);
    f0 = (f64)rdf32(param_2 + 0x24u);
    a.f[0] = (f64)(f32)((f64)(f32)(f0 * f0) + (f64)(f32)(f3 + (f64)(f32)(f1 * f1)));
    f1 = tc_callf(0x80262ec0u, &a);
    f0 = (f64)rdf32(param_2 + 8u);
    f30 = (f64)(f32)f1;
    f1 = (f64)rdf32(param_2 + 0x18u);
    f3 = (f64)(f32)(f0 * f0);
    f0 = (f64)rdf32(param_2 + 0x28u);
    a.f[0] = (f64)(f32)((f64)(f32)(f0 * f0) + (f64)(f32)(f3 + (f64)(f32)(f1 * f1)));
    f1 = tc_callf(0x80262ec0u, &a);
    f0 = (f64)(f32)f1;
    f2 = (f64)rdf32(param_2 + 0xcu);
    f1 = (f64)rdf32(param_2 + 0x1cu);
    f4 = -f0;
    f0 = (f64)rdf32(param_2 + 0x2cu);
    wrf32d(param_1 + 8u, (f64)(f32)(f4 * (f64)rdf32(r31 + 0x10u)));
    wrf32d(param_1 + 0x18u, (f64)(f32)(f4 * (f64)rdf32(r31 + 0x14u)));
    wrf32d(param_1 + 0x28u, (f64)(f32)(f4 * (f64)rdf32(r31 + 0x18u)));
    wrf32d(param_1 + 4u, (f64)(f32)(f30 * (f64)rdf32(r31 + 0x20u)));
    wrf32d(param_1 + 0x14u, (f64)(f32)(f30 * (f64)rdf32(r31 + 0x24u)));
    wrf32d(param_1 + 0x24u, (f64)(f32)(f30 * (f64)rdf32(r31 + 0x28u)));
    wrf32d(param_1, (f64)(f32)(f31 * (f64)rdf32(r31)));
    wrf32d(param_1 + 0x10u, (f64)(f32)(f31 * (f64)rdf32(r31 + 4u)));
    f3 = (f64)(f32)(f31 * (f64)rdf32(r31 + 8u));
    wrf32d(param_1 + 0xcu, f2);
    wrf32d(param_1 + 0x1cu, f1);
    wrf32d(param_1 + 0x20u, f3);
    wrf32d(param_1 + 0x2cu, f0);
    return param_1;
}
