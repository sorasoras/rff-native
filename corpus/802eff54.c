#include "tc_rt.h"

f64 fn_802eff54(f64 param_1)
{
    f64 f0 = 0.0, f4 = 0.0;
    f0 = ppc_frsqrte(param_1);
    f4 = (f64)(f32)(f0 * f0);
    f0 = (f64)(f32)(f0 * (f64)rdf32(0x80577518u));
    f4 = ppc_fnmsubs(f4, param_1, (f64)rdf32(0x8057751cu));
    f0 = (f64)(f32)(f4 * f0);
    return f0;
}
