#include "tc_rt.h"

void fn_800d30c4(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wrf32d((u32)param_1 + 4u, (f64)rdf32(0x80573110u));
    f1 = tc_callf(0x800d339cu, &a);
    f3 = (f64)rdf32(0x80573114u);
    f2 = (f64)rdf32(0x80573118u);
    f0 = (f64)rdf32(0x8057311cu);
    wrf32d((u32)param_1 + 8u, f1);
    wrf32d((u32)param_1 + 0x10u, f3);
    wrf32d((u32)param_1 + 0xcu, f3);
    wrf32d((u32)param_1 + 0x18u, f2);
    wrf32d((u32)param_1 + 0x14u, f2);
    wrf32d((u32)param_1 + 0x1cu, f0);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x800d3148u, &a);
    f0 = (f64)rdf32(0x80573120u);
    f1 = (f64)rdf32(0x80573124u);
    wr32((u32)param_1 + 0x28u, rd32((u32)param_1 + 0x28u) | 0x80000000u);
    wrf32d((u32)param_1 + 0x20u, f0);
    a.f[0] = f1;
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800d5a24u, &a);
    return;
}
