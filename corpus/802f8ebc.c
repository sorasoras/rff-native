#include "tc_rt.h"

void fn_802f8ebc(f64 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    f2 = (f64)rdf32(0x805775e4u);
    f0 = (f64)(f32)((f64)rdf32(0x805775e8u) * param_1);
    f1 = (f64)rdf32(0x80349e84u);
    wr16(param_2 + 0x16u, 0u);
    wrf32d(param_2 + 0x10u, f1);
    wrf32d(param_2 + 8u, f2);
    wr8(param_2 + 0x14u, 0x7fu);
    wrf32d(param_2 + 0xcu, f2);
    wrf32d(param_2 + 4u, f0);
    wr32(param_2, 0u);
    return;
}
