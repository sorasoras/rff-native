#include "tc_rt.h"

void fn_800457b8(f64 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f6 = 0.0, f9 = 0.0;
    f9 = (f64)(f32)(param_1 * param_1);
    f6 = (f64)rdf32(param_3);
    f4 = (f64)rdf32(param_3 + 4u);
    f9 = ppc_fmsubs((f64)rdf32(0x80572120u), f9, (f64)(f32)((f64)rdf32(0x80572118u) * (f64)(f32)(param_1 * f9)));
    f2 = (f64)rdf32(param_3 + 8u);
    f1 = ppc_fmadds(f9, (f64)rdf32(0x8057211cu), (f64)rdf32(0x80572140u));
    f3 = ppc_fmadds(f1, (f64)(f32)((f64)rdf32(param_4 + 4u) - f4), f4);
    f0 = ppc_fmadds(f1, (f64)(f32)((f64)rdf32(param_4 + 8u) - f2), f2);
    wrf32d(param_2, ppc_fmadds(f1, (f64)(f32)((f64)rdf32(param_4) - f6), f6));
    wrf32d(param_2 + 4u, f3);
    wrf32d(param_2 + 8u, f0);
    return;
}
