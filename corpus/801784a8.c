#include "tc_rt.h"

void fn_801784a8(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    f2 = (f64)rdf32(0x80574fa4u);
    f0 = (f64)rdf32(0x80574fa8u);
    f1 = (f64)rdf32((u32)param_1 + 0x128u);
    wrf32d((u32)param_1 + 0x114u, f2);
    wrf32d((u32)param_1 + 0x10cu, f2);
    wrf32d((u32)param_1 + 0x110u, f0);
    r3 = (u32)param_1 + 0x10cu;
    a.f[0] = f1;
    a.r[0] = r3;
    a.r[1] = r3;
    (void)tc_call(0x802343c8u, &a);
    f2 = (f64)rdf32(0x80574fa4u);
    r3 = (u32)param_1 + 0x118u;
    f0 = (f64)rdf32(0x80574fa8u);
    wrf32d((u32)param_1 + 0x11cu, f2);
    f1 = (f64)rdf32((u32)param_1 + 0x12cu);
    wrf32d((u32)param_1 + 0x118u, f2);
    wrf32d((u32)param_1 + 0x11cu, f0);
    a.f[0] = f1;
    a.r[0] = r3;
    a.r[1] = r3;
    (void)tc_call(0x802343c8u, &a);
    f0 = (f64)rdf32(0x80574fa4u);
    r0 = rd32((u32)param_1 + 0x64u) | 0xf0000000u;
    wrf32d((u32)param_1 + 0x198u, f0);
    wrf32d((u32)param_1 + 0x20u, f0);
    wr32((u32)param_1 + 0x64u, r0);
    return;
}
