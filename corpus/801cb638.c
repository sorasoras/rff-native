#include "tc_rt.h"

void fn_801cb638(u32 param_1)
{
    u32 r3 = 0, r4 = tc_argr(1u), r21 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 0x38cu;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    f1 = tc_lastf();
    wr32(param_1 + 0x858u, r3);
    a.r[0] = r3;
    a.r[1] = 0u;
    r3 = tc_call(0x800510bcu, &a);
    f1 = tc_lastf();
    wr32(param_1 + 0x85cu, r3);
    r28 = param_1;
    r26 = 0u;
    do {
        wr32(r28, 0xffffffffu);
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x24u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r21 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x24u;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x24u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
            }
            r21 = r3;
        }
        r27 = r3;
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            a.r[1] = 0u;
            r3 = tc_call(0x8011e214u, &a);
            f1 = tc_lastf();
            wr32(r21 + 0x1cu, param_1);
            wr32(r21 + 0x20u, r28);
            wr32(r21, 0x80373c00u);
        }
        a.r[0] = r28 + 4u;
        a.r[1] = r27;
        r3 = tc_call(0x8011e658u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x24u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r21 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x24u;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x24u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
            }
            r21 = r3;
        }
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            a.r[1] = 0u;
            r3 = tc_call(0x8011e214u, &a);
            f1 = tc_lastf();
            wr32(r21 + 0x1cu, param_1);
            wr32(r21 + 0x20u, r28);
            wr32(r21, 0x80373becu);
        }
        a.r[0] = r28 + 4u;
        a.r[1] = r21;
        r3 = tc_call(0x8011e658u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x24u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r21 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x24u;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x24u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
            }
            r21 = r3;
        }
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            a.r[1] = 0u;
            r3 = tc_call(0x8011e214u, &a);
            f1 = tc_lastf();
            wr32(r21 + 0x1cu, param_1);
            wr32(r21 + 0x20u, r28);
            wr32(r21, 0x80373bd8u);
        }
        a.r[0] = r28 + 4u;
        a.r[1] = r21;
        r3 = tc_call(0x8011e658u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x24u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r21 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x24u;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x24u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
            }
            r21 = r3;
        }
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            a.r[1] = 0u;
            r3 = tc_call(0x8011e214u, &a);
            f1 = tc_lastf();
            wr32(r21 + 0x1cu, param_1);
            wr32(r21 + 0x20u, r28);
            wr32(r21, 0x80373bc4u);
        }
        a.r[0] = r28 + 4u;
        a.r[1] = r21;
        r3 = tc_call(0x8011e658u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x24u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r21 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x24u;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x24u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
            }
            r21 = r3;
        }
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            a.r[1] = 0u;
            r3 = tc_call(0x8011e214u, &a);
            f1 = tc_lastf();
            wr32(r21 + 0x1cu, param_1);
            wr32(r21 + 0x20u, r28);
            wr32(r21, 0x80373bb0u);
        }
        a.r[0] = r28 + 4u;
        a.r[1] = r21;
        r3 = tc_call(0x8011e658u, &a);
        f1 = tc_lastf();
        a.r[0] = r28 + 4u;
        a.r[1] = r27;
        r3 = tc_call(0x8011e3d4u, &a);
        f1 = tc_lastf();
        wr32(r28 + 0x2b8u, r26);
        r26 = r26 + 1u;
        r28 = r28 + 0x2c8u;
    } while ((s32)r26 < 3);
    a.r[0] = param_1;
    r3 = tc_call(0x801cc220u, &a);
    f1 = tc_lastf();
    return;
}
