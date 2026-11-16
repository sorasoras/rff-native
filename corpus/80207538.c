#include "tc_rt.h"

void fn_80207538(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(0x805766ecu);
    a.r[0] = 0x13u;
    a.r[1] = param_2;
    a.r[2] = 0x804b15c0u;
    a.r[3] = 0x804890c8u;
    r3 = tc_call(0x800d7768u, &a);
    wr32((u32)param_1 + 0x16b8u, r3);
    r31 = r3;
    if (r3 != 0u) {
        a.r[1] = 0xffffffffu;
        r3 = tc_call(0x8010b43cu, &a);
        wr32(r31 + 0x20u, r3);
        wr32(r31 + 0x24u, 0u);
    }
    a.f[0] = (f64)rdf32(param_2);
    a.f[1] = (f64)rdf32(param_2 + 8u);
    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    f1 = tc_callf(0x80089fc8u, &a);
    f4 = (f64)rdf32(0x805766f0u);
    f3 = (f64)rdf32(param_2);
    f2 = (f64)rdf32(param_2 + 4u);
    f0 = (f64)rdf32(param_2 + 8u);
    wrf32d((u32)param_1 + 0x16c8u, f1);
    wrf32d((u32)param_1 + 0x16ccu, f4);
    wrf32d((u32)param_1 + 0x16bcu, f3);
    wrf32d((u32)param_1 + 0x16c0u, f2);
    wrf32d((u32)param_1 + 0x16c4u, f0);
    return;
}
