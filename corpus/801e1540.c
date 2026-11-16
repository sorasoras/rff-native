#include "tc_rt.h"

void fn_801e1540(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1 + 0x24u) + 0x38u), &a);
    a.r[0] = param_1;
    a.r[1] = r3;
    f1 = tc_callf(0x801dd9ecu, &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32(param_1 + 0x24u) + 0x3cu), &a);
    f0 = (f64)rdf32(0x80576200u);
    wrf32d(rd32(param_1 + 0x1cu) + 0x18u, f1);
    r4 = rd32(param_1);
    wr32(r4 + 0x9cu, rd32(r4 + 0x9cu) & 0xdfffffffu);
    r4 = rd32(param_1);
    wr32(r4 + 0x9cu, rd32(r4 + 0x9cu) & 0xfbffffffu);
    r3 = rd32(param_1);
    wrf32d(r3 + 0xd0u, f0);
    wr32(r3 + 0xccu, 1u);
    wr32(rd32(param_1) + 0xd58u, 1u);
    return;
}
