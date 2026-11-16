#include "tc_rt.h"

u32 fn_80060dec(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f30 = (f64)rdf32(0x80572520u);
    if (rd32(0x80571100u) != 1u) {
        f31 = (f64)rdf32(0x80572528u);
        f30 = (f64)rdf32(0x8057252cu);
    } else {
        f31 = (f64)rdf32(0x80572524u);
    }
    r3 = tc_call(0x802750ccu, &a);
    r0 = r3 & 0xffu;
    c0lt = (s32)r0 < 3;
    do {
        if (r0 == 3u) {
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
            a.r[1] = 0x384u;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.r[4] = 0xffffffffu;
            r3 = tc_call(0x80050dd4u, &a);
            r31 = r3;
        } else {
            if (!c0lt) {
                if ((s32)r0 < 5) {
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
                    a.r[1] = 0x383u;
                    a.r[2] = 1u;
                    a.r[3] = 0u;
                    a.r[4] = 0xffffffffu;
                    r3 = tc_call(0x80050dd4u, &a);
                    r31 = r3;
                    break;
                }
            } else if (r0 == 1u) {
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
                a.r[1] = 0x382u;
                a.r[2] = 1u;
                a.r[3] = 0u;
                a.r[4] = 0xffffffffu;
                r3 = tc_call(0x80050dd4u, &a);
                r31 = r3;
                break;
            }
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
            a.r[1] = 0x382u;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.r[4] = 0xffffffffu;
            r3 = tc_call(0x80050dd4u, &a);
            r31 = r3;
        }
    } while (0);
    f30 = (f64)(f32)(f30 * f31);
    r3 = r3;
    a.r[0] = r3;
    r3 = tc_call(0x80045be0u, &a);
    a.r[0] = r3;
    a.r[1] = 0u;
    r3 = tc_call(0x8004bf2cu, &a);
    wr32((u32)param_1 + 0xf4u, r3);
    r3 = tc_call(0x800545e4u, &a);
    r6 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r31;
            a.r[2] = r5;
            a.r[3] = r6;
            f1 = tc_callf(0x80040e98u, &a);
            r4 = tc_lastr4();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = r31;
            f1 = tc_callf(0x80094ec0u, &a);
            r4 = tc_lastr4();
        }
    } else {
        r5 = rd32(r3 + 0xcu);
        r3 = rd32(r3);
        r6 = r6 + 0x18u;
        a.r[0] = r3;
        a.r[1] = r31;
        a.r[2] = r5;
        a.r[3] = r6;
        f1 = tc_callf(0x80040e98u, &a);
        r4 = tc_lastr4();
    }
    a.r[0] = (u32)param_1 + 0xcu;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    (void)tc_call(rd32(rd32((u32)param_1 + 0xcu) + 0xcu), &a);
    a.r[0] = (u32)param_1 + 0xcu;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f30;
    a.f[1] = (f64)rdf32(0x8057252cu);
    a.f[2] = (f64)(f32)((f64)rdf32(0x80572530u) * f31);
    a.f[3] = (f64)rdf32(0x80572534u);
    f1 = tc_callf(rd32(rd32((u32)param_1 + 0xcu) + 0x1cu), &a);
    r4 = tc_lastr4();
    r3 = rd32((u32)param_1 + 0xf4u);
    wr32((u32)param_1 + 0x34u, 1u);
    wr32((u32)param_1 + 0x24u, r3);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x8004c630u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if ((s32)r3 > 0) {
            wr32((u32)param_1 + 0x28u, 0u);
        }
    }
    a.r[0] = (u32)param_1 + 0x80u;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x80u) + 0xcu), &a);
    a.r[0] = (u32)param_1 + 0x80u;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f30;
    a.f[1] = (f64)rdf32(0x8057252cu);
    a.f[2] = (f64)(f32)((f64)rdf32(0x80572530u) * f31);
    a.f[3] = (f64)rdf32(0x80572534u);
    f1 = tc_callf(rd32(rd32((u32)param_1 + 0x80u) + 0x1cu), &a);
    r4 = tc_lastr4();
    r3 = rd32((u32)param_1 + 0xf4u);
    wr32((u32)param_1 + 0xa8u, 0u);
    wr32((u32)param_1 + 0x98u, r3);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x8004c630u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if ((s32)r3 > 1) {
            wr32((u32)param_1 + 0x9cu, 1u);
        }
    }
    a.r[0] = (u32)param_1 + 0xf8u;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    (void)tc_call(rd32(rd32((u32)param_1 + 0xf8u) + 0xcu), &a);
    f1 = (f64)rdf32(0x8057252cu);
    a.r[0] = (u32)param_1 + 0xf8u;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = f1;
    a.f[2] = (f64)rdf32(0x80572530u);
    a.f[3] = (f64)rdf32(0x80572534u);
    (void)tc_call(rd32(rd32((u32)param_1 + 0xf8u) + 0x1cu), &a);
    f0 = (f64)rdf32(0x80572538u);
    wr32((u32)param_1 + 0x154u, 0u);
    f1 = (f64)rdf32(0x8057253cu);
    wr32((u32)param_1 + 0x118u, 1u);
    wr32((u32)param_1 + 0x120u, 1u);
    wrf32d((u32)param_1 + 0x16cu, f0);
    wr32((u32)param_1 + 0x174u, 0u);
    wr32((u32)param_1 + 0x178u, 0u);
    wr32((u32)param_1 + 0x17cu, 0u);
    a.f[0] = f1;
    a.r[0] = 0u;
    a.r[1] = 8u;
    (void)tc_call(0x800523b0u, &a);
    (void)tc_call(0x8003c20cu, &a);
    wr32(0x80571124u, 0u);
    a.r[0] = 0u;
    (void)tc_call(0x80035b6cu, &a);
    a.r[0] = 0u;
    (void)tc_call(0x80035ba0u, &a);
    return 1u;
}
