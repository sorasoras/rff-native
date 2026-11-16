#include "tc_rt.h"

u32 fn_800d6530(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfc8u, 0u);
    a.r[0] = rd32(0x804863d8u);
    r3 = tc_call(0x800c38bcu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r3 = rd32(0x804863d8u);
        r31 = 0u;
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfb4u, rd32(r3));
        wr32(0x817fdfb8u, r0);
        wr32(0x817fdfbcu, rd32(r3 + 8u));
        a.r[0] = (u32)param_1 + 0x24u;
        a.r[1] = 0x817fdfb4u;
        r3 = tc_call(0x800d2a0cu, &a);
        if (r3 != 0u) {
            r0 = rd32((u32)param_1 + 0x30u);
            wr32(0x817fdfa8u, rd32((u32)param_1 + 0x2cu));
            wr32(0x817fdfacu, r0);
            wr32(0x817fdfb0u, rd32((u32)param_1 + 0x34u));
            a.r[0] = 0x817fdfa8u;
            a.r[1] = 0x817fdfb4u;
            a.r[2] = 0x817fdfa8u;
            (void)tc_call(0x802343a4u, &a);
            wrf32d(0x817fdfacu, (f64)rdf32(0x805731b0u));
            a.r[0] = 0x817fdfa8u;
            f1 = tc_callf(0x80234428u, &a);
            f31 = f1;
            if (f1 < (f64)rdf32(0x805731b4u)) {
                r31 = 1u;
            } else {
                f1 = (f64)rdf32(0x805731b0u);
                r0 = 0u;
                if ((f1 == (f64)rdf32(0x817fdfa8u) && f1 == (f64)rdf32(0x817fdfacu)) && f1 == (f64)rdf32(0x817fdfb0u)) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    a.r[0] = 0x817fdfa8u;
                    a.r[1] = 0x817fdfa8u;
                    f1 = tc_callf(0x802343e4u, &a);
                }
                r5 = rd32(0x804890d4u);
                r4 = rd32(0x804890d8u);
                r0 = rd32(0x804890dcu);
                r3 = rd32(0x804863d8u);
                wr32(0x817fdf9cu, r5);
                wr32(0x817fdfa0u, r4);
                wr32(0x817fdfa4u, r0);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = 0x804890d4u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                f1 = tc_callf(rd32(rd32(r3) + 0x2cu), &a);
                f30 = f1;
                r3 = rd32(0x817fdfa0u);
                r0 = rd32(0x817fdfa4u);
                wr32(0x817fdf90u, rd32(0x817fdf9cu));
                wr32(0x817fdf94u, r3);
                wr32(0x817fdf98u, r0);
                a.f[0] = f1;
                f1 = tc_callf(0x80262704u, &a);
                f29 = (f64)(f32)f1;
                a.f[0] = f30;
                f1 = tc_callf(0x80262b10u, &a);
                f2 = (f64)(f32)f1;
                f0 = (f64)rdf32(0x805731b0u);
                f1 = (f64)rdf32(0x817fdf98u);
                f4 = (f64)rdf32(0x817fdf90u);
                f3 = (f64)(f32)(f1 * f2);
                wrf32d(0x817fdf80u, f0);
                f2 = -f2;
                f1 = (f64)(f32)(f1 * f29);
                wrf32d(0x817fdf7cu, f0);
                f3 = ppc_fmadds(f4, f29, f3);
                wrf32d(0x817fdf78u, f0);
                wrf32d(0x817fdf9cu, f3);
                wrf32d(0x817fdfa4u, ppc_fmadds(f4, f2, f1));
                a.r[0] = 0x817fdf9cu;
                a.r[1] = 0x817fdf78u;
                (void)tc_call(0x802343e4u, &a);
                a.f[0] = (f64)rdf32(0x817fdf78u);
                a.f[1] = (f64)rdf32(0x817fdf80u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                if ((f64)rdf32(0x805731b8u) < f1) {
                    a.f[0] = (f64)rdf32(0x817fdf78u);
                    a.f[1] = (f64)rdf32(0x817fdf80u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f30 = (f64)(f32)(f1 - (f64)rdf32(0x805731bcu));
                } else {
                    a.f[0] = (f64)rdf32(0x817fdf78u);
                    a.f[1] = (f64)rdf32(0x817fdf80u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f0 = (f64)rdf32(0x805731c0u);
                    if ((f0 > f1) || (f0 == f1)) {
                        a.f[0] = (f64)rdf32(0x817fdf78u);
                        a.f[1] = (f64)rdf32(0x817fdf80u);
                        f1 = tc_callf(0x80262c68u, &a);
                        f1 = (f64)(f32)f1;
                        f30 = (f64)(f32)((f64)rdf32(0x805731bcu) + f1);
                    } else {
                        a.f[0] = (f64)rdf32(0x817fdf78u);
                        a.f[1] = (f64)rdf32(0x817fdf80u);
                        f1 = tc_callf(0x80262c68u, &a);
                        f30 = (f64)(f32)f1;
                    }
                }
                f0 = (f64)rdf32(0x805731b0u);
                wrf32d(0x817fdf8cu, f0);
                wrf32d(0x817fdf88u, f0);
                wrf32d(0x817fdf84u, f0);
                a.r[0] = 0x817fdfa8u;
                a.r[1] = 0x817fdf84u;
                (void)tc_call(0x802343e4u, &a);
                a.f[0] = (f64)rdf32(0x817fdf84u);
                a.f[1] = (f64)rdf32(0x817fdf8cu);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                if ((f64)rdf32(0x805731b8u) < f1) {
                    a.f[0] = (f64)rdf32(0x817fdf84u);
                    a.f[1] = (f64)rdf32(0x817fdf8cu);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f3 = (f64)(f32)(f1 - (f64)rdf32(0x805731bcu));
                } else {
                    a.f[0] = (f64)rdf32(0x817fdf84u);
                    a.f[1] = (f64)rdf32(0x817fdf8cu);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f0 = (f64)rdf32(0x805731c0u);
                    if ((f0 > f1) || (f0 == f1)) {
                        a.f[0] = (f64)rdf32(0x817fdf84u);
                        a.f[1] = (f64)rdf32(0x817fdf8cu);
                        f1 = tc_callf(0x80262c68u, &a);
                        f1 = (f64)(f32)f1;
                        f3 = (f64)(f32)((f64)rdf32(0x805731bcu) + f1);
                    } else {
                        a.f[0] = (f64)rdf32(0x817fdf84u);
                        a.f[1] = (f64)rdf32(0x817fdf8cu);
                        f1 = tc_callf(0x80262c68u, &a);
                        f3 = (f64)(f32)f1;
                    }
                }
                if ((f64)rdf32(0x805731b8u) < f30) {
                    f0 = (f64)(f32)(f30 - (f64)rdf32(0x805731bcu));
                } else {
                    f0 = (f64)rdf32(0x805731c0u);
                    if ((f0 > f30) || (f0 == f30)) {
                        f0 = (f64)(f32)((f64)rdf32(0x805731bcu) + f30);
                    } else {
                        f0 = f30;
                    }
                }
                f1 = (f64)(f32)(f0 - f3);
                if (f1 > (f64)rdf32(0x805731b8u)) {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x805731bcu));
                } else {
                    if (f1 < (f64)rdf32(0x805731c0u)) {
                        f1 = (f64)(f32)(f1 + (f64)rdf32(0x805731bcu));
                    }
                }
                f0 = (f64)rdf32(0x805731b8u);
                if (f0 < f1) {
                    if (f0 < f30) {
                        f30 = (f64)(f32)(f30 - (f64)rdf32(0x805731bcu));
                    } else {
                        f0 = (f64)rdf32(0x805731c0u);
                        if ((f0 > f30) || (f0 == f30)) {
                            f30 = (f64)(f32)((f64)rdf32(0x805731bcu) + f30);
                        }
                    }
                    f1 = (f64)(f32)(f30 - f3);
                    if (f1 > (f64)rdf32(0x805731b8u)) {
                        f1 = (f64)(f32)(f1 - (f64)rdf32(0x805731bcu));
                    } else {
                        if (f1 < (f64)rdf32(0x805731c0u)) {
                            f1 = (f64)(f32)(f1 + (f64)rdf32(0x805731bcu));
                        }
                    }
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x805731bcu));
                } else {
                    if (f0 < f30) {
                        f0 = (f64)(f32)(f30 - (f64)rdf32(0x805731bcu));
                    } else {
                        f0 = (f64)rdf32(0x805731c0u);
                        if ((f0 > f30) || (f0 == f30)) {
                            f0 = (f64)(f32)((f64)rdf32(0x805731bcu) + f30);
                        } else {
                            f0 = f30;
                        }
                    }
                    f2 = (f64)(f32)(f0 - f3);
                    if (f2 > (f64)rdf32(0x805731b8u)) {
                        f2 = (f64)(f32)(f2 - (f64)rdf32(0x805731bcu));
                    } else {
                        if (f2 < (f64)rdf32(0x805731c0u)) {
                            f2 = (f64)(f32)(f2 + (f64)rdf32(0x805731bcu));
                        }
                    }
                    f1 = (f64)rdf32(0x805731c0u);
                    if ((f1 > f2) || (f1 == f2)) {
                        if ((f64)rdf32(0x805731b8u) < f30) {
                            f30 = (f64)(f32)(f30 - (f64)rdf32(0x805731bcu));
                        } else {
                            if ((f1 > f30) || (f1 == f30)) {
                                f30 = (f64)(f32)((f64)rdf32(0x805731bcu) + f30);
                            }
                        }
                        f1 = (f64)(f32)(f30 - f3);
                        if (f1 > (f64)rdf32(0x805731b8u)) {
                            f1 = (f64)(f32)(f1 - (f64)rdf32(0x805731bcu));
                        } else {
                            if (f1 < (f64)rdf32(0x805731c0u)) {
                                f1 = (f64)(f32)(f1 + (f64)rdf32(0x805731bcu));
                            }
                        }
                        f1 = (f64)(f32)((f64)rdf32(0x805731bcu) + f1);
                    } else {
                        if ((f64)rdf32(0x805731b8u) < f30) {
                            f30 = (f64)(f32)(f30 - (f64)rdf32(0x805731bcu));
                        } else {
                            if ((f1 > f30) || (f1 == f30)) {
                                f30 = (f64)(f32)((f64)rdf32(0x805731bcu) + f30);
                            }
                        }
                        f1 = (f64)(f32)(f30 - f3);
                        if (f1 > (f64)rdf32(0x805731b8u)) {
                            f1 = (f64)(f32)(f1 - (f64)rdf32(0x805731bcu));
                        } else {
                            if (f1 < (f64)rdf32(0x805731c0u)) {
                                f1 = (f64)(f32)(f1 + (f64)rdf32(0x805731bcu));
                            }
                        }
                    }
                }
                f1 = ppc_fabs(f1);
                f0 = (f64)rdf32(0x805731c4u);
                f1 = (f64)(f32)f1;
                if ((f1 < f0) || (f1 == f0)) {
                    r31 = 1u;
                } else {
                    f0 = (f64)rdf32(0x805731c8u);
                    if ((f1 > f0) || (f1 == f0)) {
                        f0 = (f64)rdf32(0x805731ccu);
                        if ((f31 < f0) || (f31 == f0)) {
                            r31 = 1u;
                        }
                    }
                }
            }
        }
        r3 = r31;
    }
    return r3;
}
