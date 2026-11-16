#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_802b8748(f64 param_1, s32 param_2, u32 param_3)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    f2 = (f64)rdf32(param_3);
    f3 = (f64)(f32)(param_1 - f2);
    if (rd32((u32)param_2 + 0x534u) == 0u) {
        if (f3 < (f64)rdf32(0x80577390u)) {
            f2 = -f3;
        } else {
            f2 = f3;
        }
        f0 = (f64)rdf32((u32)param_2 + 0x9cu);
        if ((f2 > f0) || (f2 == f0)) {
            f2 = (f64)rdf32(0x805773a4u);
        } else {
            f2 = (f64)(f32)px_fdiv(f2, f0);
            f2 = (f64)(f32)(f2 * f2);
            f2 = (f64)(f32)(f2 * f2);
        }
        f2 = (f64)(f32)(f2 * (f64)rdf32((u32)param_2 + 0xa0u));
        wrf32d(param_3, (f64)(f32)((f64)rdf32(param_3) + (f64)(f32)(f2 * f3)));
        return;
    }
    f1 = (f64)rdf32((u32)param_2 + 0x9cu);
    if (f3 < -f1) {
        f1 = (f64)(f32)(f3 + f1);
        wrf32d(param_3, (f64)(f32)(f2 + (f64)(f32)((f64)rdf32((u32)param_2 + 0xa0u) * f1)));
        return;
    }
    if (f3 > f1) {
        f1 = (f64)(f32)(f3 - f1);
        wrf32d(param_3, (f64)(f32)(f2 + (f64)(f32)((f64)rdf32((u32)param_2 + 0xa0u) * f1)));
        return;
    }
    return;
}
