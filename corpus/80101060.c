#include "tc_rt.h"

void fn_80101060(u32 param_1, u32 param_2)
{
    u32 r4 = 0;
    r4 = rd32(param_2);
    wrf32d(param_1, (f64)rdf32(r4 + 0x38u));
    wrf32d(param_1 + 4u, (f64)rdf32(r4 + 0x3cu));
    wrf32d(param_1 + 8u, (f64)rdf32(r4 + 0x40u));
    return;
}
