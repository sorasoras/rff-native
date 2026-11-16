#include "tc_rt.h"

void fn_800cb48c(s32 param_1, u32 param_2)
{
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.f[0] = (f64)rdf32((u32)param_1 + 0x28u);
    f1 = tc_callf(0x80262704u, &a);
    f31 = (f64)(f32)f1;
    a.f[0] = (f64)rdf32((u32)param_1 + 0x28u);
    f1 = tc_callf(0x80262b10u, &a);
    f6 = (f64)(f32)f1;
    f5 = (f64)rdf32(0x80572f6cu);
    f3 = (f64)rdf32(0x80572f68u);
    wrf32d(param_2, f31);
    f2 = (f64)(f32)(f31 - f3);
    wrf32d(param_2 + 4u, f5);
    wrf32d(param_2 + 8u, f6);
    f1 = -(f64)rdf32((u32)param_1 + 0x68u);
    f4 = -(f64)rdf32((u32)param_1 + 0x60u);
    wrf32d(param_2 + 0x10u, f5);
    f1 = (f64)(f32)(f1 * f6);
    wrf32d(param_2 + 0x14u, f3);
    wrf32d(param_2 + 0x18u, f5);
    f1 = ppc_fmadds(f4, f2, f1);
    wrf32d(param_2 + 0x1cu, f5);
    wrf32d(param_2 + 0xcu, f1);
    wrf32d(param_2 + 0x20u, -f6);
    wrf32d(param_2 + 0x24u, f5);
    wrf32d(param_2 + 0x28u, f31);
    wrf32d(param_2 + 0x2cu, ppc_fmsubs(-(f64)rdf32((u32)param_1 + 0x68u), f2, (f64)(f32)(-(f64)rdf32((u32)param_1 + 0x60u) * f6)));
    return;
}
