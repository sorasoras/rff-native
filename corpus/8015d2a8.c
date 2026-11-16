#include "tc_rt.h"

void fn_8015d2a8(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    if (rd32(param_1 + 0x4b4u) != 0u) {
        a.r[0] = 0x804b9e14u;
        a.r[1] = 1u;
        (void)tc_call(0x8011ea94u, &a);
    }
    f31 = (f64)rdf32(0x805749a8u);
    wr32(param_1 + 0x4b0u, 1u);
    f30 = f31;
    r26 = rd32(param_1 + 0x480u);
    r3 = 0u;
    r25 = 1u;
    if ((u32)param_3 != 0u) {
        wr32(param_1 + 0x474u, 1u);
        r26 = 3u;
    }
    if (r26 != 3u && r26 != 4u) {
        r3 = 1u;
    }
    if (r3 == 0u) {
        r27 = rd32(param_1 + 0x46cu);
        if (r27 == 0u) {
            a.r[0] = param_1;
            r3 = tc_call(0x8015d7b4u, &a);
            r27 = r3;
        } else {
            r0 = rd32(r27 + 0x518u);
            if (r0 != 3u && r0 != 4u) {
                a.r[0] = param_1;
                a.r[1] = 0u;
                (void)tc_call(0x8015d874u, &a);
                a.r[0] = param_1;
                r3 = tc_call(0x8015d7b4u, &a);
                r27 = r3;
            }
        }
        if ((u32)param_3 != 0u) {
            a.r[0] = r27;
            a.r[1] = param_2;
            (void)tc_call(0x800d5450u, &a);
            a.r[0] = r27;
            a.r[1] = rd32(param_1 + 0x4acu);
            (void)tc_call(0x800d5940u, &a);
            a.r[0] = r27;
            a.r[1] = 3u;
            (void)tc_call(0x800d3830u, &a);
        }
        f31 = (f64)rdf32(0x805749f0u);
        f30 = (f64)rdf32(0x805749f8u);
    } else {
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3 + 0x40u);
        r29 = rd32(r3 + 0x7a8u);
        r3 = tc_call(0x80097da4u, &a);
        r4 = 1u;
        r3 = rd32(r3 + 0x40u);
        r0 = rd32(param_1 + 0x488u);
        r28 = rd32(r3 + 0x7a4u);
        if (r29 != rd32(param_1 + 0x48cu) || r28 != r0) {
            r4 = 0u;
        }
        r27 = rd32(param_1 + 0x46cu);
        if (r27 == 0u) {
            r4 = 0u;
        }
        if (rd32(param_1 + 0x4b8u) != 0u) {
            r4 = 0u;
            wr32(param_1 + 0x4b8u, 0u);
        }
        if (r4 == 0u) {
            if (r27 == 0u) {
                a.r[0] = param_1;
                r3 = tc_call(0x8015d7b4u, &a);
                r27 = r3;
            } else {
                a.r[0] = param_1;
                a.r[1] = 0u;
                (void)tc_call(0x8015d874u, &a);
                a.r[0] = param_1;
                r3 = tc_call(0x8015d7b4u, &a);
                r27 = r3;
                (void)tc_call(0x800d5c0cu, &a);
                r25 = 0u;
            }
        } else {
            (void)tc_call(0x800d5c0cu, &a);
        }
        wr32(param_1 + 0x48cu, r29);
        wr32(param_1 + 0x488u, r28);
    }
    wr32(r27 + 0x72cu, (rd32(r27 + 0x72cu) & 0xf7ffffffu) | ((rd32(param_1 + 0x470u) << 0x1bu) & 0x8000000u));
    a.f[0] = f31;
    a.f[1] = f30;
    a.r[0] = param_1;
    a.r[1] = r27;
    a.r[2] = param_2;
    a.r[3] = r26;
    a.r[4] = 1u;
    a.r[5] = r25;
    (void)tc_call(0x8015d018u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x8015d1ecu, &a);
    return;
}
