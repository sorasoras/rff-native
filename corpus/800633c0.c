#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_800633c0(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    u32 r0 = 0, r5 = 0, r6 = 0, r8 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdf30u, 0x817fe000u);
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
    r0 = rd32(param_4 + 4u);
    wr32(0x817fdfccu, 0u);
    f0 = (f64)rdf32(0x80572550u);
    wr32(0x817fdfc8u, 0u);
    r8 = rd32(param_4);
    wr32(0x817fdfb4u, r0);
    r0 = rd32(param_4 + 8u);
    wr32(0x817fdfb0u, r8);
    wr32(0x817fdfb8u, r0);
    wrf32d(0x817fdfb4u, f0);
    wrf32d(0x817fdfacu, f0);
    wrf32d(0x817fdfa8u, f0);
    wrf32d(0x817fdfa4u, f0);
    a.r[0] = (u32)param_5 + 0x14u;
    a.r[1] = 0x804890ecu;
    a.r[2] = 0x817fdfa4u;
    (void)tc_call(0x80234484u, &a);
    f1 = (f64)rdf32(0x80572550u);
    r0 = 0u;
    f0 = (f64)rdf32(0x817fdfa4u);
    wrf32d(0x817fdfa8u, f1);
    if ((f1 == f0 && f1 == f1) && f1 == (f64)rdf32(0x817fdfacu)) {
        r0 = 1u;
    }
    if (r0 != 0u) {
        f1 = (f64)rdf32(param_3 + 4u);
        f0 = (f64)rdf32(param_3 + 8u);
        wrf32d(param_2, (f64)rdf32(param_3));
        wrf32d(param_2 + 4u, f1);
        wrf32d(param_2 + 8u, f0);
    } else {
        f1 = (f64)rdf32(0x80572550u);
        r0 = 0u;
        if ((f1 == (f64)rdf32(0x817fdfa4u) && f1 == (f64)rdf32(0x817fdfa8u)) && f1 == (f64)rdf32(0x817fdfacu)) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdfa4u;
            a.r[1] = 0x817fdfa4u;
            (void)tc_call(0x802343e4u, &a);
        }
        f0 = (f64)rdf32(0x80572550u);
        r6 = rd32(0x817fdfa4u);
        r5 = rd32(0x817fdfa8u);
        r0 = rd32(0x817fdfacu);
        wrf32d(0x817fdfa0u, f0);
        f1 = (f64)rdf32(0x80572560u);
        wrf32d(0x817fdf9cu, f0);
        wrf32d(0x817fdf98u, f0);
        wr32(0x817fdf8cu, r6);
        wr32(0x817fdf90u, r5);
        wr32(0x817fdf94u, r0);
        a.f[0] = f1;
        a.r[0] = 0x817fdf8cu;
        a.r[1] = 0x817fdf8cu;
        (void)tc_call(0x802343c8u, &a);
        a.r[0] = 0x817fdfb0u;
        f1 = tc_callf(0x80234440u, &a);
        f29 = f1;
        if (f1 < (f64)rdf32(0x80572578u)) {
            f1 = (f64)rdf32(param_3 + 4u);
            f0 = (f64)rdf32(param_3 + 8u);
            wrf32d(param_2, (f64)rdf32(param_3));
            wrf32d(param_2 + 4u, f1);
            wrf32d(param_2 + 8u, f0);
        } else {
            f1 = (f64)rdf32(0x80572550u);
            r0 = 0u;
            if ((f1 == (f64)rdf32(0x817fdfb0u) && f1 == (f64)rdf32(0x817fdfb4u)) && f1 == (f64)rdf32(0x817fdfb8u)) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                a.r[0] = 0x817fdfb0u;
                a.r[1] = 0x817fdfb0u;
                (void)tc_call(0x802343e4u, &a);
            }
            f0 = (f64)rdf32(0x80572550u);
            wrf32d(0x817fdf58u, f0);
            wrf32d(0x817fdf54u, f0);
            wrf32d(0x817fdf50u, f0);
            a.r[0] = 0x817fdfa4u;
            a.r[1] = 0x817fdf50u;
            (void)tc_call(0x802343e4u, &a);
            a.f[0] = (f64)rdf32(0x817fdf50u);
            a.f[1] = (f64)rdf32(0x817fdf58u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            if ((f64)rdf32(0x8057257cu) < f1) {
                a.f[0] = (f64)rdf32(0x817fdf50u);
                a.f[1] = (f64)rdf32(0x817fdf58u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f31 = (f64)(f32)(f1 - (f64)rdf32(0x80572580u));
            } else {
                a.f[0] = (f64)rdf32(0x817fdf50u);
                a.f[1] = (f64)rdf32(0x817fdf58u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)rdf32(0x80572584u);
                if ((f0 > f1) || (f0 == f1)) {
                    a.f[0] = (f64)rdf32(0x817fdf50u);
                    a.f[1] = (f64)rdf32(0x817fdf58u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f31 = (f64)(f32)((f64)rdf32(0x80572580u) + f1);
                } else {
                    a.f[0] = (f64)rdf32(0x817fdf50u);
                    a.f[1] = (f64)rdf32(0x817fdf58u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f31 = (f64)(f32)f1;
                }
            }
            f0 = (f64)rdf32(0x80572550u);
            wrf32d(0x817fdf64u, f0);
            wrf32d(0x817fdf60u, f0);
            wrf32d(0x817fdf5cu, f0);
            a.r[0] = 0x817fdfb0u;
            a.r[1] = 0x817fdf5cu;
            (void)tc_call(0x802343e4u, &a);
            a.f[0] = (f64)rdf32(0x817fdf5cu);
            a.f[1] = (f64)rdf32(0x817fdf64u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            if ((f64)rdf32(0x8057257cu) < f1) {
                a.f[0] = (f64)rdf32(0x817fdf5cu);
                a.f[1] = (f64)rdf32(0x817fdf64u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f3 = (f64)(f32)(f1 - (f64)rdf32(0x80572580u));
            } else {
                a.f[0] = (f64)rdf32(0x817fdf5cu);
                a.f[1] = (f64)rdf32(0x817fdf64u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)rdf32(0x80572584u);
                if ((f0 > f1) || (f0 == f1)) {
                    a.f[0] = (f64)rdf32(0x817fdf5cu);
                    a.f[1] = (f64)rdf32(0x817fdf64u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f3 = (f64)(f32)((f64)rdf32(0x80572580u) + f1);
                } else {
                    a.f[0] = (f64)rdf32(0x817fdf5cu);
                    a.f[1] = (f64)rdf32(0x817fdf64u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f3 = (f64)(f32)f1;
                }
            }
            if ((f64)rdf32(0x8057257cu) < f31) {
                f0 = (f64)(f32)(f31 - (f64)rdf32(0x80572580u));
            } else {
                f0 = (f64)rdf32(0x80572584u);
                if ((f0 > f31) || (f0 == f31)) {
                    f0 = (f64)(f32)((f64)rdf32(0x80572580u) + f31);
                } else {
                    f0 = f31;
                }
            }
            f1 = (f64)(f32)(f0 - f3);
            if (f1 > (f64)rdf32(0x8057257cu)) {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572580u));
            } else {
                if (f1 < (f64)rdf32(0x80572584u)) {
                    f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572580u));
                }
            }
            f0 = (f64)rdf32(0x8057257cu);
            if (f0 < f1) {
                if (f0 < f31) {
                    f31 = (f64)(f32)(f31 - (f64)rdf32(0x80572580u));
                } else {
                    f0 = (f64)rdf32(0x80572584u);
                    if ((f0 > f31) || (f0 == f31)) {
                        f31 = (f64)(f32)((f64)rdf32(0x80572580u) + f31);
                    }
                }
                f1 = (f64)(f32)(f31 - f3);
                if (f1 > (f64)rdf32(0x8057257cu)) {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572580u));
                } else {
                    if (f1 < (f64)rdf32(0x80572584u)) {
                        f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572580u));
                    }
                }
                f31 = (f64)(f32)(f1 - (f64)rdf32(0x80572580u));
            } else {
                if (f0 < f31) {
                    f0 = (f64)(f32)(f31 - (f64)rdf32(0x80572580u));
                } else {
                    f0 = (f64)rdf32(0x80572584u);
                    if ((f0 > f31) || (f0 == f31)) {
                        f0 = (f64)(f32)((f64)rdf32(0x80572580u) + f31);
                    } else {
                        f0 = f31;
                    }
                }
                f2 = (f64)(f32)(f0 - f3);
                if (f2 > (f64)rdf32(0x8057257cu)) {
                    f2 = (f64)(f32)(f2 - (f64)rdf32(0x80572580u));
                } else {
                    if (f2 < (f64)rdf32(0x80572584u)) {
                        f2 = (f64)(f32)(f2 + (f64)rdf32(0x80572580u));
                    }
                }
                f1 = (f64)rdf32(0x80572584u);
                if ((f1 > f2) || (f1 == f2)) {
                    if ((f64)rdf32(0x8057257cu) < f31) {
                        f31 = (f64)(f32)(f31 - (f64)rdf32(0x80572580u));
                    } else {
                        if ((f1 > f31) || (f1 == f31)) {
                            f31 = (f64)(f32)((f64)rdf32(0x80572580u) + f31);
                        }
                    }
                    f1 = (f64)(f32)(f31 - f3);
                    if (f1 > (f64)rdf32(0x8057257cu)) {
                        f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572580u));
                    } else {
                        if (f1 < (f64)rdf32(0x80572584u)) {
                            f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572580u));
                        }
                    }
                    f31 = (f64)(f32)((f64)rdf32(0x80572580u) + f1);
                } else {
                    if ((f64)rdf32(0x8057257cu) < f31) {
                        f31 = (f64)(f32)(f31 - (f64)rdf32(0x80572580u));
                    } else {
                        if ((f1 > f31) || (f1 == f31)) {
                            f31 = (f64)(f32)((f64)rdf32(0x80572580u) + f31);
                        }
                    }
                    f31 = (f64)(f32)(f31 - f3);
                    if (f31 > (f64)rdf32(0x8057257cu)) {
                        f31 = (f64)(f32)(f31 - (f64)rdf32(0x80572580u));
                    } else {
                        if (f31 < (f64)rdf32(0x80572584u)) {
                            f31 = (f64)(f32)(f31 + (f64)rdf32(0x80572580u));
                        }
                    }
                }
            }
            f0 = (f64)rdf32(0x80572550u);
            wrf32d(0x817fdf40u, f0);
            wrf32d(0x817fdf3cu, f0);
            wrf32d(0x817fdf38u, f0);
            a.r[0] = 0x817fdf8cu;
            a.r[1] = 0x817fdf38u;
            (void)tc_call(0x802343e4u, &a);
            a.f[0] = (f64)rdf32(0x817fdf38u);
            a.f[1] = (f64)rdf32(0x817fdf40u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            if ((f64)rdf32(0x8057257cu) < f1) {
                a.f[0] = (f64)rdf32(0x817fdf38u);
                a.f[1] = (f64)rdf32(0x817fdf40u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f30 = (f64)(f32)(f1 - (f64)rdf32(0x80572580u));
            } else {
                a.f[0] = (f64)rdf32(0x817fdf38u);
                a.f[1] = (f64)rdf32(0x817fdf40u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)rdf32(0x80572584u);
                if ((f0 > f1) || (f0 == f1)) {
                    a.f[0] = (f64)rdf32(0x817fdf38u);
                    a.f[1] = (f64)rdf32(0x817fdf40u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f30 = (f64)(f32)((f64)rdf32(0x80572580u) + f1);
                } else {
                    a.f[0] = (f64)rdf32(0x817fdf38u);
                    a.f[1] = (f64)rdf32(0x817fdf40u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f30 = (f64)(f32)f1;
                }
            }
            f0 = (f64)rdf32(0x80572550u);
            wrf32d(0x817fdf4cu, f0);
            wrf32d(0x817fdf48u, f0);
            wrf32d(0x817fdf44u, f0);
            a.r[0] = 0x817fdfb0u;
            a.r[1] = 0x817fdf44u;
            (void)tc_call(0x802343e4u, &a);
            a.f[0] = (f64)rdf32(0x817fdf44u);
            a.f[1] = (f64)rdf32(0x817fdf4cu);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            if ((f64)rdf32(0x8057257cu) < f1) {
                a.f[0] = (f64)rdf32(0x817fdf44u);
                a.f[1] = (f64)rdf32(0x817fdf4cu);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f3 = (f64)(f32)(f1 - (f64)rdf32(0x80572580u));
            } else {
                a.f[0] = (f64)rdf32(0x817fdf44u);
                a.f[1] = (f64)rdf32(0x817fdf4cu);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)rdf32(0x80572584u);
                if ((f0 > f1) || (f0 == f1)) {
                    a.f[0] = (f64)rdf32(0x817fdf44u);
                    a.f[1] = (f64)rdf32(0x817fdf4cu);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f3 = (f64)(f32)((f64)rdf32(0x80572580u) + f1);
                } else {
                    a.f[0] = (f64)rdf32(0x817fdf44u);
                    a.f[1] = (f64)rdf32(0x817fdf4cu);
                    f1 = tc_callf(0x80262c68u, &a);
                    f3 = (f64)(f32)f1;
                }
            }
            if ((f64)rdf32(0x8057257cu) < f30) {
                f0 = (f64)(f32)(f30 - (f64)rdf32(0x80572580u));
            } else {
                f0 = (f64)rdf32(0x80572584u);
                if ((f0 > f30) || (f0 == f30)) {
                    f0 = (f64)(f32)((f64)rdf32(0x80572580u) + f30);
                } else {
                    f0 = f30;
                }
            }
            f1 = (f64)(f32)(f0 - f3);
            if (f1 > (f64)rdf32(0x8057257cu)) {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572580u));
            } else {
                if (f1 < (f64)rdf32(0x80572584u)) {
                    f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572580u));
                }
            }
            f0 = (f64)rdf32(0x8057257cu);
            if (f0 < f1) {
                if (f0 < f30) {
                    f30 = (f64)(f32)(f30 - (f64)rdf32(0x80572580u));
                } else {
                    f0 = (f64)rdf32(0x80572584u);
                    if ((f0 > f30) || (f0 == f30)) {
                        f30 = (f64)(f32)((f64)rdf32(0x80572580u) + f30);
                    }
                }
                f1 = (f64)(f32)(f30 - f3);
                if (f1 > (f64)rdf32(0x8057257cu)) {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572580u));
                } else {
                    if (f1 < (f64)rdf32(0x80572584u)) {
                        f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572580u));
                    }
                }
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572580u));
            } else {
                if (f0 < f30) {
                    f0 = (f64)(f32)(f30 - (f64)rdf32(0x80572580u));
                } else {
                    f0 = (f64)rdf32(0x80572584u);
                    if ((f0 > f30) || (f0 == f30)) {
                        f0 = (f64)(f32)((f64)rdf32(0x80572580u) + f30);
                    } else {
                        f0 = f30;
                    }
                }
                f2 = (f64)(f32)(f0 - f3);
                if (f2 > (f64)rdf32(0x8057257cu)) {
                    f2 = (f64)(f32)(f2 - (f64)rdf32(0x80572580u));
                } else {
                    if (f2 < (f64)rdf32(0x80572584u)) {
                        f2 = (f64)(f32)(f2 + (f64)rdf32(0x80572580u));
                    }
                }
                f1 = (f64)rdf32(0x80572584u);
                if ((f1 > f2) || (f1 == f2)) {
                    if ((f64)rdf32(0x8057257cu) < f30) {
                        f30 = (f64)(f32)(f30 - (f64)rdf32(0x80572580u));
                    } else {
                        if ((f1 > f30) || (f1 == f30)) {
                            f30 = (f64)(f32)((f64)rdf32(0x80572580u) + f30);
                        }
                    }
                    f1 = (f64)(f32)(f30 - f3);
                    if (f1 > (f64)rdf32(0x8057257cu)) {
                        f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572580u));
                    } else {
                        if (f1 < (f64)rdf32(0x80572584u)) {
                            f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572580u));
                        }
                    }
                    f1 = (f64)(f32)((f64)rdf32(0x80572580u) + f1);
                } else {
                    if ((f64)rdf32(0x8057257cu) < f30) {
                        f30 = (f64)(f32)(f30 - (f64)rdf32(0x80572580u));
                    } else {
                        if ((f1 > f30) || (f1 == f30)) {
                            f30 = (f64)(f32)((f64)rdf32(0x80572580u) + f30);
                        }
                    }
                    f1 = (f64)(f32)(f30 - f3);
                    if (f1 > (f64)rdf32(0x8057257cu)) {
                        f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572580u));
                    } else {
                        if (f1 < (f64)rdf32(0x80572584u)) {
                            f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572580u));
                        }
                    }
                }
            }
            f1 = (f64)(f32)ppc_fabs(f1);
            f2 = (f64)(f32)ppc_fabs(f31);
            if (f2 < f1) {
                f1 = (f64)(f32)px_fdiv(f2, (f64)rdf32(0x80572588u));
                f0 = (f64)rdf32(0x80572554u);
                f3 = (f64)rdf32(0x817fdfa8u);
                f2 = (f64)rdf32(0x817fdfacu);
                wrf32d(0x817fdf98u, (f64)rdf32(0x817fdfa4u));
                wrf32d(0x817fdf9cu, f3);
                f30 = (f64)(f32)(f0 - f1);
                wrf32d(0x817fdfa0u, f2);
            } else {
                f1 = (f64)(f32)px_fdiv(f1, (f64)rdf32(0x80572588u));
                f0 = (f64)rdf32(0x80572554u);
                f3 = (f64)rdf32(0x817fdf90u);
                f2 = (f64)rdf32(0x817fdf94u);
                wrf32d(0x817fdf98u, (f64)rdf32(0x817fdf8cu));
                wrf32d(0x817fdf9cu, f3);
                f30 = (f64)(f32)(f0 - f1);
                wrf32d(0x817fdfa0u, f2);
            }
            r5 = rd32(0x817fdf9cu);
            r0 = rd32(0x817fdfa0u);
            wr32(0x817fdf68u, rd32(0x817fdf98u));
            wr32(0x817fdf6cu, r5);
            wr32(0x817fdf70u, r0);
            a.f[0] = f29;
            a.r[0] = 0x817fdf68u;
            a.r[1] = 0x817fdf68u;
            (void)tc_call(0x802343c8u, &a);
            r5 = rd32(0x817fdf6cu);
            r0 = rd32(0x817fdf70u);
            wr32(0x817fdf74u, rd32(0x817fdf68u));
            wr32(0x817fdf78u, r5);
            wr32(0x817fdf7cu, r0);
            a.f[0] = f30;
            a.r[0] = 0x817fdf74u;
            a.r[1] = 0x817fdf74u;
            (void)tc_call(0x802343c8u, &a);
            r6 = rd32(param_3 + 4u);
            r0 = rd32(param_3 + 8u);
            wr32(0x817fdf80u, rd32(param_3));
            wr32(0x817fdf84u, r6);
            wr32(0x817fdf88u, r0);
            a.r[0] = 0x817fdf80u;
            a.r[1] = 0x817fdf74u;
            a.r[2] = 0x817fdf80u;
            (void)tc_call(0x80234380u, &a);
            wrf32d(param_2, (f64)rdf32(0x817fdf80u));
            wrf32d(param_2 + 4u, (f64)rdf32(0x817fdf84u));
            wrf32d(param_2 + 8u, (f64)rdf32(0x817fdf88u));
        }
    }
    return;
}
