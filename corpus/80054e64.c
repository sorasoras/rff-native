#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

f64 fn_80054e64(f64 param_1, f64 param_2, f64 param_3, f64 param_4, f64 param_5, f64 param_6, f64 param_7)
{
    f64 f1 = 0.0, f8 = 0.0, f9 = 0.0;
    f9 = (f64)(f32)(param_1 - param_2);
    f8 = (f64)(f32)ppc_fabs(f9);
    if ((f64)rdf32(0x80572340u) > f8) {
        return param_2;
    }
    f1 = (f64)(f32)(param_1 + (f64)(f32)px_fdiv((f64)(f32)(param_4 * (f64)(f32)(f9 * ppc_fmadds(param_5, (f64)(f32)(param_7 - f8), (f64)(f32)(param_6 * (f64)(f32)px_fdiv((f64)(f32)(f9 * (f64)(f32)(param_4 * (f64)(f32)(param_3 - param_2))), f8))))), f8));
    return f1;
}
