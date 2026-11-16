#include "tc_rt.h"

void fn_80161eb0(u32 param_1, u32 param_2, u32 param_3)
{
    f64 f0 = 0.0, f2 = 0.0;
    (void)param_1;
    f2 = (f64)rdf32(param_2);
    wrf32d(param_3, f2);
    f0 = (f64)rdf32(param_2 + 4u);
    wrf32d(param_3 + 4u, f0);
    f0 = -f0;
    wrf32d(param_3 + 8u, (f64)rdf32(param_2 + 8u));
    wrf32d(param_3, (f64)(f32)(f2 + (f64)rdf32(0x804b9d60u)));
    f0 = (f64)(f32)(f0 + (f64)rdf32(0x804b9d5cu));
    wrf32d(param_3 + 4u, f0);
    return;
}
