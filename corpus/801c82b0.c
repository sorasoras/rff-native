#include "tc_rt.h"

void fn_801c82b0(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x80575da0u);
    f3 = (f64)rdf32(0x80575db8u);
    f2 = (f64)rdf32(0x80575ddcu);
    f0 = (f64)rdf32(0x80575dd8u);
    wr32((u32)param_1 + 0x124u, 5u);
    wrf32d((u32)param_1 + 0x13cu, f3);
    wrf32d((u32)param_1 + 0x140u, f2);
    wrf32d((u32)param_1 + 0x144u, f3);
    wrf32d((u32)param_1 + 0x148u, f1);
    wrf32d((u32)param_1 + 0x14cu, f0);
    a.f[0] = f1;
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800da490u, &a);
    a.f[0] = (f64)rdf32((u32)param_1 + 0x150u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800da4b8u, &a);
    return;
}
