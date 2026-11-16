#include "tc_rt.h"

void fn_801f1820(s32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80083e44u, &a);
    f0 = (f64)rdf32(0x805765f0u);
    wr32((u32)param_1 + 0xb0u, 0u);
    wrf32d((u32)param_1 + 0xacu, f0);
    return;
}
