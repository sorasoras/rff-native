#include "tc_rt.h"

void fn_800424c8(u32 param_1, u32 param_2, u32 param_3)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0, f6 = 0.0, f7 = 0.0;
    f2 = (f64)rdf32(param_3 + 4u);
    f7 = (f64)rdf32(param_3);
    f6 = ppc_fmadds((f64)rdf32(param_2), f7, (f64)(f32)((f64)rdf32(param_2 + 4u) * f2));
    f1 = ppc_fmadds((f64)rdf32(param_2 + 0x20u), f7, (f64)(f32)((f64)rdf32(param_2 + 0x24u) * f2));
    f4 = (f64)rdf32(param_3 + 8u);
    f2 = ppc_fmadds((f64)rdf32(param_2 + 0x18u), f4, ppc_fmadds((f64)rdf32(param_2 + 0x10u), f7, (f64)(f32)((f64)rdf32(param_2 + 0x14u) * f2)));
    f0 = ppc_fmadds((f64)rdf32(param_2 + 0x28u), f4, f1);
    wrf32d(param_1, ppc_fmadds((f64)rdf32(param_2 + 8u), f4, f6));
    wrf32d(param_1 + 4u, f2);
    wrf32d(param_1 + 8u, f0);
    return;
}
