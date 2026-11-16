#include "tc_rt.h"

void fn_800cf998(u32 param_1)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80573068u);
    wr32(param_1, 0x80355ac8u);
    wrf32d(param_1 + 0x10u, f0);
    wrf32d(param_1 + 0xcu, f0);
    wrf32d(param_1 + 8u, f0);
    wr32(param_1 + 4u, 0u);
    wrf32d(param_1 + 0x14u, f0);
    wrf32d(param_1 + 0x18u, f0);
    return;
}
