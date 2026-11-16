#include "tc_rt.h"

void fn_801c25b0(u32 param_1)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80575cfcu);
    wr32(param_1, 0u);
    wr32(param_1 + 4u, 0u);
    wrf32d(param_1 + 8u, f0);
    wrf32d(param_1 + 0xcu, f0);
    return;
}
