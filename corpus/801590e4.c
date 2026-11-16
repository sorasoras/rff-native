#include "tc_rt.h"

void fn_801590e4(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    f0 = (f64)rdf32(0x80574960u);
    if ((f64)(f32)((f64)rdf32((u32)param_1 + 0x1cu) - (f64)rdf32((u32)param_1 + 0x18u)) > f0) {
        f1 = (f64)rdf32((u32)param_1 + 0x20u);
        if (!(f1 < f0)) {
            return;
        }
        wrf32d((u32)param_1 + 0x20u, (f64)(f32)(f1 * (f64)rdf32(0x80574964u)));
        return;
    }
    f1 = (f64)rdf32((u32)param_1 + 0x20u);
    if (!((f1 > f0) || (f1 == f0))) {
        return;
    }
    wrf32d((u32)param_1 + 0x20u, (f64)(f32)(f1 * (f64)rdf32(0x80574964u)));
    return;
}
