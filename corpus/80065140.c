#include "tc_rt.h"

void fn_80065140(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r31 = rd32(param_1 + 0xbcu);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    f1 = tc_lastf();
    f31 = (f64)rdf32(r3 + 8u);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    a.f[0] = (f64)rdf32(r3);
    a.f[1] = f31;
    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    a.r[1] = param_1 + 0x140u;
    a.r[2] = r31;
    (void)tc_call(0x8008b9e0u, &a);
    return;
}
