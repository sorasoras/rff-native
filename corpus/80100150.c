#include "tc_rt.h"

void fn_80100150(u32 param_1)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80573cc8u);
    wr32(param_1, 0u);
    wrf32d(param_1 + 0x28u, f0);
    wrf32d(param_1 + 0x2cu, f0);
    wrf32d(param_1 + 0x30u, f0);
    wrf32d(param_1 + 0x34u, f0);
    wrf32d(param_1 + 0x38u, f0);
    wrf32d(param_1 + 0x3cu, f0);
    wr32(param_1 + 0x1cu, 0u);
    wr32(param_1 + 0x20u, 0u);
    wr32(param_1 + 0x24u, 0u);
    wr32(param_1 + 0x18u, 0u);
    return;
}
