#include "tc_rt.h"

void fn_801dc9bc(u32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x805761f0u);
    wr32(param_1 + 0xf8u, 0u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x50u), &a);
    a.r[0] = 0xbf6eu;
    r3 = tc_call(0x800a7a44u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 1u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x4cu), &a);
    }
    return;
}
