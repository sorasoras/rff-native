#include "tc_rt.h"

void fn_8017cc00(f64 param_1, f64 param_2, f64 param_3, f64 param_4, u32 param_5, u32 param_6, u32 param_7)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f22 = 0.0, f23 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f29 = 0.0, f30 = 0.0;
    f64 f31 = 0.0;
    TcArgs a = {0};
    f1 = param_1;
    f2 = param_2;
    f3 = param_3;
    f4 = param_4;
    r4 = param_6;
    r5 = param_7;
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
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, 0.0);
    wrf32d(0x817fdfccu, 0.0);
    wrf64(0x817fdfb0u, 0.0);
    wrf32d(0x817fdfb8u, 0.0);
    wrf32d(0x817fdfbcu, 0.0);
    wrf64(0x817fdfa0u, 0.0);
    wrf32d(0x817fdfa8u, 0.0);
    wrf32d(0x817fdfacu, 0.0);
    wrf64(0x817fdf90u, 0.0);
    wrf32d(0x817fdf98u, 0.0);
    wrf32d(0x817fdf9cu, 0.0);
    wrf64(0x817fdf80u, 0.0);
    wrf32d(0x817fdf88u, 0.0);
    wrf32d(0x817fdf8cu, 0.0);
    wrf64(0x817fdf70u, 0.0);
    wrf32d(0x817fdf78u, 0.0);
    wrf32d(0x817fdf7cu, 0.0);
    wrf64(0x817fdf60u, 0.0);
    wrf32d(0x817fdf68u, 0.0);
    wrf32d(0x817fdf6cu, 0.0);
    wr32(0x817fdf40u, 0u);
    wr32(0x817fdf44u, 0u);
    wr32(0x817fdf48u, 0u);
    wr32(0x817fdf4cu, 0u);
    wr32(0x817fdf50u, 0u);
    wr32(0x817fdf54u, 0u);
    wr32(0x817fdf58u, 0u);
    wr32(0x817fdf5cu, 0u);
    r6 = rd32(param_7 + 4u);
    r7 = rd32(param_7);
    r0 = rd32(param_7 + 8u);
    f30 = (f64)(f32)(param_1 * param_1);
    wr32(0x817fdf2cu, r6);
    f22 = (f64)rdf32(0x80575028u);
    f29 = (f64)(f32)(param_4 - param_3);
    wr32(0x817fdf28u, r7);
    r29 = param_5;
    f23 = (f64)rdf32(0x80575040u);
    wr32(0x817fdf30u, r0);
    f24 = (f64)rdf32(0x8057503cu);
    wrf32d(0x817fdf2cu, f22);
    r28 = 0u;
    f25 = (f64)rdf32(0x80575038u);
    f26 = (f64)rdf32(0x8057502cu);
    do {
        r27 = rd32(r29);
        while (r27 != 0u) {
            r3 = r27;
            r27 = rd32(r27);
            r26 = rd32(r3 + 8u);
            if ((u32)((s32)((rd32(r26 + 0xacu) << 1u) & 0xc0000000u) >> 31) != 0u) {
                r25 = 0u;
                r24 = 0u;
                a.r[0] = r26;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = r7;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                r3 = tc_call(rd32(rd32(r26) + 0x28u), &a);
                f1 = tc_lastf();
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                r4 = rd32(r3);
                r0 = rd32(r3 + 4u);
                wr32(0x817fdf1cu, r4);
                wr32(0x817fdf20u, r0);
                wr32(0x817fdf24u, rd32(r3 + 8u));
                wrf32d(0x817fdf20u, f22);
                r3 = rd32(r26 + 0x80u);
                if ((r3 != 0u || rd32(r26 + 0x84u) != 0u) && r3 != 2u) {
                    if (r3 == 7u) {
                        r25 = 1u;
                        r24 = 1u;
                    }
                } else {
                    a.r[0] = 0x817fdf28u;
                    a.r[1] = 0x817fdf1cu;
                    f1 = tc_callf(0x802344c0u, &a);
                    r4 = tc_lastr4();
                    r5 = 0u;
                    r6 = 0u;
                    r7 = 0u;
                    f2 = 0.0;
                    f3 = 0.0;
                    f4 = 0.0;
                    if (f1 < f30) {
                        r25 = 1u;
                    }
                }
                if (r25 != 0u) {
                    r6 = rd32(0x817fdf20u);
                    r0 = rd32(0x817fdf24u);
                    wr32(0x817fdf10u, rd32(0x817fdf1cu));
                    wr32(0x817fdf14u, r6);
                    wr32(0x817fdf18u, r0);
                    a.r[0] = 0x817fdf10u;
                    a.r[1] = param_7;
                    a.r[2] = 0x817fdf10u;
                    (void)tc_call(0x802343a4u, &a);
                    wrf32d(0x817fdf00u, f22);
                    wrf32d(0x817fdefcu, f22);
                    wrf32d(0x817fdef8u, f22);
                    a.r[0] = param_6;
                    a.r[1] = 0x817fdef8u;
                    (void)tc_call(0x802343e4u, &a);
                    a.f[0] = (f64)rdf32(0x817fdef8u);
                    a.f[1] = (f64)rdf32(0x817fdf00u);
                    f1 = tc_callf(0x80262c68u, &a);
                    if (!(f25 < (f64)(f32)f1)) {
                        a.f[0] = (f64)rdf32(0x817fdef8u);
                        a.f[1] = (f64)rdf32(0x817fdf00u);
                        f1 = tc_callf(0x80262c68u, &a);
                        f0 = (f64)(f32)f1;
                        if (!((f23 > f0) || (f23 == f0))) {
                            a.f[0] = (f64)rdf32(0x817fdef8u);
                            a.f[1] = (f64)rdf32(0x817fdf00u);
                            f1 = tc_callf(0x80262c68u, &a);
                            f31 = (f64)(f32)f1;
                        } else {
                            a.f[0] = (f64)rdf32(0x817fdef8u);
                            a.f[1] = (f64)rdf32(0x817fdf00u);
                            f1 = tc_callf(0x80262c68u, &a);
                            f31 = (f64)(f32)(f24 + (f64)(f32)f1);
                        }
                    } else {
                        a.f[0] = (f64)rdf32(0x817fdef8u);
                        a.f[1] = (f64)rdf32(0x817fdf00u);
                        f1 = tc_callf(0x80262c68u, &a);
                        f31 = (f64)(f32)((f64)(f32)f1 - f24);
                    }
                    wrf32d(0x817fdf0cu, f22);
                    wrf32d(0x817fdf08u, f22);
                    wrf32d(0x817fdf04u, f22);
                    a.r[0] = 0x817fdf10u;
                    a.r[1] = 0x817fdf04u;
                    (void)tc_call(0x802343e4u, &a);
                    a.f[0] = (f64)rdf32(0x817fdf04u);
                    a.f[1] = (f64)rdf32(0x817fdf0cu);
                    f1 = tc_callf(0x80262c68u, &a);
                    if (!(f25 < (f64)(f32)f1)) {
                        a.f[0] = (f64)rdf32(0x817fdf04u);
                        a.f[1] = (f64)rdf32(0x817fdf0cu);
                        f1 = tc_callf(0x80262c68u, &a);
                        f0 = (f64)(f32)f1;
                        if (!((f23 > f0) || (f23 == f0))) {
                            a.f[0] = (f64)rdf32(0x817fdf04u);
                            a.f[1] = (f64)rdf32(0x817fdf0cu);
                            f1 = tc_callf(0x80262c68u, &a);
                            r4 = tc_lastr4();
                            r5 = 0u;
                            r6 = 0u;
                            r7 = 0u;
                            f2 = 0.0;
                            f3 = 0.0;
                            f4 = 0.0;
                            f1 = (f64)(f32)f1;
                        } else {
                            a.f[0] = (f64)rdf32(0x817fdf04u);
                            a.f[1] = (f64)rdf32(0x817fdf0cu);
                            f1 = tc_callf(0x80262c68u, &a);
                            r4 = tc_lastr4();
                            r5 = 0u;
                            r6 = 0u;
                            r7 = 0u;
                            f2 = 0.0;
                            f3 = 0.0;
                            f4 = 0.0;
                            f1 = (f64)(f32)(f24 + (f64)(f32)f1);
                        }
                    } else {
                        a.f[0] = (f64)rdf32(0x817fdf04u);
                        a.f[1] = (f64)rdf32(0x817fdf0cu);
                        f1 = tc_callf(0x80262c68u, &a);
                        r4 = tc_lastr4();
                        r5 = 0u;
                        r6 = 0u;
                        r7 = 0u;
                        f2 = 0.0;
                        f3 = 0.0;
                        f4 = 0.0;
                        f1 = (f64)(f32)((f64)(f32)f1 - f24);
                    }
                    if (!(f25 < f31)) {
                        if (!((f23 > f31) || (f23 == f31))) {
                            f0 = f31;
                        } else {
                            f0 = (f64)(f32)(f24 + f31);
                        }
                    } else {
                        f0 = (f64)(f32)(f31 - f24);
                    }
                    f0 = (f64)(f32)(f0 - f1);
                    if (!(f0 > f25)) {
                        if (f0 < f23) {
                            f0 = (f64)(f32)(f0 + f24);
                        }
                    } else {
                        f0 = (f64)(f32)(f0 - f24);
                    }
                    if (!(f25 < f0)) {
                        if (!(f25 < f31)) {
                            if (!((f23 > f31) || (f23 == f31))) {
                                f0 = f31;
                            } else {
                                f0 = (f64)(f32)(f24 + f31);
                            }
                        } else {
                            f0 = (f64)(f32)(f31 - f24);
                        }
                        f0 = (f64)(f32)(f0 - f1);
                        if (!(f0 > f25)) {
                            if (f0 < f23) {
                                f0 = (f64)(f32)(f0 + f24);
                            }
                        } else {
                            f0 = (f64)(f32)(f0 - f24);
                        }
                        if (!((f23 > f0) || (f23 == f0))) {
                            if (!(f25 < f31)) {
                                if ((f23 > f31) || (f23 == f31)) {
                                    f31 = (f64)(f32)(f24 + f31);
                                }
                            } else {
                                f31 = (f64)(f32)(f31 - f24);
                            }
                            f0 = (f64)(f32)(f31 - f1);
                            if (!(f0 > f25)) {
                                if (f0 < f23) {
                                    f0 = (f64)(f32)(f0 + f24);
                                }
                            } else {
                                f0 = (f64)(f32)(f0 - f24);
                            }
                        } else {
                            if (!(f25 < f31)) {
                                if ((f23 > f31) || (f23 == f31)) {
                                    f31 = (f64)(f32)(f24 + f31);
                                }
                            } else {
                                f31 = (f64)(f32)(f31 - f24);
                            }
                            f0 = (f64)(f32)(f31 - f1);
                            if (!(f0 > f25)) {
                                if (f0 < f23) {
                                    f0 = (f64)(f32)(f0 + f24);
                                }
                            } else {
                                f0 = (f64)(f32)(f0 - f24);
                            }
                            f0 = (f64)(f32)(f24 + f0);
                        }
                    } else {
                        if (!(f25 < f31)) {
                            if ((f23 > f31) || (f23 == f31)) {
                                f31 = (f64)(f32)(f24 + f31);
                            }
                        } else {
                            f31 = (f64)(f32)(f31 - f24);
                        }
                        f0 = (f64)(f32)(f31 - f1);
                        if (!(f0 > f25)) {
                            if (f0 < f23) {
                                f0 = (f64)(f32)(f0 + f24);
                            }
                        } else {
                            f0 = (f64)(f32)(f0 - f24);
                        }
                        f0 = (f64)(f32)(f0 - f24);
                    }
                    f0 = ppc_fabs(f0);
                    f0 = (f64)(f32)f0;
                    f0 = (f64)(f32)(f26 * f0);
                    if ((f0 < param_2) || (f0 == param_2) || r24 != 0u) {
                        f1 = tc_callf(0x80040a00u, &a);
                        f1 = (f64)(f32)(param_3 + (f64)(f32)(f29 * f1));
                        a.f[0] = f1;
                        a.r[0] = r26;
                        a.r[1] = param_7;
                        f1 = tc_callf(0x8017fbd8u, &a);
                        r4 = tc_lastr4();
                        r5 = 0u;
                        r6 = 0u;
                        r7 = 0u;
                        f2 = 0.0;
                        f3 = 0.0;
                        f4 = 0.0;
                    }
                }
            }
        }
        r28 = r28 + 1u;
        r29 = r29 + 0x1cu;
    } while (r28 < 4u);
    return;
}
