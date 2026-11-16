#include "tc_rt.h"

void fn_801e6264(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_2;
    r3 = tc_call(0x801bfb78u, &a);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 0u;
    r3 = tc_call(0x800f9458u, &a);
    f1 = tc_lastf();
    wr32(param_1, r3);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = param_1;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x801e62ecu, &a);
    wr32(param_1 + 4u, param_3);
    a.r[0] = param_1 + 8u;
    a.r[1] = rd32(param_1);
    (void)tc_call(0x801f0e3cu, &a);
    a.r[0] = param_1 + 8u;
    a.r[1] = 0x8033c0f8u;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = param_1 + 8u;
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    wr32(param_1 + 0x68u, 1u);
    return;
}
