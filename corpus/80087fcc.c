#include "tc_rt.h"

void fn_80087fcc(u32 param_1, u32 param_2, u32 param_3)
{
    u32 ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r17 = 0, r18 = 0, r19 = 0, r20 = 0, r21 = 0;
    u32 r22 = 0, r23 = 0, r24 = 0, r25 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0;
    f64 f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdee0u, 0x817fe000u);
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
    wr32(0x817fdf58u, 0u);
    wr32(0x817fdf5cu, 0u);
    wr32(0x817fdf60u, 0u);
    wr32(0x817fdf64u, 0u);
    wr32(0x817fdf68u, 0u);
    wr32(0x817fdf6cu, 0u);
    wr32(0x817fdf70u, 0u);
    wr32(0x817fdf74u, 0u);
    wr32(0x817fdf78u, 0u);
    wr32(0x817fdf7cu, 0u);
    wr32(0x817fdf80u, 0u);
    wr32(0x817fdf84u, 0u);
    wr32(0x817fdf88u, 0u);
    wr32(0x817fdf8cu, 0u);
    wr32(0x817fdf90u, 0u);
    wr32(0x817fdf94u, 0u);
    wr32(0x817fdf98u, 0u);
    wr32(0x817fdf9cu, 0u);
    a.r[0] = param_3;
    r3 = tc_call(0x80037914u, &a);
    r0 = rd32(r3 + 8u);
    wr32(0x817fdee8u, r3);
    f31 = (f64)rdf32(0x80572908u);
    wr32(0x817fdf50u, r0);
    f28 = (f64)rdf32(0x8057291cu);
    r24 = 0u;
    f29 = (f64)rdf32(0x80572918u);
    f30 = (f64)rdf32(0x80572910u);
    f27 = (f64)rdf32(0x80572934u);
    while ((s32)r24 < (s32)rd32(0x817fdf50u)) {
        r0 = rd32(param_2);
        do {
            if (r0 != 0x10u) {
                if (r0 != 2u) {
                    if (r0 != 0x19u) {
                        if (r0 != 0xau) {
                            if (r0 == 3u) {
                                a.r[0] = param_1;
                                a.r[1] = r24;
                                r3 = tc_call(0x800de8dcu, &a);
                                if (r3 == 0u) break;
                            }
                        } else {
                            a.r[0] = param_1;
                            a.r[1] = r24;
                            r3 = tc_call(0x800ded34u, &a);
                            if (r3 == 0u) break;
                        }
                    } else if (r24 == 1u) {
                        break;
                    }
                } else {
                    a.r[0] = param_1;
                    a.r[1] = r24;
                    r3 = tc_call(0x80145e58u, &a);
                    if (r3 == 0u) break;
                }
            } else {
                a.r[0] = param_1;
                a.r[1] = r24;
                r3 = tc_call(0x80177238u, &a);
                if (r3 == 0u) break;
            }
            a.r[0] = rd32(0x817fdee8u);
            a.r[1] = r24;
            r3 = tc_call(0x80037988u, &a);
            a.r[0] = r3;
            r3 = tc_call(0x800b6750u, &a);
            r25 = rd32(r3 + 8u);
            r23 = 0u;
            r21 = rd32(r3 + 0xcu);
            r22 = 0u;
            while ((s32)r22 < (s32)r25) {
                r20 = 0u;
                a.r[0] = r21;
                a.r[1] = 0x80337b3du;
                a.r[2] = 1u;
                r3 = tc_call(0x8025bfccu, &a);
                if (r3 != 0u) {
                    a.r[0] = r21;
                    a.r[1] = 0x80337b2du;
                    a.r[2] = 1u;
                    r3 = tc_call(0x8025bfccu, &a);
                    if (r3 != 0u) {
                        a.r[0] = r21;
                        a.r[1] = 0x80337b32u;
                        a.r[2] = 1u;
                        r3 = tc_call(0x8025bfccu, &a);
                        if (r3 != 0u) {
                            a.r[0] = r21;
                            a.r[1] = 0x80337b3fu;
                            a.r[2] = 1u;
                            r3 = tc_call(0x8025bfccu, &a);
                            if (r3 != 0u) {
                                a.r[0] = r21;
                                a.r[1] = 0x80337b41u;
                                a.r[2] = 1u;
                                r3 = tc_call(0x8025bfccu, &a);
                                if (r3 == 0u) {
                                    r20 = 2u;
                                    r23 = 0u;
                                }
                            } else {
                                r20 = 1u;
                                r23 = 0u;
                            }
                        } else {
                            r20 = 4u;
                            r23 = 1u;
                        }
                    } else {
                        r20 = 1u;
                        r23 = 1u;
                    }
                } else {
                    r20 = 2u;
                    r23 = 1u;
                }
                do {
                    if (r20 != 0u) {
                        a.r[0] = 0x817fdeecu;
                        a.r[1] = r21 + 2u;
                        a.r[2] = 2u;
                        (void)tc_call(0x8025bdf4u, &a);
                        r19 = (u32)(s8)rd8(0x817fdeedu) + (((u32)(s8)rd8(0x817fdeecu) - 0x30u) * 0xau) - 0x30u;
                        if (rd32(param_2) != 0u || (u32)rd8(0x80492833u) != 0u || r19 != 0xau) {
                            r18 = 0u;
                            a.r[0] = r21;
                            r3 = tc_call(0x802550d4u, &a);
                            if (r3 >= 6u) {
                                r18 = (u32)(s8)rd8(r21 + 5u) - 0x30u;
                            }
                            if (r23 == 0u) {
                                r17 = 0u;
                                r3 = 0u;
                                ctr = 0x28u;
                                for (;;) {
                                    r4 = param_1 + r3;
                                    if (rd32(r4 + 0x2a74u) == 0u) {
                                        fl_ = 2u;
                                        break;
                                    }
                                    r17 = r17 + 1u;
                                    r3 = r3 + 0x2cu;
                                    ctr = ctr - 1u;
                                    if (ctr == 0u) {
                                        fl_ = 1u;
                                        break;
                                    }
                                }
                                if (fl_ == 2u) {
                                    fl_ = 0u;
                                } else if (fl_ == 1u) {
                                    fl_ = 0u;
                                    break;
                                }
                                if (r20 != 1u) {
                                    if (r20 != 2u) break;
                                    wr32(r4 + 0x2a74u, 2u);
                                    wr32(r4 + 0x2a78u, r19);
                                } else {
                                    wr32(r4 + 0x2a74u, 1u);
                                    wr32(r4 + 0x2a78u, r19);
                                }
                                f0 = (f64)rdf32(r21 + 0x2cu);
                                r0 = 0u;
                                f1 = (f64)rdf32(r21 + 0x34u);
                                r3 = 0u;
                                wrf32d(0x817fdf20u, f0);
                                wrf32d(0x817fdf28u, f1);
                                wrf32d(0x817fdf24u, f31);
                                if (f31 == f0 && f31 == f31) {
                                    r3 = 1u;
                                }
                                if (r3 != 0u && f31 == (f64)rdf32(0x817fdf28u)) {
                                    r0 = 1u;
                                }
                                if (r0 == 0u) {
                                    a.r[0] = 0x817fdf20u;
                                    a.r[1] = 0x817fdf20u;
                                    (void)tc_call(0x802343e4u, &a);
                                }
                                f4 = (f64)rdf32(r21 + 0x1cu);
                                f3 = (f64)rdf32(r21 + 0x18u);
                                f2 = (f64)rdf32(r21 + 0x14u);
                                f6 = (f64)rdf32(r21 + 0x28u);
                                r3 = param_1 + (r17 * 0x2cu);
                                f5 = (f64)rdf32(r21 + 0x20u);
                                f1 = (f64)rdf32(r21 + 0x24u);
                                f0 = (f64)rdf32(r21 + 0x38u);
                                wrf32d(0x817fdf14u, f2);
                                f1 = (f64)(f32)(f1 + f0);
                                wrf32d(r3 + 0x2a7cu, f2);
                                wrf32d(r3 + 0x2a80u, f3);
                                wrf32d(r3 + 0x2a84u, f4);
                                wrf32d(r3 + 0x2a88u, f5);
                                wrf32d(r3 + 0x2a8cu, f1);
                                wrf32d(r3 + 0x2a90u, f6);
                                f0 = (f64)rdf32(0x817fdf20u);
                                wrf32d(0x817fdf18u, f3);
                                wrf32d(r3 + 0x2a94u, f0);
                                f0 = (f64)rdf32(0x817fdf24u);
                                wrf32d(0x817fdf1cu, f4);
                                wrf32d(r3 + 0x2a98u, f0);
                                f0 = (f64)rdf32(0x817fdf28u);
                                wrf32d(0x817fdf08u, f5);
                                wrf32d(0x817fdf0cu, f1);
                                wrf32d(0x817fdf10u, f6);
                                wrf32d(r3 + 0x2a9cu, f0);
                            } else {
                                r17 = 0u;
                                r5 = 0u;
                                r3 = 0u;
                                ctr = 3u;
                                for (;;) {
                                    r4 = param_1 + r3;
                                    r0 = rd32(r4 + 0x2294u);
                                    if (r0 != 0u) {
                                        if (r0 == 1u) {
                                            if (r19 == rd32(r4 + 0x2298u)) {
                                                fl_ = 4u;
                                                break;
                                            }
                                        } else if (r19 == rd32(r4 + 0x2298u) && r18 == rd32(r4 + 0x229cu)) {
                                            r17 = r4 + 0x2294u;
                                            fl_ = 3u;
                                            break;
                                        }
                                    }
                                    r3 = r3 + 0xa8u;
                                    r4 = param_1 + r3;
                                    r0 = rd32(r4 + 0x2294u);
                                    if (r0 != 0u) {
                                        if (r0 == 1u) {
                                            if (r19 == rd32(r4 + 0x2298u)) {
                                                fl_ = 5u;
                                                break;
                                            }
                                        } else if (r19 == rd32(r4 + 0x2298u) && r18 == rd32(r4 + 0x229cu)) {
                                            fl_ = 6u;
                                            break;
                                        }
                                    }
                                    r3 = r3 + 0xa8u;
                                    r4 = param_1 + r3;
                                    r0 = rd32(r4 + 0x2294u);
                                    if (r0 != 0u) {
                                        if (r0 == 1u) {
                                            if (r19 == rd32(r4 + 0x2298u)) {
                                                fl_ = 7u;
                                                break;
                                            }
                                        } else if (r19 == rd32(r4 + 0x2298u) && r18 == rd32(r4 + 0x229cu)) {
                                            fl_ = 8u;
                                            break;
                                        }
                                    }
                                    r3 = r3 + 0xa8u;
                                    r4 = param_1 + r3;
                                    r0 = rd32(r4 + 0x2294u);
                                    if (r0 != 0u) {
                                        if (r0 == 1u) {
                                            if (r19 == rd32(r4 + 0x2298u)) {
                                                fl_ = 9u;
                                                break;
                                            }
                                        } else if (r19 == rd32(r4 + 0x2298u) && r18 == rd32(r4 + 0x229cu)) {
                                            fl_ = 10u;
                                            break;
                                        }
                                    }
                                    r5 = r5 + 3u;
                                    r3 = r3 + 0xa8u;
                                    ctr = ctr - 1u;
                                    if (ctr == 0u) {
                                        fl_ = 3u;
                                        break;
                                    }
                                }
                                do {
                                    if (fl_ != 10u) {
                                        if (fl_ != 9u) {
                                            if (fl_ == 8u) {
                                                fl_ = 0u;
                                                break;
                                            }
                                            if (fl_ != 7u) {
                                                if (fl_ == 6u) {
                                                    fl_ = 0u;
                                                    fl_ = 11u;
                                                    break;
                                                }
                                                if (fl_ != 5u) {
                                                    if (fl_ == 4u) {
                                                        fl_ = 0u;
                                                    } else if (fl_ == 3u) {
                                                        fl_ = 0u;
                                                        fl_ = 12u;
                                                        break;
                                                    }
                                                    r17 = r4 + 0x2294u;
                                                    fl_ = 12u;
                                                    break;
                                                }
                                                fl_ = 0u;
                                                r17 = r4 + 0x2294u;
                                                fl_ = 12u;
                                                break;
                                            }
                                            fl_ = 0u;
                                            r17 = r4 + 0x2294u;
                                            fl_ = 12u;
                                            break;
                                        }
                                        fl_ = 0u;
                                        r17 = r4 + 0x2294u;
                                        fl_ = 12u;
                                        break;
                                    }
                                    fl_ = 0u;
                                    r17 = r4 + 0x2294u;
                                    fl_ = 12u;
                                    break;
                                } while (0);
                                if (fl_ == 12u) {
                                    fl_ = 0u;
                                } else if (fl_ == 11u) {
                                    fl_ = 0u;
                                    r17 = r4 + 0x2294u;
                                } else {
                                    r17 = r4 + 0x2294u;
                                }
                                do {
                                    if (r17 == 0u) {
                                        r5 = 0u;
                                        r3 = 0u;
                                        ctr = 2u;
                                        for (;;) {
                                            r4 = param_1 + r3;
                                            if (rd32(r4 + 0x2294u) == 0u) {
                                                fl_ = 19u;
                                                break;
                                            }
                                            r3 = r3 + 0xa8u;
                                            r4 = param_1 + r3;
                                            if (rd32(r4 + 0x2294u) == 0u) {
                                                fl_ = 18u;
                                                break;
                                            }
                                            r3 = r3 + 0xa8u;
                                            r4 = param_1 + r3;
                                            if (rd32(r4 + 0x2294u) == 0u) {
                                                fl_ = 17u;
                                                break;
                                            }
                                            r3 = r3 + 0xa8u;
                                            r4 = param_1 + r3;
                                            if (rd32(r4 + 0x2294u) == 0u) {
                                                fl_ = 16u;
                                                break;
                                            }
                                            r3 = r3 + 0xa8u;
                                            r4 = param_1 + r3;
                                            if (rd32(r4 + 0x2294u) == 0u) {
                                                fl_ = 15u;
                                                break;
                                            }
                                            r3 = r3 + 0xa8u;
                                            r4 = param_1 + r3;
                                            if (rd32(r4 + 0x2294u) == 0u) {
                                                fl_ = 14u;
                                                break;
                                            }
                                            r5 = r5 + 5u;
                                            r3 = r3 + 0xa8u;
                                            ctr = ctr - 1u;
                                            if (ctr == 0u) {
                                                fl_ = 13u;
                                                break;
                                            }
                                        }
                                        if (fl_ == 19u) {
                                            fl_ = 0u;
                                            r17 = r4 + 0x2294u;
                                        } else if (fl_ == 18u) {
                                            fl_ = 0u;
                                            r17 = r4 + 0x2294u;
                                        } else if (fl_ == 17u) {
                                            fl_ = 0u;
                                            r17 = r4 + 0x2294u;
                                        } else if (fl_ == 16u) {
                                            fl_ = 0u;
                                            r17 = r4 + 0x2294u;
                                        } else if (fl_ == 15u) {
                                            fl_ = 0u;
                                            r17 = r4 + 0x2294u;
                                        } else {
                                            if (fl_ == 14u) {
                                                fl_ = 0u;
                                            } else if (fl_ == 13u) {
                                                fl_ = 0u;
                                                break;
                                            }
                                            r17 = r4 + 0x2294u;
                                        }
                                    }
                                } while (0);
                                wr32(r17, rd32(r17) | r20);
                                wr32(r17 + 4u, r19);
                                if (r20 != 1u) {
                                    wr32(r17 + 8u, r18);
                                }
                                f0 = (f64)rdf32(r21 + 0x2cu);
                                r0 = 0u;
                                f1 = (f64)rdf32(r21 + 0x34u);
                                r3 = 0u;
                                wrf32d(0x817fdf44u, f0);
                                wrf32d(0x817fdf4cu, f1);
                                wrf32d(0x817fdf48u, f31);
                                if (f31 == f0 && f31 == f31) {
                                    r3 = 1u;
                                }
                                if (r3 != 0u && f31 == (f64)rdf32(0x817fdf4cu)) {
                                    r0 = 1u;
                                }
                                if (r0 == 0u) {
                                    a.r[0] = 0x817fdf44u;
                                    a.r[1] = 0x817fdf44u;
                                    (void)tc_call(0x802343e4u, &a);
                                }
                                if (r20 != 4u) {
                                    f2 = (f64)rdf32(r21 + 0x1cu);
                                    f4 = (f64)(f32)((f64)rdf32(r21 + 0x24u) + (f64)rdf32(r21 + 0x38u));
                                    f1 = (f64)rdf32(r21 + 0x18u);
                                    f0 = (f64)rdf32(r21 + 0x14u);
                                    f5 = (f64)rdf32(r21 + 0x28u);
                                    f3 = (f64)rdf32(r21 + 0x20u);
                                    wrf32d(0x817fdf38u, f0);
                                    wrf32d(0x817fdf3cu, f1);
                                    wrf32d(0x817fdf40u, f2);
                                    wrf32d(0x817fdf2cu, f3);
                                    wrf32d(0x817fdf30u, f4);
                                    wrf32d(0x817fdf34u, f5);
                                    if (r20 != 2u) {
                                        if (r20 == 1u) {
                                            r6 = 0u;
                                            r3 = 0u;
                                            ctr = 3u;
                                            for (;;) {
                                                r4 = r17 + r3;
                                                r0 = 0u;
                                                r5 = 0u;
                                                if (f31 == (f64)rdf32(r4 + 0x24u) && f31 == (f64)rdf32(r4 + 0x28u)) {
                                                    r5 = 1u;
                                                }
                                                if (r5 != 0u && f31 == (f64)rdf32(r17 + r3 + 0x2cu)) {
                                                    r0 = 1u;
                                                }
                                                if (r0 != 0u) {
                                                    fl_ = 20u;
                                                    break;
                                                }
                                                r6 = r6 + 1u;
                                                r3 = r3 + 0x24u;
                                                ctr = ctr - 1u;
                                                if (ctr == 0u) {
                                                    fl_ = 21u;
                                                    break;
                                                }
                                            }
                                            do {
                                                if (fl_ == 21u) {
                                                    fl_ = 0u;
                                                } else if (fl_ == 20u) {
                                                    fl_ = 0u;
                                                    break;
                                                }
                                                fl_ = 22u;
                                                break;
                                            } while (0);
                                            if (fl_ == 22u) {
                                                fl_ = 0u;
                                            } else {
                                                f0 = (f64)rdf32(0x817fdf3cu);
                                                f3 = (f64)rdf32(0x817fdf40u);
                                                r3 = r17 + (r6 * 0x24u);
                                                f2 = (f64)rdf32(0x817fdf2cu);
                                                wrf32d(r3 + 0xcu, (f64)rdf32(0x817fdf38u));
                                                f1 = (f64)rdf32(0x817fdf30u);
                                                wrf32d(r3 + 0x10u, f0);
                                                f0 = (f64)rdf32(0x817fdf34u);
                                                wrf32d(r3 + 0x14u, f3);
                                                wrf32d(r3 + 0x18u, f2);
                                                wrf32d(r3 + 0x1cu, f1);
                                                wrf32d(r3 + 0x20u, f0);
                                                wrf32d(r3 + 0x24u, (f64)rdf32(0x817fdf44u));
                                                wrf32d(r3 + 0x28u, (f64)rdf32(0x817fdf48u));
                                                wrf32d(r3 + 0x2cu, (f64)rdf32(0x817fdf4cu));
                                            }
                                        }
                                    } else {
                                        wrf32d(r17 + 0x78u, f0);
                                        wrf32d(r17 + 0x7cu, f1);
                                        wrf32d(r17 + 0x80u, f2);
                                        wrf32d(r17 + 0x84u, f3);
                                        wrf32d(r17 + 0x88u, f4);
                                        wrf32d(r17 + 0x8cu, f5);
                                        wrf32d(r17 + 0x90u, (f64)rdf32(0x817fdf44u));
                                        wrf32d(r17 + 0x94u, (f64)rdf32(0x817fdf48u));
                                        wrf32d(r17 + 0x98u, (f64)rdf32(0x817fdf4cu));
                                    }
                                } else {
                                    wrf32d(r17 + 0xa0u, (f64)(f32)(f27 * (f64)(f32)((f64)rdf32(r21 + 0x14u) + (f64)rdf32(r21 + 0x20u))));
                                    wrf32d(r17 + 0xa4u, (f64)(f32)(f27 * (f64)(f32)((f64)rdf32(r21 + 0x1cu) + (f64)rdf32(r21 + 0x28u))));
                                    wrf32d(0x817fdef8u, f31);
                                    wrf32d(0x817fdef4u, f31);
                                    wrf32d(0x817fdef0u, f31);
                                    a.r[0] = 0x817fdf44u;
                                    a.r[1] = 0x817fdef0u;
                                    (void)tc_call(0x802343e4u, &a);
                                    a.f[0] = (f64)rdf32(0x817fdef0u);
                                    a.f[1] = (f64)rdf32(0x817fdef8u);
                                    f1 = tc_callf(0x80262c68u, &a);
                                    if (!(f30 < (f64)(f32)f1)) {
                                        a.f[0] = (f64)rdf32(0x817fdef0u);
                                        a.f[1] = (f64)rdf32(0x817fdef8u);
                                        f1 = tc_callf(0x80262c68u, &a);
                                        f0 = (f64)(f32)f1;
                                        if (!((f28 > f0) || (f28 == f0))) {
                                            a.f[0] = (f64)rdf32(0x817fdef0u);
                                            a.f[1] = (f64)rdf32(0x817fdef8u);
                                            f1 = tc_callf(0x80262c68u, &a);
                                            f26 = (f64)(f32)f1;
                                        } else {
                                            a.f[0] = (f64)rdf32(0x817fdef0u);
                                            a.f[1] = (f64)rdf32(0x817fdef8u);
                                            f1 = tc_callf(0x80262c68u, &a);
                                            f26 = (f64)(f32)(f29 + (f64)(f32)f1);
                                        }
                                    } else {
                                        a.f[0] = (f64)rdf32(0x817fdef0u);
                                        a.f[1] = (f64)rdf32(0x817fdef8u);
                                        f1 = tc_callf(0x80262c68u, &a);
                                        f26 = (f64)(f32)((f64)(f32)f1 - f29);
                                    }
                                    wrf32d(0x817fdf04u, f31);
                                    wrf32d(0x817fdf00u, f31);
                                    wrf32d(0x817fdefcu, f31);
                                    a.r[0] = 0x804890d4u;
                                    a.r[1] = 0x817fdefcu;
                                    (void)tc_call(0x802343e4u, &a);
                                    a.f[0] = (f64)rdf32(0x817fdefcu);
                                    a.f[1] = (f64)rdf32(0x817fdf04u);
                                    f1 = tc_callf(0x80262c68u, &a);
                                    if (!(f30 < (f64)(f32)f1)) {
                                        a.f[0] = (f64)rdf32(0x817fdefcu);
                                        a.f[1] = (f64)rdf32(0x817fdf04u);
                                        f1 = tc_callf(0x80262c68u, &a);
                                        f0 = (f64)(f32)f1;
                                        if (!((f28 > f0) || (f28 == f0))) {
                                            a.f[0] = (f64)rdf32(0x817fdefcu);
                                            a.f[1] = (f64)rdf32(0x817fdf04u);
                                            f1 = tc_callf(0x80262c68u, &a);
                                            f1 = (f64)(f32)f1;
                                        } else {
                                            a.f[0] = (f64)rdf32(0x817fdefcu);
                                            a.f[1] = (f64)rdf32(0x817fdf04u);
                                            f1 = tc_callf(0x80262c68u, &a);
                                            f1 = (f64)(f32)(f29 + (f64)(f32)f1);
                                        }
                                    } else {
                                        a.f[0] = (f64)rdf32(0x817fdefcu);
                                        a.f[1] = (f64)rdf32(0x817fdf04u);
                                        f1 = tc_callf(0x80262c68u, &a);
                                        f1 = (f64)(f32)((f64)(f32)f1 - f29);
                                    }
                                    if (!(f30 < f26)) {
                                        if (!((f28 > f26) || (f28 == f26))) {
                                            f0 = f26;
                                        } else {
                                            f0 = (f64)(f32)(f29 + f26);
                                        }
                                    } else {
                                        f0 = (f64)(f32)(f26 - f29);
                                    }
                                    f0 = (f64)(f32)(f0 - f1);
                                    if (!(f0 > f30)) {
                                        if (f0 < f28) {
                                            f0 = (f64)(f32)(f0 + f29);
                                        }
                                    } else {
                                        f0 = (f64)(f32)(f0 - f29);
                                    }
                                    if (!(f30 < f0)) {
                                        if (!(f30 < f26)) {
                                            if (!((f28 > f26) || (f28 == f26))) {
                                                f0 = f26;
                                            } else {
                                                f0 = (f64)(f32)(f29 + f26);
                                            }
                                        } else {
                                            f0 = (f64)(f32)(f26 - f29);
                                        }
                                        f0 = (f64)(f32)(f0 - f1);
                                        if (!(f0 > f30)) {
                                            if (f0 < f28) {
                                                f0 = (f64)(f32)(f0 + f29);
                                            }
                                        } else {
                                            f0 = (f64)(f32)(f0 - f29);
                                        }
                                        if (!((f28 > f0) || (f28 == f0))) {
                                            if (!(f30 < f26)) {
                                                if ((f28 > f26) || (f28 == f26)) {
                                                    f26 = (f64)(f32)(f29 + f26);
                                                }
                                            } else {
                                                f26 = (f64)(f32)(f26 - f29);
                                            }
                                            f0 = (f64)(f32)(f26 - f1);
                                            if (!(f0 > f30)) {
                                                if (f0 < f28) {
                                                    f0 = (f64)(f32)(f0 + f29);
                                                }
                                            } else {
                                                f0 = (f64)(f32)(f0 - f29);
                                            }
                                        } else {
                                            if (!(f30 < f26)) {
                                                if ((f28 > f26) || (f28 == f26)) {
                                                    f26 = (f64)(f32)(f29 + f26);
                                                }
                                            } else {
                                                f26 = (f64)(f32)(f26 - f29);
                                            }
                                            f0 = (f64)(f32)(f26 - f1);
                                            if (!(f0 > f30)) {
                                                if (f0 < f28) {
                                                    f0 = (f64)(f32)(f0 + f29);
                                                }
                                            } else {
                                                f0 = (f64)(f32)(f0 - f29);
                                            }
                                            f0 = (f64)(f32)(f29 + f0);
                                        }
                                    } else {
                                        if (!(f30 < f26)) {
                                            if ((f28 > f26) || (f28 == f26)) {
                                                f26 = (f64)(f32)(f29 + f26);
                                            }
                                        } else {
                                            f26 = (f64)(f32)(f26 - f29);
                                        }
                                        f0 = (f64)(f32)(f26 - f1);
                                        if (!(f0 > f30)) {
                                            if (f0 < f28) {
                                                f0 = (f64)(f32)(f0 + f29);
                                            }
                                        } else {
                                            f0 = (f64)(f32)(f0 - f29);
                                        }
                                        f0 = (f64)(f32)(f0 - f29);
                                    }
                                    wrf32d(r17 + 0x9cu, f0);
                                }
                            }
                        }
                    }
                } while (0);
                r22 = r22 + 1u;
                r21 = r21 + 0x48u;
            }
        } while (0);
        r24 = r24 + 1u;
    }
    return;
}
