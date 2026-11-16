#include "tc_rt.h"

f64 fn_80045764(f64 param_1, u32 param_2)
{
    f64 f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0;
    f6 = (f64)rdf32(0x80572120u);
    f9 = (f64)(f32)((f64)rdf32(0x8057211cu) - param_1);
    f8 = (f64)(f32)(f9 * f9);
    f7 = (f64)(f32)(f6 * (f64)(f32)(param_1 * f8));
    f6 = (f64)(f32)(f6 * (f64)(f32)(param_1 * (f64)(f32)(f9 * param_1)));
    return ppc_fmadds((f64)(f32)(param_1 * (f64)(f32)(param_1 * param_1)), (f64)rdf32(param_2 + 0xcu), ppc_fmadds(f6, (f64)rdf32(param_2 + 8u), ppc_fmadds((f64)(f32)(f9 * f8), (f64)rdf32(param_2), (f64)(f32)(f7 * (f64)rdf32(param_2 + 4u)))));
}
