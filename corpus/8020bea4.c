#include "tc_rt.h"

void fn_8020bea4(u32 param_1)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x805767a8u);
    wr32(param_1 + 8u, 0xffffffffu);
    wrf32d(param_1 + 4u, f0);
    wr32(param_1, 0u);
    wr32(param_1 + 0xcu, 8u);
    return;
}
