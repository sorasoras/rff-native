#include "tc_rt.h"

void fn_801dd788(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    f2 = (f64)rdf32(0x805761f0u);
    f1 = (f64)rdf32(0x80576204u);
    f0 = (f64)rdf32(0x8057622cu);
    wr32(param_1 + 0x24u, 0x80375728u);
    wrf32d(param_1 + 0xcu, f2);
    wrf32d(param_1 + 8u, f2);
    wrf32d(param_1 + 4u, f2);
    wr32(param_1, 0u);
    wrf32d(param_1 + 0x10u, f2);
    wrf32d(param_1 + 0x18u, f1);
    wr32(param_1 + 0x1cu, 0u);
    wrf32d(param_1 + 0x14u, f0);
    wr32(param_1 + 0x20u, 0xffffffffu);
    return;
}
