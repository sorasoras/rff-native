#include "tc_rt.h"

void fn_8015aacc(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32(0x80574960u);
    f0 = (f64)rdf32(0x8057498cu);
    wr32(param_1, 0u);
    wrf32d(param_1 + 4u, f1);
    wrf32d(param_1 + 0xcu, f1);
    wrf32d(param_1 + 8u, f1);
    wrf32d(param_1 + 0x18u, f0);
    wrf32d(param_1 + 0x14u, f0);
    wrf32d(param_1 + 0x10u, f1);
    wr32(param_1 + 0x20u, 0xffffffffu);
    wr32(param_1 + 0x1cu, 0u);
    return;
}
