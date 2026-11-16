#include "tc_rt.h"

void fn_80248e60(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r30 = param_r3;
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    r27 = param_r3;
    r29 = 0u;
    wr32(param_r3 + 0x7cu, rd32(param_r3 + 0x7cu) | 1u);
    for (;;) {
        r3 = rd32(r27);
        if (r3 == 0u) {
            r4 = 0u;
            break;
        }
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = (rd32(param_r3 + 0x1cu) << 2u) & 0xfffffffcu;
        (void)tc_call(0x8000443cu, &a);
        r29 = r29 + 1u;
        r27 = r27 + 4u;
        if (r29 >= 3u) {
            f1 = (f64)rdf32(0x80576c58u);
            f0 = (f64)rdf32(param_r3 + 0x80u);
            wr32(param_r3 + 0xcu, 0u);
            f1 = (f64)(f32)(f1 * f0);
            a.f[0] = f1;
            r3 = tc_call(0x802558e4u, &a);
            r0 = rd32(param_r3 + 0x1cu);
            r4 = 1u;
            r3 = r0 - r3;
            r0 = (r0 << 0x10u) & 0xffff0000u;
            r3 = (r3 << 0x10u) & 0xffff0000u;
            wr32(param_r3 + 0x18u, r0);
            wr32(param_r3 + 0x10u, r3);
            wr32(param_r3 + 0x14u, r3);
            break;
        }
    }
    if (r4 != 0u) {
        a.r[0] = param_r3;
        r3 = tc_call(0x80249400u, &a);
        if (r3 != 0u) {
            wr32(param_r3 + 0x7cu, (rd32(param_r3 + 0x7cu) | 2u) & 0xfffffffeu);
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
        } else {
            r3 = tc_call(0x8022c2b0u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r28 = r3;
            r27 = 0u;
            wr32(param_r3 + 0x7cu, rd32(param_r3 + 0x7cu) | 1u);
            do {
                r3 = rd32(r30);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    f1 = tc_callf(rd32(0x80570b7cu), &a);
                    r4 = tc_lastr4();
                }
                r27 = r27 + 1u;
                wr32(r30, 0u);
                r30 = r30 + 4u;
            } while (r27 < 3u);
            a.r[0] = r28;
            (void)tc_call(0x8022c2d8u, &a);
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
        }
    } else {
        r3 = tc_call(0x8022c2b0u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r27 = r3;
        r28 = 0u;
        wr32(param_r3 + 0x7cu, rd32(param_r3 + 0x7cu) | 1u);
        do {
            r3 = rd32(r30);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(0x80570b7cu), &a);
                r4 = tc_lastr4();
            }
            r28 = r28 + 1u;
            wr32(r30, 0u);
            r30 = r30 + 4u;
        } while (r28 < 3u);
        a.r[0] = r27;
        (void)tc_call(0x8022c2d8u, &a);
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
