#include "tc_rt.h"

void fn_80190ff8(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r26 = 0;
    u32 r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 8u);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x800fec80u, &a);
    }
    a.r[0] = (u32)param_1 + 0x60u;
    (void)tc_call(0x801e6364u, &a);
    a.r[0] = (u32)param_1 + 0xd4u;
    (void)tc_call(0x801e6364u, &a);
    r0 = rd32((u32)param_1 + 0x1c0u);
    c0lt = (s32)r0 < 1;
    if (r0 != 1u) {
        if (c0lt) {
            a.r[0] = (u32)param_1 + 0x10u;
            a.r[1] = 1u;
            (void)tc_call(0x801f0fa0u, &a);
            return;
        }
        if ((s32)r0 >= 3) {
            a.r[0] = (u32)param_1 + 0x10u;
            a.r[1] = 1u;
            (void)tc_call(0x801f0fa0u, &a);
            return;
        }
        a.r[0] = (u32)param_1 + 0x10u;
        r3 = tc_call(0x801f1144u, &a);
        if (r3 == 0u) {
            a.r[0] = (u32)param_1 + 0x10u;
            a.r[1] = 1u;
            (void)tc_call(0x801f0fa0u, &a);
            return;
        }
    } else {
        a.r[0] = (u32)param_1 + 0x10u;
        r3 = tc_call(0x801f1144u, &a);
        if (r3 == 0u) {
            a.r[0] = (u32)param_1 + 0x10u;
            a.r[1] = 1u;
            (void)tc_call(0x801f0fa0u, &a);
            return;
        }
        wr32((u32)param_1 + 0x1c0u, 0u);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 6u;
        (void)tc_call(0x8010a75cu, &a);
        r29 = rd32((u32)param_1 + 0x1a4u);
        r28 = rd32((u32)param_1 + 0x190u);
        r27 = rd32((u32)param_1 + 0x194u);
        r26 = rd32((u32)param_1 + 0x180u);
        r12 = rd32((u32)param_1 + 0x184u);
        r11 = rd32((u32)param_1 + 0x170u);
        r10 = rd32((u32)param_1 + 0x174u);
        r9 = rd32((u32)param_1 + 0x160u);
        r8 = rd32((u32)param_1 + 0x164u);
        r7 = rd32((u32)param_1 + 0x150u);
        r6 = rd32((u32)param_1 + 0x154u);
        r5 = rd32((u32)param_1 + 0x1c4u);
        r0 = rd32((u32)param_1 + 0x1c8u);
        wr32((u32)param_1 + 0x1b0u, rd32((u32)param_1 + 0x1a0u));
        wr32((u32)param_1 + 0x1b4u, r29);
        wr32((u32)param_1 + 0x1a0u, r28);
        wr32((u32)param_1 + 0x1a4u, r27);
        wr32((u32)param_1 + 0x190u, r26);
        wr32((u32)param_1 + 0x194u, r12);
        wr32((u32)param_1 + 0x180u, r11);
        wr32((u32)param_1 + 0x184u, r10);
        wr32((u32)param_1 + 0x170u, r9);
        wr32((u32)param_1 + 0x174u, r8);
        wr32((u32)param_1 + 0x160u, r7);
        wr32((u32)param_1 + 0x164u, r6);
        wr32((u32)param_1 + 0x150u, r5);
        wr32((u32)param_1 + 0x154u, r0);
        a.r[0] = (u32)param_1 + 0x10u;
        a.r[1] = 0x8033acc4u;
        (void)tc_call(0x801f100cu, &a);
        a.r[0] = (u32)param_1 + 0x10u;
        a.r[1] = 0u;
        (void)tc_call(0x801f10b8u, &a);
        a.r[0] = (u32)param_1 + 0x60u;
        (void)tc_call(0x801e6438u, &a);
        a.r[0] = (u32)param_1 + 0x10u;
        a.r[1] = 1u;
        (void)tc_call(0x801f0fa0u, &a);
        return;
    }
    wr32((u32)param_1 + 0x1c0u, 0u);
    a.r[0] = 0x804b9da0u;
    a.r[1] = 6u;
    (void)tc_call(0x8010a75cu, &a);
    r27 = rd32((u32)param_1 + 0x164u);
    r28 = rd32((u32)param_1 + 0x170u);
    r29 = rd32((u32)param_1 + 0x174u);
    r30 = rd32((u32)param_1 + 0x180u);
    r12 = rd32((u32)param_1 + 0x184u);
    r11 = rd32((u32)param_1 + 0x190u);
    r10 = rd32((u32)param_1 + 0x194u);
    r9 = rd32((u32)param_1 + 0x1a0u);
    r8 = rd32((u32)param_1 + 0x1a4u);
    r7 = rd32((u32)param_1 + 0x1b0u);
    r6 = rd32((u32)param_1 + 0x1b4u);
    r5 = rd32((u32)param_1 + 0x1c4u);
    r0 = rd32((u32)param_1 + 0x1c8u);
    wr32((u32)param_1 + 0x150u, rd32((u32)param_1 + 0x160u));
    wr32((u32)param_1 + 0x154u, r27);
    wr32((u32)param_1 + 0x160u, r28);
    wr32((u32)param_1 + 0x164u, r29);
    wr32((u32)param_1 + 0x170u, r30);
    wr32((u32)param_1 + 0x174u, r12);
    wr32((u32)param_1 + 0x180u, r11);
    wr32((u32)param_1 + 0x184u, r10);
    wr32((u32)param_1 + 0x190u, r9);
    wr32((u32)param_1 + 0x194u, r8);
    wr32((u32)param_1 + 0x1a0u, r7);
    wr32((u32)param_1 + 0x1a4u, r6);
    wr32((u32)param_1 + 0x1b0u, r5);
    wr32((u32)param_1 + 0x1b4u, r0);
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = 0x8033acc4u;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    a.r[0] = (u32)param_1 + 0xd4u;
    (void)tc_call(0x801e6438u, &a);
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = 1u;
    (void)tc_call(0x801f0fa0u, &a);
    return;
}
