#include "tc_rt.h"

u32 fn_800db7ac(f64 param_1, s32 param_2, u32 param_3)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    f3 = (f64)(f32)((f64)rdf32((u32)param_2 + 0x28u) - param_1);
    if ((f64)rdf32(0x80573a14u) < f3) {
        f3 = (f64)(f32)(f3 - (f64)rdf32(0x80573a18u));
    } else {
        f0 = (f64)rdf32(0x80573a1cu);
        if ((f0 > f3) || (f0 == f3)) {
            f3 = (f64)(f32)((f64)rdf32(0x80573a18u) + f3);
        }
    }
    f0 = (f64)rdf32(0x80573a34u);
    f2 = (f64)(f32)ppc_fabs(f3);
    if ((f2 < f0) || (f2 == f0)) {
        wrf32d(param_3, (f64)(f32)(f3 + param_1));
        return 1u;
    }
    if (f3 > f0) {
        f0 = (f64)(f32)(f0 + param_1);
        wrf32d(param_3, f0);
    } else {
        f0 = (f64)rdf32(0x80573a38u);
        if (f3 < f0) {
            f0 = (f64)(f32)(f0 + param_1);
            wrf32d(param_3, f0);
        }
    }
    f1 = (f64)rdf32(param_3);
    if ((f64)rdf32(0x80573a14u) < f1) {
        f1 = (f64)(f32)(f1 - (f64)rdf32(0x80573a18u));
    } else {
        f0 = (f64)rdf32(0x80573a1cu);
        if ((f0 > f1) || (f0 == f1)) {
            f1 = (f64)(f32)((f64)rdf32(0x80573a18u) + f1);
        }
    }
    wrf32d(param_3, f1);
    return 0u;
}
