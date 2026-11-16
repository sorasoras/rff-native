#include "tc_rt.h"

void fn_80149a9c(u32 param_1, u32 param_2)
{
    u32 r4 = 0;
    f64 f1 = 0.0, f2 = 0.0;
    r4 = rd32(0x805712ecu) + (rd32(param_2) * 0x108u);
    f2 = (f64)rdf32(r4 + 0xb4u);
    f1 = (f64)rdf32(r4 + 0xb0u);
    wrf32d(param_1, (f64)rdf32(r4 + 0xacu));
    wrf32d(param_1 + 4u, f1);
    wrf32d(param_1 + 8u, f2);
    return;
}
