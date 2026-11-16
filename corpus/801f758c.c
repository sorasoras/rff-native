#include "tc_rt.h"

void fn_801f758c(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x80571250u;
    a.r[1] = rd32((u32)param_1 + 0x2cu);
    a.r[2] = 0x8033c350u;
    r3 = tc_call(0x80103258u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = r3;
    (void)tc_call(0x801894c8u, &a);
    a.r[0] = (u32)param_1 + 0x30u;
    a.r[1] = rd32((u32)param_1 + 0x2cu);
    f1 = tc_callf(0x801f0e3cu, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = (u32)param_1;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x801f78c4u, &a);
    return;
}
