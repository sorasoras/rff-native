#include "tc_rt.h"

u32 fn_8003e34c(u32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f5 = (f64)rdf32(0x80571fbcu);
    f1 = (f64)rdf32(param_2 + 0x10u);
    f31 = (f64)rdf32(0x80571fb8u);
    wrf32d(param_1 + 0x10u, f5);
    wrf32d(param_1, f31);
    wrf32d(param_1 + 0x20u, f5);
    wrf32d(param_1 + 4u, f5);
    wrf32d(param_1 + 0x14u, f31);
    wrf32d(param_1 + 0x24u, f5);
    wrf32d(param_1 + 8u, f5);
    wrf32d(param_1 + 0x18u, f5);
    wrf32d(param_1 + 0x28u, f31);
    wrf32d(param_1 + 0xcu, f5);
    wrf32d(param_1 + 0x1cu, f5);
    wrf32d(param_1 + 0x2cu, f5);
    if (f5 != f1) {
        a.f[0] = f1;
        f1 = tc_callf(0x80262704u, &a);
        f31 = (f64)(f32)f1;
        a.f[0] = (f64)rdf32(param_2 + 0x10u);
        f1 = tc_callf(0x80262b10u, &a);
        f5 = (f64)(f32)f1;
    }
    f1 = (f64)rdf32(param_2 + 0xcu);
    f3 = (f64)rdf32(0x80571fc4u);
    f4 = (f64)(f32)(f1 * f31);
    f2 = (f64)rdf32(param_2 + 8u);
    f6 = (f64)(f32)(f1 * f5);
    f0 = (f64)(f32)(f3 + (f64)rdf32(param_2));
    f7 = (f64)(f32)(f2 * f5);
    f8 = (f64)(f32)(f2 * f31);
    f5 = (f64)rdf32(0x80571fc0u);
    f2 = (f64)(f32)((f64)rdf32(param_2 + 4u) - f3);
    f1 = ppc_fnmsubs(f0, f4, f3);
    wrf32d(param_1 + 4u, f7);
    f0 = ppc_fmadds(f0, f6, f3);
    wrf32d(param_1, f8);
    f1 = ppc_fmadds(f2, f7, f1);
    f0 = ppc_fmadds(f2, f8, f0);
    wrf32d(param_1 + 0x14u, f4);
    wrf32d(param_1 + 0x10u, (f64)(f32)(f5 * f6));
    wrf32d(param_1 + 0xcu, f1);
    wrf32d(param_1 + 0x1cu, f0);
    return param_1;
}
