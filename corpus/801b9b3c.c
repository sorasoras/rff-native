#include "tc_rt.h"

void fn_801b9b3c(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x2cu, 0u);
    a.r[0] = 0x14u;
    r3 = tc_call(0x801bfb7cu, &a);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 0u;
    r3 = tc_call(0x800f9458u, &a);
    f1 = tc_lastf();
    wr32((u32)param_1 + 0x38u, r3);
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
    a.r[0] = rd32((u32)param_1 + 0x38u);
    a.r[1] = 0x8033b7b6u;
    a.r[2] = 0u;
    r3 = tc_call(0x800fe848u, &a);
    f1 = tc_lastf();
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
    (void)tc_call(0x800ff574u, &a);
    if (((ppc_cntlzw((u32)rd8(0x8049e134u) - 1u) >> 5u) & 0x7ffffffu) != 0u) {
        wr32((u32)param_1 + 0x2cu, 0u);
    } else {
        wr32((u32)param_1 + 0x2cu, 1u);
    }
    r0 = rd32((u32)param_1 + 0x2cu);
    wr32((u32)param_1 + 0x30u, r0);
    wr32((u32)param_1 + 0x34u, r0);
    return;
}
