#include "tc_rt.h"

void fn_8011eec8(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0xcu, 0xffffffffu);
    r3 = tc_call(0x800545e4u, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x24u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        r30 = r3;
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x24u;
            r3 = tc_call(0x80094e80u, &a);
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x24u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
        }
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x8011e214u, &a);
        wr32(r30 + 0x1cu, (u32)param_1);
        wr32(r30, 0x80362a3cu);
    }
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = r30;
    (void)tc_call(0x8011e658u, &a);
    r3 = tc_call(0x800545e4u, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x20u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        r30 = r3;
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x20u;
            r3 = tc_call(0x80094e80u, &a);
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
        }
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x8011e214u, &a);
        wr32(r30 + 0x1cu, (u32)param_1);
        wr32(r30, 0x80362a28u);
    }
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = r30;
    (void)tc_call(0x8011e658u, &a);
    r3 = tc_call(0x800545e4u, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x20u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        r30 = r3;
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x20u;
            r3 = tc_call(0x80094e80u, &a);
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
        }
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x8011e214u, &a);
        wr32(r30 + 0x1cu, (u32)param_1);
        wr32(r30, 0x80362a00u);
    }
    r29 = r30;
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = r30;
    (void)tc_call(0x8011e658u, &a);
    r3 = tc_call(0x800545e4u, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x20u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        r30 = r3;
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x20u;
            r3 = tc_call(0x80094e80u, &a);
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
        }
        r30 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x8011e214u, &a);
        wr32(r30 + 0x1cu, (u32)param_1);
        wr32(r30, 0x80362a14u);
    }
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = r30;
    (void)tc_call(0x8011e658u, &a);
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = r29;
    (void)tc_call(0x8011e3d4u, &a);
    return;
}
