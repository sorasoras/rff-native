#include "tc_rt.h"

void fn_801c1f7c(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32((u32)param_1 + 4u, param_3);
    wr32((u32)param_1 + 0x38u, param_2);
    f2 = (f64)rdf32(param_4);
    wrf32d((u32)param_1 + 0x20u, f2);
    f1 = (f64)rdf32(param_4 + 4u);
    wrf32d((u32)param_1 + 0x24u, f1);
    f0 = (f64)rdf32(param_4 + 8u);
    wrf32d((u32)param_1 + 0x28u, f0);
    wrf32d((u32)param_1 + 0x2cu, f2);
    wrf32d((u32)param_1 + 0x30u, f1);
    wrf32d((u32)param_1 + 0x34u, f0);
    f2 = (f64)rdf32(param_5);
    wrf32d((u32)param_1 + 8u, f2);
    f1 = (f64)rdf32(param_5 + 4u);
    wrf32d((u32)param_1 + 0xcu, f1);
    f0 = (f64)rdf32(param_5 + 8u);
    wrf32d((u32)param_1 + 0x10u, f0);
    wrf32d((u32)param_1 + 0x14u, f2);
    wrf32d((u32)param_1 + 0x18u, f1);
    wrf32d((u32)param_1 + 0x1cu, f0);
    wr32((u32)param_1 + 0x3cu, 0u);
    wr32((u32)param_1 + 0x40u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801c2048u, &a);
    return;
}
