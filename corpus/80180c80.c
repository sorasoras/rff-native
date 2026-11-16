#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_80180c80(f64 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf10u, 0x817fe000u);
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
    f1 = (f64)rdf32(0x805750b8u);
    r0 = 0u;
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc0u, 0u);
    if ((f64)rdf32(param_3) != f1 || (f64)rdf32(param_3 + 8u) != f1) {
        f0 = (f64)rdf32(0x805750b8u);
        f1 = (f64)rdf32(0x805750bcu);
        wrf32d(0x817fdf98u, f0);
        wrf32d(0x817fdf88u, f1);
        wrf32d(0x817fdfa8u, f0);
        wrf32d(0x817fdf8cu, f0);
        wrf32d(0x817fdf9cu, f1);
        wrf32d(0x817fdfacu, f0);
        wrf32d(0x817fdf90u, f0);
        wrf32d(0x817fdfa0u, f0);
        wrf32d(0x817fdfb0u, f1);
        wrf32d(0x817fdf94u, f0);
        wrf32d(0x817fdfa4u, f0);
        wrf32d(0x817fdfb4u, f0);
        wrf32d(0x817fdf50u, f0);
        wrf32d(0x817fdf4cu, f0);
        wrf32d(0x817fdf48u, f0);
        if (rd32((u32)param_2 + 0x168u) != 0u) {
            r3 = rd32(0x804863d8u);
            wrf32d(0x817fdf48u, (f64)rdf32(r3 + 0x78u));
            wrf32d(0x817fdf4cu, (f64)rdf32(r3 + 0x7cu));
            wrf32d(0x817fdf50u, (f64)rdf32(r3 + 0x80u));
        } else {
            f1 = (f64)rdf32(0x805750ccu);
            r5 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
            f2 = (f64)rdf32(r5 + 0x1a0u);
            f0 = (f64)rdf32(r5 + 0x1a4u);
            wrf32d(0x817fdf48u, (f64)rdf32(r5 + 0x19cu));
            wrf32d(0x817fdf4cu, f2);
            wrf32d(0x817fdf50u, f0);
            a.f[0] = f1;
            a.r[0] = 0x817fdf48u;
            a.r[1] = 0x817fdf48u;
            (void)tc_call(0x802343c8u, &a);
        }
        f0 = (f64)rdf32(0x805750b8u);
        wrf32d(0x817fdf38u, f0);
        wrf32d(0x817fdf34u, f0);
        wrf32d(0x817fdf30u, f0);
        a.r[0] = 0x817fdf48u;
        a.r[1] = 0x817fdf30u;
        (void)tc_call(0x802343e4u, &a);
        a.f[0] = (f64)rdf32(0x817fdf30u);
        a.f[1] = (f64)rdf32(0x817fdf38u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        if ((f64)rdf32(0x805750c0u) < f1) {
            a.f[0] = (f64)rdf32(0x817fdf30u);
            a.f[1] = (f64)rdf32(0x817fdf38u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)(f32)(f1 - (f64)rdf32(0x805750c4u));
        } else {
            a.f[0] = (f64)rdf32(0x817fdf30u);
            a.f[1] = (f64)rdf32(0x817fdf38u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)rdf32(0x805750c8u);
            if ((f0 > f1) || (f0 == f1)) {
                a.f[0] = (f64)rdf32(0x817fdf30u);
                a.f[1] = (f64)rdf32(0x817fdf38u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)(f32)((f64)rdf32(0x805750c4u) + f1);
            } else {
                a.f[0] = (f64)rdf32(0x817fdf30u);
                a.f[1] = (f64)rdf32(0x817fdf38u);
                f1 = tc_callf(0x80262c68u, &a);
                f0 = (f64)(f32)f1;
            }
        }
        f2 = (f64)rdf32(0x805750bcu);
        f1 = -f0;
        f0 = (f64)rdf32(0x805750b8u);
        wrf32d(0x817fdf58u, f2);
        wrf32d(0x817fdf68u, f0);
        wrf32d(0x817fdf78u, f0);
        wrf32d(0x817fdf5cu, f0);
        wrf32d(0x817fdf6cu, f2);
        wrf32d(0x817fdf7cu, f0);
        wrf32d(0x817fdf60u, f0);
        wrf32d(0x817fdf70u, f0);
        wrf32d(0x817fdf80u, f2);
        wrf32d(0x817fdf64u, f0);
        wrf32d(0x817fdf74u, f0);
        wrf32d(0x817fdf84u, f0);
        a.f[0] = f1;
        a.r[0] = 0x817fdf58u;
        a.r[1] = 0x79u;
        (void)tc_call(0x80233a2cu, &a);
        a.r[0] = 0x817fdf58u;
        a.r[1] = 0x817fdf88u;
        a.r[2] = 0x817fdf88u;
        (void)tc_call(0x802337a0u, &a);
        a.r[0] = 0x817fdf88u;
        a.r[1] = param_3;
        a.r[2] = param_3;
        (void)tc_call(0x8023411cu, &a);
        a.r[0] = param_3;
        f1 = tc_callf(0x80234440u, &a);
        f30 = f1;
        if ((f64)rdf32(0x805750b8u) != f1) {
            f1 = (f64)(f32)px_fdiv((f64)rdf32(0x805750bcu), f1);
            a.f[0] = f1;
            a.r[0] = param_3;
            a.r[1] = param_3;
            (void)tc_call(0x802343c8u, &a);
        }
        f29 = (f64)rdf32((u32)param_2 + 0x14u);
        a.f[0] = (f64)rdf32(param_3);
        a.f[1] = (f64)rdf32(param_3 + 8u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        if ((f64)rdf32(0x805750c0u) < f1) {
            a.f[0] = (f64)rdf32(param_3);
            a.f[1] = (f64)rdf32(param_3 + 8u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)(f32)(f1 - (f64)rdf32(0x805750c4u));
        } else {
            a.f[0] = (f64)rdf32(param_3);
            a.f[1] = (f64)rdf32(param_3 + 8u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)rdf32(0x805750c8u);
            if ((f0 > f1) || (f0 == f1)) {
                a.f[0] = (f64)rdf32(param_3);
                a.f[1] = (f64)rdf32(param_3 + 8u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)(f32)((f64)rdf32(0x805750c4u) + f1);
            } else {
                a.f[0] = (f64)rdf32(param_3);
                a.f[1] = (f64)rdf32(param_3 + 8u);
                f1 = tc_callf(0x80262c68u, &a);
                f0 = (f64)(f32)f1;
            }
        }
        f1 = -f0;
        if ((f64)rdf32(0x805750c0u) < f1) {
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x805750c4u));
        } else {
            f0 = (f64)rdf32(0x805750c8u);
            if ((f0 > f1) || (f0 == f1)) {
                f1 = (f64)(f32)((f64)rdf32(0x805750c4u) + f1);
            }
        }
        f4 = (f64)(f32)(f1 - f29);
        if (f4 > (f64)rdf32(0x805750c0u)) {
            f4 = (f64)(f32)(f4 - (f64)rdf32(0x805750c4u));
        } else {
            if (f4 < (f64)rdf32(0x805750c8u)) {
                f4 = (f64)(f32)(f4 + (f64)rdf32(0x805750c4u));
            }
        }
        f3 = (f64)rdf32(0x805750c0u);
        f2 = (f64)rdf32(0x805750dcu);
        f1 = (f64)(f32)px_fdiv((f64)(f32)(f3 * param_1), f2);
        if (f1 < f4) {
            f1 = (f64)(f32)(f1 + (f64)rdf32((u32)param_2 + 0x14u));
            if (f3 < f1) {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x805750c4u));
            } else {
                f0 = (f64)rdf32(0x805750c8u);
                if ((f0 > f1) || (f0 == f1)) {
                    f1 = (f64)(f32)((f64)rdf32(0x805750c4u) + f1);
                }
            }
            wrf32d(param_5, f1);
        } else {
            f1 = -param_1;
            if ((f64)(f32)((f64)rdf32(0x805750e0u) * f1) > f4) {
                f1 = (f64)(f32)(f3 * f1);
                f1 = (f64)(f32)px_fdiv(f1, f2);
                f1 = (f64)(f32)(f1 + (f64)rdf32((u32)param_2 + 0x14u));
                if (f3 < f1) {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x805750c4u));
                } else {
                    f0 = (f64)rdf32(0x805750c8u);
                    if ((f0 > f1) || (f0 == f1)) {
                        f1 = (f64)(f32)((f64)rdf32(0x805750c4u) + f1);
                    }
                }
                wrf32d(param_5, f1);
            } else {
                f1 = (f64)(f32)(f4 + (f64)rdf32((u32)param_2 + 0x14u));
                if (f3 < f1) {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x805750c4u));
                } else {
                    f0 = (f64)rdf32(0x805750c8u);
                    if ((f0 > f1) || (f0 == f1)) {
                        f1 = (f64)(f32)((f64)rdf32(0x805750c4u) + f1);
                    }
                }
                wrf32d(param_5, f1);
            }
        }
        f1 = (f64)rdf32(0x805750b8u);
        f0 = (f64)rdf32(0x805750c0u);
        wrf32d(0x817fdf44u, f1);
        wrf32d(0x817fdf40u, f1);
        wrf32d(0x817fdf3cu, f1);
        f29 = (f64)rdf32(param_5);
        if (f0 < f29) {
            f29 = (f64)(f32)(f29 - (f64)rdf32(0x805750c4u));
        } else {
            f0 = (f64)rdf32(0x805750c8u);
            if ((f0 > f29) || (f0 == f29)) {
                f29 = (f64)(f32)((f64)rdf32(0x805750c4u) + f29);
            }
        }
        a.f[0] = f29;
        f1 = tc_callf(0x80262b10u, &a);
        wrf32d(0x817fdf40u, (f64)rdf32(0x805750b8u));
        wrf32d(0x817fdf3cu, (f64)(f32)f1);
        a.f[0] = f29;
        f1 = tc_callf(0x80262704u, &a);
        f1 = (f64)(f32)f1;
        f0 = (f64)rdf32(0x805750b8u);
        wrf32d(0x817fdf20u, f0);
        wrf32d(0x817fdf44u, f1);
        wrf32d(0x817fdf1cu, f0);
        wrf32d(0x817fdf18u, f0);
        a.r[0] = (u32)param_2 + 0xb0u;
        a.r[1] = 0x817fdf18u;
        (void)tc_call(0x802343e4u, &a);
        a.f[0] = (f64)rdf32(0x817fdf18u);
        a.f[1] = (f64)rdf32(0x817fdf20u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        if ((f64)rdf32(0x805750c0u) < f1) {
            a.f[0] = (f64)rdf32(0x817fdf18u);
            a.f[1] = (f64)rdf32(0x817fdf20u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f31 = (f64)(f32)(f1 - (f64)rdf32(0x805750c4u));
        } else {
            a.f[0] = (f64)rdf32(0x817fdf18u);
            a.f[1] = (f64)rdf32(0x817fdf20u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)rdf32(0x805750c8u);
            if ((f0 > f1) || (f0 == f1)) {
                a.f[0] = (f64)rdf32(0x817fdf18u);
                a.f[1] = (f64)rdf32(0x817fdf20u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f31 = (f64)(f32)((f64)rdf32(0x805750c4u) + f1);
            } else {
                a.f[0] = (f64)rdf32(0x817fdf18u);
                a.f[1] = (f64)rdf32(0x817fdf20u);
                f1 = tc_callf(0x80262c68u, &a);
                f31 = (f64)(f32)f1;
            }
        }
        f0 = (f64)rdf32(0x805750b8u);
        wrf32d(0x817fdf2cu, f0);
        wrf32d(0x817fdf28u, f0);
        wrf32d(0x817fdf24u, f0);
        a.r[0] = 0x817fdf3cu;
        a.r[1] = 0x817fdf24u;
        (void)tc_call(0x802343e4u, &a);
        a.f[0] = (f64)rdf32(0x817fdf24u);
        a.f[1] = (f64)rdf32(0x817fdf2cu);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        if ((f64)rdf32(0x805750c0u) < f1) {
            a.f[0] = (f64)rdf32(0x817fdf24u);
            a.f[1] = (f64)rdf32(0x817fdf2cu);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f3 = (f64)(f32)(f1 - (f64)rdf32(0x805750c4u));
        } else {
            a.f[0] = (f64)rdf32(0x817fdf24u);
            a.f[1] = (f64)rdf32(0x817fdf2cu);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)rdf32(0x805750c8u);
            if ((f0 > f1) || (f0 == f1)) {
                a.f[0] = (f64)rdf32(0x817fdf24u);
                a.f[1] = (f64)rdf32(0x817fdf2cu);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f3 = (f64)(f32)((f64)rdf32(0x805750c4u) + f1);
            } else {
                a.f[0] = (f64)rdf32(0x817fdf24u);
                a.f[1] = (f64)rdf32(0x817fdf2cu);
                f1 = tc_callf(0x80262c68u, &a);
                f3 = (f64)(f32)f1;
            }
        }
        if ((f64)rdf32(0x805750c0u) < f31) {
            f0 = (f64)(f32)(f31 - (f64)rdf32(0x805750c4u));
        } else {
            f0 = (f64)rdf32(0x805750c8u);
            if ((f0 > f31) || (f0 == f31)) {
                f0 = (f64)(f32)((f64)rdf32(0x805750c4u) + f31);
            } else {
                f0 = f31;
            }
        }
        f1 = (f64)(f32)(f0 - f3);
        if (f1 > (f64)rdf32(0x805750c0u)) {
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x805750c4u));
        } else {
            if (f1 < (f64)rdf32(0x805750c8u)) {
                f1 = (f64)(f32)(f1 + (f64)rdf32(0x805750c4u));
            }
        }
        f0 = (f64)rdf32(0x805750c0u);
        if (f0 < f1) {
            if (f0 < f31) {
                f31 = (f64)(f32)(f31 - (f64)rdf32(0x805750c4u));
            } else {
                f0 = (f64)rdf32(0x805750c8u);
                if ((f0 > f31) || (f0 == f31)) {
                    f31 = (f64)(f32)((f64)rdf32(0x805750c4u) + f31);
                }
            }
            f1 = (f64)(f32)(f31 - f3);
            if (f1 > (f64)rdf32(0x805750c0u)) {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x805750c4u));
            } else {
                if (f1 < (f64)rdf32(0x805750c8u)) {
                    f1 = (f64)(f32)(f1 + (f64)rdf32(0x805750c4u));
                }
            }
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x805750c4u));
        } else {
            if (f0 < f31) {
                f0 = (f64)(f32)(f31 - (f64)rdf32(0x805750c4u));
            } else {
                f0 = (f64)rdf32(0x805750c8u);
                if ((f0 > f31) || (f0 == f31)) {
                    f0 = (f64)(f32)((f64)rdf32(0x805750c4u) + f31);
                } else {
                    f0 = f31;
                }
            }
            f2 = (f64)(f32)(f0 - f3);
            if (f2 > (f64)rdf32(0x805750c0u)) {
                f2 = (f64)(f32)(f2 - (f64)rdf32(0x805750c4u));
            } else {
                if (f2 < (f64)rdf32(0x805750c8u)) {
                    f2 = (f64)(f32)(f2 + (f64)rdf32(0x805750c4u));
                }
            }
            f1 = (f64)rdf32(0x805750c8u);
            if ((f1 > f2) || (f1 == f2)) {
                if ((f64)rdf32(0x805750c0u) < f31) {
                    f31 = (f64)(f32)(f31 - (f64)rdf32(0x805750c4u));
                } else {
                    if ((f1 > f31) || (f1 == f31)) {
                        f31 = (f64)(f32)((f64)rdf32(0x805750c4u) + f31);
                    }
                }
                f1 = (f64)(f32)(f31 - f3);
                if (f1 > (f64)rdf32(0x805750c0u)) {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x805750c4u));
                } else {
                    if (f1 < (f64)rdf32(0x805750c8u)) {
                        f1 = (f64)(f32)(f1 + (f64)rdf32(0x805750c4u));
                    }
                }
                f1 = (f64)(f32)((f64)rdf32(0x805750c4u) + f1);
            } else {
                if ((f64)rdf32(0x805750c0u) < f31) {
                    f31 = (f64)(f32)(f31 - (f64)rdf32(0x805750c4u));
                } else {
                    if ((f1 > f31) || (f1 == f31)) {
                        f31 = (f64)(f32)((f64)rdf32(0x805750c4u) + f31);
                    }
                }
                f1 = (f64)(f32)(f31 - f3);
                if (f1 > (f64)rdf32(0x805750c0u)) {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x805750c4u));
                } else {
                    if (f1 < (f64)rdf32(0x805750c8u)) {
                        f1 = (f64)(f32)(f1 + (f64)rdf32(0x805750c4u));
                    }
                }
            }
        }
        f1 = -f1;
        f1 = ppc_fabs(f1);
        f1 = (f64)(f32)f1;
        if (f1 > (f64)rdf32(0x805750e4u)) {
            wrf32d((u32)param_2 + 0xb0u, (f64)rdf32(0x804890d4u));
            wrf32d((u32)param_2 + 0xb4u, (f64)rdf32(0x804890d8u));
            wrf32d((u32)param_2 + 0xb8u, (f64)rdf32(0x804890dcu));
        }
        a.f[0] = f30;
        a.r[0] = 0x817fdf3cu;
        a.r[1] = 0x817fdf3cu;
        (void)tc_call(0x802343c8u, &a);
        wrf32d((u32)param_2 + 0xb0u, (f64)rdf32(0x817fdf3cu));
        wrf32d((u32)param_2 + 0xb4u, (f64)rdf32(0x817fdf40u));
        wrf32d((u32)param_2 + 0xb8u, (f64)rdf32(0x817fdf44u));
        a.r[0] = param_4;
        a.r[1] = 0x817fdf3cu;
        a.r[2] = param_4;
        (void)tc_call(0x80234380u, &a);
        r0 = 1u;
    }
    return r0;
}
