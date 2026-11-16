#include "tc_rt.h"

void fn_800d1800(s32 param_1)
{
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(0x805730c0u);
    a.r[0] = rd32((u32)param_1 + 0x70u);
    a.r[1] = rd32((u32)param_1 + 0x148u);
    a.r[2] = 0u;
    (void)tc_call(0x80035740u, &a);
    a.r[0] = rd32((u32)param_1 + 0x70u);
    a.r[1] = 0u;
    (void)tc_call(0x800355acu, &a);
    wr32((u32)param_1 + 0x128u, 0u);
    return;
}
