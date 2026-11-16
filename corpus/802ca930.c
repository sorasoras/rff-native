#include "tc_rt.h"

void fn_802ca930(u32 param_1)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80348a00u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0xcu, 0u);
    wrf32d(param_1 + 0x10u, f0);
    wr32(param_1, 0x80399a70u);
    wr32(param_1 + 0x14u, 0u);
    wr32(param_1 + 0x18u, 0u);
    wr16(param_1 + 0x1cu, 0u);
    return;
}
