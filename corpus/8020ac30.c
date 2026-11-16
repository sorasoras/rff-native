#include "tc_rt.h"

void fn_8020ac30(u32 param_1, s32 param_2, s32 param_3, u32 param_4, s32 param_5)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    f3 = (f64)rdf32(param_4);
    r0 = param_1 + 0x18u;
    f2 = (f64)rdf32(param_4 + 4u);
    f1 = (f64)rdf32(param_4 + 8u);
    f0 = (f64)rdf32(0x80576770u);
    wr32(param_1, (u32)param_2);
    wr32(param_1 + 4u, (u32)param_3);
    wrf32d(param_1 + 0x18u, f3);
    wrf32d(param_1 + 0x1cu, f2);
    wrf32d(param_1 + 0x20u, f1);
    wrf32d(param_1 + 0x24u, f3);
    wrf32d(param_1 + 0x28u, f2);
    wrf32d(param_1 + 0x2cu, f1);
    wrf32d(param_1 + 0x30u, f3);
    wrf32d(param_1 + 0x34u, f2);
    wrf32d(param_1 + 0x38u, f1);
    wr32(param_1 + 0xcu, (u32)param_5);
    wrf32d(param_1 + 8u, f0);
    if ((u32)param_2 == 0u) {
        a.f[0] = (f64)rdf32(0x80576774u);
        a.r[0] = 0x58u;
        a.r[1] = r0;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800d7768u, &a);
        wr32(param_1 + 0x10u, r3);
    }
    return;
}
