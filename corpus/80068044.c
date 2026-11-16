#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80068044(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, f64 param_f1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdef0u, 0x817fe000u);
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
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    f29 = param_f1;
    wr32(param_5, 0u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    a.r[4] = param_5;
    a.f[0] = param_f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    f1 = tc_lastf();
    wrf32d(param_3, (f64)rdf32(r3));
    wrf32d(param_3 + 4u, (f64)rdf32(r3 + 4u));
    wrf32d(param_3 + 8u, (f64)rdf32(r3 + 8u));
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
    wrf32d(param_4, f1);
    f1 = (f64)rdf32(0x805725d8u);
    if ((f64)rdf32(param_2) != f1 || (f64)rdf32(param_2 + 8u) != f1) {
        f4 = (f64)rdf32(0x805725d8u);
        r0 = rd32(0x805710e0u) * 0x6d0u;
        f5 = (f64)rdf32(0x805725e0u);
        wrf32d(0x817fdf54u, f4);
        f1 = (f64)rdf32(0x80572600u);
        r5 = r0 - 0x7fc2e738u;
        wrf32d(0x817fdf50u, f4);
        f2 = (f64)rdf32(r5 + 0x1a0u);
        f0 = (f64)rdf32(r5 + 0x1a4u);
        wrf32d(0x817fdf4cu, f4);
        f3 = (f64)rdf32(r5 + 0x19cu);
        wrf32d(0x817fdf88u, f5);
        wrf32d(0x817fdf98u, f4);
        wrf32d(0x817fdfa8u, f4);
        wrf32d(0x817fdf8cu, f4);
        wrf32d(0x817fdf9cu, f5);
        wrf32d(0x817fdfacu, f4);
        wrf32d(0x817fdf90u, f4);
        wrf32d(0x817fdfa0u, f4);
        wrf32d(0x817fdfb0u, f5);
        wrf32d(0x817fdf94u, f4);
        wrf32d(0x817fdfa4u, f4);
        wrf32d(0x817fdfb4u, f4);
        wrf32d(0x817fdf4cu, f3);
        wrf32d(0x817fdf50u, f2);
        wrf32d(0x817fdf54u, f0);
        a.f[0] = f1;
        a.r[0] = 0x817fdf4cu;
        a.r[1] = 0x817fdf4cu;
        (void)tc_call(0x802343c8u, &a);
        f0 = (f64)rdf32(0x805725d8u);
        wrf32d(0x817fdf24u, f0);
        wrf32d(0x817fdf20u, f0);
        wrf32d(0x817fdf1cu, f0);
        a.r[0] = 0x817fdf4cu;
        a.r[1] = 0x817fdf1cu;
        (void)tc_call(0x802343e4u, &a);
        a.f[0] = (f64)rdf32(0x817fdf1cu);
        a.f[1] = (f64)rdf32(0x817fdf24u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        if (!((f64)rdf32(0x805725e4u) < f1)) {
            a.f[0] = (f64)rdf32(0x817fdf1cu);
            a.f[1] = (f64)rdf32(0x817fdf24u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)rdf32(0x805725ecu);
            if (!((f0 > f1) || (f0 == f1))) {
                a.f[0] = (f64)rdf32(0x817fdf1cu);
                a.f[1] = (f64)rdf32(0x817fdf24u);
                f1 = tc_callf(0x80262c68u, &a);
                f0 = (f64)(f32)f1;
            } else {
                a.f[0] = (f64)rdf32(0x817fdf1cu);
                a.f[1] = (f64)rdf32(0x817fdf24u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)(f32)((f64)rdf32(0x805725e8u) + f1);
            }
        } else {
            a.f[0] = (f64)rdf32(0x817fdf1cu);
            a.f[1] = (f64)rdf32(0x817fdf24u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)(f32)(f1 - (f64)rdf32(0x805725e8u));
        }
        f2 = (f64)rdf32(0x805725e0u);
        f1 = -f0;
        f0 = (f64)rdf32(0x805725d8u);
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
        a.r[1] = param_2;
        a.r[2] = param_2;
        (void)tc_call(0x8023411cu, &a);
        a.r[0] = param_2;
        f1 = tc_callf(0x80234440u, &a);
        f31 = f1;
        if ((f64)rdf32(0x805725d8u) != f1) {
            f1 = (f64)(f32)px_fdiv((f64)rdf32(0x805725e0u), f1);
            a.f[0] = f1;
            a.r[0] = param_2;
            a.r[1] = param_2;
            (void)tc_call(0x802343c8u, &a);
        }
        r4 = 0u;
        r0 = rd32(param_2 + 4u);
        r5 = 0u;
        f1 = (f64)rdf32(0x805725d8u);
        wr32(0x817fdf40u, rd32(param_2));
        wr32(0x817fdf44u, r0);
        c0eq = f1 == (f64)rdf32(0x817fdf40u);
        wr32(0x817fdf48u, rd32(param_2 + 8u));
        if (c0eq && f1 == (f64)rdf32(0x817fdf44u)) {
            r5 = 1u;
        }
        if (r5 != 0u && (f64)rdf32(0x805725d8u) == (f64)rdf32(0x817fdf48u)) {
            r4 = 1u;
        }
        if (r4 == 0u) {
            a.r[0] = 0x817fdf40u;
            a.r[1] = 0x817fdf40u;
            (void)tc_call(0x802343e4u, &a);
        }
        a.f[0] = (f64)rdf32(param_1 + 0x14u);
        f1 = tc_callf(0x8006b53cu, &a);
        f0 = (f64)rdf32(0x805725d8u);
        f30 = f1;
        wrf32d(0x817fdf18u, f0);
        wrf32d(0x817fdf14u, f0);
        wrf32d(0x817fdf10u, f0);
        a.r[0] = 0x817fdf40u;
        a.r[1] = 0x817fdf10u;
        (void)tc_call(0x802343e4u, &a);
        a.f[0] = (f64)rdf32(0x817fdf10u);
        a.f[1] = (f64)rdf32(0x817fdf18u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        if (!((f64)rdf32(0x805725e4u) < f1)) {
            a.f[0] = (f64)rdf32(0x817fdf10u);
            a.f[1] = (f64)rdf32(0x817fdf18u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)rdf32(0x805725ecu);
            if (!((f0 > f1) || (f0 == f1))) {
                a.f[0] = (f64)rdf32(0x817fdf10u);
                a.f[1] = (f64)rdf32(0x817fdf18u);
                f1 = tc_callf(0x80262c68u, &a);
                f0 = (f64)(f32)f1;
            } else {
                a.f[0] = (f64)rdf32(0x817fdf10u);
                a.f[1] = (f64)rdf32(0x817fdf18u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)(f32)((f64)rdf32(0x805725e8u) + f1);
            }
        } else {
            a.f[0] = (f64)rdf32(0x817fdf10u);
            a.f[1] = (f64)rdf32(0x817fdf18u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)(f32)(f1 - (f64)rdf32(0x805725e8u));
        }
        f1 = -f0;
        if (!((f64)rdf32(0x805725e4u) < f1)) {
            f0 = (f64)rdf32(0x805725ecu);
            if ((f0 > f1) || (f0 == f1)) {
                f1 = (f64)(f32)((f64)rdf32(0x805725e8u) + f1);
            }
        } else {
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x805725e8u));
        }
        f30 = (f64)(f32)(f1 - f30);
        if (!(f30 > (f64)rdf32(0x805725e4u))) {
            if (f30 < (f64)rdf32(0x805725ecu)) {
                f30 = (f64)(f32)(f30 + (f64)rdf32(0x805725e8u));
            }
        } else {
            f30 = (f64)(f32)(f30 - (f64)rdf32(0x805725e8u));
        }
        if ((f64)rdf32(0x80572604u) == param_f1) {
            f0 = (f64)rdf32(0x80572608u);
            f1 = (f64)(f32)ppc_fabs(f30);
            if ((f1 > f0) || (f1 == f0)) {
                f29 = (f64)rdf32(0x8057260cu);
            }
        }
        f3 = (f64)rdf32(0x805725e4u);
        f2 = (f64)rdf32(0x80572610u);
        f1 = (f64)(f32)px_fdiv((f64)(f32)(f3 * f29), f2);
        if (!(f1 < f30)) {
            f1 = -f29;
            if (!((f64)(f32)((f64)rdf32(0x80572614u) * f1) > f30)) {
                f1 = (f64)(f32)(f30 + (f64)rdf32(param_1 + 0x14u));
                if (!(f3 < f1)) {
                    f0 = (f64)rdf32(0x805725ecu);
                    if ((f0 > f1) || (f0 == f1)) {
                        f1 = (f64)(f32)((f64)rdf32(0x805725e8u) + f1);
                    }
                } else {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x805725e8u));
                }
                wrf32d(param_4, f1);
            } else {
                f1 = (f64)(f32)(f3 * f1);
                f1 = (f64)(f32)px_fdiv(f1, f2);
                f1 = (f64)(f32)(f1 + (f64)rdf32(param_1 + 0x14u));
                if (!(f3 < f1)) {
                    f0 = (f64)rdf32(0x805725ecu);
                    if ((f0 > f1) || (f0 == f1)) {
                        f1 = (f64)(f32)((f64)rdf32(0x805725e8u) + f1);
                    }
                } else {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x805725e8u));
                }
                wrf32d(param_4, f1);
            }
        } else {
            f1 = (f64)(f32)(f1 + (f64)rdf32(param_1 + 0x14u));
            if (!(f3 < f1)) {
                f0 = (f64)rdf32(0x805725ecu);
                if ((f0 > f1) || (f0 == f1)) {
                    f1 = (f64)(f32)((f64)rdf32(0x805725e8u) + f1);
                }
            } else {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x805725e8u));
            }
            wrf32d(param_4, f1);
        }
        f1 = (f64)rdf32(0x805725d8u);
        f0 = (f64)rdf32(0x805725e4u);
        wrf32d(0x817fdf3cu, f1);
        wrf32d(0x817fdf38u, f1);
        wrf32d(0x817fdf34u, f1);
        f29 = (f64)rdf32(param_4);
        if (!(f0 < f29)) {
            f0 = (f64)rdf32(0x805725ecu);
            if ((f0 > f29) || (f0 == f29)) {
                f29 = (f64)(f32)((f64)rdf32(0x805725e8u) + f29);
            }
        } else {
            f29 = (f64)(f32)(f29 - (f64)rdf32(0x805725e8u));
        }
        a.f[0] = f29;
        f1 = tc_callf(0x80262b10u, &a);
        wrf32d(0x817fdf38u, (f64)rdf32(0x805725d8u));
        wrf32d(0x817fdf34u, (f64)(f32)f1);
        a.f[0] = f29;
        f1 = tc_callf(0x80262704u, &a);
        f1 = (f64)(f32)f1;
        f0 = (f64)rdf32(0x805725d8u);
        wrf32d(0x817fdf00u, f0);
        wrf32d(0x817fdf3cu, f1);
        wrf32d(0x817fdefcu, f0);
        wrf32d(0x817fdef8u, f0);
        a.r[0] = param_1 + 0x25cu;
        a.r[1] = 0x817fdef8u;
        (void)tc_call(0x802343e4u, &a);
        a.f[0] = (f64)rdf32(0x817fdef8u);
        a.f[1] = (f64)rdf32(0x817fdf00u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        if (!((f64)rdf32(0x805725e4u) < f1)) {
            a.f[0] = (f64)rdf32(0x817fdef8u);
            a.f[1] = (f64)rdf32(0x817fdf00u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)rdf32(0x805725ecu);
            if (!((f0 > f1) || (f0 == f1))) {
                a.f[0] = (f64)rdf32(0x817fdef8u);
                a.f[1] = (f64)rdf32(0x817fdf00u);
                f1 = tc_callf(0x80262c68u, &a);
                f29 = (f64)(f32)f1;
            } else {
                a.f[0] = (f64)rdf32(0x817fdef8u);
                a.f[1] = (f64)rdf32(0x817fdf00u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f29 = (f64)(f32)((f64)rdf32(0x805725e8u) + f1);
            }
        } else {
            a.f[0] = (f64)rdf32(0x817fdef8u);
            a.f[1] = (f64)rdf32(0x817fdf00u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f29 = (f64)(f32)(f1 - (f64)rdf32(0x805725e8u));
        }
        f0 = (f64)rdf32(0x805725d8u);
        wrf32d(0x817fdf0cu, f0);
        wrf32d(0x817fdf08u, f0);
        wrf32d(0x817fdf04u, f0);
        a.r[0] = 0x817fdf34u;
        a.r[1] = 0x817fdf04u;
        (void)tc_call(0x802343e4u, &a);
        a.f[0] = (f64)rdf32(0x817fdf04u);
        a.f[1] = (f64)rdf32(0x817fdf0cu);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        if (!((f64)rdf32(0x805725e4u) < f1)) {
            a.f[0] = (f64)rdf32(0x817fdf04u);
            a.f[1] = (f64)rdf32(0x817fdf0cu);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)rdf32(0x805725ecu);
            if (!((f0 > f1) || (f0 == f1))) {
                a.f[0] = (f64)rdf32(0x817fdf04u);
                a.f[1] = (f64)rdf32(0x817fdf0cu);
                f1 = tc_callf(0x80262c68u, &a);
                f3 = (f64)(f32)f1;
            } else {
                a.f[0] = (f64)rdf32(0x817fdf04u);
                a.f[1] = (f64)rdf32(0x817fdf0cu);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f3 = (f64)(f32)((f64)rdf32(0x805725e8u) + f1);
            }
        } else {
            a.f[0] = (f64)rdf32(0x817fdf04u);
            a.f[1] = (f64)rdf32(0x817fdf0cu);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f3 = (f64)(f32)(f1 - (f64)rdf32(0x805725e8u));
        }
        if (!((f64)rdf32(0x805725e4u) < f29)) {
            f0 = (f64)rdf32(0x805725ecu);
            if (!((f0 > f29) || (f0 == f29))) {
                f0 = f29;
            } else {
                f0 = (f64)(f32)((f64)rdf32(0x805725e8u) + f29);
            }
        } else {
            f0 = (f64)(f32)(f29 - (f64)rdf32(0x805725e8u));
        }
        f1 = (f64)(f32)(f0 - f3);
        if (!(f1 > (f64)rdf32(0x805725e4u))) {
            if (f1 < (f64)rdf32(0x805725ecu)) {
                f1 = (f64)(f32)(f1 + (f64)rdf32(0x805725e8u));
            }
        } else {
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x805725e8u));
        }
        f0 = (f64)rdf32(0x805725e4u);
        if (!(f0 < f1)) {
            if (!(f0 < f29)) {
                f0 = (f64)rdf32(0x805725ecu);
                if (!((f0 > f29) || (f0 == f29))) {
                    f0 = f29;
                } else {
                    f0 = (f64)(f32)((f64)rdf32(0x805725e8u) + f29);
                }
            } else {
                f0 = (f64)(f32)(f29 - (f64)rdf32(0x805725e8u));
            }
            f2 = (f64)(f32)(f0 - f3);
            if (!(f2 > (f64)rdf32(0x805725e4u))) {
                if (f2 < (f64)rdf32(0x805725ecu)) {
                    f2 = (f64)(f32)(f2 + (f64)rdf32(0x805725e8u));
                }
            } else {
                f2 = (f64)(f32)(f2 - (f64)rdf32(0x805725e8u));
            }
            f1 = (f64)rdf32(0x805725ecu);
            if (!((f1 > f2) || (f1 == f2))) {
                if (!((f64)rdf32(0x805725e4u) < f29)) {
                    if ((f1 > f29) || (f1 == f29)) {
                        f29 = (f64)(f32)((f64)rdf32(0x805725e8u) + f29);
                    }
                } else {
                    f29 = (f64)(f32)(f29 - (f64)rdf32(0x805725e8u));
                }
                f1 = (f64)(f32)(f29 - f3);
                if (!(f1 > (f64)rdf32(0x805725e4u))) {
                    if (f1 < (f64)rdf32(0x805725ecu)) {
                        f1 = (f64)(f32)(f1 + (f64)rdf32(0x805725e8u));
                    }
                } else {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x805725e8u));
                }
            } else {
                if (!((f64)rdf32(0x805725e4u) < f29)) {
                    if ((f1 > f29) || (f1 == f29)) {
                        f29 = (f64)(f32)((f64)rdf32(0x805725e8u) + f29);
                    }
                } else {
                    f29 = (f64)(f32)(f29 - (f64)rdf32(0x805725e8u));
                }
                f1 = (f64)(f32)(f29 - f3);
                if (!(f1 > (f64)rdf32(0x805725e4u))) {
                    if (f1 < (f64)rdf32(0x805725ecu)) {
                        f1 = (f64)(f32)(f1 + (f64)rdf32(0x805725e8u));
                    }
                } else {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x805725e8u));
                }
                f1 = (f64)(f32)((f64)rdf32(0x805725e8u) + f1);
            }
        } else {
            if (!(f0 < f29)) {
                f0 = (f64)rdf32(0x805725ecu);
                if ((f0 > f29) || (f0 == f29)) {
                    f29 = (f64)(f32)((f64)rdf32(0x805725e8u) + f29);
                }
            } else {
                f29 = (f64)(f32)(f29 - (f64)rdf32(0x805725e8u));
            }
            f1 = (f64)(f32)(f29 - f3);
            if (!(f1 > (f64)rdf32(0x805725e4u))) {
                if (f1 < (f64)rdf32(0x805725ecu)) {
                    f1 = (f64)(f32)(f1 + (f64)rdf32(0x805725e8u));
                }
            } else {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x805725e8u));
            }
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x805725e8u));
        }
        f1 = -f1;
        f1 = ppc_fabs(f1);
        f1 = (f64)(f32)f1;
        if (f1 > (f64)rdf32(0x805725f8u)) {
            wrf32d(param_1 + 0x25cu, (f64)rdf32(0x804890d4u));
            wrf32d(param_1 + 0x260u, (f64)rdf32(0x804890d8u));
            wrf32d(param_1 + 0x264u, (f64)rdf32(0x804890dcu));
        }
        if ((f64)(f32)ppc_fabs(f30) < (f64)rdf32(0x805725f8u)) {
            a.r[0] = param_1 + 0x25cu;
            f1 = tc_callf(0x80234440u, &a);
            f1 = (f64)(f32)((f64)(f32)((f64)rdf32(0x805725e0u) + f1) * f31);
            a.f[0] = f1;
            a.r[0] = 0x817fdf34u;
            a.r[1] = 0x817fdf34u;
            (void)tc_call(0x802343c8u, &a);
            wrf32d(param_1 + 0x25cu, (f64)rdf32(0x817fdf34u));
            wrf32d(param_1 + 0x260u, (f64)rdf32(0x817fdf38u));
            wrf32d(param_1 + 0x264u, (f64)rdf32(0x817fdf3cu));
            a.r[0] = param_1 + 0x25cu;
            f1 = tc_callf(0x80234440u, &a);
            f0 = (f64)rdf32(0x80572618u);
            f29 = f1;
            if (!(f1 < f0)) {
                f0 = (f64)rdf32(0x805725fcu);
                if (!(f1 > f0)) {
                    if (f1 > (f64)rdf32(0x8057261cu)) {
                        f0 = (f64)rdf32(0x80572620u);
                        if (f0 > f1) {
                            f29 = f0;
                        }
                    }
                } else {
                    f29 = f0;
                }
            } else {
                f29 = f0;
            }
            f0 = (f64)rdf32(0x80572620u);
            if (((f29 > f0) || (f29 == f0)) && (rd32(0x80499094u) & 2u) != 0u) {
                f29 = (f64)rdf32(0x8057261cu);
            }
            f1 = (f64)rdf32(0x805725d8u);
            r0 = 0u;
            r3 = 0u;
            if (f1 == (f64)rdf32(param_1 + 0x25cu) && f1 == (f64)rdf32(param_1 + 0x260u)) {
                r3 = 1u;
            }
            if (r3 != 0u && (f64)rdf32(0x805725d8u) == (f64)rdf32(param_1 + 0x264u)) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                r3 = param_1 + 0x25cu;
                a.r[0] = r3;
                a.r[1] = r3;
                (void)tc_call(0x802343e4u, &a);
            }
            r3 = param_1 + 0x25cu;
            a.f[0] = f29;
            a.r[0] = r3;
            a.r[1] = r3;
            f1 = tc_callf(0x802343c8u, &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            r0 = rd32(r3 + 4u);
            wr32(0x817fdf28u, rd32(r3));
            wr32(0x817fdf2cu, r0);
            wr32(0x817fdf30u, rd32(r3 + 8u));
            a.r[0] = 0x817fdf28u;
            a.r[1] = 0x817fdf34u;
            a.r[2] = 0x817fdf28u;
            (void)tc_call(0x80234380u, &a);
            wrf32d(param_3, (f64)rdf32(0x817fdf28u));
            wrf32d(param_3 + 4u, (f64)rdf32(0x817fdf2cu));
            wrf32d(param_3 + 8u, (f64)rdf32(0x817fdf30u));
        }
    }
    return;
}
