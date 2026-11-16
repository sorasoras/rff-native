#include "tc_rt.h"

void fn_80153d18(u32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    f3 = (f64)rdf32(param_2);
    f2 = (f64)rdf32(param_2 + 4u);
    f1 = (f64)rdf32(param_2 + 8u);
    f0 = (f64)rdf32(0x805748c0u);
    wr8(param_1, 1u);
    wrf32d(param_1 + 8u, f3);
    wrf32d(param_1 + 0xcu, f2);
    wrf32d(param_1 + 0x10u, f1);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 0x30u, 0xffffffffu);
    wr32(param_1 + 0x34u, 0u);
    wrf32d(param_1 + 0x38u, f0);
    return;
}
