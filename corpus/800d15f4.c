#include "tc_rt.h"

void fn_800d15f4(s32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x805730c0u);
    wr32((u32)param_1 + 0x128u, 0u);
    wrf32d((u32)param_1 + 0x12cu, f0);
    wr32((u32)param_1 + 0x130u, 1u);
    wr32((u32)param_1 + 0x144u, 2u);
    wr32((u32)param_1 + 0x134u, 0u);
    wr32((u32)param_1 + 0x138u, 2u);
    wr32((u32)param_1 + 0x124u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80083e44u, &a);
    return;
}
