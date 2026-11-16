#include "tc_rt.h"

void fn_80042190(u32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0;
    f3 = (f64)rdf32(param_2 + 8u);
    f2 = (f64)(f32)((f64)rdf32(param_1 + 8u) * f3);
    f1 = (f64)(f32)((f64)rdf32(param_1 + 0x18u) * f3);
    f6 = (f64)rdf32(param_2 + 4u);
    f0 = (f64)(f32)((f64)rdf32(param_1 + 0x28u) * f3);
    f5 = (f64)(f32)((f64)rdf32(param_1 + 4u) * f6);
    f9 = (f64)rdf32(param_2);
    f4 = (f64)(f32)((f64)rdf32(param_1 + 0x14u) * f6);
    f3 = (f64)(f32)((f64)rdf32(param_1 + 0x24u) * f6);
    f8 = (f64)(f32)((f64)rdf32(param_1) * f9);
    f6 = (f64)rdf32(param_1 + 0x20u);
    f7 = (f64)(f32)((f64)rdf32(param_1 + 0x10u) * f9);
    wrf32d(param_1 + 4u, f5);
    wrf32d(param_1, f8);
    wrf32d(param_1 + 0x10u, f7);
    wrf32d(param_1 + 0x20u, (f64)(f32)(f6 * f9));
    wrf32d(param_1 + 0x14u, f4);
    wrf32d(param_1 + 0x24u, f3);
    wrf32d(param_1 + 8u, f2);
    wrf32d(param_1 + 0x18u, f1);
    wrf32d(param_1 + 0x28u, f0);
    return;
}
