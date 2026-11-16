#include "tc_rt.h"

void fn_8007095c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x80472f48u;
    a.r[1] = param_2;
    r3 = tc_call(0x800bede4u, &a);
    f1 = tc_lastf();
    wr32(param_1 + 0x70u, r3);
    wr32(param_1 + 0x74u, param_2);
    a.r[0] = param_1;
    a.r[1] = param_3;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
    f5 = (f64)rdf32(param_4);
    f4 = (f64)rdf32(param_4 + 4u);
    f3 = (f64)rdf32(param_4 + 8u);
    f2 = (f64)rdf32(param_1 + 4u);
    f1 = (f64)rdf32(param_1 + 8u);
    f0 = (f64)rdf32(param_1 + 0xcu);
    wrf32d(param_1 + 0x10u, f5);
    wrf32d(param_1 + 0x14u, f4);
    wrf32d(param_1 + 0x18u, f3);
    wrf32d(param_1 + 0x28u, f2);
    wrf32d(param_1 + 0x2cu, f1);
    wrf32d(param_1 + 0x30u, f0);
    wrf32d(param_1 + 0x34u, f5);
    wrf32d(param_1 + 0x38u, f4);
    wrf32d(param_1 + 0x3cu, f3);
    wr8(param_1 + 0x78u, (u8)param_5);
    wr8(param_1 + 0x79u, (u8)param_6);
    return;
}
