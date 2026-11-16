#include "tc_rt.h"

void fn_80210be4(s32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0;
    f3 = (f64)rdf32(0x80576890u);
    f1 = (f64)(f32)(f3 * (f64)rdf32(param_2 + 4u));
    f0 = (f64)(f32)(f3 * (f64)rdf32(param_2 + 8u));
    wrf32d((u32)param_1 + 0x264u, (f64)(f32)(f3 * (f64)rdf32(param_2)));
    wrf32d((u32)param_1 + 0x268u, f1);
    wrf32d((u32)param_1 + 0x26cu, f0);
    return;
}
