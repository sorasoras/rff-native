#include "tc_rt.h"

void fn_801d70d0(s32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801d5530u, &a);
    f1 = (f64)rdf32(0x80576010u);
    wr32((u32)param_1 + 0x10u, 0u);
    a.f[0] = f1;
    a.f[1] = (f64)rdf32(0x80576004u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801d5560u, &a);
    wr32((u32)param_1 + 0x70u, 0u);
    return;
}
