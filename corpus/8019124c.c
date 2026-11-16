#include "tc_rt.h"

void fn_8019124c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 8u);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x800fe9bcu, &a);
    }
    a.r[0] = (u32)param_1 + 0x10u;
    f1 = tc_callf(0x801f10a4u, &a);
    r31 = (u32)param_1;
    r29 = 0u;
    r28 = 0u;
    do {
        r30 = rd32(r31 + 0x154u);
        if ((s32)r30 >= 0 && rd32(r31 + 0x158u) != 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = rd32((u32)param_1 + 0x14cu);
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x801ebe1cu, &a);
            a.r[0] = r3;
            a.r[1] = r30;
            f1 = tc_callf(0x801ed110u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = rd32((u32)param_1 + 0x14cu);
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x801ebe1cu, &a);
            a.r[0] = r3;
            a.r[1] = rd32(r31 + 0x158u);
            f1 = tc_callf(0x801ec6bcu, &a);
            r29 = r29 + 1u;
        }
        r28 = r28 + 1u;
        r31 = r31 + 0x10u;
    } while ((s32)r28 < 7);
    r31 = (u32)param_1;
    r28 = 0u;
    do {
        r30 = rd32(r31 + 0x150u);
        if ((s32)r30 >= 0 && rd32(r31 + 0x15cu) != 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = rd32((u32)param_1 + 0x148u);
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x801ebe1cu, &a);
            a.r[0] = r3;
            a.r[1] = r30;
            f1 = tc_callf(0x801ed110u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = rd32((u32)param_1 + 0x148u);
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x801ebe1cu, &a);
            a.r[0] = r3;
            a.r[1] = rd32(r31 + 0x15cu);
            f1 = tc_callf(0x801ec6bcu, &a);
        }
        r28 = r28 + 1u;
        r31 = r31 + 0x10u;
    } while ((s32)r28 < 7);
    if ((s32)r29 > 1) {
        a.r[0] = (u32)param_1 + 0x60u;
        (void)tc_call(0x801e64d0u, &a);
        a.r[0] = (u32)param_1 + 0xd4u;
        (void)tc_call(0x801e64d0u, &a);
    }
    return;
}
