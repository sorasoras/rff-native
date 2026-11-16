#include "tc_rt.h"

void fn_800f1fec(s32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80573b50u);
    wr32((u32)param_1 + 0xb0u, 0u);
    wrf32d((u32)param_1 + 0xb4u, f0);
    wrf32d((u32)param_1 + 0xb8u, f0);
    wr32((u32)param_1 + 0xacu, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80083e44u, &a);
    return;
}
