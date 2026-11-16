#include "tc_rt.h"

u32 fn_801d5e98(s32 param_1)
{
    u32 r3 = 0;
    f64 f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801d55f8u, &a);
    f31 = (f64)rdf32(r3);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801d55f8u, &a);
    a.f[0] = (f64)rdf32(r3 + 4u);
    a.f[1] = f31;
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801d5560u, &a);
    wr32((u32)param_1 + 0x70u, rd32((u32)param_1 + 0x70u) + 1u);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x84u;
    a.r[2] = 0x1du;
    a.r[3] = 0x804890c8u;
    a.r[4] = 1u;
    a.r[5] = 0u;
    (void)tc_call(0x801d5628u, &a);
    return 1u;
}
