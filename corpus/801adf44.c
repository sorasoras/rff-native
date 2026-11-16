#include "tc_rt.h"

void fn_801adf44(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32(param_2 + 0x9cu);
    wr32(param_2 + 0xd30u, 1u);
    r0 = r0 | 0x4000000u;
    wr32(param_2 + 0xd34u, 0u);
    wr32(param_2 + 0x9cu, r0);
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
    f1 = tc_lastf();
    wrf32d((u32)param_1 + 0x10u, (f64)rdf32(r3));
    wrf32d((u32)param_1 + 0x14u, (f64)rdf32(r3 + 4u));
    wrf32d((u32)param_1 + 0x18u, (f64)rdf32(r3 + 8u));
    a.r[0] = param_2;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_2) + 0x1dcu), &a);
    a.r[0] = param_2;
    a.r[1] = r3;
    a.r[2] = 0u;
    a.r[3] = 1u;
    a.f[0] = (f64)rdf32(0x80575af8u);
    (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
    wr32((u32)param_1 + 8u, 0u);
    return;
}
