#include "tc_rt.h"

void fn_802f8efc(f64 param_1, u32 param_2)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x805775e8u);
    wr32(param_2, 0u);
    f0 = (f64)(f32)(f0 * param_1);
    wrf32d(param_2 + 4u, f0);
    return;
}
