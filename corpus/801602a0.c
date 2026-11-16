#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_801602a0(u32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r29 = 0, r30 = 0, t7 = 0, t11 = 0, t15 = 0, t19 = 0, t23 = 0;
    f64 f0 = 0.0, f1 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0, t4 = 0.0, t5 = 0.0;
    f64 t8 = 0.0, t9 = 0.0, t12 = 0.0, t13 = 0.0, t16 = 0.0, t17 = 0.0, t20 = 0.0, t21 = 0.0, t24 = 0.0, t25 = 0.0;
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
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfc4u, 0u);
    r0 = rd32(param_1 + 0x1d8u);
    if (r0 != 3u) {
        if (r0 != 4u) {
            if (r0 != 2u) {
                if (r0 != 5u) {
                    if (r0 != 6u) {
                        if (r0 == 0u) {
                            if (rd32(param_1 + 0x14cu) != 0u) {
                                wr32(param_1 + 0x1d8u, 7u);
                            }
                            f31 = (f64)rdf32(0x80574a78u);
                            r6 = rd32(0x804863d8u);
                            r29 = 0u;
                            f30 = (f64)rdf32(param_1 + 0x168u);
                            if (r6 != 0u) {
                                r5 = rd32(param_1 + 4u);
                                r4 = rd32(param_1 + 8u);
                                r0 = rd32(param_1 + 0xcu);
                                r12 = rd32(rd32(r6) + 0x28u);
                                wr32(0x817fdf70u, r5);
                                wr32(0x817fdf74u, r4);
                                wr32(0x817fdf78u, r0);
                                a.r[0] = r6;
                                a.r[1] = r4;
                                a.r[2] = r5;
                                a.r[3] = r6;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.r[7] = 0u;
                                a.f[0] = 0.0;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                a.f[3] = 0.0;
                                a.f[4] = 0.0;
                                a.f[5] = 0.0;
                                a.f[6] = 0.0;
                                a.f[7] = 0.0;
                                r3 = tc_call(r12, &a);
                                r5 = rd32(r3);
                                r7 = rd32(0x817fdf70u);
                                wr32(0x817fdf68u, rd32(r3 + 4u));
                                r6 = rd32(0x817fdf74u);
                                wr32(0x817fdf64u, r5);
                                r0 = rd32(0x817fdf78u);
                                wr32(0x817fdf6cu, rd32(r3 + 8u));
                                wr32(0x817fdf58u, r7);
                                wr32(0x817fdf5cu, r6);
                                wr32(0x817fdf60u, r0);
                                a.r[0] = 0x817fdf58u;
                                a.r[1] = 0x817fdf64u;
                                a.r[2] = 0x817fdf58u;
                                (void)tc_call(0x802343a4u, &a);
                                a.r[0] = 0x817fdf58u;
                                f1 = tc_callf(0x80234440u, &a);
                                f0 = (f64)rdf32(0x80570870u);
                                if ((f1 < f0) || (f1 == f0)) {
                                    r6 = rd32(0x817fdf74u);
                                    r0 = rd32(0x817fdf78u);
                                    wr32(0x817fdf34u, rd32(0x817fdf70u));
                                    wr32(0x817fdf38u, r6);
                                    wr32(0x817fdf3cu, r0);
                                    a.r[0] = 0x817fdf34u;
                                    a.r[1] = 0x817fdf64u;
                                    a.r[2] = 0x817fdf34u;
                                    (void)tc_call(0x802343a4u, &a);
                                    f0 = (f64)rdf32(0x80574a78u);
                                    wrf32d(0x817fdf48u, f0);
                                    wrf32d(0x817fdf44u, f0);
                                    wrf32d(0x817fdf40u, f0);
                                    a.r[0] = 0x817fdf34u;
                                    a.r[1] = 0x817fdf40u;
                                    (void)tc_call(0x802343e4u, &a);
                                    a.f[0] = (f64)rdf32(0x817fdf40u);
                                    a.f[1] = (f64)rdf32(0x817fdf48u);
                                    f1 = tc_callf(0x80262c68u, &a);
                                    if (!((f64)rdf32(0x80574a90u) < (f64)(f32)f1)) {
                                        a.f[0] = (f64)rdf32(0x817fdf40u);
                                        a.f[1] = (f64)rdf32(0x817fdf48u);
                                        f1 = tc_callf(0x80262c68u, &a);
                                        f7 = (f64)(f32)f1;
                                        f0 = (f64)rdf32(0x80574a98u);
                                        if (!((f0 > f7) || (f0 == f7))) {
                                            a.f[0] = (f64)rdf32(0x817fdf40u);
                                            a.f[1] = (f64)rdf32(0x817fdf48u);
                                            f1 = tc_callf(0x80262c68u, &a);
                                            f31 = (f64)(f32)f1;
                                        } else {
                                            a.f[0] = (f64)rdf32(0x817fdf40u);
                                            a.f[1] = (f64)rdf32(0x817fdf48u);
                                            f1 = tc_callf(0x80262c68u, &a);
                                            f31 = (f64)(f32)((f64)rdf32(0x80574a94u) + (f64)(f32)f1);
                                        }
                                    } else {
                                        a.f[0] = (f64)rdf32(0x817fdf40u);
                                        a.f[1] = (f64)rdf32(0x817fdf48u);
                                        f1 = tc_callf(0x80262c68u, &a);
                                        f31 = (f64)(f32)((f64)(f32)f1 - (f64)rdf32(0x80574a94u));
                                    }
                                    f7 = (f64)rdf32(0x80574a90u);
                                    f9 = (f64)rdf32(0x80574a88u);
                                    f29 = (f64)(f32)px_fdiv((f64)(f32)(f7 * (f64)rdf32(param_1 + 0x168u)), f9);
                                    f30 = (f64)(f32)px_fdiv((f64)(f32)(f9 * f31), f7);
                                    if (!(f7 < f29)) {
                                        f0 = (f64)rdf32(0x80574a98u);
                                        if ((f0 > f29) || (f0 == f29)) {
                                            f29 = (f64)(f32)((f64)rdf32(0x80574a94u) + f29);
                                        }
                                    } else {
                                        f29 = (f64)(f32)(f29 - (f64)rdf32(0x80574a94u));
                                    }
                                    a.f[0] = f29;
                                    f1 = tc_callf(0x80262b10u, &a);
                                    wrf32d(param_1 + 0x170u, (f64)rdf32(0x80574a78u));
                                    wrf32d(param_1 + 0x16cu, (f64)(f32)f1);
                                    a.f[0] = f29;
                                    f1 = tc_callf(0x80262704u, &a);
                                    f0 = (f64)rdf32(0x80574a78u);
                                    wrf32d(param_1 + 0x174u, (f64)(f32)f1);
                                    wrf32d(0x817fdf30u, f0);
                                    wrf32d(0x817fdf2cu, f0);
                                    wrf32d(0x817fdf28u, f0);
                                    a.r[0] = param_1 + 0x16cu;
                                    a.r[1] = 0x817fdf28u;
                                    (void)tc_call(0x802343e4u, &a);
                                    a.f[0] = (f64)rdf32(0x817fdf28u);
                                    a.f[1] = (f64)rdf32(0x817fdf30u);
                                    f1 = tc_callf(0x80262c68u, &a);
                                    if (!((f64)rdf32(0x80574a90u) < (f64)(f32)f1)) {
                                        a.f[0] = (f64)rdf32(0x817fdf28u);
                                        a.f[1] = (f64)rdf32(0x817fdf30u);
                                        f1 = tc_callf(0x80262c68u, &a);
                                        f7 = (f64)(f32)f1;
                                        f0 = (f64)rdf32(0x80574a98u);
                                        if (!((f0 > f7) || (f0 == f7))) {
                                            a.f[0] = (f64)rdf32(0x817fdf28u);
                                            a.f[1] = (f64)rdf32(0x817fdf30u);
                                            f1 = tc_callf(0x80262c68u, &a);
                                            f7 = (f64)(f32)f1;
                                        } else {
                                            a.f[0] = (f64)rdf32(0x817fdf28u);
                                            a.f[1] = (f64)rdf32(0x817fdf30u);
                                            f1 = tc_callf(0x80262c68u, &a);
                                            f7 = (f64)(f32)((f64)rdf32(0x80574a94u) + (f64)(f32)f1);
                                        }
                                    } else {
                                        a.f[0] = (f64)rdf32(0x817fdf28u);
                                        a.f[1] = (f64)rdf32(0x817fdf30u);
                                        f1 = tc_callf(0x80262c68u, &a);
                                        f7 = (f64)(f32)((f64)(f32)f1 - (f64)rdf32(0x80574a94u));
                                    }
                                    if (!((f64)rdf32(0x80574a90u) < f31)) {
                                        f0 = (f64)rdf32(0x80574a98u);
                                        if (!((f0 > f31) || (f0 == f31))) {
                                            f0 = f31;
                                        } else {
                                            f0 = (f64)(f32)((f64)rdf32(0x80574a94u) + f31);
                                        }
                                    } else {
                                        f0 = (f64)(f32)(f31 - (f64)rdf32(0x80574a94u));
                                    }
                                    f7 = (f64)(f32)(f0 - f7);
                                    if (!(f7 > (f64)rdf32(0x80574a90u))) {
                                        if (f7 < (f64)rdf32(0x80574a98u)) {
                                            f7 = (f64)(f32)(f7 + (f64)rdf32(0x80574a94u));
                                        }
                                    } else {
                                        f7 = (f64)(f32)(f7 - (f64)rdf32(0x80574a94u));
                                    }
                                    if (!((f64)rdf32(0x80574a90u) < f7)) {
                                        f0 = (f64)rdf32(0x80574a78u);
                                        wrf32d(0x817fdf18u, f0);
                                        wrf32d(0x817fdf14u, f0);
                                        wrf32d(0x817fdf10u, f0);
                                        a.r[0] = param_1 + 0x16cu;
                                        a.r[1] = 0x817fdf10u;
                                        (void)tc_call(0x802343e4u, &a);
                                        a.f[0] = (f64)rdf32(0x817fdf10u);
                                        a.f[1] = (f64)rdf32(0x817fdf18u);
                                        f1 = tc_callf(0x80262c68u, &a);
                                        if (!((f64)rdf32(0x80574a90u) < (f64)(f32)f1)) {
                                            a.f[0] = (f64)rdf32(0x817fdf10u);
                                            a.f[1] = (f64)rdf32(0x817fdf18u);
                                            f1 = tc_callf(0x80262c68u, &a);
                                            f7 = (f64)(f32)f1;
                                            f0 = (f64)rdf32(0x80574a98u);
                                            if (!((f0 > f7) || (f0 == f7))) {
                                                a.f[0] = (f64)rdf32(0x817fdf10u);
                                                a.f[1] = (f64)rdf32(0x817fdf18u);
                                                f1 = tc_callf(0x80262c68u, &a);
                                                f7 = (f64)(f32)f1;
                                            } else {
                                                a.f[0] = (f64)rdf32(0x817fdf10u);
                                                a.f[1] = (f64)rdf32(0x817fdf18u);
                                                f1 = tc_callf(0x80262c68u, &a);
                                                f7 = (f64)(f32)((f64)rdf32(0x80574a94u) + (f64)(f32)f1);
                                            }
                                        } else {
                                            a.f[0] = (f64)rdf32(0x817fdf10u);
                                            a.f[1] = (f64)rdf32(0x817fdf18u);
                                            f1 = tc_callf(0x80262c68u, &a);
                                            f7 = (f64)(f32)((f64)(f32)f1 - (f64)rdf32(0x80574a94u));
                                        }
                                        if (!((f64)rdf32(0x80574a90u) < f31)) {
                                            f0 = (f64)rdf32(0x80574a98u);
                                            if (!((f0 > f31) || (f0 == f31))) {
                                                f0 = f31;
                                            } else {
                                                f0 = (f64)(f32)((f64)rdf32(0x80574a94u) + f31);
                                            }
                                        } else {
                                            f0 = (f64)(f32)(f31 - (f64)rdf32(0x80574a94u));
                                        }
                                        f7 = (f64)(f32)(f0 - f7);
                                        if (!(f7 > (f64)rdf32(0x80574a90u))) {
                                            if (f7 < (f64)rdf32(0x80574a98u)) {
                                                f7 = (f64)(f32)(f7 + (f64)rdf32(0x80574a94u));
                                            }
                                        } else {
                                            f7 = (f64)(f32)(f7 - (f64)rdf32(0x80574a94u));
                                        }
                                        f0 = (f64)rdf32(0x80574a98u);
                                        if (!((f0 > f7) || (f0 == f7))) {
                                            f0 = (f64)rdf32(0x80574a78u);
                                            wrf32d(0x817fdf00u, f0);
                                            wrf32d(0x817fdefcu, f0);
                                            wrf32d(0x817fdef8u, f0);
                                            a.r[0] = param_1 + 0x16cu;
                                            a.r[1] = 0x817fdef8u;
                                            (void)tc_call(0x802343e4u, &a);
                                            a.f[0] = (f64)rdf32(0x817fdef8u);
                                            a.f[1] = (f64)rdf32(0x817fdf00u);
                                            f1 = tc_callf(0x80262c68u, &a);
                                            if (!((f64)rdf32(0x80574a90u) < (f64)(f32)f1)) {
                                                a.f[0] = (f64)rdf32(0x817fdef8u);
                                                a.f[1] = (f64)rdf32(0x817fdf00u);
                                                f1 = tc_callf(0x80262c68u, &a);
                                                f7 = (f64)(f32)f1;
                                                f0 = (f64)rdf32(0x80574a98u);
                                                if (!((f0 > f7) || (f0 == f7))) {
                                                    a.f[0] = (f64)rdf32(0x817fdef8u);
                                                    a.f[1] = (f64)rdf32(0x817fdf00u);
                                                    f1 = tc_callf(0x80262c68u, &a);
                                                    f7 = (f64)(f32)f1;
                                                } else {
                                                    a.f[0] = (f64)rdf32(0x817fdef8u);
                                                    a.f[1] = (f64)rdf32(0x817fdf00u);
                                                    f1 = tc_callf(0x80262c68u, &a);
                                                    f7 = (f64)(f32)((f64)rdf32(0x80574a94u) + (f64)(f32)f1);
                                                }
                                            } else {
                                                a.f[0] = (f64)rdf32(0x817fdef8u);
                                                a.f[1] = (f64)rdf32(0x817fdf00u);
                                                f1 = tc_callf(0x80262c68u, &a);
                                                f7 = (f64)(f32)((f64)(f32)f1 - (f64)rdf32(0x80574a94u));
                                            }
                                            if (!((f64)rdf32(0x80574a90u) < f31)) {
                                                f0 = (f64)rdf32(0x80574a98u);
                                                if ((f0 > f31) || (f0 == f31)) {
                                                    f31 = (f64)(f32)((f64)rdf32(0x80574a94u) + f31);
                                                }
                                            } else {
                                                f31 = (f64)(f32)(f31 - (f64)rdf32(0x80574a94u));
                                            }
                                            f8 = (f64)(f32)(f31 - f7);
                                            if (!(f8 > (f64)rdf32(0x80574a90u))) {
                                                if (f8 < (f64)rdf32(0x80574a98u)) {
                                                    f8 = (f64)(f32)(f8 + (f64)rdf32(0x80574a94u));
                                                }
                                            } else {
                                                f8 = (f64)(f32)(f8 - (f64)rdf32(0x80574a94u));
                                            }
                                        } else {
                                            f0 = (f64)rdf32(0x80574a78u);
                                            wrf32d(0x817fdf0cu, f0);
                                            wrf32d(0x817fdf08u, f0);
                                            wrf32d(0x817fdf04u, f0);
                                            a.r[0] = param_1 + 0x16cu;
                                            a.r[1] = 0x817fdf04u;
                                            (void)tc_call(0x802343e4u, &a);
                                            a.f[0] = (f64)rdf32(0x817fdf04u);
                                            a.f[1] = (f64)rdf32(0x817fdf0cu);
                                            f1 = tc_callf(0x80262c68u, &a);
                                            if (!((f64)rdf32(0x80574a90u) < (f64)(f32)f1)) {
                                                a.f[0] = (f64)rdf32(0x817fdf04u);
                                                a.f[1] = (f64)rdf32(0x817fdf0cu);
                                                f1 = tc_callf(0x80262c68u, &a);
                                                f7 = (f64)(f32)f1;
                                                f0 = (f64)rdf32(0x80574a98u);
                                                if (!((f0 > f7) || (f0 == f7))) {
                                                    a.f[0] = (f64)rdf32(0x817fdf04u);
                                                    a.f[1] = (f64)rdf32(0x817fdf0cu);
                                                    f1 = tc_callf(0x80262c68u, &a);
                                                    f7 = (f64)(f32)f1;
                                                } else {
                                                    a.f[0] = (f64)rdf32(0x817fdf04u);
                                                    a.f[1] = (f64)rdf32(0x817fdf0cu);
                                                    f1 = tc_callf(0x80262c68u, &a);
                                                    f7 = (f64)(f32)((f64)rdf32(0x80574a94u) + (f64)(f32)f1);
                                                }
                                            } else {
                                                a.f[0] = (f64)rdf32(0x817fdf04u);
                                                a.f[1] = (f64)rdf32(0x817fdf0cu);
                                                f1 = tc_callf(0x80262c68u, &a);
                                                f7 = (f64)(f32)((f64)(f32)f1 - (f64)rdf32(0x80574a94u));
                                            }
                                            if (!((f64)rdf32(0x80574a90u) < f31)) {
                                                f0 = (f64)rdf32(0x80574a98u);
                                                if ((f0 > f31) || (f0 == f31)) {
                                                    f31 = (f64)(f32)((f64)rdf32(0x80574a94u) + f31);
                                                }
                                            } else {
                                                f31 = (f64)(f32)(f31 - (f64)rdf32(0x80574a94u));
                                            }
                                            f7 = (f64)(f32)(f31 - f7);
                                            if (!(f7 > (f64)rdf32(0x80574a90u))) {
                                                if (f7 < (f64)rdf32(0x80574a98u)) {
                                                    f7 = (f64)(f32)(f7 + (f64)rdf32(0x80574a94u));
                                                }
                                            } else {
                                                f7 = (f64)(f32)(f7 - (f64)rdf32(0x80574a94u));
                                            }
                                            f8 = (f64)(f32)((f64)rdf32(0x80574a94u) + f7);
                                        }
                                    } else {
                                        f0 = (f64)rdf32(0x80574a78u);
                                        wrf32d(0x817fdf24u, f0);
                                        wrf32d(0x817fdf20u, f0);
                                        wrf32d(0x817fdf1cu, f0);
                                        a.r[0] = param_1 + 0x16cu;
                                        a.r[1] = 0x817fdf1cu;
                                        (void)tc_call(0x802343e4u, &a);
                                        a.f[0] = (f64)rdf32(0x817fdf1cu);
                                        a.f[1] = (f64)rdf32(0x817fdf24u);
                                        f1 = tc_callf(0x80262c68u, &a);
                                        if (!((f64)rdf32(0x80574a90u) < (f64)(f32)f1)) {
                                            a.f[0] = (f64)rdf32(0x817fdf1cu);
                                            a.f[1] = (f64)rdf32(0x817fdf24u);
                                            f1 = tc_callf(0x80262c68u, &a);
                                            f7 = (f64)(f32)f1;
                                            f0 = (f64)rdf32(0x80574a98u);
                                            if (!((f0 > f7) || (f0 == f7))) {
                                                a.f[0] = (f64)rdf32(0x817fdf1cu);
                                                a.f[1] = (f64)rdf32(0x817fdf24u);
                                                f1 = tc_callf(0x80262c68u, &a);
                                                f7 = (f64)(f32)f1;
                                            } else {
                                                a.f[0] = (f64)rdf32(0x817fdf1cu);
                                                a.f[1] = (f64)rdf32(0x817fdf24u);
                                                f1 = tc_callf(0x80262c68u, &a);
                                                f7 = (f64)(f32)((f64)rdf32(0x80574a94u) + (f64)(f32)f1);
                                            }
                                        } else {
                                            a.f[0] = (f64)rdf32(0x817fdf1cu);
                                            a.f[1] = (f64)rdf32(0x817fdf24u);
                                            f1 = tc_callf(0x80262c68u, &a);
                                            f7 = (f64)(f32)((f64)(f32)f1 - (f64)rdf32(0x80574a94u));
                                        }
                                        if (!((f64)rdf32(0x80574a90u) < f31)) {
                                            f0 = (f64)rdf32(0x80574a98u);
                                            if ((f0 > f31) || (f0 == f31)) {
                                                f31 = (f64)(f32)((f64)rdf32(0x80574a94u) + f31);
                                            }
                                        } else {
                                            f31 = (f64)(f32)(f31 - (f64)rdf32(0x80574a94u));
                                        }
                                        f7 = (f64)(f32)(f31 - f7);
                                        if (!(f7 > (f64)rdf32(0x80574a90u))) {
                                            if (f7 < (f64)rdf32(0x80574a98u)) {
                                                f7 = (f64)(f32)(f7 + (f64)rdf32(0x80574a94u));
                                            }
                                        } else {
                                            f7 = (f64)(f32)(f7 - (f64)rdf32(0x80574a94u));
                                        }
                                        f8 = (f64)(f32)(f7 - (f64)rdf32(0x80574a94u));
                                    }
                                    f8 = (f64)(f32)((f64)rdf32(0x80574a88u) * f8);
                                    f0 = (f64)rdf32(0x80570874u);
                                    f31 = (f64)(f32)px_fdiv(f8, (f64)rdf32(0x80574a90u));
                                    f7 = (f64)(f32)ppc_fabs(f31);
                                    if (!((f7 > f0) || (f7 == f0))) {
                                        if ((f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32(0x817fdf74u) - (f64)rdf32(0x817fdf68u))) < (f64)rdf32(0x8057087cu)) {
                                            r29 = 2u;
                                        }
                                    } else {
                                        r29 = 1u;
                                        f1 = tc_callf(0x80040a00u, &a);
                                        f0 = (f64)(f32)((f64)rdf32(0x80574a80u) * (f64)(f32)(f1 - (f64)rdf32(0x80574a9cu)));
                                        if (!(f31 < (f64)rdf32(0x80574a78u))) {
                                            f31 = (f64)(f32)(f31 + f0);
                                            f30 = (f64)(f32)(f30 + f0);
                                        } else {
                                            f31 = (f64)(f32)(f31 - f0);
                                            f30 = (f64)(f32)(f30 - f0);
                                        }
                                    }
                                }
                            }
                            if (r29 != 2u) {
                                if (r29 == 1u) {
                                    f0 = (f64)rdf32(0x80574aa0u);
                                    f8 = (f64)rdf32(param_1 + 0x17cu);
                                    wrf32d(param_1 + 0x168u, f30);
                                    wrf32d(param_1 + 0x180u, f31);
                                    f0 = (f64)(f32)px_fdiv((f64)(f32)ppc_fabs(f31), f0);
                                    f0 = (f64)(f32)(f8 * f0);
                                    wrf32d(param_1 + 0x178u, f0);
                                    a.r[0] = param_1;
                                    (void)tc_call(0x8016122cu, &a);
                                }
                            } else {
                                a.r[0] = param_1;
                                (void)tc_call(0x80161244u, &a);
                                wrf32d(param_1 + 0x1e4u, (f64)rdf32(param_1 + 0x1e8u));
                            }
                        }
                    } else if (rd32(param_1 + 0x150u) == 0u) {
                        wr32(param_1 + 0x1d8u, 0u);
                    }
                } else {
                    a.r[0] = rd32(param_1 + 0x78u);
                    a.r[1] = param_1 + 0x190u;
                    r3 = tc_call(0x80147ee0u, &a);
                    if (r3 == 0u) {
                        wr32(param_1 + 0x1d8u, 0u);
                    }
                }
            } else {
                f7 = (f64)rdf32(0x80574a78u);
                wr32(param_1 + 0x1d8u, 5u);
                r4 = rd32(param_1 + 0x78u);
                wr32(param_1 + 0x148u, 1u);
                wrf32d(param_1 + 0x194u, f7);
                t4 = (f64)rdf32(r4);
                t5 = (f64)rdf32(r4 + 4u);
                wrf32d(0x817fdf88u, t4);
                wrf32d(0x817fdf8cu, t5);
                t7 = r4 + 8u;
                t8 = (f64)rdf32(t7);
                t9 = (f64)rdf32(t7 + 4u);
                wrf32d(0x817fdf90u, t8);
                wrf32d(0x817fdf94u, t9);
                t11 = r4 + 0x10u;
                t12 = (f64)rdf32(t11);
                t13 = (f64)rdf32(t11 + 4u);
                wrf32d(0x817fdf98u, t12);
                wrf32d(0x817fdf9cu, t13);
                t15 = r4 + 0x18u;
                t16 = (f64)rdf32(t15);
                t17 = (f64)rdf32(t15 + 4u);
                wrf32d(0x817fdfa0u, t16);
                wrf32d(0x817fdfa4u, t17);
                t19 = r4 + 0x20u;
                t20 = (f64)rdf32(t19);
                t21 = (f64)rdf32(t19 + 4u);
                wrf32d(0x817fdfa8u, t20);
                wrf32d(0x817fdfacu, t21);
                t23 = r4 + 0x28u;
                t24 = (f64)rdf32(t23);
                t25 = (f64)rdf32(t23 + 4u);
                wrf32d(0x817fdfb0u, t24);
                wrf32d(0x817fdfb4u, t25);
                f8 = (f64)rdf32(param_1 + 0x180u);
                f7 = (f64)(f32)(f7 + f8);
                f10 = (f64)rdf32(param_1 + 0x18cu);
                f9 = (f64)rdf32(param_1 + 0x188u);
                f11 = (f64)rdf32(param_1 + 0x184u);
                f0 = (f64)(f32)px_fdiv(f8, (f64)(f32)((f64)rdf32(0x80574a80u) * (f64)rdf32(param_1 + 0x178u)));
                r30 = rd32(0x817fdf8cu);
                c0eq = rd32(param_1 + 0x1dcu) == 0xffffffffu;
                r12 = rd32(0x817fdf90u);
                r11 = rd32(0x817fdf94u);
                r10 = rd32(0x817fdf98u);
                r9 = rd32(0x817fdf9cu);
                r8 = rd32(0x817fdfa0u);
                r7 = rd32(0x817fdfa4u);
                r6 = rd32(0x817fdfa8u);
                r5 = rd32(0x817fdfacu);
                r4 = rd32(0x817fdfb0u);
                r0 = rd32(0x817fdfb4u);
                wr32(param_1 + 0x1a8u, rd32(0x817fdf88u));
                wr32(param_1 + 0x1acu, r30);
                wr32(param_1 + 0x1b0u, r12);
                wr32(param_1 + 0x1b4u, r11);
                wr32(param_1 + 0x1b8u, r10);
                wr32(param_1 + 0x1bcu, r9);
                wr32(param_1 + 0x1c0u, r8);
                wr32(param_1 + 0x1c4u, r7);
                wr32(param_1 + 0x1c8u, r6);
                wr32(param_1 + 0x1ccu, r5);
                wr32(param_1 + 0x1d0u, r4);
                wr32(param_1 + 0x1d4u, r0);
                wrf32d(param_1 + 0x190u, f0);
                wrf32d(param_1 + 0x198u, f7);
                wrf32d(0x817fdf4cu, f11);
                wrf32d(0x817fdf50u, f9);
                wrf32d(0x817fdf54u, f10);
                wrf32d(param_1 + 0x19cu, f11);
                wrf32d(param_1 + 0x1a0u, f9);
                wrf32d(param_1 + 0x1a4u, f10);
                if (!c0eq) {
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    a.f[0] = t4;
                    a.f[1] = t8;
                    a.f[2] = t12;
                    a.f[3] = t16;
                    a.f[4] = t20;
                    a.f[5] = t24;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                    r0 = rd32(r3 + 4u);
                    wr32(0x817fdf7cu, rd32(r3));
                    wr32(0x817fdf80u, r0);
                    wr32(0x817fdf84u, rd32(r3 + 8u));
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = rd32(param_1 + 0x1dcu);
                    a.r[2] = 0x817fdf7cu;
                    (void)tc_call(0x8010a754u, &a);
                }
            }
        } else {
            wr32(param_1 + 0x148u, 1u);
            wr32(param_1 + 0x150u, 1u);
        }
    } else {
        wr32(0x817fdfb8u, 0x43300000u);
        f7 = rdf64(0x80574aa8u);
        wr32(0x817fdfbcu, 0x80000001u);
        r4 = rd32(param_1 + 0x78u);
        f0 = rdf64(0x817fdfb8u);
        wr32(param_1 + 0x150u, 1u);
        f0 = (f64)(f32)(f0 - f7);
        f7 = (f64)rdf32(r4 + 0x54u);
        if ((f7 > f0) || (f7 == f0)) {
            wr32(param_1 + 0x1d8u, 4u);
            a.r[0] = param_1;
            (void)tc_call(0x80160e28u, &a);
        }
    }
    if (rd32(param_1 + 0x150u) != 0u) {
        f7 = (f64)rdf32(param_1 + 0x1e4u);
        f0 = (f64)rdf32(0x80574a78u);
        if (!(f7 > f0)) {
            wrf32d(param_1 + 0x1e4u, f0);
            a.r[0] = rd32(param_1 + 0x78u);
            a.r[1] = 0u;
            r3 = tc_call(0x800355acu, &a);
            if (r3 != 0u) {
                wr32(param_1 + 0x1d8u, 6u);
                r29 = rd32(param_1 + 0x78u);
                a.r[0] = 0x8046ae40u;
                a.r[1] = rd32(param_1 + 0xf8u);
                a.r[2] = 0u;
                r3 = tc_call(0x8013ec7cu, &a);
                a.f[0] = (f64)rdf32(0x80574a8cu);
                a.r[0] = r29;
                a.r[1] = r3;
                a.r[2] = 0u;
                (void)tc_call(0x80035740u, &a);
                wr32(param_1 + 0x150u, 0u);
            }
            r3 = rd32(param_1 + 0x78u);
            a.r[0] = r3;
            a.r[1] = r3;
            (void)tc_call(0x800315c0u, &a);
        } else {
            wrf32d(param_1 + 0x1e4u, (f64)(f32)(f7 - (f64)rdf32(0x80574a7cu)));
        }
    }
    return 1u;
}
