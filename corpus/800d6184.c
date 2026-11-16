#include "tc_rt.h"

void fn_800d6184(u32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    if (rd32(param_1 + 0x98u) == 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x800d6150u, &a);
    }
    wr32(param_1 + 0x98u, 1u);
    a.f[0] = (f64)rdf32(param_2);
    a.f[1] = (f64)rdf32(param_2 + 8u);
    a.f[2] = (f64)(f32)((f64)rdf32(0x805731a0u) + (f64)rdf32(param_2 + 4u));
    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    f1 = tc_callf(0x8008a2fcu, &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = (f64)rdf32(param_2);
    a.f[1] = (f64)(f32)(f1 + (f64)rdf32(0x805731a4u));
    a.f[2] = (f64)rdf32(param_2 + 8u);
    (void)tc_call(rd32(rd32(param_1) + 0x20u), &a);
    f0 = (f64)rdf32(0x805731a8u);
    wr32(rd32(param_1 + 0xa4u) + 0xcu, 1u);
    wrf32d(param_1 + 0x24u, f0);
    wrf32d(param_1 + 0x20u, f0);
    wrf32d(param_1 + 0x1cu, f0);
    return;
}
