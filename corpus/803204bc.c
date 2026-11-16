#include "tc_rt.h"

void fn_803204bc(s32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32((u32)param_1 + 0x1cu);
    f0 = (f64)rdf32((u32)param_1 + 0x2cu);
    wrf32d(param_2, (f64)rdf32((u32)param_1 + 0xcu));
    wrf32d(param_2 + 4u, f1);
    wrf32d(param_2 + 8u, f0);
    return;
}
