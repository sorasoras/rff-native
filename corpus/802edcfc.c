#include "tc_rt.h"

void fn_802edcfc(u32 param_1)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80577508u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0xcu, 0u);
    wrf32d(param_1 + 0x10u, f0);
    wr32(param_1, 0x8039d010u);
    wr32(param_1 + 0x14u, 0u);
    wr32(param_1 + 0x18u, 0u);
    wr16(param_1 + 0x1cu, 0u);
    return;
}
