#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_800dbd88(u32 param_r3, u32 param_r4)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    r4 = param_r3 + (rd32(param_r3 + 8u) * 0x1cu);
    if (rd32(r4 + 0x14u) != 0u) {
        if (rd32(param_r3 + 4u) == 0u) {
            f1 = (f64)rdf32(0x80573a10u);
            r30 = rd32(rd32(r4 + 0xcu) + 8u);
            if (f1 == (f64)rdf32(param_r3) && rd32(r30 + 8u) == 1u) {
                f31 = (f64)rdf32(r30 + 0x10u);
                f30 = (f64)rdf32(r30 + 0x1cu);
                a.r[0] = param_r4;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(param_r4) + 0x28u), &a);
                r4 = r3;
                r3 = r30 + 0xcu;
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r3;
                f1 = tc_callf(0x80234380u, &a);
                a.r[0] = param_r4;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(param_r4) + 0x28u), &a);
                r4 = r3;
                r3 = r30 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r3;
                f1 = tc_callf(0x80234380u, &a);
                wrf32d(r30 + 0x10u, f31);
                wrf32d(r30 + 0x1cu, f30);
                a.r[0] = param_r4;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                f1 = tc_callf(rd32(rd32(param_r4) + 0x2cu), &a);
                r4 = tc_lastr4();
                f2 = (f64)rdf32(r30 + 0x24u);
                f1 = (f64)(f32)(f2 + f1);
                c0lt = (f64)rdf32(0x80573a14u) < f1;
                wrf32d(r30 + 0x24u, f1);
                if (!c0lt) {
                    f0 = (f64)rdf32(0x80573a1cu);
                    f1 = (f64)rdf32(r30 + 0x24u);
                    if ((f0 > f1) || (f0 == f1)) {
                        f1 = (f64)(f32)((f64)rdf32(0x80573a18u) + f1);
                    }
                } else {
                    f1 = (f64)(f32)((f64)rdf32(r30 + 0x24u) - (f64)rdf32(0x80573a18u));
                }
                wrf32d(r30 + 0x24u, f1);
                a.r[0] = param_r4;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = f2;
                f1 = tc_callf(rd32(rd32(param_r4) + 0x2cu), &a);
                r4 = tc_lastr4();
                f2 = (f64)rdf32(r30 + 0x28u);
                f1 = (f64)(f32)(f2 + f1);
                c0lt = (f64)rdf32(0x80573a14u) < f1;
                wrf32d(r30 + 0x28u, f1);
                if (!c0lt) {
                    f0 = (f64)rdf32(0x80573a1cu);
                    f1 = (f64)rdf32(r30 + 0x28u);
                    if ((f0 > f1) || (f0 == f1)) {
                        f1 = (f64)(f32)((f64)rdf32(0x80573a18u) + f1);
                    }
                } else {
                    f1 = (f64)(f32)((f64)rdf32(r30 + 0x28u) - (f64)rdf32(0x80573a18u));
                }
                wrf32d(r30 + 0x28u, f1);
            }
            r3 = rd32(r30 + 4u);
            r29 = 0u;
            r31 = rd32(r30);
            if (r3 != 4u && r31 < 0xffffffffu && r31 != rd32(param_r4 + 0x100u)) {
                if (r3 != 0u || rd32(r30 + 0x30u) != 1u) {
                    a.r[0] = param_r4;
                    a.r[1] = r31;
                    a.r[2] = 1u;
                    a.r[3] = 0u;
                    a.f[0] = (f64)rdf32(0x80573a3cu);
                    a.f[1] = f2;
                    f1 = tc_callf(rd32(rd32(param_r4) + 0x54u), &a);
                    r4 = tc_lastr4();
                    f2 = 0.0;
                } else {
                    a.r[0] = param_r4;
                    a.r[1] = r31;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = (f64)rdf32(0x80573a3cu);
                    a.f[1] = f2;
                    f1 = tc_callf(rd32(rd32(param_r4) + 0x54u), &a);
                    r4 = tc_lastr4();
                    f2 = 0.0;
                }
                if (rd32(r30 + 4u) == 1u) {
                    a.r[0] = rd32(param_r4 + 0xacu);
                    r3 = tc_call(0x8007dad4u, &a);
                    r3 = rd32(r3 + 0xcu);
                    a.r[0] = r3;
                    r3 = tc_call(0x800f2a0cu, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    f2 = 0.0;
                    if (r3 != 0u) {
                        r4 = rd32(r30);
                        if (rd32(r3 + 4u) > r4) {
                            r3 = rd32(r3);
                            r3 = r3 + (r4 * 0x24u);
                            f2 = (f64)rdf32(r3 + 0x20u);
                            if (f2 < (f64)rdf32(0x80573a40u)) {
                                f2 = (f64)rdf32(0x80573a20u);
                            }
                            f0 = (f64)rdf32(0x80573a44u);
                            f1 = (f64)(f32)px_fdiv((f64)rdf32(r30 + 0x2cu), f2);
                            if (f1 > f0) {
                                f1 = f0;
                            }
                            a.r[0] = param_r4;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.f[0] = f1;
                            a.f[1] = f2;
                            f1 = tc_callf(rd32(rd32(param_r4) + 0x50u), &a);
                            r4 = tc_lastr4();
                            f2 = 0.0;
                        }
                    }
                }
            }
            r0 = rd32(r30 + 4u);
            c0lt = (s32)r0 < 3;
            do {
                if (r0 == 3u) {
                    a.r[0] = param_r4;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = f2;
                    r3 = tc_call(rd32(rd32(param_r4) + 0x28u), &a);
                    f1 = tc_lastf();
                    r4 = rd32(r3);
                    r0 = rd32(r3 + 4u);
                    wr32(0x817fdf98u, r4);
                    wr32(0x817fdf9cu, r0);
                    wr32(0x817fdfa0u, rd32(r3 + 8u));
                    a.r[0] = param_r4;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    f1 = tc_callf(rd32(rd32(param_r4) + 0x2cu), &a);
                    wrf32d(0x817fdf88u, f1);
                    a.r[0] = param_r4;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    f1 = tc_callf(rd32(rd32(param_r4) + 0x2cu), &a);
                    a.r[0] = param_r4;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(param_r4) + 0x28u), &a);
                    a.f[0] = f1;
                    a.r[0] = r30;
                    a.r[1] = 0x817fdf98u;
                    a.r[2] = 0x817fdf88u;
                    a.r[3] = r3;
                    r3 = tc_call(0x800db874u, &a);
                    f1 = tc_lastf();
                    r29 = r3;
                    a.r[0] = param_r4;
                    a.r[1] = 0x817fdf98u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    (void)tc_call(rd32(rd32(param_r4) + 0x1cu), &a);
                    a.r[0] = param_r4;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = (f64)rdf32(0x817fdf88u);
                    a.f[1] = 0.0;
                    (void)tc_call(rd32(rd32(param_r4) + 0x24u), &a);
                } else {
                    if (!c0lt) {
                        c0lt = (s32)r0 < 5;
                        if (r0 != 5u) {
                            if (!c0lt) break;
                            if (r31 < 0xffffffffu && (r31 != rd32(param_r4 + 0x100u) || (f64)rdf32(param_r4 + 0x10cu) < (f64)rdf32(0x80573a40u))) {
                                f30 = (f64)rdf32(r30 + 0x2cu);
                                if (!(f30 < (f64)rdf32(0x80573a40u))) {
                                    f1 = (f64)rdf32(0x80573a3cu);
                                } else {
                                    f1 = (f64)rdf32(0x80573a10u);
                                }
                                if ((rd32(r30 + 0x30u) + 0x10000u) != 0xffffu) {
                                    a.r[0] = param_r4;
                                    a.r[1] = r31;
                                    a.r[2] = 0u;
                                    a.r[3] = 0u;
                                    a.f[0] = f1;
                                    a.f[1] = f2;
                                    (void)tc_call(rd32(rd32(param_r4) + 0x54u), &a);
                                    r4 = tc_lastr4();
                                } else {
                                    a.r[0] = param_r4;
                                    a.r[1] = r31;
                                    a.r[2] = 1u;
                                    a.r[3] = 0u;
                                    a.f[0] = f1;
                                    a.f[1] = f2;
                                    (void)tc_call(rd32(rd32(param_r4) + 0x54u), &a);
                                    r4 = tc_lastr4();
                                }
                                f1 = (f64)rdf32(r30 + 0x24u);
                                if (f1 > (f64)rdf32(0x80573a10u)) {
                                    a.f[0] = f1;
                                    a.r[0] = param_r4;
                                    (void)tc_call(0x80064b48u, &a);
                                    r4 = tc_lastr4();
                                }
                                a.r[0] = param_r4;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.f[0] = f30;
                                a.f[1] = 0.0;
                                (void)tc_call(rd32(rd32(param_r4) + 0x50u), &a);
                                if (!(f30 < (f64)rdf32(0x80573a40u))) break;
                                r29 = 1u;
                                break;
                            }
                            if ((rd32(r30 + 0x30u) + 0x10000u) != 0xffffu) {
                                a.f[0] = (f64)rdf32(param_r3);
                                a.r[0] = r30;
                                a.r[1] = rd32(param_r4 + 0xfcu);
                                r3 = tc_call(0x800dba78u, &a);
                            } else {
                                r3 = 1u;
                            }
                            r29 = r3;
                            break;
                        }
                    } else {
                        c0lt = (s32)r0 < 1;
                        if (r0 != 1u) {
                            if (!c0lt) {
                                a.r[0] = param_r4;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.f[0] = f1;
                                a.f[1] = f2;
                                f1 = tc_callf(rd32(rd32(param_r4) + 0x2cu), &a);
                                wrf32d(0x817fdf8cu, f1);
                                a.r[0] = param_r4;
                                a.r[1] = tc_lastr4();
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                f1 = tc_callf(rd32(rd32(param_r4) + 0x2cu), &a);
                                a.f[0] = f1;
                                a.r[0] = r30;
                                a.r[1] = 0x817fdf8cu;
                                r3 = tc_call(0x800db7acu, &a);
                                r29 = r3;
                                a.r[0] = param_r4;
                                a.r[1] = tc_lastr4();
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.f[0] = (f64)rdf32(0x817fdf8cu);
                                a.f[1] = 0.0;
                                (void)tc_call(rd32(rd32(param_r4) + 0x24u), &a);
                                break;
                            }
                            if ((s32)r0 >= 0) {
                                a.r[0] = param_r4;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.f[0] = f1;
                                a.f[1] = f2;
                                r3 = tc_call(rd32(rd32(param_r4) + 0x28u), &a);
                                f1 = tc_lastf();
                                r4 = rd32(r3);
                                r0 = rd32(r3 + 4u);
                                wr32(0x817fdfb0u, r4);
                                wr32(0x817fdfb4u, r0);
                                wr32(0x817fdfb8u, rd32(r3 + 8u));
                                a.r[0] = param_r4;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                f1 = tc_callf(rd32(rd32(param_r4) + 0x2cu), &a);
                                wrf32d(0x817fdf94u, f1);
                                a.f[0] = (f64)rdf32(param_r3);
                                a.r[0] = r30;
                                a.r[1] = 0x817fdfb0u;
                                a.r[2] = 0x817fdf94u;
                                a.r[3] = rd32(param_r4 + 0xfcu);
                                r3 = tc_call(0x800dafa4u, &a);
                                f1 = tc_lastf();
                                r29 = r3;
                                a.r[0] = param_r4;
                                a.r[1] = 0x817fdfb0u;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                (void)tc_call(rd32(rd32(param_r4) + 0x1cu), &a);
                                a.r[0] = param_r4;
                                a.r[1] = tc_lastr4();
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.f[0] = (f64)rdf32(0x817fdf94u);
                                a.f[1] = 0.0;
                                (void)tc_call(rd32(rd32(param_r4) + 0x24u), &a);
                                break;
                            }
                            break;
                        }
                    }
                    a.r[0] = param_r4;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = f2;
                    r3 = tc_call(rd32(rd32(param_r4) + 0x28u), &a);
                    f1 = tc_lastf();
                    r4 = rd32(r3);
                    r0 = rd32(r3 + 4u);
                    wr32(0x817fdfa4u, r4);
                    wr32(0x817fdfa8u, r0);
                    wr32(0x817fdfacu, rd32(r3 + 8u));
                    a.r[0] = param_r4;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    f1 = tc_callf(rd32(rd32(param_r4) + 0x2cu), &a);
                    wrf32d(0x817fdf90u, f1);
                    a.r[0] = param_r4;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    f1 = tc_callf(rd32(rd32(param_r4) + 0x2cu), &a);
                    a.r[0] = param_r4;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(param_r4) + 0x28u), &a);
                    a.f[0] = f1;
                    a.r[0] = r30;
                    a.r[1] = 0x817fdfa4u;
                    a.r[2] = 0x817fdf90u;
                    a.r[3] = r3;
                    r3 = tc_call(0x800db3d0u, &a);
                    f1 = tc_lastf();
                    r29 = r3;
                    a.r[0] = param_r4;
                    a.r[1] = 0x817fdfa4u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    (void)tc_call(rd32(rd32(param_r4) + 0x1cu), &a);
                    a.r[0] = param_r4;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = (f64)rdf32(0x817fdf90u);
                    a.f[1] = 0.0;
                    (void)tc_call(rd32(rd32(param_r4) + 0x24u), &a);
                    if (r29 != 0u && rd32(param_r3 + (rd32(param_r3 + 8u) * 0x1cu) + 0x14u) == 1u) {
                        a.r[0] = param_r4;
                        a.r[1] = 0u;
                        a.r[2] = 1u;
                        a.r[3] = 0u;
                        a.f[0] = (f64)rdf32(0x80573a3cu);
                        a.f[1] = 0.0;
                        (void)tc_call(rd32(rd32(param_r4) + 0x54u), &a);
                    }
                }
            } while (0);
            if (r29 == 0u) {
                wrf32d(param_r3, (f64)(f32)((f64)rdf32(param_r3) + (f64)rdf32(0x80573a20u)));
            } else {
                r0 = rd32(param_r3 + 8u) * 0x1cu;
                wrf32d(param_r3, (f64)rdf32(0x80573a10u));
                a.r[0] = param_r3 + r0 + 0xcu;
                r3 = tc_call(0x8007b09cu, &a);
                a.r[0] = r3;
                a.r[1] = 1u;
                (void)tc_call(0x800dae3cu, &a);
            }
        }
    } else {
        wrf32d(param_r3, (f64)rdf32(0x80573a10u));
    }
    return;
}
