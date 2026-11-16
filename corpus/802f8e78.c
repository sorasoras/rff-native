#include "tc_rt.h"

void fn_802f8e78(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    f2 = (f64)rdf32(0x805775e4u);
    f0 = (f64)(f32)((f64)rdf32(0x805775e8u) * (f64)rdf32(0x805775e0u));
    f1 = (f64)rdf32(0x80349e84u);
    wr16(param_1 + 0x16u, 0u);
    wrf32d(param_1 + 0x10u, f1);
    wrf32d(param_1 + 8u, f2);
    wr8(param_1 + 0x14u, 0x7fu);
    wrf32d(param_1 + 0xcu, f2);
    wrf32d(param_1 + 4u, f0);
    wr32(param_1, 0u);
    return;
}
