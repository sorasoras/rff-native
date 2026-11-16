#include "tc_rt.h"

void fn_800701d4(s32 param_1, s32 param_2, s32 param_3, u32 param_4)
{
    u32 r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    r5 = rd32((u32)param_2 + 0x38u) + (rd32((u32)param_2 + 0x3cu) * (u32)param_3);
    f2 = (f64)rdf32(param_4);
    f1 = (f64)rdf32(param_4 + 4u);
    f0 = (f64)rdf32(param_4 + 8u);
    wr32((u32)param_1 + 0x4cu, (u32)param_2);
    wr32((u32)param_1 + 0x60u, r5);
    wrf32d((u32)param_1 + 0x50u, f2);
    wrf32d((u32)param_1 + 0x54u, f1);
    wrf32d((u32)param_1 + 0x58u, f0);
    return;
}
