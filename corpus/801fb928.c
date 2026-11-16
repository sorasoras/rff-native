#include "tc_rt.h"

void fn_801fb928(s32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x27cu;
    a.r[1] = 0u;
    f1 = tc_callf(0x800f8544u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x804de14cu;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x801f4574u, &a);
    a.r[0] = (u32)param_1 + 0x78u;
    a.r[1] = 0x8033c4b6u;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = (u32)param_1 + 0x78u;
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    a.r[0] = (u32)param_1 + 0x78u;
    a.r[1] = 1u;
    (void)tc_call(0x801f0fa0u, &a);
    wr32((u32)param_1 + 0x118u, 0u);
    return;
}
