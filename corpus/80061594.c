#include "tc_rt.h"

void fn_80061594(s32 param_1)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r29 = 0, r30 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0xcu);
    if (r0 <= 6u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r3 = rd32(r0 - 0x7fcb00f8u);
        sw_ = r3;
        switch (sw_) {
        case 0x800615d4u:
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x14u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r30 = r3;
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x14u;
                    r3 = tc_call(0x80094e80u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r30 = r3;
                }
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x14u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r30 = r3;
            }
            if (r3 != 0u) {
                r3 = r3;
                a.r[0] = r3;
                f1 = tc_callf(0x800f73a4u, &a);
                r4 = tc_lastr4();
            }
            wr32((u32)param_1 + 0x10u, r30);
            wr32(0x80571178u, 0xau);
            wr32(0x8057117cu, 0u);
            r3 = rd32((u32)param_1 + 0x10u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 0xcu), &a);
            wr32((u32)param_1 + 0xcu, 1u);
            break;
        case 0x80061690u:
            r3 = tc_call(0x8003ced8u, &a);
            if (r3 != 0u) {
                a.r[0] = 0xffu;
                a.r[1] = 0xffu;
                a.r[2] = 0xffu;
                a.r[3] = 0xffu;
                (void)tc_call(0x800f2900u, &a);
                a.r[0] = 0xffu;
                a.r[1] = 0xffu;
                a.r[2] = 0xffu;
                a.r[3] = 0xffu;
                a.r[4] = 0xffffffu;
                f1 = tc_callf(0x80044e78u, &a);
                r4 = tc_lastr4();
            } else {
                a.r[0] = 0u;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = 0xffu;
                f1 = tc_callf(0x800f2900u, &a);
                r4 = tc_lastr4();
            }
            r3 = rd32((u32)param_1 + 0x10u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 0x1cu), &a);
            if (r3 != 0u) break;
            r3 = tc_call(0x8003c20cu, &a);
            if (r3 != 0u) {
                r0 = 1u;
                wr32(0x80571124u, 1u);
            } else {
                r0 = 0u;
                wr32(0x80571124u, 0u);
            }
            r0 = (0u - r0) | r0;
            a.r[0] = (r0 >> 0x1fu) & 1u;
            f1 = tc_callf(0x80035b6cu, &a);
            r3 = rd32((u32)param_1 + 0x10u);
            a.r[0] = r3;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x14u), &a);
            r3 = rd32((u32)param_1 + 0x10u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r3) + 8u), &a);
            }
            wr32((u32)param_1 + 0x10u, 0u);
            wr32((u32)param_1 + 0xcu, 2u);
            break;
        case 0x80061778u:
            r3 = tc_call(0x8003ced8u, &a);
            if (r3 != 0u) {
                a.r[0] = 0xffu;
                a.r[1] = 0xffu;
                a.r[2] = 0xffu;
                a.r[3] = 0xffu;
                (void)tc_call(0x800f2900u, &a);
                a.r[0] = 0xffu;
                a.r[1] = 0xffu;
                a.r[2] = 0xffu;
                a.r[3] = 0xffu;
                a.r[4] = 0xffffffu;
                f1 = tc_callf(0x80044e78u, &a);
            } else {
                a.r[0] = 0u;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = 0xffu;
                f1 = tc_callf(0x800f2900u, &a);
            }
            r3 = rd32(0x804b9dfcu);
            if (((((0u - r3) | r3) >> 0x1fu) & 1u) != 0u) {
                a.r[0] = rd32(0x804b9dfcu);
                a.r[1] = 0u;
                f1 = tc_callf(0x802f5fd8u, &a);
            }
            r3 = (u32)rd8(0x8049dfa9u);
            wr32(0x804b9dbcu, 0xffffffffu);
            if (((ppc_cntlzw(r3 - 1u) >> 5u) & 0x7ffffffu) == 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0u;
                a.r[1] = 0u;
                a.r[2] = 0x10u;
                a.r[3] = 0u;
                a.r[4] = 1u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x800f2370u, &a);
            } else {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 1u;
                a.r[1] = 0u;
                a.r[2] = 0x10u;
                a.r[3] = 0u;
                a.r[4] = 1u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x800f2370u, &a);
            }
            wr32((u32)param_1 + 0xcu, 3u);
            wr32(0x804b9e08u, 1u);
            f1 = (f64)rdf32(0x80572548u);
            r4 = rd32((u32)param_1 + 0x14u);
            wr32(0x804b9dbcu, 0xffffffffu);
            a.f[0] = f1;
            a.r[0] = 0x804b9db0u;
            a.r[1] = r4;
            (void)tc_call(0x8011f1e0u, &a);
            a.r[0] = 0u;
            r3 = tc_call(0x80059e34u, &a);
            f1 = tc_lastf();
            a.r[0] = r3;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x14u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r30 = r3;
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x14u;
                    r3 = tc_call(0x80094e80u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r30 = r3;
                }
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x14u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r30 = r3;
            }
            if (r3 != 0u) {
                r3 = r3;
                a.r[0] = r3;
                f1 = tc_callf(0x800f73a4u, &a);
                r4 = tc_lastr4();
            }
            wr32((u32)param_1 + 0x10u, r30);
            wr32(0x80571178u, 1u);
            wr32(0x8057117cu, 0u);
            r3 = rd32((u32)param_1 + 0x10u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 0xcu), &a);
            a.r[0] = 0xffu;
            a.r[1] = 0xffu;
            a.r[2] = 0xffu;
            a.r[3] = 0xffu;
            a.r[4] = 0xffffffu;
            (void)tc_call(0x80044e78u, &a);
            break;
        case 0x8006195cu:
            a.r[0] = 0xffu;
            a.r[1] = 0xffu;
            a.r[2] = 0xffu;
            a.r[3] = 0xffu;
            a.r[4] = 0xffffffu;
            (void)tc_call(0x80044e78u, &a);
            a.r[0] = 0u;
            f1 = tc_callf(0x80059e34u, &a);
            r3 = rd32((u32)param_1 + 0x10u);
            a.r[0] = r3;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 0x1cu), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 != 0u) break;
            r3 = rd32((u32)param_1 + 0x10u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x14u), &a);
            r4 = tc_lastr4();
            r3 = rd32((u32)param_1 + 0x10u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 8u), &a);
                r4 = tc_lastr4();
            }
            wr32((u32)param_1 + 0x10u, 0u);
            r0 = rd32(0x8057113cu);
            c0lt = (s32)r0 < 4;
            if (r0 == 4u) {
                wr32(0x80571178u, 0xbu);
                wr32(0x8057117cu, 0u);
                a.r[0] = 0u;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                r3 = tc_call(0x800545e4u, &a);
                r4 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0x14u;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040cd8u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        r30 = r3;
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = 0x14u;
                        r3 = tc_call(0x80094e80u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        r30 = r3;
                    }
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x14u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040db8u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r30 = r3;
                }
                if (r3 != 0u) {
                    r3 = r3;
                    a.r[0] = r3;
                    f1 = tc_callf(0x800f73a4u, &a);
                    r4 = tc_lastr4();
                }
                wr32((u32)param_1 + 0x10u, r30);
                a.r[0] = r30;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r30) + 0xcu), &a);
                wr32((u32)param_1 + 0xcu, 4u);
                a.r[0] = 0u;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0xffffffu;
                (void)tc_call(0x80044e78u, &a);
                a.r[0] = 0u;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                (void)tc_call(0x800f2900u, &a);
                break;
            }
            if (!c0lt) {
                if ((s32)r0 >= 6) break;
                wr32(0x80571178u, 8u);
                wr32(0x8057117cu, 0u);
                a.r[0] = 0u;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                r3 = tc_call(0x800545e4u, &a);
                r4 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0x14u;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040cd8u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        r30 = r3;
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = 0x14u;
                        r3 = tc_call(0x80094e80u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        r30 = r3;
                    }
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x14u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040db8u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r30 = r3;
                }
                if (r3 != 0u) {
                    r3 = r3;
                    a.r[0] = r3;
                    f1 = tc_callf(0x800f73a4u, &a);
                    r4 = tc_lastr4();
                }
                wr32((u32)param_1 + 0x10u, r30);
                a.r[0] = r30;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r30) + 0xcu), &a);
                wr32((u32)param_1 + 0xcu, 5u);
                break;
            }
            if (r0 == 2u) {
                wr32((u32)param_1 + 0xcu, 2u);
                break;
            }
            break;
        case 0x80061bacu:
            a.r[0] = 1u;
            (void)tc_call(0x80059e34u, &a);
            a.r[0] = 0xffu;
            a.r[1] = 0xffu;
            a.r[2] = 0xffu;
            a.r[3] = 0xffu;
            a.r[4] = 0xffffffu;
            f1 = tc_callf(0x80044e78u, &a);
            r3 = rd32((u32)param_1 + 0x10u);
            a.r[0] = r3;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 0x1cu), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 != 0u) break;
            r3 = rd32((u32)param_1 + 0x10u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x14u), &a);
            r4 = tc_lastr4();
            r3 = rd32((u32)param_1 + 0x10u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 8u), &a);
                r4 = tc_lastr4();
            }
            wr32((u32)param_1 + 0x10u, 0u);
            wr32((u32)param_1 + 0xcu, 3u);
            a.r[0] = 0u;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x14u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r30 = r3;
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x14u;
                    r3 = tc_call(0x80094e80u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r30 = r3;
                }
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x14u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r30 = r3;
            }
            if (r3 != 0u) {
                r3 = r3;
                a.r[0] = r3;
                f1 = tc_callf(0x800f73a4u, &a);
                r4 = tc_lastr4();
            }
            wr32((u32)param_1 + 0x10u, r30);
            wr32(0x80571178u, 1u);
            wr32(0x8057117cu, 0u);
            r3 = rd32((u32)param_1 + 0x10u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 0xcu), &a);
            r4 = rd32((u32)param_1 + 0x14u);
            wr32(0x804b9dbcu, 0xffffffffu);
            a.f[0] = (f64)rdf32(0x80572548u);
            a.r[0] = 0x804b9db0u;
            a.r[1] = r4;
            (void)tc_call(0x8011f1e0u, &a);
            break;
        case 0x80061d04u:
            a.r[0] = 1u;
            (void)tc_call(0x80059e34u, &a);
            a.r[0] = 0xffu;
            a.r[1] = 0xffu;
            a.r[2] = 0xffu;
            a.r[3] = 0xffu;
            a.r[4] = 0xffffffu;
            f1 = tc_callf(0x80044e78u, &a);
            r3 = rd32((u32)param_1 + 0x10u);
            a.r[0] = r3;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 0x1cu), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 != 0u) break;
            r3 = rd32((u32)param_1 + 0x10u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x14u), &a);
            r4 = tc_lastr4();
            r3 = rd32((u32)param_1 + 0x10u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 8u), &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
            }
            wr32((u32)param_1 + 0x10u, 0u);
            if (rd32(0x805706e0u) != 4u) {
                wr32((u32)param_1 + 0xcu, 3u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                r3 = tc_call(0x800545e4u, &a);
                r4 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0x14u;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040cd8u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        r30 = r3;
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = 0x14u;
                        r3 = tc_call(0x80094e80u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        r30 = r3;
                    }
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x14u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040db8u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r30 = r3;
                }
                if (r3 != 0u) {
                    r3 = r3;
                    a.r[0] = r3;
                    f1 = tc_callf(0x800f73a4u, &a);
                    r4 = tc_lastr4();
                }
                wr32((u32)param_1 + 0x10u, r30);
                wr32(0x80571178u, 1u);
                r3 = rd32((u32)param_1 + 0x10u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r3) + 0xcu), &a);
                break;
            }
            wr32((u32)param_1 + 0xcu, 6u);
            a.r[0] = 2u;
            (void)tc_call(0x80209b60u, &a);
            break;
        case 0x80061e54u:
            a.r[0] = 1u;
            (void)tc_call(0x80059e34u, &a);
            a.r[0] = 0u;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0xffffffu;
            (void)tc_call(0x80044e78u, &a);
            if (rd32(0x80571138u) != 0u) {
                wr32((u32)param_1 + 0xcu, 7u);
                break;
            }
            r29 = rd32(0x805711a4u);
            wr32(0x80571138u, 1u);
            r3 = tc_call(0x8011aff4u, &a);
            if (r3 == 0u || (rd32(0x8049dfa4u) & (((r29 & 0x20u) != 0u) ? 0u : (1u << (r29 & 0x1fu)))) == 0u) break;
            r3 = tc_call(0x80209bbcu, &a);
            if (r3 == 0u) {
                wr32(0x80571138u, 0u);
                break;
            }
            if (r3 == 1u) {
                wr32(0x805711a8u, 1u);
                wr32(0x80571138u, 0u);
            }
            wr32((u32)param_1 + 0xcu, 7u);
            break;
        default:
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(sw_, &a);
            r0 = 0u;
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            r11 = 0u;
            r12 = 0u;
            f0 = 0.0;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            f9 = 0.0;
            f10 = 0.0;
            f11 = 0.0;
            f12 = 0.0;
            f13 = 0.0;
            ctr = 0u;
            return;
        }
    }
    return;
}
