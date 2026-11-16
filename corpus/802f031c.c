#include "tc_rt.h"

void fn_802f031c(u32 param_1, u32 param_2, u32 param_3)
{
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f5 = 0.0, f9 = 0.0;
    f2 = (f64)rdf32(param_3);
    f5 = (f64)rdf32(param_3 + 4u);
    f9 = (f64)rdf32(param_3 + 8u);
    f3 = (f64)(f32)((f64)(f32)((f64)rdf32(param_2 + 0x18u) * f9) + (f64)(f32)((f64)(f32)((f64)rdf32(param_2 + 0x10u) * f2) + (f64)(f32)((f64)rdf32(param_2 + 0x14u) * f5)));
    f0 = (f64)(f32)((f64)(f32)((f64)rdf32(param_2 + 0x28u) * f9) + (f64)(f32)((f64)(f32)((f64)rdf32(param_2 + 0x20u) * f2) + (f64)(f32)((f64)rdf32(param_2 + 0x24u) * f5)));
    wrf32d(param_1, (f64)(f32)((f64)(f32)((f64)rdf32(param_2 + 8u) * f9) + (f64)(f32)((f64)(f32)((f64)rdf32(param_2) * f2) + (f64)(f32)((f64)rdf32(param_2 + 4u) * f5))));
    wrf32d(param_1 + 4u, f3);
    wrf32d(param_1 + 8u, f0);
    return;
}
