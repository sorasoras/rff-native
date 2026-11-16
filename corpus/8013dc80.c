#include "tc_rt.h"

void fn_8013dc80(s32 param_1, u32 param_r4, u32 param_r5, u32 param_r6)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80574418u);
    wr32((u32)param_1 + 0x258u, 1u);
    wr32((u32)param_1 + 0xb20u, 0u);
    wr32((u32)param_1 + 0xb24u, 0xffffffffu);
    wr32((u32)param_1 + 0xb2cu, 0u);
    wrf32d((u32)param_1 + 0xb30u, f0);
    wr32((u32)param_1 + 0xb28u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    (void)tc_call(0x80093ad4u, &a);
    return;
}
