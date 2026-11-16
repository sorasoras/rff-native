#include "tc_rt.h"

void fn_8011f7a4(s32 param_1)
{
    u32 r3 = 0, r4 = tc_argr(1u), r17 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r24 = (u32)param_1;
    r26 = (u32)param_1 + 0x40u;
    r25 = (u32)param_1 + 0x50u;
    r23 = 0u;
    do {
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x28u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r17 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x28u;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x28u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
            }
            r17 = r3;
        }
        r22 = r3;
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            a.r[1] = 0u;
            r3 = tc_call(0x8011e214u, &a);
            f1 = tc_lastf();
            wr32(r17 + 0x1cu, (u32)param_1);
            wr32(r17 + 0x20u, r26);
            wr32(r17 + 0x24u, r25);
            wr32(r17, 0x80362ab8u);
        }
        a.r[0] = r25;
        a.r[1] = r22;
        r3 = tc_call(0x8011e658u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x28u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r17 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x28u;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x28u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
            }
            r17 = r3;
        }
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            a.r[1] = 0u;
            r3 = tc_call(0x8011e214u, &a);
            f1 = tc_lastf();
            wr32(r17 + 0x1cu, (u32)param_1);
            wr32(r17 + 0x20u, r26);
            wr32(r17 + 0x24u, r25);
            wr32(r17, 0x80362ae0u);
        }
        a.r[0] = r25;
        a.r[1] = r17;
        r3 = tc_call(0x8011e658u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x28u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r17 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x28u;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x28u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
            }
            r17 = r3;
        }
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            a.r[1] = 0u;
            r3 = tc_call(0x8011e214u, &a);
            f1 = tc_lastf();
            wr32(r17 + 0x1cu, (u32)param_1);
            wr32(r17 + 0x20u, r26);
            wr32(r17 + 0x24u, r25);
            wr32(r17, 0x80362accu);
        }
        a.r[0] = r25;
        a.r[1] = r17;
        r3 = tc_call(0x8011e658u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x28u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r17 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x28u;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x28u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
            }
            r17 = r3;
        }
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            a.r[1] = 0u;
            r3 = tc_call(0x8011e214u, &a);
            f1 = tc_lastf();
            wr32(r17 + 0x1cu, (u32)param_1);
            wr32(r17 + 0x20u, r26);
            wr32(r17 + 0x24u, r25);
            wr32(r17, 0x80362aa4u);
        }
        a.r[0] = r25;
        a.r[1] = r17;
        r3 = tc_call(0x8011e658u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x28u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r17 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x28u;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x28u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
            }
            r17 = r3;
        }
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            a.r[1] = 0u;
            r3 = tc_call(0x8011e214u, &a);
            f1 = tc_lastf();
            wr32(r17 + 0x1cu, (u32)param_1);
            wr32(r17 + 0x20u, r26);
            wr32(r17 + 0x24u, r25);
            wr32(r17, 0x80362a90u);
        }
        a.r[0] = r25;
        a.r[1] = r17;
        r3 = tc_call(0x8011e658u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x28u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r17 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x28u;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x28u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
            }
            r17 = r3;
        }
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            a.r[1] = 0u;
            r3 = tc_call(0x8011e214u, &a);
            f1 = tc_lastf();
            wr32(r17 + 0x1cu, (u32)param_1);
            wr32(r17 + 0x20u, r26);
            wr32(r17 + 0x24u, r25);
            wr32(r17, 0x80362a7cu);
        }
        a.r[0] = r25;
        a.r[1] = r17;
        r3 = tc_call(0x8011e658u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x28u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r17 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x28u;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x28u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
            }
            r17 = r3;
        }
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            a.r[1] = 0u;
            r3 = tc_call(0x8011e214u, &a);
            f1 = tc_lastf();
            wr32(r17 + 0x1cu, (u32)param_1);
            wr32(r17 + 0x20u, r26);
            wr32(r17 + 0x24u, r25);
            wr32(r17, 0x80362a68u);
        }
        a.r[0] = r25;
        a.r[1] = r17;
        r3 = tc_call(0x8011e658u, &a);
        f1 = tc_lastf();
        a.r[0] = r25;
        a.r[1] = r22;
        r3 = tc_call(0x8011e3d4u, &a);
        f1 = tc_lastf();
        r23 = r23 + 1u;
        wr32(r24 + 0x40u, 0xffffffffu);
        r26 = r26 + 0x80u;
        r25 = r25 + 0x80u;
        r24 = r24 + 0x80u;
    } while ((s32)r23 < 48);
    wr32((u32)param_1 + 0x14u, 1u);
    wr32((u32)param_1 + 0x18u, 1u);
    wr32(0x80571290u, 0u);
    wr32((u32)param_1 + 0x1cu, 0u);
    return;
}
