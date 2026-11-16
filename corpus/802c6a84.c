#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_802c6a84(u32 param_1, s32 param_2)
{
    u32 ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r12 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    if (rd32(param_1 + 0x14u) != 2u) {
        if (rd32(param_1) == 1u && rd32(param_1 + 0x14u) == 5u && rd32(rd32(param_1 + ((rd32(param_1 + 0x18u) << 2u) & 0xfffffffcu) + 0x418u) + 0x14u) != 1u) {
            r3 = tc_call(0x802c0f94u, &a);
            if (rd32(r3 + 0x10u) != 0u) {
                wr32(param_1 + 0x1cu, rd32(param_1 + 0x61cu));
            }
        }
    } else {
        r3 = tc_call(0x802c0f94u, &a);
        r29 = r3;
        f2 = (f64)rdf32(0x8034899cu);
        f1 = (f64)(f32)((f64)(f32)((f64)rdf32(0x803489c4u) * (f64)rdf32(r3 + 8u)) * f2);
        f3 = (f64)(f32)((f64)(f32)((f64)rdf32(0x803489c8u) * (f64)rdf32(r3 + 0xcu)) * f2);
        if ((u32)rd8(param_1 + 0x8fu) != 0u) {
            r3 = rd32(param_1 + 4u);
            f1 = (f64)(f32)(f1 * (f64)rdf32(r3 + 0x34u));
            f3 = (f64)(f32)(f3 * (f64)rdf32(r3 + 0x38u));
        }
        r3 = rd32(param_1 + 0x250u);
        a.r[0] = r3;
        a.r[1] = (u32)param_2;
        a.r[2] = rd32(r29 + 0x10u);
        a.r[3] = rd32(r29 + 0x14u);
        a.r[4] = rd32(r29 + 0x18u);
        a.r[5] = r29;
        a.f[0] = f1;
        a.f[1] = -f3;
        a.f[2] = f3;
        f1 = tc_callf(rd32(rd32(r3) + 0x30u), &a);
        r3 = rd32(r29 + 0x10u);
        if ((r3 & 0x8000u) == 0u || rd32(param_1 + 0x14u) != 2u) {
            if (rd32(param_1) == 1u && rd32(param_1 + 0x14u) == 2u) {
                if ((r3 & 0x1000u) == 0u) {
                    if ((r3 & 0x10u) != 0u) {
                        r3 = rd32(param_1 + 0x84u);
                        if ((s32)r3 >= 10) {
                            r3 = 0u;
                            r12 = rd32(rd32(param_1 + 4u) + 0x14u);
                            if (r12 != 0u) {
                                a.r[0] = 5u;
                                a.r[1] = 0xdu;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                r3 = tc_call(r12, &a);
                            }
                            if (r3 == 0u) {
                                a.r[0] = 0xdu;
                                (void)tc_call(0x802c1e5cu, &a);
                            }
                        } else {
                            r3 = r3 + 0x15u;
                            r5 = 0x803486e8u;
                            r4 = 0u;
                            ctr = 0x25u;
                            for (;;) {
                                if (r3 == rd32(r5) && rd32(r5 + 4u) == 9u) {
                                    fl_ = 3u;
                                    break;
                                }
                                r4 = r4 + 1u;
                                if (r3 == rd32(r5 + 8u) && rd32(r5 + 0xcu) == 9u) {
                                    fl_ = 1u;
                                    break;
                                }
                                r5 = r5 + 0x10u;
                                r4 = r4 + 1u;
                                ctr = ctr - 1u;
                                if (ctr == 0u) {
                                    fl_ = 2u;
                                    break;
                                }
                            }
                            do {
                                if (fl_ == 3u) {
                                    fl_ = 0u;
                                    fl_ = 4u;
                                    break;
                                }
                                if (fl_ == 2u) {
                                    fl_ = 0u;
                                } else if (fl_ == 1u) {
                                    fl_ = 0u;
                                    break;
                                }
                                r4 = 0xffffffffu;
                                fl_ = 5u;
                                break;
                            } while (0);
                            if (fl_ == 5u) {
                                fl_ = 0u;
                            } else if (fl_ == 4u) {
                                fl_ = 0u;
                            }
                            r6 = 0x803486e8u;
                            r5 = 0u;
                            wr32(rd32(param_1 + ((r4 << 2u) & 0xfffffffcu) + 0x2f0u) + 0x14u, 0u);
                            r3 = rd32(param_1 + 0x84u) + 0x15u;
                            ctr = 0x25u;
                            for (;;) {
                                if (r3 == rd32(r6) && rd32(r6 + 4u) == 0xau) {
                                    fl_ = 8u;
                                    break;
                                }
                                r5 = r5 + 1u;
                                if (r3 == rd32(r6 + 8u) && rd32(r6 + 0xcu) == 0xau) {
                                    fl_ = 6u;
                                    break;
                                }
                                r6 = r6 + 0x10u;
                                r5 = r5 + 1u;
                                ctr = ctr - 1u;
                                if (ctr == 0u) {
                                    fl_ = 7u;
                                    break;
                                }
                            }
                            do {
                                if (fl_ == 8u) {
                                    fl_ = 0u;
                                    fl_ = 9u;
                                    break;
                                }
                                if (fl_ == 7u) {
                                    fl_ = 0u;
                                } else if (fl_ == 6u) {
                                    fl_ = 0u;
                                    break;
                                }
                                r5 = 0xffffffffu;
                                fl_ = 10u;
                                break;
                            } while (0);
                            if (fl_ == 10u) {
                                fl_ = 0u;
                            } else if (fl_ == 9u) {
                                fl_ = 0u;
                            }
                            r29 = rd32(param_1 + ((r5 << 2u) & 0xfffffffcu) + 0x2f0u);
                            a.r[0] = r29;
                            (void)tc_call(0x802bed24u, &a);
                            wr32(r29 + 0x14u, 1u);
                            r5 = 0x803486e8u;
                            r4 = 0u;
                            wr32(param_1 + 0x84u, rd32(param_1 + 0x84u) + 1u);
                            ctr = 0x25u;
                            for (;;) {
                                if (rd32(r5) == 0xcu && rd32(r5 + 4u) == 5u) {
                                    fl_ = 13u;
                                    break;
                                }
                                r4 = r4 + 1u;
                                if (rd32(r5 + 8u) == 0xcu && rd32(r5 + 0xcu) == 5u) {
                                    fl_ = 11u;
                                    break;
                                }
                                r5 = r5 + 0x10u;
                                r4 = r4 + 1u;
                                ctr = ctr - 1u;
                                if (ctr == 0u) {
                                    fl_ = 12u;
                                    break;
                                }
                            }
                            do {
                                if (fl_ == 13u) {
                                    fl_ = 0u;
                                    fl_ = 14u;
                                    break;
                                }
                                if (fl_ == 12u) {
                                    fl_ = 0u;
                                } else if (fl_ == 11u) {
                                    fl_ = 0u;
                                    break;
                                }
                                r4 = 0xffffffffu;
                                fl_ = 15u;
                                break;
                            } while (0);
                            if (fl_ == 15u) {
                                fl_ = 0u;
                            } else if (fl_ == 14u) {
                                fl_ = 0u;
                            }
                            r29 = rd32(param_1 + ((r4 << 2u) & 0xfffffffcu) + 0x2f0u);
                            a.r[0] = r29;
                            f1 = tc_callf(0x802bed24u, &a);
                            wr32(r29 + 0x14u, 1u);
                            if (rd32(param_1 + 0x84u) != 0xau) {
                                r3 = 0u;
                                r12 = rd32(rd32(param_1 + 4u) + 0x14u);
                                if (r12 != 0u) {
                                    a.r[0] = 5u;
                                    a.r[1] = 9u;
                                    a.r[2] = 0u;
                                    a.r[3] = 0u;
                                    a.r[4] = 0u;
                                    a.r[5] = 0u;
                                    a.f[0] = f1;
                                    a.f[1] = 0.0;
                                    a.f[2] = 0.0;
                                    r3 = tc_call(r12, &a);
                                }
                                if (r3 == 0u) {
                                    a.r[0] = 9u;
                                    (void)tc_call(0x802c1e5cu, &a);
                                }
                                f30 = rdf64(0x80348990u);
                                r29 = param_1;
                                f31 = (f64)rdf32(0x80348988u);
                                r31 = 0u;
                                do {
                                    a.f[0] = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(param_1 + 0x84u) ^ 0x80000000u) | 0x4330000000000000ull) - f30), f31);
                                    a.r[0] = rd32(r29 + 0x2acu);
                                    (void)tc_call(0x802c0c38u, &a);
                                    a.r[0] = rd32(r29 + 0x2acu);
                                    a.r[1] = 1u;
                                    (void)tc_call(0x802c0c40u, &a);
                                    r31 = r31 + 1u;
                                    r29 = r29 + 4u;
                                } while ((s32)r31 < 4);
                            } else {
                                r3 = 0u;
                                r12 = rd32(rd32(param_1 + 4u) + 0x14u);
                                if (r12 != 0u) {
                                    a.r[0] = 5u;
                                    a.r[1] = 0xbu;
                                    a.r[2] = 0u;
                                    a.r[3] = 0u;
                                    a.r[4] = 0u;
                                    a.r[5] = 0u;
                                    a.f[0] = f1;
                                    a.f[1] = 0.0;
                                    a.f[2] = 0.0;
                                    r3 = tc_call(r12, &a);
                                }
                                if (r3 == 0u) {
                                    a.r[0] = 0xbu;
                                    (void)tc_call(0x802c1e5cu, &a);
                                }
                                f31 = rdf64(0x80348990u);
                                r29 = param_1;
                                f30 = (f64)rdf32(0x80348988u);
                                r31 = 0u;
                                do {
                                    a.f[0] = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(param_1 + 0x84u) ^ 0x80000000u) | 0x4330000000000000ull) - f31), f30);
                                    a.r[0] = rd32(r29 + 0x2acu);
                                    (void)tc_call(0x802c0c38u, &a);
                                    a.r[0] = rd32(r29 + 0x2acu);
                                    a.r[1] = 1u;
                                    (void)tc_call(0x802c0c40u, &a);
                                    r31 = r31 + 1u;
                                    r29 = r29 + 4u;
                                } while ((s32)r31 < 4);
                            }
                        }
                    }
                } else {
                    r3 = rd32(param_1 + 0x84u);
                    if ((s32)r3 <= 0) {
                        r3 = 0u;
                        r12 = rd32(rd32(param_1 + 4u) + 0x14u);
                        if (r12 != 0u) {
                            a.r[0] = 5u;
                            a.r[1] = 0xdu;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            r3 = tc_call(r12, &a);
                        }
                        if (r3 == 0u) {
                            a.r[0] = 0xdu;
                            (void)tc_call(0x802c1e5cu, &a);
                        }
                    } else {
                        r3 = r3 - 1u;
                        wr32(param_1 + 0x84u, r3);
                        r3 = r3 + 0x15u;
                        r5 = 0x803486e8u;
                        r4 = 0u;
                        ctr = 0x25u;
                        for (;;) {
                            if (r3 == rd32(r5) && rd32(r5 + 4u) == 0xau) {
                                fl_ = 18u;
                                break;
                            }
                            r4 = r4 + 1u;
                            if (r3 == rd32(r5 + 8u) && rd32(r5 + 0xcu) == 0xau) {
                                fl_ = 17u;
                                break;
                            }
                            r5 = r5 + 0x10u;
                            r4 = r4 + 1u;
                            ctr = ctr - 1u;
                            if (ctr == 0u) {
                                r4 = 0xffffffffu;
                                fl_ = 16u;
                                break;
                            }
                        }
                        if (fl_ == 18u) {
                            fl_ = 0u;
                        } else if (fl_ == 17u) {
                            fl_ = 0u;
                        } else if (fl_ == 16u) {
                            fl_ = 0u;
                        }
                        r6 = 0x803486e8u;
                        r5 = 0u;
                        wr32(rd32(param_1 + ((r4 << 2u) & 0xfffffffcu) + 0x2f0u) + 0x14u, 0u);
                        r3 = rd32(param_1 + 0x84u) + 0x15u;
                        ctr = 0x25u;
                        for (;;) {
                            if (r3 == rd32(r6) && rd32(r6 + 4u) == 9u) {
                                fl_ = 21u;
                                break;
                            }
                            r5 = r5 + 1u;
                            if (r3 == rd32(r6 + 8u) && rd32(r6 + 0xcu) == 9u) {
                                fl_ = 19u;
                                break;
                            }
                            r6 = r6 + 0x10u;
                            r5 = r5 + 1u;
                            ctr = ctr - 1u;
                            if (ctr == 0u) {
                                fl_ = 20u;
                                break;
                            }
                        }
                        do {
                            if (fl_ == 21u) {
                                fl_ = 0u;
                                fl_ = 22u;
                                break;
                            }
                            if (fl_ == 20u) {
                                fl_ = 0u;
                            } else if (fl_ == 19u) {
                                fl_ = 0u;
                                break;
                            }
                            r5 = 0xffffffffu;
                            fl_ = 23u;
                            break;
                        } while (0);
                        if (fl_ == 23u) {
                            fl_ = 0u;
                        } else if (fl_ == 22u) {
                            fl_ = 0u;
                        }
                        r29 = rd32(param_1 + ((r5 << 2u) & 0xfffffffcu) + 0x2f0u);
                        a.r[0] = r29;
                        (void)tc_call(0x802bed24u, &a);
                        wr32(r29 + 0x14u, 1u);
                        r4 = 0x803486e8u;
                        r3 = 0u;
                        ctr = 0x25u;
                        for (;;) {
                            if (rd32(r4) == 0xbu && rd32(r4 + 4u) == 5u) {
                                fl_ = 26u;
                                break;
                            }
                            r3 = r3 + 1u;
                            if (rd32(r4 + 8u) == 0xbu && rd32(r4 + 0xcu) == 5u) {
                                fl_ = 24u;
                                break;
                            }
                            r4 = r4 + 0x10u;
                            r3 = r3 + 1u;
                            ctr = ctr - 1u;
                            if (ctr == 0u) {
                                fl_ = 25u;
                                break;
                            }
                        }
                        do {
                            if (fl_ == 26u) {
                                fl_ = 0u;
                                fl_ = 27u;
                                break;
                            }
                            if (fl_ == 25u) {
                                fl_ = 0u;
                            } else if (fl_ == 24u) {
                                fl_ = 0u;
                                break;
                            }
                            r3 = 0xffffffffu;
                            fl_ = 28u;
                            break;
                        } while (0);
                        if (fl_ == 28u) {
                            fl_ = 0u;
                        } else if (fl_ == 27u) {
                            fl_ = 0u;
                        }
                        r3 = param_1 + ((r3 << 2u) & 0xfffffffcu);
                        r29 = rd32(r3 + 0x2f0u);
                        a.r[0] = r29;
                        f1 = tc_callf(0x802bed24u, &a);
                        wr32(r29 + 0x14u, 1u);
                        if (rd32(param_1 + 0x84u) != 0u) {
                            r3 = 0u;
                            r12 = rd32(rd32(param_1 + 4u) + 0x14u);
                            if (r12 != 0u) {
                                a.r[0] = 5u;
                                a.r[1] = 0xau;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                r3 = tc_call(r12, &a);
                            }
                            if (r3 == 0u) {
                                a.r[0] = 0xau;
                                (void)tc_call(0x802c1e5cu, &a);
                            }
                            f31 = rdf64(0x80348990u);
                            r29 = param_1;
                            f30 = (f64)rdf32(0x80348988u);
                            r31 = 0u;
                            do {
                                a.f[0] = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(param_1 + 0x84u) ^ 0x80000000u) | 0x4330000000000000ull) - f31), f30);
                                a.r[0] = rd32(r29 + 0x2acu);
                                (void)tc_call(0x802c0c38u, &a);
                                a.r[0] = rd32(r29 + 0x2acu);
                                a.r[1] = 1u;
                                (void)tc_call(0x802c0c40u, &a);
                                r31 = r31 + 1u;
                                r29 = r29 + 4u;
                            } while ((s32)r31 < 4);
                        } else {
                            r3 = 0u;
                            r12 = rd32(rd32(param_1 + 4u) + 0x14u);
                            if (r12 != 0u) {
                                a.r[0] = 5u;
                                a.r[1] = 0xcu;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                r3 = tc_call(r12, &a);
                            }
                            if (r3 == 0u) {
                                a.r[0] = 0xcu;
                                (void)tc_call(0x802c1e5cu, &a);
                            }
                            f31 = rdf64(0x80348990u);
                            r29 = param_1;
                            f30 = (f64)rdf32(0x80348988u);
                            r31 = 0u;
                            do {
                                a.f[0] = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(param_1 + 0x84u) ^ 0x80000000u) | 0x4330000000000000ull) - f31), f30);
                                a.r[0] = rd32(r29 + 0x2acu);
                                (void)tc_call(0x802c0c38u, &a);
                                a.r[0] = rd32(r29 + 0x2acu);
                                a.r[1] = 1u;
                                (void)tc_call(0x802c0c40u, &a);
                                r31 = r31 + 1u;
                                r29 = r29 + 4u;
                            } while ((s32)r31 < 4);
                        }
                    }
                }
            }
        } else {
            r0 = rd32(param_1);
            if (r0 != 1u) {
                if (r0 == 0u) {
                    r3 = rd32(param_1 + 0x424u);
                    if (rd32(r3 + 0x14u) == 1u) {
                        wr32(r3 + 0x14u, 0u);
                    }
                    r3 = rd32(param_1 + 0x448u);
                    if (rd32(r3 + 0x14u) == 1u) {
                        wr32(r3 + 0x14u, 0u);
                    }
                    wr32(param_1 + 0xb8u, 0u);
                    wr32(param_1 + 0x18u, 4u);
                    r29 = rd32(param_1 + 0x428u);
                    a.r[0] = r29;
                    f1 = tc_callf(0x802bed24u, &a);
                    wr32(r29 + 0x14u, 1u);
                    r3 = 0u;
                    wr32(param_1 + 0x14u, 0xeu);
                    r12 = rd32(rd32(param_1 + 4u) + 0x14u);
                    if (r12 != 0u) {
                        a.r[0] = 5u;
                        a.r[1] = 1u;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        r3 = tc_call(r12, &a);
                    }
                    if (r3 == 0u) {
                        a.r[0] = 1u;
                        (void)tc_call(0x802c1e5cu, &a);
                    }
                }
            } else {
                r3 = rd32(param_1 + 0x250u);
                a.r[0] = r3;
                a.r[1] = (u32)param_2;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = (f64)rdf32(0x80348960u);
                a.f[1] = (f64)rdf32(0x803489ccu);
                a.f[2] = 0.0;
                (void)tc_call(rd32(rd32(r3) + 0x30u), &a);
                r29 = rd32(param_1 + 0x428u);
                a.r[0] = r29;
                (void)tc_call(0x802bed24u, &a);
                wr32(r29 + 0x14u, 1u);
                wr32(param_1 + 0x18u, 2u);
                r29 = rd32(param_1 + 0x420u);
                a.r[0] = r29;
                (void)tc_call(0x802bed24u, &a);
                wr32(r29 + 0x14u, 1u);
                r29 = rd32(param_1 + 0x444u);
                a.r[0] = r29;
                f1 = tc_callf(0x802bed24u, &a);
                wr32(r29 + 0x14u, 1u);
                wr32(param_1 + 0x14u, 0xau);
                r3 = 0u;
                r4 = rd32(param_1 + 4u);
                wr32(param_1, 0u);
                r12 = rd32(r4 + 0x14u);
                if (r12 != 0u) {
                    a.r[0] = 5u;
                    a.r[1] = 8u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    r3 = tc_call(r12, &a);
                }
                if (r3 == 0u) {
                    a.r[0] = 8u;
                    (void)tc_call(0x802c1e5cu, &a);
                }
            }
        }
    }
    return;
}
