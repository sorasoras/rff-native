#include "tc_rt.h"

void fn_800d1850(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0x2739u;
    a.r[2] = r3;
    (void)tc_call(0x8010a794u, &a);
    if (rd32(param_1 + 0x144u) == 0u) {
        wr32(param_1 + 0x148u, rd32(rd32(param_1 + 0x78u) + 0x20u));
    } else {
        wr32(param_1 + 0x148u, rd32(rd32(param_1 + 0x78u) + 0x24u));
    }
    a.f[0] = (f64)rdf32(0x805730c0u);
    a.r[0] = rd32(param_1 + 0x70u);
    a.r[1] = rd32(param_1 + 0x148u);
    a.r[2] = 0u;
    (void)tc_call(0x80035740u, &a);
    if ((u32)param_2 != 0u) {
        wrf32d(rd32(param_1 + 0x70u) + 0x58u, (f64)rdf32(0x805730c4u));
    } else {
        f0 = (f64)rdf32(0x805730c4u);
        wrf32d(rd32(param_1 + 0x70u) + 0x58u, (f64)rdf32(0x805730c8u));
        f0 = (f64)(f32)((f64)rdf32(rd32(param_1 + 0x148u) + 0x18u) - f0);
        wrf32d(rd32(param_1 + 0x70u) + 0x54u, f0);
    }
    wr32(param_1 + 0x124u, 0u);
    return;
}
