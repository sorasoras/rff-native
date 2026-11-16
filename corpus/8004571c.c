#include "tc_rt.h"

f64 fn_8004571c(f64 param_1, f64 param_2, f64 param_3, f64 param_4, f64 param_5)
{
    f64 f0 = 0.0, f5 = 0.0, f8 = 0.0, f10 = 0.0, f11 = 0.0;
    f10 = (f64)(f32)(param_5 * param_5);
    f8 = (f64)rdf32(0x80572118u);
    f11 = (f64)(f32)(param_5 * f10);
    f5 = ppc_fmsubs(f8, f11, (f64)(f32)((f64)rdf32(0x80572120u) * f10));
    f8 = (f64)(f32)(f11 + ppc_fnmsubs(f8, f10, param_5));
    f10 = (f64)(f32)(f11 - f10);
    f0 = (f64)(f32)((f64)rdf32(0x80572124u) * f5);
    f5 = (f64)(f32)((f64)rdf32(0x8057211cu) + f5);
    f0 = (f64)(f32)(param_3 * f0);
    f0 = ppc_fmadds(param_1, f5, f0);
    f0 = ppc_fmadds(param_2, f8, f0);
    return ppc_fmadds(param_4, f10, f0);
}
