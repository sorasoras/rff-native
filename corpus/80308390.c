#include "tc_rt.h"

void fn_80308390(u32 param_r3)
{
    u32 r3 = 0, r4 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    r27 = param_r3;
    r28 = 0u;
    do {
        if ((u32)rd8(r27 + 0xb74u) != 0u) {
            r3 = rd32(r27 + 0xb78u);
            if (r3 != 0u) {
                a.r[0] = r3;
                (void)tc_call(0x8030c2e4u, &a);
            }
        }
        r28 = r28 + 1u;
        r27 = r27 + 0x38u;
    } while ((s32)r28 < 8);
    if ((u32)rd8(param_r3 + 0x11du) != 0u) {
        r28 = param_r3;
        if (param_r3 != 0u) {
            r28 = param_r3 + 0xd0u;
        }
        r3 = tc_call(0x80306860u, &a);
        a.r[0] = r3;
        a.r[1] = r28;
        (void)tc_call(0x80306c94u, &a);
    }
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    r3 = tc_call(0x8030abd4u, &a);
    a.r[0] = r3;
    a.r[1] = param_r3 + 0x170u;
    (void)tc_call(0x8030b0acu, &a);
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    if (rd32(param_r3 + 0x190u) != 0u) {
        while (rd32(param_r3 + 0x190u) != 0u) {
            r29 = rd32(param_r3 + 0x198u);
            r3 = tc_call(0x8030abd4u, &a);
            a.r[0] = r3;
            a.r[1] = r29 - 0x2cu;
            (void)tc_call(0x8030b0acu, &a);
        }
    }
    a.r[0] = r30;
    (void)tc_call(0x8022c2d8u, &a);
    r27 = param_r3;
    r30 = 0u;
    while ((s32)r30 < (s32)rd32(param_r3 + 0x82cu)) {
        r4 = rd32(r27 + 0x834u);
        if (r4 != 0u) {
            a.r[0] = rd32(param_r3 + 0x820u);
            a.r[1] = r4;
            (void)tc_call(0x80306fa8u, &a);
            wr32(r27 + 0x834u, 0u);
        }
        r27 = r27 + 0x34u;
        r30 = r30 + 1u;
    }
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = r3;
    r27 = param_r3 + 0xb74u;
    r28 = 0u;
    while ((s32)r28 < (s32)rd32(param_r3 + 0x828u)) {
        if ((u32)rd8(r27) != 0u) {
            r3 = rd32(r27 + 4u);
            if (r3 != 0u) {
                a.r[0] = r3;
                (void)tc_call(0x8030bf80u, &a);
                wr32(r27 + 4u, 0u);
            }
        }
        r27 = r27 + 0x38u;
        r28 = r28 + 1u;
    }
    a.r[0] = r29;
    (void)tc_call(0x8022c2d8u, &a);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    f1 = tc_callf(0x8022d56cu, &a);
    r4 = tc_lastr4();
    r3 = rd32(param_r3 + 0x824u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x10u), &a);
        wr32(param_r3 + 0x824u, 0u);
    }
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    wr8(param_r3 + 0x11eu, 0u);
    wr8(param_r3 + 0x11fu, 0u);
    wr8(param_r3 + 0x11du, 0u);
    return;
}
