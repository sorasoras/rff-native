#include "tc_rt.h"

void fn_800d3148(u32 param_1, u32 param_2)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32(0x80573124u);
    f0 = (f64)rdf32(0x8057311cu);
    r0 = rd32(param_1 + 0x28u) & 0x7fffffffu;
    wr32(param_1, param_2);
    wrf32d(param_1 + 4u, f1);
    wr32(param_1 + 0x28u, r0);
    wrf32d(param_1 + 0x1cu, f0);
    return;
}
