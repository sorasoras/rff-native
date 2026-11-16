#include "tc_rt.h"

void fn_80332e7c(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    f64 f0 = 0.0;
    r8 = rd32(param_2 + 4u);
    r7 = rd32(param_2 + 8u);
    r6 = rd32(param_2 + 0xcu);
    r5 = rd32(param_2 + 0x10u);
    r0 = rd32(param_2 + 0x14u);
    f0 = (f64)rdf32(param_2 + 0x18u);
    wr32(param_1, rd32(param_2));
    wr32(param_1 + 4u, r8);
    wr32(param_1 + 8u, r7);
    wr32(param_1 + 0xcu, r6);
    wr32(param_1 + 0x10u, r5);
    wr32(param_1 + 0x14u, r0);
    wrf32d(param_1 + 0x18u, f0);
    return;
}
