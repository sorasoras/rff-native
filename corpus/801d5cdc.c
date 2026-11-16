#include "tc_rt.h"

u32 fn_801d5cdc(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801d55f8u, &a);
    a.f[0] = (f64)rdf32(0x8057600cu);
    a.f[1] = (f64)rdf32(r3);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801d5560u, &a);
    wr32((u32)param_1 + 0x78u, rd32((u32)param_1 + 0x78u) + 1u);
    return 1u;
}
