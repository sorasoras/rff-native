#include "tc_rt.h"

void fn_802e5818(u32 param_1)
{
    u32 r5 = 0;
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80577478u);
    wr32(param_1 + 8u, 0u);
    r5 = param_1 + 8u;
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1, 0x8039cd10u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, r5);
    wr32(param_1 + 0xcu, r5);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0x14u, 0u);
    wrf32d(param_1 + 0x18u, f0);
    wrf32d(param_1 + 0x1cu, f0);
    return;
}
