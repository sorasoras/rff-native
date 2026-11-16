#include "tc_rt.h"

void fn_80175640(f64 param_1, f64 param_2, s32 param_3)
{
    f64 f3 = 0.0;
    f3 = (f64)rdf32(0x80574f08u);
    wrf32d((u32)param_3 + 0x16cu, param_1);
    wrf32d((u32)param_3 + 0x170u, param_2);
    if (f3 == (f64)(f32)param_1) {
        wrf32d((u32)param_3 + 0x16cu, (f64)rdf32(0x80574f24u));
    }
    if ((f64)rdf32(0x80574f08u) == (f64)rdf32((u32)param_3 + 0x170u)) {
        wrf32d((u32)param_3 + 0x170u, (f64)rdf32(0x80574f24u));
        return;
    }
    return;
}
