#include "tc_rt.h"

void fn_800456b8(f64 param_1, f64 param_2, u32 param_3)
{
    f64 f0 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f7 = 0.0, f9 = 0.0, f10 = 0.0;
    f9 = (f64)(f32)(param_1 * param_1);
    f7 = (f64)rdf32(0x80572118u);
    f0 = (f64)rdf32(0x80572120u);
    f3 = (f64)(f32)(param_2 - f0);
    f10 = (f64)(f32)(param_1 * f9);
    f0 = ppc_fnmsubs(f7, param_2, f0);
    f5 = (f64)(f32)(f3 * f9);
    f3 = (f64)(f32)(param_2 - f7);
    f0 = (f64)(f32)(f0 * f9);
    f5 = ppc_fmadds((f64)(f32)(f7 - param_2), f10, f5);
    f7 = ppc_fmsubs(f7, f9, (f64)(f32)(param_1 + f10));
    f3 = ppc_fmadds(f3, f10, f0);
    f4 = (f64)(f32)((f64)rdf32(0x8057211cu) + f5);
    wrf32d(param_3, (f64)(f32)(param_2 * f7));
    wrf32d(param_3 + 4u, f4);
    wrf32d(param_3 + 8u, ppc_fmadds(param_2, param_1, f3));
    wrf32d(param_3 + 0xcu, (f64)(f32)(param_2 * (f64)(f32)(f10 - f9)));
    return;
}
