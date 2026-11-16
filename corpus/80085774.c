#include "tc_rt.h"

void fn_80085774(u32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32(param_2 + 4u);
    f0 = (f64)rdf32(param_2 + 8u);
    wrf32d(param_1, (f64)rdf32(param_2));
    wrf32d(param_1 + 4u, f1);
    wrf32d(param_1 + 8u, f0);
    return;
}
