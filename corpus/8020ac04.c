#include "tc_rt.h"

void fn_8020ac04(u32 param_1)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80576770u);
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1, 2u);
    wr32(param_1 + 4u, 0u);
    wrf32d(param_1 + 8u, f0);
    wr32(param_1 + 0x3cu, 0u);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0x14u, 0u);
    return;
}
