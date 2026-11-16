#include "tc_rt.h"

void fn_8014ec80(s32 param_1, u32 param_r4, u32 param_r5)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x805747a0u);
    wr32((u32)param_1 + 0x74u, rd32((u32)param_1 + 0x74u) | 0x4000000u);
    wrf32d((u32)param_1 + 0x128u, f0);
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    (void)tc_call(0x800da124u, &a);
    return;
}
