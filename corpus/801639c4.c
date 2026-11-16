#include "tc_rt.h"

void fn_801639c4(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x800545e4u, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x28u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        r29 = r3;
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x28u;
            r3 = tc_call(0x80094e80u, &a);
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x28u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
        }
        r29 = r3;
    }
    r31 = r3;
    if (r3 != 0u) {
        r27 = rd32(param_1 + 4u);
        r3 = r3;
        r28 = rd32(param_1);
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x8011e214u, &a);
        wr32(r29 + 0x1cu, r28);
        wr32(r29 + 0x20u, param_1);
        wr32(r29 + 0x24u, r27);
        wr32(r29, 0x80369448u);
    }
    a.r[0] = param_1 + 8u;
    a.r[1] = r31;
    (void)tc_call(0x8011e658u, &a);
    r3 = tc_call(0x800545e4u, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x28u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        r27 = r3;
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x28u;
            r3 = tc_call(0x80094e80u, &a);
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x28u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
        }
        r27 = r3;
    }
    r29 = r3;
    if (r3 != 0u) {
        r26 = rd32(param_1 + 4u);
        r3 = r3;
        r28 = rd32(param_1);
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x8011e214u, &a);
        wr32(r27 + 0x1cu, r28);
        wr32(r27 + 0x20u, param_1);
        wr32(r27 + 0x24u, r26);
        wr32(r27, 0x80369470u);
    }
    a.r[0] = param_1 + 8u;
    a.r[1] = r29;
    (void)tc_call(0x8011e658u, &a);
    r3 = tc_call(0x800545e4u, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x28u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        r26 = r3;
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x28u;
            r3 = tc_call(0x80094e80u, &a);
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x28u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
        }
        r26 = r3;
    }
    r29 = r3;
    if (r3 != 0u) {
        r28 = rd32(param_1 + 4u);
        r3 = r3;
        r27 = rd32(param_1);
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x8011e214u, &a);
        wr32(r26 + 0x1cu, r27);
        wr32(r26 + 0x20u, param_1);
        wr32(r26 + 0x24u, r28);
        wr32(r26, 0x8036945cu);
    }
    a.r[0] = param_1 + 8u;
    a.r[1] = r29;
    (void)tc_call(0x8011e658u, &a);
    a.r[0] = param_1 + 8u;
    a.r[1] = r31;
    (void)tc_call(0x8011e3d4u, &a);
    wr32(param_1 + 0x48u, 0xffffffffu);
    wr32(param_1 + 0x4cu, 0xffffffffu);
    wr32(param_1 + 0x44u, 0u);
    return;
}
