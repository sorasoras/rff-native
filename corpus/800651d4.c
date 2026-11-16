#include "tc_rt.h"

void fn_800651d4(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    r7 = rd32((u32)param_1 + 0x9cu);
    f2 = (f64)rdf32(param_4);
    f1 = (f64)rdf32(param_4 + 4u);
    f0 = (f64)rdf32(param_4 + 8u);
    wr32((u32)param_1 + 0xe0u, param_2);
    wr32((u32)param_1 + 0xe4u, param_3);
    wrf32d((u32)param_1 + 0xe8u, f2);
    wrf32d((u32)param_1 + 0xecu, f1);
    wrf32d((u32)param_1 + 0xf0u, f0);
    wr32((u32)param_1 + 0xf4u, (u32)((s32)((r7 << 5u) & 0xc0000000u) >> 31));
    wr32((u32)param_1 + 0x9cu, r7 | 0x4000000u);
    return;
}
