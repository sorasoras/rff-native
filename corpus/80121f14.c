#include "tc_rt.h"

void fn_80121f14(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(0x805742e0u);
    a.f[1] = (f64)rdf32(0x805742e4u);
    (void)tc_call(0x80059c9cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x44cu);
    f1 = tc_callf(0x800fe9bcu, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = (u32)param_1 + 0x92cu;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    f1 = tc_callf(0x80123ebcu, &a);
    r3 = rd32((u32)param_1 + 0xdc8u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    a.f[1] = 0.0;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0x28u), &a);
    a.r[0] = (u32)param_1 + 0x744u;
    (void)tc_call(0x8019124cu, &a);
    a.r[0] = (u32)param_1 + 0x914u;
    (void)tc_call(0x80209078u, &a);
    a.r[0] = (u32)param_1 + 0x5c8u;
    (void)tc_call(0x8014b42cu, &a);
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x80119c70u, &a);
    a.r[0] = (u32)param_1 + 0x450u;
    f1 = tc_callf(0x801936a8u, &a);
    if (rd32((u32)param_1 + 0xdccu) != 0u) {
        f1 = tc_callf(0x801f87a4u, &a);
    }
    r31 = (u32)param_1 + 0xd1cu;
    r30 = 0u;
    do {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r31;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x8020f08cu, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x38u;
    } while ((s32)r30 < 3);
    return;
}
