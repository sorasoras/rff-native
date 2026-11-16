#include "tc_rt.h"

void fn_802e619c(u32 param_1, s32 param_2)
{
    f64 f1 = 0.0, f2 = 0.0, f4 = 0.0;
    f4 = (f64)rdf32((u32)param_2 + 0x1cu);
    f1 = (f64)rdf32((u32)param_2 + 0x18u);
    f2 = (f64)rdf32(0x8057747cu);
    wrf32d(param_1 + 8u, (f64)(f32)(f1 * f2));
    wrf32d(param_1 + 4u, (f64)(f32)(f4 * f2));
    wrf32d(param_1, (f64)(f32)(-f1 * f2));
    wrf32d(param_1 + 0xcu, (f64)(f32)(-f4 * f2));
    return;
}
