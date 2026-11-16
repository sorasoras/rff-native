#include "tc_rt.h"

void fn_801b92fc(s32 param_1)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x34u);
    r3 = tc_call(0x800f93bcu, &a);
    f1 = tc_lastf();
    wr32((u32)param_1 + 0x2cu, r3);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    f1 = tc_callf(0x800fed0cu, &a);
    r6 = (u32)param_1 + 0x48u;
    r5 = (u32)param_1 + 0x134u;
    wr32((u32)param_1 + 0x1e8u, r6);
    r31 = (u32)param_1;
    r29 = 0u;
    wr32((u32)param_1 + 0x1ecu, r5);
    wr32((u32)param_1 + 0x1f0u, (u32)param_1 + 0x170u);
    wr32((u32)param_1 + 0x1f4u, (u32)param_1 + 0x1acu);
    wr32((u32)param_1 + 0x1f8u, (u32)param_1 + 0x84u);
    do {
        r3 = rd32(r31 + 0x1e8u);
        a.r[0] = r3;
        a.r[1] = rd32((u32)param_1 + 0x2cu);
        a.r[2] = r5;
        a.r[3] = r6;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3 + 0x28u) + 0x1cu), &a);
        r3 = rd32(r31 + 0x1e8u);
        a.r[0] = r3;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3 + 0x28u) + 0x14u), &a);
        r5 = 0u;
        r6 = 0u;
        r29 = r29 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r29 < 5);
    a.r[0] = (u32)param_1 + 0x38u;
    a.r[1] = rd32((u32)param_1 + 0x2cu);
    a.r[2] = 0x80571250u;
    (void)tc_call(0x80163f48u, &a);
    wr32((u32)param_1 + 0x44u, 1u);
    return;
}
