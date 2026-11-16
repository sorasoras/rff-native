#include "tc_rt.h"

void fn_801c7b3c(s32 param_1, u32 param_r4, u32 param_r5)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    f5 = (f64)rdf32(0x80575db8u);
    f4 = (f64)rdf32((u32)param_1 + 0x15cu);
    f3 = (f64)rdf32((u32)param_1 + 0x160u);
    f2 = (f64)rdf32((u32)param_1 + 0x164u);
    f1 = (f64)rdf32(0x80575dbcu);
    f0 = (f64)rdf32(0x80575da0u);
    wr32((u32)param_1 + 0x124u, 0u);
    wrf32d((u32)param_1 + 0x168u, f5);
    wrf32d((u32)param_1 + 0x1cu, f4);
    wrf32d((u32)param_1 + 0x20u, f3);
    wrf32d((u32)param_1 + 0x24u, f2);
    wrf32d((u32)param_1 + 0x150u, f1);
    wrf32d((u32)param_1 + 0x154u, f0);
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    (void)tc_call(0x800da124u, &a);
    return;
}
