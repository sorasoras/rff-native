#include "tc_rt.h"

void fn_801bd08c(u32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1 + 0x58u);
    r3 = tc_call(0x800f93bcu, &a);
    f1 = tc_lastf();
    wr32(param_1 + 4u, r3);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x800fef2cu, &a);
    a.r[0] = param_1 + 8u;
    a.r[1] = rd32(param_1 + 4u);
    (void)tc_call(0x801f0e3cu, &a);
    a.r[0] = rd32(param_1);
    a.r[1] = rd32(param_1 + 4u);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    wr32(param_1 + 0x5cu, 0u);
    wr32(param_1 + 0x60u, 1u);
    return;
}
