#include "tc_rt.h"

void fn_80201878(s32 param_1)
{
    u32 r3 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x38u);
    r3 = tc_call(0x800f93bcu, &a);
    f1 = tc_lastf();
    wr32((u32)param_1 + 0x34u, r3);
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
    a.r[0] = (u32)param_1 + 0x40u;
    a.r[1] = rd32((u32)param_1 + 0x34u);
    (void)tc_call(0x801f0e3cu, &a);
    a.r[0] = (u32)param_1 + 0x94u;
    (void)tc_call(0x801614ccu, &a);
    r30 = rd32((u32)param_1 + 0xcu);
    a.r[0] = 0u;
    r3 = tc_call(0x801b3a7cu, &a);
    a.r[0] = r3;
    a.r[1] = (r30 * 0xd0u) + 0x10u;
    r3 = tc_call(0x801b39d8u, &a);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x80201940u;
        a.r[2] = 0x802017d0u;
        a.r[3] = 0xd0u;
        a.r[4] = r30;
        r3 = tc_call(0x80255464u, &a);
    }
    wr32((u32)param_1 + 0x90u, r3);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8020197cu, &a);
    wr32((u32)param_1 + 0x1fcu, 1u);
    return;
}
