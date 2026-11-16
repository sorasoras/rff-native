#include "tc_rt.h"

void fn_8032c1bc(u32 param_1, s32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32((u32)param_2 + 0xb4u);
    f0 = (f64)rdf32((u32)param_2 + 0xb8u);
    wrf32d(param_1, (f64)rdf32((u32)param_2 + 0xb0u));
    wrf32d(param_1 + 4u, f1);
    wrf32d(param_1 + 8u, f0);
    return;
}
