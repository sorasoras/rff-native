#include "tc_rt.h"

void fn_80301190(u32 param_1)
{
    u32 r8 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32(0x80577760u);
    f0 = (f64)rdf32(0x80577764u);
    wr32(param_1 + 0x10u, 0u);
    r8 = param_1 + 0x10u;
    wr32(param_1 + 0x14u, 0u);
    wr32(param_1, 0x8039d518u);
    wr32(param_1 + 4u, 0x8039d530u);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1 + 0x10u, r8);
    wr32(param_1 + 0x14u, r8);
    wr32(param_1 + 0x18u, 0x805486f4u);
    wr32(param_1 + 0x1cu, 0x20u);
    wrf32d(param_1 + 0x20u, f1);
    wrf32d(param_1 + 0x24u, f0);
    return;
}
