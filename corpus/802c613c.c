#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_802c613c(u32 param_r3, u32 param_r4)
{
    u32 ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r12 = 0, r16 = 0, r17 = 0, r18 = 0, r19 = 0;
    u32 r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf00u, 0x817fe000u);
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
    wr32(0x817fdfa0u, 0u);
    wr32(0x817fdfa4u, 0u);
    wr32(0x817fdfa8u, 0u);
    wr32(0x817fdfacu, 0u);
    r0 = rd32(param_r3 + 0x45cu);
    if (r0 != 1u) {
        if (r0 == 2u) {
            wr32(param_r3 + 0x454u, rd32(param_r3 + 0x454u) - 1u);
        }
    } else {
        wr32(param_r3 + 0x454u, rd32(param_r3 + 0x454u) + 1u);
    }
    r0 = rd32(param_r3 + 0x454u);
    if ((s32)r0 >= 0) {
        r5 = rd32(param_r3 + 0x458u);
        if ((s32)r0 > (s32)r5) {
            wr32(param_r3 + 0x454u, r5);
        }
    } else {
        wr32(param_r3 + 0x454u, 0u);
    }
    f31 = (f64)rdf32(0x803489b8u);
    r27 = param_r4;
    f27 = (f64)rdf32(0x8034899cu);
    r26 = param_r3;
    f29 = (f64)rdf32(0x803489c0u);
    r25 = param_r4;
    f30 = (f64)rdf32(0x80348960u);
    r24 = param_r3 + 0x1acu;
    f28 = (f64)rdf32(0x803489bcu);
    r23 = param_r3 + 0x468u;
    r21 = param_r3 + 0x528u;
    r20 = 0x80399880u;
    r17 = 0u;
    r22 = 0u;
    do {
        r6 = rd32(r27);
        if (r6 == 0u) {
            r18 = param_r3 + r17;
            if ((u32)rd8(r18 + 0x80u) != 0u) {
                r5 = 0x803486e8u;
                r3 = r17 + 0x1fu;
                r4 = 0u;
                ctr = 0x25u;
                for (;;) {
                    if (r3 == rd32(r5) && rd32(r5 + 4u) == 0x11u) {
                        fl_ = 3u;
                        break;
                    }
                    r4 = r4 + 1u;
                    if (r3 == rd32(r5 + 8u) && rd32(r5 + 0xcu) == 0x11u) {
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
                r16 = rd32(param_r3 + ((r4 << 2u) & 0xfffffffcu) + 0x2f0u);
                a.r[0] = r16;
                (void)tc_call(0x802bed24u, &a);
                wr32(r16 + 0x14u, 1u);
                r5 = 0x803486e8u;
                r3 = r17 + 0x1fu;
                r4 = 0u;
                ctr = 0x25u;
                for (;;) {
                    if (r3 == rd32(r5) && rd32(r5 + 4u) == 0x12u) {
                        fl_ = 8u;
                        break;
                    }
                    r4 = r4 + 1u;
                    if (r3 == rd32(r5 + 8u) && rd32(r5 + 0xcu) == 0x12u) {
                        fl_ = 6u;
                        break;
                    }
                    r5 = r5 + 0x10u;
                    r4 = r4 + 1u;
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
                    r4 = 0xffffffffu;
                    fl_ = 10u;
                    break;
                } while (0);
                if (fl_ == 10u) {
                    fl_ = 0u;
                } else if (fl_ == 9u) {
                    fl_ = 0u;
                }
                r16 = rd32(param_r3 + ((r4 << 2u) & 0xfffffffcu) + 0x2f0u);
                a.r[0] = r16;
                f1 = tc_callf(0x802bed24u, &a);
                wr32(r16 + 0x14u, 1u);
                r19 = r20;
                r16 = 0u;
                do {
                    r3 = rd32(rd32(param_r3 + 0x238u) + 0x10u);
                    a.r[0] = r3;
                    a.r[1] = rd32(r19);
                    a.r[2] = 1u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
                    f1 = tc_lastf();
                    r16 = r16 + 1u;
                    r19 = r19 + 4u;
                    wr8(r3 + 0xcfu, (u8)((u32)rd8(r3 + 0xcfu) & 0xfeu));
                } while ((s32)r16 < 4);
                if (rd32(rd32(param_r3 + 4u) + 0x20u) == 0u) {
                    r3 = rd32(rd32(r26 + 0x23cu) + 0x10u);
                    a.r[0] = r3;
                    a.r[1] = rd32(0x80398de8u);
                    a.r[2] = 1u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
                    wr8(r3 + 0xcfu, (u8)((u32)rd8(r3 + 0xcfu) & 0xfeu));
                }
                wr32(r26 + 0x58u, 0u);
                wr8(r18 + 0x80u, 0u);
                a.r[0] = rd32(r26 + 0x2acu);
                (void)tc_call(0x802c0c10u, &a);
                a.r[0] = rd32(r26 + 0x2acu);
                (void)tc_call(0x802c0bfcu, &a);
                (void)tc_call(0x802c0c34u, &a);
            }
            if ((s32)r17 >= 0) {
                r3 = rd32(param_r3 + 0x250u);
                f1 = (f64)rdf32(0x80348978u);
                a.r[0] = r3;
                a.r[1] = r17;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 0x30u), &a);
            } else {
                r16 = 0u;
                do {
                    r3 = rd32(param_r3 + 0x250u);
                    f1 = (f64)rdf32(0x80348978u);
                    a.r[0] = r3;
                    a.r[1] = r16;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    a.f[1] = f1;
                    f1 = tc_callf(rd32(rd32(r3) + 0x30u), &a);
                    r16 = r16 + 1u;
                } while ((s32)r16 < 8);
            }
        } else {
            r5 = (u32)(s8)rd8(r6 + 0x5du);
            if (r5 == 0xffffffffu) {
                a.r[0] = rd32(r26 + 0x2acu);
                f1 = tc_callf(0x802c0c10u, &a);
                r6 = 0u;
                if (rd32(rd32(param_r3 + 4u) + 0x20u) == 0u) {
                    r3 = rd32(rd32(r26 + 0x23cu) + 0x10u);
                    a.r[0] = r3;
                    a.r[1] = rd32(0x80398de8u);
                    a.r[2] = 1u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
                    f1 = tc_lastf();
                    r6 = 0u;
                    wr8(r3 + 0xcfu, (u8)((u32)rd8(r3 + 0xcfu) & 0xfeu));
                }
            } else {
                r4 = rd32(r26 + 0x58u);
                f0 = (f64)(f32)(f27 + (f64)(f32)px_fdiv(f31, (f64)rdf32(rd32(rd32(0x80547490u) + 4u) + 0x30u)));
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                wrf64(0x817fdf60u, f0);
                if ((s32)r4 <= (s32)rd32(0x817fdf64u)) {
                    wr32(r26 + 0x58u, r4 + 1u);
                } else if (r5 == 0u || r5 == 0xfffffff9u) {
                    if (rd32(r27 + 0xcu) == 2u || (u32)rd8(r6 + 0x5cu) == 2u) {
                        r5 = 1u;
                    } else if ((s32)(s8)rd8(r6 + 0x5eu) <= 0) {
                        r5 = 0u;
                    } else {
                        r5 = 1u;
                    }
                    a.r[0] = rd32(r26 + 0x2acu);
                    a.r[1] = r25;
                    a.r[2] = r5;
                    f1 = tc_callf(0x802c0a78u, &a);
                    r6 = 0u;
                    if (rd32(rd32(param_r3 + 4u) + 0x20u) == 0u) {
                        r3 = rd32(rd32(r26 + 0x23cu) + 0x10u);
                        a.r[0] = r3;
                        a.r[1] = rd32(0x80398de8u);
                        a.r[2] = 1u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
                        f1 = tc_lastf();
                        r6 = 0u;
                        wr8(r3 + 0xcfu, (u8)(((u32)rd8(r3 + 0xcfu) & 0xfeu) | 1u));
                    }
                }
                if (rd32(r27 + 0xcu) != 2u) {
                    r3 = rd32(r27);
                    if ((u32)rd8(r3 + 0x5cu) != 2u && (s32)(s8)rd8(r3 + 0x5eu) <= 0) {
                        a.r[0] = r17;
                        a.r[1] = 0x817fdf08u;
                        r3 = tc_call(0x8027a174u, &a);
                        f1 = tc_lastf();
                        r6 = 0u;
                        if ((u32)(s8)rd8(rd32(r27) + 0x5du) != 0xfffffffeu && r3 != 0xfffffffeu) {
                            a.r[0] = rd32(r26 + 0x2acu);
                            f1 = tc_callf(0x802c0c10u, &a);
                            r6 = 0u;
                        }
                    }
                }
            }
            r3 = param_r3 + r17;
            if ((u32)rd8(r3 + 0x80u) == 0u) {
                wr32(param_r3 + 0x88u, r17);
                wr8(r3 + 0x80u, 1u);
                a.r[0] = rd32(r26 + 0x2acu);
                a.r[1] = r24;
                (void)tc_call(0x802c102cu, &a);
                r5 = 0x803486e8u;
                r3 = r17 + 0x1fu;
                r4 = 0u;
                ctr = 0x25u;
                for (;;) {
                    if (r3 == rd32(r5) && rd32(r5 + 4u) == 0x11u) {
                        fl_ = 13u;
                        break;
                    }
                    r4 = r4 + 1u;
                    if (r3 == rd32(r5 + 8u) && rd32(r5 + 0xcu) == 0x11u) {
                        fl_ = 12u;
                        break;
                    }
                    r5 = r5 + 0x10u;
                    r4 = r4 + 1u;
                    ctr = ctr - 1u;
                    if (ctr == 0u) {
                        r4 = 0xffffffffu;
                        fl_ = 11u;
                        break;
                    }
                }
                if (fl_ == 13u) {
                    fl_ = 0u;
                } else if (fl_ == 12u) {
                    fl_ = 0u;
                } else if (fl_ == 11u) {
                    fl_ = 0u;
                }
                r16 = rd32(param_r3 + ((r4 << 2u) & 0xfffffffcu) + 0x2f0u);
                a.r[0] = r16;
                (void)tc_call(0x802bed24u, &a);
                wr32(r16 + 0x14u, 1u);
                r5 = 0x803486e8u;
                r3 = r17 + 0x1fu;
                r4 = 0u;
                ctr = 0x25u;
                for (;;) {
                    if (r3 == rd32(r5) && rd32(r5 + 4u) == 0x12u) {
                        fl_ = 16u;
                        break;
                    }
                    r4 = r4 + 1u;
                    if (r3 == rd32(r5 + 8u) && rd32(r5 + 0xcu) == 0x12u) {
                        fl_ = 14u;
                        break;
                    }
                    r5 = r5 + 0x10u;
                    r4 = r4 + 1u;
                    ctr = ctr - 1u;
                    if (ctr == 0u) {
                        fl_ = 15u;
                        break;
                    }
                }
                do {
                    if (fl_ == 16u) {
                        fl_ = 0u;
                        fl_ = 17u;
                        break;
                    }
                    if (fl_ == 15u) {
                        fl_ = 0u;
                    } else if (fl_ == 14u) {
                        fl_ = 0u;
                        break;
                    }
                    r4 = 0xffffffffu;
                    fl_ = 18u;
                    break;
                } while (0);
                if (fl_ == 18u) {
                    fl_ = 0u;
                } else if (fl_ == 17u) {
                    fl_ = 0u;
                }
                r6 = 0x803486e8u;
                r4 = param_r3 + ((r4 << 2u) & 0xfffffffcu);
                r3 = r17 + 0x1fu;
                r4 = rd32(r4 + 0x2f0u);
                r5 = 0u;
                wr32(r4 + 0x14u, 0u);
                ctr = 0x25u;
                for (;;) {
                    if (r3 == rd32(r6) && rd32(r6 + 4u) == 0xfu) {
                        fl_ = 21u;
                        break;
                    }
                    r5 = r5 + 1u;
                    if (r3 == rd32(r6 + 8u) && rd32(r6 + 0xcu) == 0xfu) {
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
                r16 = rd32(param_r3 + ((r5 << 2u) & 0xfffffffcu) + 0x2f0u);
                a.r[0] = r16;
                f1 = tc_callf(0x802bed24u, &a);
                wr32(r16 + 0x14u, 1u);
                r3 = 0u;
                r12 = rd32(rd32(param_r3 + 4u) + 0x14u);
                if (r12 != 0u) {
                    a.r[0] = 5u;
                    a.r[1] = r17 + 0x11u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(r12, &a);
                }
                if (r3 == 0u) {
                    a.r[0] = r17 + 0x11u;
                    (void)tc_call(0x802c1e5cu, &a);
                }
                a.r[0] = rd32(r26 + 0x2acu);
                (void)tc_call(0x802c0c24u, &a);
                a.r[0] = rd32(r26 + 0x2acu);
                (void)tc_call(0x802c0f98u, &a);
                a.r[0] = r23;
                a.r[1] = rd32(r26 + 0x2acu);
                (void)tc_call(0x80226e98u, &a);
                a.r[0] = r23;
                (void)tc_call(0x80226a70u, &a);
                a.r[0] = r23;
                a.r[1] = 0x802c0000u;
                a.r[2] = 0u;
                a.r[3] = ((ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) * 0x12cu;
                a.r[4] = 0x802c6014u;
                (void)tc_call(0x8022697cu, &a);
                a.r[0] = r21;
                a.r[1] = r22 | (r17 + 2u);
                (void)tc_call(0x80226e98u, &a);
                a.r[0] = r21;
                (void)tc_call(0x80226a70u, &a);
                a.r[0] = r21;
                a.r[1] = 0x802c0000u;
                a.r[2] = 0u;
                a.r[3] = ((ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) * 0x190u;
                a.r[4] = 0x802c5f30u;
                f1 = tc_callf(0x8022697cu, &a);
                r6 = 0u;
            }
            r3 = rd32(r27);
            r0 = (u32)(s8)rd8(r3 + 0x5du);
            if (r0 == 0u || r0 == 0xfffffff9u) {
                if (rd32(r27 + 0xcu) != 2u || (u32)rd8(r3 + 0x5cu) != 2u) {
                    r0 = rd32(r3 + 0x38u);
                    r3 = rd32(r3 + 0x34u);
                    wr32(0x817fdf1cu, r0);
                    f0 = (f64)rdf32(0x817fdf1cu);
                    wr32(0x817fdf18u, r3);
                    a.f[0] = -f0;
                    a.f[1] = (f64)rdf32(0x817fdf18u);
                    f1 = tc_callf(0x802d5af4u, &a);
                    r6 = 0u;
                    f0 = (f64)(f32)(f29 * f1);
                    wrf32d(0x817fdf3cu, f30);
                    wrf32d(0x817fdf40u, f30);
                    wrf32d(0x817fdf44u, f0);
                    wrf32d(0x817fdf54u, f30);
                    wrf32d(0x817fdf58u, f30);
                    wrf32d(0x817fdf5cu, f0);
                } else {
                    wrf32d(0x817fdf48u, f30);
                    wrf32d(0x817fdf4cu, f30);
                    wrf32d(0x817fdf50u, f28);
                    wrf32d(0x817fdf54u, f30);
                    wrf32d(0x817fdf58u, f30);
                    wrf32d(0x817fdf5cu, f28);
                }
                if (rd32(rd32(param_r3 + 4u) + 0x20u) == 0u) {
                    r3 = rd32(rd32(r26 + 0x23cu) + 0x10u);
                    a.r[0] = r3;
                    a.r[1] = rd32(0x80398df4u);
                    a.r[2] = 1u;
                    a.r[3] = r6;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
                    f1 = (f64)rdf32(0x817fdf58u);
                    wrf32d(r3 + 0x38u, (f64)rdf32(0x817fdf54u));
                    f0 = (f64)rdf32(0x817fdf5cu);
                    wrf32d(r3 + 0x3cu, f1);
                    wrf32d(r3 + 0x40u, f0);
                    r3 = rd32(rd32(r26 + 0x23cu) + 0x10u);
                    a.r[0] = r3;
                    a.r[1] = rd32(0x80398e00u);
                    a.r[2] = 1u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
                    f1 = (f64)rdf32(0x817fdf58u);
                    wrf32d(r3 + 0x38u, (f64)rdf32(0x817fdf54u));
                    f0 = (f64)rdf32(0x817fdf5cu);
                    wrf32d(r3 + 0x3cu, f1);
                    wrf32d(r3 + 0x40u, f0);
                }
                if ((s32)rd32(param_r3 + 0x7cu) > 100) {
                    a.r[0] = rd32(r26 + 0x2acu);
                    a.r[1] = r24;
                    (void)tc_call(0x802c102cu, &a);
                }
                a.r[0] = param_r3;
                a.r[1] = r17;
                (void)tc_call(0x802c6a84u, &a);
                if (rd32(rd32(param_r3 + 4u) + 0x20u) == 0u) {
                    r3 = tc_call(0x802c0f94u, &a);
                    r16 = r3;
                    a.r[0] = 0x817fdf20u;
                    a.r[1] = rd32(param_r3 + 0x238u);
                    (void)tc_call(0x802cd174u, &a);
                    r3 = rd32(rd32(r26 + 0x23cu) + 0x10u);
                    f2 = (f64)(f32)((f64)rdf32(r16 + 8u) * (f64)rdf32(0x817fdf28u));
                    f1 = (f64)rdf32(r16 + 0xcu);
                    r12 = rd32(r3);
                    f0 = (f64)(f32)(f1 * (f64)rdf32(0x817fdf2cu));
                    wrf32d(0x817fdf10u, f2);
                    r12 = rd32(r12 + 0x3cu);
                    r4 = rd32(0x80398de8u);
                    wrf32d(0x817fdf14u, f0);
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = 1u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    a.f[1] = f2;
                    r3 = tc_call(r12, &a);
                    f0 = (f64)rdf32(0x817fdf10u);
                    f1 = (f64)rdf32(0x817fdf14u);
                    wrf32d(r3 + 0x2cu, f0);
                    wrf32d(r3 + 0x30u, f1);
                    wrf32d(0x817fdf30u, f0);
                    wrf32d(0x817fdf34u, f1);
                    wrf32d(0x817fdf38u, f30);
                    wrf32d(r3 + 0x34u, f30);
                }
            }
            a.r[0] = rd32(r26 + 0x2acu);
            r3 = tc_call(0x802c10d4u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                a.r[0] = param_r3;
                a.r[1] = r17;
                f1 = tc_callf(0x802c5bd8u, &a);
            }
        }
        r17 = r17 + 1u;
        r22 = r22 + 0x10000u;
        r21 = r21 + 0x30u;
        r20 = r20 + 0x10u;
        r27 = r27 + 0x10u;
        r26 = r26 + 4u;
        r25 = r25 + 0x10u;
        r24 = r24 + 0x18u;
        r23 = r23 + 0x30u;
    } while ((s32)r17 < 4);
    r3 = rd32(param_r3 + 0x7cu);
    if ((s32)r3 <= 100) {
        wr32(param_r3 + 0x7cu, r3 + 1u);
    } else {
        wr32(param_r3 + 0x7cu, 0u);
    }
    return;
}
