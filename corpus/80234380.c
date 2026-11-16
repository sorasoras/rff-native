#include "tc_rt.h"

void fn_80234380(s32 param_1, s32 param_2, s32 param_3)
{
    f64 t7 = 0.0;
    t7 = (f64)(f32)((f64)rdf32((u32)param_1) + (f64)rdf32((u32)param_2));
    wrf32d((u32)param_3, (f64)(f32)((f64)rdf32((u32)param_1) + (f64)rdf32((u32)param_2)));
    wrf32d((u32)param_3, t7);
    wrf32d((u32)param_3 + 8u, (f64)(f32)((f64)rdf32((u32)param_1 + 8u) + (f64)rdf32((u32)param_2 + 8u)));
    return;
}
