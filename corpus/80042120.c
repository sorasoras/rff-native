#include "tc_rt.h"

void fn_80042120(f64 param_1, f64 param_2, f64 param_3, u32 param_4)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0;
    f9 = (f64)(f32)((f64)rdf32(param_4 + 0x10u) * param_1);
    f8 = (f64)(f32)((f64)rdf32(param_4 + 0x20u) * param_1);
    f7 = (f64)(f32)((f64)rdf32(param_4 + 4u) * param_2);
    f5 = (f64)(f32)((f64)rdf32(param_4 + 0x24u) * param_2);
    f6 = (f64)(f32)((f64)rdf32(param_4 + 0x14u) * param_2);
    f0 = (f64)rdf32(param_4 + 0x28u);
    f2 = (f64)(f32)((f64)rdf32(param_4 + 8u) * param_3);
    f1 = (f64)(f32)((f64)rdf32(param_4 + 0x18u) * param_3);
    wrf32d(param_4, (f64)(f32)((f64)rdf32(param_4) * param_1));
    f0 = (f64)(f32)(f0 * param_3);
    wrf32d(param_4 + 0x10u, f9);
    wrf32d(param_4 + 0x20u, f8);
    wrf32d(param_4 + 4u, f7);
    wrf32d(param_4 + 0x14u, f6);
    wrf32d(param_4 + 0x24u, f5);
    wrf32d(param_4 + 8u, f2);
    wrf32d(param_4 + 0x18u, f1);
    wrf32d(param_4 + 0x28u, f0);
    return;
}
