#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_800923c0(f64 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    f2 = (f64)rdf32(param_4 + 8u);
    f5 = (f64)(f32)((f64)rdf32(param_5 + 8u) - f2);
    if (rdf64(0x805729c0u) == f5) {
        return 0u;
    }
    f2 = (f64)(f32)(param_1 - f2);
    f4 = (f64)rdf32(param_5);
    f3 = (f64)rdf32(param_4);
    r0 = 0u;
    wrf32d(param_3 + 8u, param_1);
    f8 = (f64)(f32)px_fdiv(f2, f5);
    f2 = (f64)rdf32(param_4 + 4u);
    f5 = (f64)rdf32(param_2);
    f7 = (f64)rdf32(param_2 + 0x10u);
    f6 = (f64)rdf32(param_2 + 0xcu);
    f1 = (f64)(f32)(f4 - f3);
    f4 = (f64)rdf32(param_2 + 4u);
    f1 = ppc_fmadds(f8, f1, f3);
    f0 = ppc_fmadds(f8, (f64)(f32)((f64)rdf32(param_5 + 4u) - f2), f2);
    wrf32d(param_3, f1);
    wrf32d(param_3 + 4u, f0);
    if ((((f5 < f1) || (f5 == f1)) && ((f1 < f6) || (f1 == f6))) && (((f4 < f0) || (f4 == f0)) && ((f0 < f7) || (f0 == f7)))) {
        r0 = 1u;
    }
    return r0;
}
