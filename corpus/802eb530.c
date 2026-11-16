#include "tc_rt.h"

void fn_802eb530(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0;
    r6 = rd32(param_2 + 4u);
    f0 = (f64)rdf32(param_2 + 8u);
    r5 = rd32(param_2 + 0xcu);
    r0 = rd32(param_2 + 0x10u);
    wr32(param_1, rd32(param_2));
    wr32(param_1 + 4u, r6);
    wrf32d(param_1 + 8u, f0);
    wr32(param_1 + 0xcu, r5);
    wr32(param_1 + 0x10u, r0);
    return;
}
