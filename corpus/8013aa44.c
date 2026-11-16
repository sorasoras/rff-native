#include "tc_rt.h"

void fn_8013aa44(s32 param_1)
{
    u32 c0eq = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x5b0u;
    f1 = tc_callf(0x800f8388u, &a);
    r30 = (u32)param_1;
    r29 = 0u;
    do {
        if (rd32(r30 + 0x44u) != 0u) {
            f1 = tc_callf(0x8013b2c0u, &a);
            r3 = rd32(r30 + 0x44u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3 + 0x28u) + 8u), &a);
            }
            wr32(r30 + 0x44u, 0u);
        }
        r29 = r29 + 1u;
        r30 = r30 + 4u;
    } while ((s32)r29 < 4);
    r3 = rd32((u32)param_1 + 0x5a0u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x801f0ff4u, &a);
        a.r[0] = rd32((u32)param_1 + 0x5a0u);
        a.r[1] = 1u;
        f1 = tc_callf(0x801f0de8u, &a);
        wr32((u32)param_1 + 0x5a0u, 0u);
    }
    r3 = rd32((u32)param_1 + 0x188u);
    c0eq = r3 == 0u;
    if (!c0eq) {
        if (!c0eq) {
            a.r[0] = r3;
            a.r[1] = 1u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3 + 0x64u) + 8u), &a);
        }
        wr32((u32)param_1 + 0x188u, 0u);
    }
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = (u32)param_1 + 0x5a4u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x80164328u, &a);
    r31 = (u32)param_1 + 0x68u;
    r29 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x8013b078u, &a);
        r29 = r29 + 1u;
        r31 = r31 + 0x8cu;
    } while ((s32)r29 < 2);
    a.r[0] = (u32)param_1 + 0x54u;
    (void)tc_call(0x8013bb2cu, &a);
    r30 = rd32((u32)param_1 + 0x190u);
    if (r30 != 0u) {
        a.r[0] = 0u;
        r3 = tc_call(0x801b3a7cu, &a);
        a.r[0] = r3;
        a.r[1] = r30;
        (void)tc_call(0x801b3a38u, &a);
        wr32((u32)param_1 + 0x190u, 0u);
    }
    r30 = rd32((u32)param_1 + 0x194u);
    if (r30 != 0u) {
        a.r[0] = 0u;
        r3 = tc_call(0x801b3a7cu, &a);
        a.r[0] = r3;
        a.r[1] = r30;
        (void)tc_call(0x801b3a38u, &a);
        wr32((u32)param_1 + 0x194u, 0u);
    }
    a.r[0] = 0x14u;
    f1 = tc_callf(0x80141274u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x801ebec0u, &a);
    a.r[0] = 0x80571250u;
    (void)tc_call(0x80103074u, &a);
    a.r[0] = 0x804b9d30u;
    (void)tc_call(0x80100404u, &a);
    return;
}
