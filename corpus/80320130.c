#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80320130(u32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f31 = (f64)rdf32(param_2 + 8u);
    f0 = (f64)rdf32(0x805779bcu);
    f30 = (f64)(f32)((f64)rdf32(0x805779c0u) - (f64)(f32)(f31 * f31));
    if (f30 < f0) {
        f30 = f0;
    }
    f6 = (f64)rdf32(0x805779bcu);
    if (!((f30 < f6) || (f30 == f6))) {
        a.f[0] = f30;
        f1 = tc_callf(0x802eff54u, &a);
        f6 = (f64)(f32)(f30 * f1);
    }
    if (!(f6 > (f64)rdf32(0x805779ccu))) {
        f7 = (f64)rdf32(0x805779bcu);
        f8 = (f64)rdf32(0x805779c0u);
    } else {
        f8 = (f64)(f32)px_fdiv((f64)rdf32(param_2 + 4u), f6);
        f7 = (f64)(f32)px_fdiv((f64)rdf32(param_2), -f6);
    }
    f3 = (f64)rdf32(0x805779bcu);
    f5 = (f64)rdf32(param_2);
    f2 = (f64)rdf32(param_2 + 4u);
    f0 = (f64)rdf32(param_2 + 8u);
    wrf32d(param_1, f8);
    wrf32d(param_1 + 4u, f5);
    wrf32d(param_1 + 8u, (f64)(f32)(f31 * f7));
    wrf32d(param_1 + 0xcu, f3);
    wrf32d(param_1 + 0x10u, f7);
    wrf32d(param_1 + 0x14u, f2);
    wrf32d(param_1 + 0x18u, (f64)(f32)(-f8 * f31));
    wrf32d(param_1 + 0x1cu, f3);
    wrf32d(param_1 + 0x20u, f3);
    wrf32d(param_1 + 0x24u, f0);
    wrf32d(param_1 + 0x28u, f6);
    wrf32d(param_1 + 0x2cu, f3);
    return;
}
