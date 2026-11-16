#include "tc_rt.h"

void fn_802eaa00(u32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f2 = (f64)rdf32(0x805774b8u);
    f1 = (f64)(f32)((f64)rdf32(0x805774bcu) * (f64)rdf32(param_2 + 8u));
    wrf32d(0x817fdfd8u, f2);
    wrf32d(0x817fdfdcu, f2);
    a.f[0] = f1;
    f1 = tc_callf(0x802effe0u, &a);
    f31 = f1;
    a.f[0] = (f64)(f32)((f64)rdf32(0x805774bcu) * (f64)rdf32(param_2 + 8u));
    f1 = tc_callf(0x802eff78u, &a);
    f3 = (f64)rdf32(param_2 + 0xcu);
    f2 = (f64)rdf32(0x817fdfd8u);
    f9 = (f64)(f32)(f1 * f3);
    f8 = (f64)rdf32(0x805774c0u);
    f11 = (f64)(f32)(f31 * f3);
    f0 = (f64)rdf32(param_2 + 0x10u);
    f6 = (f64)rdf32(0x817fdfdcu);
    f4 = -f2;
    f12 = (f64)(f32)(-f1 * f0);
    f10 = (f64)(f32)(f31 * f0);
    f5 = (f64)(f32)((f64)rdf32(param_2) + f2);
    f0 = (f64)rdf32(0x805774c4u);
    f2 = (f64)(f32)((f64)rdf32(param_2 + 4u) + f6);
    wrf32d(param_1, f11);
    f7 = -f6;
    wrf32d(param_1 + 4u, f12);
    wrf32d(param_1 + 8u, f8);
    f1 = (f64)(f32)(f2 + (f64)(f32)(f9 * f4));
    f4 = (f64)(f32)(f5 + (f64)(f32)(f11 * f4));
    wrf32d(param_1 + 0x10u, f9);
    wrf32d(param_1 + 0x14u, f10);
    f1 = (f64)(f32)((f64)(f32)(f10 * f7) + f1);
    wrf32d(param_1 + 0x18u, f8);
    wrf32d(param_1 + 0xcu, (f64)(f32)((f64)(f32)(f12 * f7) + f4));
    wrf32d(param_1 + 0x1cu, f1);
    wrf32d(param_1 + 0x20u, f8);
    wrf32d(param_1 + 0x24u, f8);
    wrf32d(param_1 + 0x28u, f0);
    wrf32d(param_1 + 0x2cu, f8);
    return;
}
