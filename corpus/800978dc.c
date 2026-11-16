#include "tc_rt.h"

void fn_800978dc(s32 param_1)
{
    u32 r3 = 0, r5 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x4cu);
    (void)tc_call(0x800abcc8u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    (void)tc_call(0x8009a64cu, &a);
    wr32(0x804b9e08u, 0u);
    wr32(rd32((u32)param_1 + 0x4cu) + 0x48u, 1u);
    r3 = tc_call(0x801567a0u, &a);
    f1 = tc_lastf();
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3) + 0x28u), &a);
    a.r[0] = rd32((u32)param_1 + 0x60u);
    (void)tc_call(0x802139d8u, &a);
    wr32(rd32((u32)param_1 + 0x60u) + 0x58u, 1u);
    wr32(rd32((u32)param_1 + 0x2cu) + 0x50u, 1u);
    (void)tc_call(0x800975fcu, &a);
    a.r[0] = 1u;
    (void)tc_call(0x800a7aa8u, &a);
    a.r[0] = 0u;
    a.r[1] = 0x1au;
    (void)tc_call(0x800a730cu, &a);
    a.r[0] = 0u;
    (void)tc_call(0x800a7aa8u, &a);
    a.r[0] = 1u;
    (void)tc_call(0x8014da48u, &a);
    a.r[0] = 2u;
    (void)tc_call(0x8014da48u, &a);
    a.r[0] = 3u;
    (void)tc_call(0x8014da48u, &a);
    a.r[0] = 4u;
    (void)tc_call(0x8014da48u, &a);
    a.r[0] = 5u;
    (void)tc_call(0x8014da48u, &a);
    a.r[0] = 6u;
    (void)tc_call(0x8014da48u, &a);
    r30 = 1u;
    do {
        a.r[0] = r30;
        a.r[1] = 7u;
        r3 = tc_call(0x8014da9cu, &a);
        r5 = r3 - 1u;
        r5 = r5 & ~(u32)((s32)r5 >> 31);
        a.r[0] = r30;
        a.r[1] = 7u;
        a.r[2] = r5;
        (void)tc_call(0x8014dadcu, &a);
        r30 = r30 + 1u;
    } while ((s32)r30 < 33);
    r3 = tc_call(0x800ac3f8u, &a);
    r31 = r3;
    r3 = tc_call(0x800ac3d4u, &a);
    a.r[0] = r3;
    a.r[1] = r31;
    r3 = tc_call(0x800a74e4u, &a);
    r30 = r3;
    if ((s32)r3 >= 0) {
        a.r[0] = r3;
        a.r[1] = 2u;
        r3 = tc_call(0x8014db4cu, &a);
        a.r[0] = r30;
        a.r[1] = 3u;
        a.r[2] = r3;
        (void)tc_call(0x8014db70u, &a);
        a.r[0] = r30;
        a.r[1] = 1u;
        r3 = tc_call(0x8014db4cu, &a);
        a.r[0] = r30;
        a.r[1] = 2u;
        a.r[2] = r3;
        (void)tc_call(0x8014db70u, &a);
        a.r[0] = r30;
        a.r[1] = 1u;
        a.r[2] = 0x21u;
        (void)tc_call(0x8014db70u, &a);
    }
    if (r30 == 7u) {
        r30 = 1u;
        do {
            a.r[0] = r30;
            r3 = tc_call(0x800a4500u, &a);
            if (r3 != 0u) {
                a.r[0] = r3;
                (void)tc_call(0x800f33f0u, &a);
            }
            r30 = r30 + 1u;
        } while ((s32)r30 < 33);
    }
    a.r[0] = 0x44u;
    a.r[1] = 0u;
    (void)tc_call(0x8014d9dcu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x8009a64cu, &a);
    return;
}
