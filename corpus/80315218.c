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

void fn_80315218(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    c0eq = (u32)rd8(param_1) == 0xabu;
    r30 = param_2;
    wr32(0x817fdfb8u, 0x43300000u);
    r23 = param_3;
    if (!c0eq) {
        r4 = (u32)rd16(param_1 + 8u);
        r26 = param_1 + 0x20u;
        r6 = 0u;
        r25 = r26 + rd32(param_1 + 0xcu);
        r27 = (u32)rd8(param_1 + 3u);
        r24 = r25 + rd32(param_1 + 0x10u);
        if (r4 > 1u) {
            r22 = (u32)rd8(param_1 + 4u);
            r8 = r22 & 0x20u;
            if (r8 != 0u || (u32)rd8(param_1 + 5u) > 1u) {
                if ((r22 & 0x80u) != 0u) {
                    r6 = (u32)param_5 - 1u;
                    if (param_3 < r6) {
                        r3 = (u32)rd8(param_1 + 5u);
                        r28 = r4 - 1u;
                        r0 = r28 ^ 0x80000000u;
                        f5 = rdf64(0x805778b0u);
                        wr32(0x817fdfbcu, r3);
                        f3 = rdf64(0x805778b8u);
                        wr32(0x817fdfbcu, r6);
                        wr32(0x817fdfbcu, r0);
                        f31 = (f64)(f32)((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f5) * (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f3), (f64)(f32)(px_b2f((u64)r6 | 0x4330000000000000ull) - f5)));
                        a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f5) * f31), (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f3));
                        r3 = tc_call(0x802558e4u, &a);
                        r4 = r3 * r28;
                        f2 = rdf64(0x805778b0u);
                        r6 = r3;
                        wr32(0x817fdfbcu, r4);
                        f4 = (f64)(f32)((f64)(f32)((f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f2) * f31) - (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f2));
                        if ((r22 & 0x40u) != 0u && (r3 & 1u) != 0u) {
                            f4 = (f64)(f32)((f64)(f32)(px_b2f((u64)(r28 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805778b8u)) - f4);
                        }
                        r7 = (u32)px_f2b(px_ctiw(f4, ppc_fctiwz(f4)));
                    } else {
                        do {
                            if ((r22 & 0x40u) != 0u) {
                                r0 = (u32)rd8(param_1 + 5u);
                                r5 = (r0 >> 0x1fu) & 1u;
                                r0 = r0 & 1u;
                                r0 = r0 ^ r5;
                                r0 = r0 - r5;
                                if (r0 == 0u) {
                                    r7 = 0u;
                                    break;
                                }
                            }
                            r7 = (r4 - 1u) & 0xffffu;
                        } while (0);
                        r6 = ((u32)rd8(param_1 + 5u) - 1u) & 0xffu;
                        f4 = (f64)(f32)(px_b2f((u64)r7 | 0x4330000000000000ull) - rdf64(0x805778b0u));
                    }
                } else {
                    r7 = r4 - 1u;
                    r6 = ppc_divwu(param_3, r7);
                    do {
                        if ((r22 & 0x40u) != 0u) {
                            if (r8 == 0u) {
                                r8 = (u32)rd8(param_1 + 5u);
                                if (r6 >= r8) {
                                    r4 = (r8 >> 0x1fu) & 1u;
                                    r4 = ((r8 & 1u) ^ r4) - r4;
                                    r4 = ppc_cntlzw(r4);
                                    r6 = (r8 - 1u) & 0xffu;
                                    r7 = r7 & 0xffffu & ~(0u - ((r4 >> 5u) & 1u));
                                    break;
                                }
                            }
                            if ((r6 & 1u) != 0u) {
                                r7 = ((r7 * (r6 + 1u)) - param_3) & 0xffffu;
                            } else {
                                r7 = (param_3 - (r6 * r7)) & 0xffffu;
                            }
                        } else {
                            if (r8 == 0u) {
                                r3 = (u32)rd8(param_1 + 5u);
                                if (r6 >= r3) {
                                    r7 = r7 & 0xffffu;
                                    r6 = (r3 - 1u) & 0xffu;
                                    break;
                                }
                            }
                            r7 = (param_3 - (r6 * r7)) & 0xffffu;
                        }
                    } while (0);
                    r0 = r7 & 0xffffu;
                    f1 = rdf64(0x805778b0u);
                    wr32(0x817fdfbcu, r0);
                    f4 = (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f1);
                }
            } else if ((r22 & 0x80u) != 0u) {
                if ((u32)param_5 != 1u) {
                    r3 = (r4 - 1u) ^ 0x80000000u;
                    f5 = rdf64(0x805778b0u);
                    wr32(0x817fdfbcu, r3);
                    f3 = rdf64(0x805778b8u);
                    wr32(0x817fdfbcu, r3);
                    f4 = (f64)(f32)((f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f5) * (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f3), (f64)(f32)(px_b2f((u64)((u32)param_5 - 1u) | 0x4330000000000000ull) - f5)));
                    if (f4 > (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f3)) {
                        f4 = (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f3);
                    }
                } else {
                    f1 = rdf64(0x805778b8u);
                    r0 = (r4 - 1u) ^ 0x80000000u;
                    wr32(0x817fdfbcu, r0);
                    f4 = (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f1);
                }
                r7 = (u32)px_f2b(px_ctiw(f4, ppc_fctiwz(f4)));
            } else {
                r0 = r4 - 1u;
                r7 = param_3 & 0xffffu;
                if (param_3 >= r0) {
                    r7 = r0 & 0xffffu;
                }
                f4 = (f64)(f32)(px_b2f((u64)r7 | 0x4330000000000000ull) - rdf64(0x805778b0u));
            }
        } else {
            f4 = (f64)rdf32(0x805778a8u);
            r6 = param_3;
            r7 = 0u;
        }
        r10 = (u32)rd8(r27 - 0x7fc627b0u);
        r8 = (u32)rd8(r27 - 0x7fc626b0u);
        if (r10 != 0u) {
            r11 = r7 & 0xffffu;
            r3 = (u32)rd16(r26);
            f2 = rdf64(0x805778b8u);
            wr32(0x817fdfbcu, r11 ^ 0x80000000u);
            r5 = r3 - 1u;
            f0 = (f64)rdf32(0x805778c4u);
            r4 = r26 + 4u;
            r3 = ((r10 << 2u) & 0xfffffffcu) + 0xcu;
            r0 = (r10 << 3u) & 0xfffffff8u;
            r12 = (u32)((s32)(((r5 >> 0x1fu) & 1u) + r5) >> 1);
            r28 = 0u;
            f1 = (f64)(f32)ppc_fabs((f64)(f32)((f64)(f32)(rdf64(0x817fdfb8u) - f2) - f4));
            r9 = (u32)rd16(r26 + 4u);
            r22 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
            c0eq = r11 == r9;
            if ((s32)r11 >= (s32)r9) {
                if (!c0eq) {
                    r23 = (u32)rd16(r4 + (r5 * r3));
                    if ((s32)r23 > (s32)r11) {
                        r10 = (u32)rd16(r4 + (r12 * r3));
                        for (;;) {
                            if ((s32)r28 >= (s32)r12) {
                                r5 = r28;
                                r22 = 0u;
                                break;
                            }
                            if (r11 == r10) {
                                r5 = r12;
                                if (r22 != 0u) break;
                                r9 = r10;
                                r23 = (u32)rd16(r4 + ((r12 + 1u) * r3));
                                break;
                            }
                            if ((s32)r10 >= (s32)r11) {
                                r5 = r12;
                                r23 = r10;
                            } else {
                                r28 = r12;
                                r9 = r10;
                            }
                            r10 = r28 + r5;
                            r12 = (u32)((s32)(((r10 >> 0x1fu) & 1u) + r10) >> 1);
                            r10 = (u32)rd16(r4 + (r12 * r3));
                        }
                    } else {
                        r22 = 1u;
                    }
                } else {
                    c0eq = r5 == 0u;
                    r5 = 0u;
                    if (!c0eq) {
                        if (r22 == 0u) {
                            r23 = (u32)rd16(r4 + r3);
                        }
                    } else {
                        r22 = 1u;
                    }
                }
            } else {
                r5 = 0u;
                r22 = 1u;
            }
            if (r22 == 0u) {
                r11 = (u32)rd8(param_1 + 4u);
                r7 = r6;
                if ((r11 & 0x40u) != 0u) {
                    r12 = r11 & 0x20u;
                    if (r12 != 0u || (u32)rd8(param_1 + 5u) > 1u) {
                        r22 = r6 & 1u;
                        if (r22 == 0u && (s32)(r5 + 1u) >= (s32)((u32)rd16(r26) - 1u) && (r12 != 0u || r6 < ((u32)rd8(param_1 + 5u) - 1u))) {
                            r7 = r6 + 1u;
                        }
                        if (r22 != 0u && r5 == 0u && r6 != 0u) {
                            r6 = r6 + 1u;
                        }
                    }
                }
                r10 = r9 & 0xffffu;
                wr32(0x817fdfbcu, r10);
                r10 = ((r23 & 0xffffu) - r10) ^ 0x80000000u;
                r9 = r5 + 1u;
                r5 = r5 * r3;
                r12 = r4 + r5;
                r11 = r9 * r3;
                r3 = (u32)rd8(r12 + 2u);
                f2 = (f64)(f32)px_fdiv((f64)(f32)(f4 - (f64)(f32)(rdf64(0x817fdfb8u) - rdf64(0x805778b0u))), (f64)(f32)(px_b2f((u64)r10 | 0x4330000000000000ull) - rdf64(0x805778b8u)));
                r5 = r12 + 0xcu;
                r9 = r4 + r11;
                r22 = (((0u - r3) | r3) >> 0x1fu) & 1u;
                r4 = (u32)rd8(r9 + 2u);
                r9 = r9 + 0xcu;
                r10 = r12 + 4u;
                r11 = (((0u - r4) | r4) >> 0x1fu) & 1u;
                if (r22 != 0u || r11 != 0u) {
                    if (r22 == 0u || r11 != 0u) {
                        if (r22 != 0u || r11 == 0u) {
                            r3 = r3 & 2u;
                            c0eq = r3 == 0u;
                            r5 = (u32)rd16(r5);
                            r6 = r6 * 0x7b929u;
                            r3 = ((u32)param_4 * 0x3f81f635u) + ((u32)rd16(param_1 + 6u) * 0x30a74193u);
                            r6 = r6 + r3;
                            r6 = r6 + ((r5 * 0x371097e7u) + 0x50000u);
                            r6 = r6 - 0x40adu;
                            wr32(0x817fdf9cu, r6);
                            r12 = (u32)rd8(0x817fdf9eu) ^ (u32)rd8(0x817fdf9fu);
                            r6 = (u32)rd8(0x817fdf9cu);
                            r11 = (u32)rd8(0x817fdf9du) ^ r12;
                            wr8(0x817fdf9eu, (u8)r12);
                            r6 = r6 ^ r11;
                            wr8(0x817fdf9du, (u8)r11);
                            wr8(0x817fdf9cu, (u8)r6);
                            r6 = rd32(0x817fdf9cu);
                            if (!c0eq) {
                                r12 = (u32)rd16(r24);
                                r23 = (r6 >> 0x10u) & 0xffffu;
                                r11 = r24 + (r0 * (r23 - (ppc_divwu(r23, r12) * r12))) + 4u;
                                r6 = (r6 * 0x343fdu) + 0x269ec3u;
                            } else {
                                r5 = r5 * r0;
                                r5 = r25 + r5;
                                r11 = r5 + 4u;
                            }
                            r5 = (u32)rd16(r9);
                            r4 = r4 & 2u;
                            c0eq = r4 == 0u;
                            r7 = r7 * 0x7b929u;
                            r3 = r7 + r3;
                            r3 = r3 + ((r5 * 0x371097e7u) + 0x50000u);
                            r3 = r3 - 0x40adu;
                            wr32(0x817fdf98u, r3);
                            r7 = (u32)rd8(0x817fdf9au) ^ (u32)rd8(0x817fdf9bu);
                            r3 = (u32)rd8(0x817fdf98u);
                            r4 = (u32)rd8(0x817fdf99u) ^ r7;
                            wr8(0x817fdf9au, (u8)r7);
                            r3 = r3 ^ r4;
                            wr8(0x817fdf99u, (u8)r4);
                            wr8(0x817fdf98u, (u8)r3);
                            r3 = rd32(0x817fdf98u);
                            if (!c0eq) {
                                r7 = (u32)rd16(r24);
                                r9 = (r3 >> 0x10u) & 0xffffu;
                                r3 = r3 * 0x343fdu;
                                r0 = r0 * (r9 - (ppc_divwu(r9, r7) * r7));
                                r3 = r3 + 0x270000u;
                                r3 = r3 - 0x613du;
                                r9 = r24 + r0 + 4u;
                            } else {
                                r0 = r5 * r0;
                                r9 = r25 + r0 + 4u;
                            }
                            f0 = rdf64(0x805778b0u);
                            r12 = 1u;
                            f7 = (f64)rdf32(0x805778d0u);
                            f5 = (f64)rdf32(0x805778d8u);
                            f4 = (f64)rdf32(0x805778ccu);
                            while ((s32)r12 <= (s32)r8) {
                                if ((r27 & r12) != 0u) {
                                    r4 = (r6 >> 0x10u) & 0xffffu;
                                    r0 = (u32)rd8(param_1 + 4u);
                                    wr32(0x817fdfbcu, r4);
                                    f3 = (f64)rdf32(r11 + 4u);
                                    r7 = r0 & 4u;
                                    f6 = (f64)rdf32(r11);
                                    r11 = r11 + 8u;
                                    f1 = (f64)(f32)(f6 + (f64)(f32)(f3 * (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f0)));
                                    if (r7 == 0u) {
                                        r6 = (r6 * 0x343fdu) + 0x270000u;
                                        r6 = r6 - 0x613du;
                                    }
                                    f6 = (f64)rdf32(r9 + 4u);
                                    f8 = (f64)rdf32(r9);
                                    r9 = r9 + 8u;
                                    f8 = (f64)(f32)(f8 + (f64)(f32)(f6 * (f64)(f32)(px_b2f((u64)((r3 >> 0x10u) & 0xffffu) | 0x4330000000000000ull) - f0)));
                                    if (r7 == 0u) {
                                        r3 = r3 * 0x343fdu;
                                        r3 = r3 + 0x270000u;
                                        r3 = r3 - 0x613du;
                                    }
                                    r4 = (u32)rd8(r10);
                                    r0 = r4 & 3u;
                                    c0lt = (s32)r0 < 1;
                                    do {
                                        if (r0 == 1u) {
                                            if (r4 != 1u) {
                                                if (((r4 >> 3u) & 1u) != 0u) {
                                                    f9 = (f64)rdf32(0x805778d4u);
                                                } else {
                                                    f9 = (f64)rdf32(0x805778a8u);
                                                }
                                                if (((r4 >> 2u) & 1u) != 0u) {
                                                    f10 = (f64)rdf32(0x805778d4u);
                                                } else {
                                                    f10 = (f64)rdf32(0x805778a8u);
                                                }
                                                f8 = (f64)(f32)(f8 - f1);
                                                f8 = (f64)(f32)(f2 * f8);
                                                f3 = (f64)(f32)(f9 + (f64)(f32)((f64)(f32)(f2 * (f64)(f32)(f2 * (f64)(f32)((f64)(f32)(f9 + f10) - f7))) + (f64)(f32)(f2 * (f64)(f32)(f4 + (f64)(f32)((f64)(f32)(f5 * f9) - f10)))));
                                                f3 = (f64)(f32)(f8 * f3);
                                                f1 = (f64)(f32)(f1 + f3);
                                            } else {
                                                f1 = (f64)(f32)(f1 + (f64)(f32)(f2 * (f64)(f32)(f2 * (f64)(f32)((f64)(f32)(f4 - (f64)(f32)(f7 * f2)) * (f64)(f32)(f8 - f1)))));
                                            }
                                        } else {
                                            if (!c0lt) {
                                                if ((s32)r0 < 3) break;
                                            } else if ((s32)r0 >= 0) {
                                                f1 = (f64)(f32)(f1 + (f64)(f32)(f2 * (f64)(f32)(f8 - f1)));
                                                break;
                                            }
                                            f1 = (f64)rdf32(0x805778a8u);
                                        }
                                    } while (0);
                                    wrf32d(r30, f1);
                                }
                                r12 = (r12 << 1u) & 0xfffeu;
                                r10 = r10 + 1u;
                                r30 = r30 + 4u;
                            }
                        } else {
                            r3 = (u32)rd16(r9);
                            r4 = r4 & 2u;
                            c0eq = r4 == 0u;
                            r7 = r7 * 0x7b929u;
                            wr32(0x817fdfa0u, ((u32)param_4 * 0x3f81f635u) + ((u32)rd16(param_1 + 6u) * 0x30a74193u) + (r7 + ((r3 * 0x371097e7u) + 0x4bf53u)));
                            r7 = (u32)rd8(0x817fdfa2u) ^ (u32)rd8(0x817fdfa3u);
                            r4 = (u32)rd8(0x817fdfa0u);
                            r6 = (u32)rd8(0x817fdfa1u) ^ r7;
                            wr8(0x817fdfa2u, (u8)r7);
                            r4 = r4 ^ r6;
                            wr8(0x817fdfa1u, (u8)r6);
                            wr8(0x817fdfa0u, (u8)r4);
                            r4 = rd32(0x817fdfa0u);
                            if (!c0eq) {
                                r7 = (u32)rd16(r24);
                                r9 = (r4 >> 0x10u) & 0xffffu;
                                r0 = r0 * (r9 - (ppc_divwu(r9, r7) * r7));
                                r7 = r24 + r0 + 4u;
                                r4 = (r4 * 0x343fdu) + 0x269ec3u;
                            } else {
                                r0 = r3 * r0;
                                r7 = r25 + r0 + 4u;
                            }
                            f7 = rdf64(0x805778b0u);
                            r9 = 1u;
                            f5 = (f64)rdf32(0x805778d0u);
                            f3 = (f64)rdf32(0x805778d8u);
                            f1 = (f64)rdf32(0x805778ccu);
                            while ((s32)r9 <= (s32)r8) {
                                if ((r27 & r9) != 0u) {
                                    f4 = (f64)rdf32(r7 + 4u);
                                    f6 = (f64)rdf32(r7);
                                    r7 = r7 + 8u;
                                    f6 = (f64)(f32)(f6 + (f64)(f32)(f4 * (f64)(f32)(px_b2f((u64)((r4 >> 0x10u) & 0xffffu) | 0x4330000000000000ull) - f7)));
                                    if (((u32)rd8(param_1 + 4u) & 4u) == 0u) {
                                        r4 = (r4 * 0x343fdu) + 0x270000u;
                                        r4 = r4 - 0x613du;
                                    }
                                    r3 = (u32)rd8(r10);
                                    f8 = (f64)rdf32(r5);
                                    r0 = r3 & 3u;
                                    c0lt = (s32)r0 < 1;
                                    do {
                                        if (r0 == 1u) {
                                            if (r3 != 1u) {
                                                if (((r3 >> 3u) & 1u) != 0u) {
                                                    f9 = (f64)rdf32(0x805778d4u);
                                                } else {
                                                    f9 = (f64)rdf32(0x805778a8u);
                                                }
                                                if (((r3 >> 2u) & 1u) != 0u) {
                                                    f10 = (f64)rdf32(0x805778d4u);
                                                } else {
                                                    f10 = (f64)rdf32(0x805778a8u);
                                                }
                                                f6 = (f64)(f32)(f6 - f8);
                                                f6 = (f64)(f32)(f2 * f6);
                                                f0 = (f64)(f32)(f9 + (f64)(f32)((f64)(f32)(f2 * (f64)(f32)(f2 * (f64)(f32)((f64)(f32)(f9 + f10) - f5))) + (f64)(f32)(f2 * (f64)(f32)(f1 + (f64)(f32)((f64)(f32)(f3 * f9) - f10)))));
                                                f0 = (f64)(f32)(f6 * f0);
                                                f8 = (f64)(f32)(f8 + f0);
                                            } else {
                                                f8 = (f64)(f32)(f8 + (f64)(f32)(f2 * (f64)(f32)(f2 * (f64)(f32)((f64)(f32)(f1 - (f64)(f32)(f5 * f2)) * (f64)(f32)(f6 - f8)))));
                                            }
                                        } else {
                                            if (!c0lt) {
                                                if ((s32)r0 < 3) break;
                                            } else if ((s32)r0 >= 0) {
                                                f8 = (f64)(f32)(f8 + (f64)(f32)(f2 * (f64)(f32)(f6 - f8)));
                                                break;
                                            }
                                            f8 = (f64)rdf32(0x805778a8u);
                                        }
                                    } while (0);
                                    wrf32d(r30, f8);
                                    r5 = r5 + 4u;
                                }
                                r9 = (r9 << 1u) & 0xfffeu;
                                r10 = r10 + 1u;
                                r30 = r30 + 4u;
                            }
                        }
                    } else {
                        r4 = (u32)rd16(r5);
                        r3 = r3 & 2u;
                        c0eq = r3 == 0u;
                        r6 = r6 * 0x7b929u;
                        wr32(0x817fdfa4u, ((u32)param_4 * 0x3f81f635u) + ((u32)rd16(param_1 + 6u) * 0x30a74193u) + (r6 + ((r4 * 0x371097e7u) + 0x4bf53u)));
                        r6 = (u32)rd8(0x817fdfa6u) ^ (u32)rd8(0x817fdfa7u);
                        r3 = (u32)rd8(0x817fdfa4u);
                        r5 = (u32)rd8(0x817fdfa5u) ^ r6;
                        wr8(0x817fdfa6u, (u8)r6);
                        r3 = r3 ^ r5;
                        wr8(0x817fdfa5u, (u8)r5);
                        wr8(0x817fdfa4u, (u8)r3);
                        r3 = rd32(0x817fdfa4u);
                        if (!c0eq) {
                            r6 = (u32)rd16(r24);
                            r7 = (r3 >> 0x10u) & 0xffffu;
                            r3 = r3 * 0x343fdu;
                            r0 = r0 * (r7 - (ppc_divwu(r7, r6) * r6));
                            r3 = r3 + 0x270000u;
                            r3 = r3 - 0x613du;
                            r6 = r24 + r0 + 4u;
                        } else {
                            r0 = r4 * r0;
                            r6 = r25 + r0 + 4u;
                        }
                        f7 = rdf64(0x805778b0u);
                        r7 = 1u;
                        f5 = (f64)rdf32(0x805778d0u);
                        f3 = (f64)rdf32(0x805778d8u);
                        f1 = (f64)rdf32(0x805778ccu);
                        while ((s32)r7 <= (s32)r8) {
                            if ((r27 & r7) != 0u) {
                                r5 = (r3 >> 0x10u) & 0xffffu;
                                r0 = (u32)rd8(param_1 + 4u);
                                wr32(0x817fdfbcu, r5);
                                f4 = (f64)rdf32(r6 + 4u);
                                r0 = r0 & 4u;
                                f6 = (f64)rdf32(r6);
                                r6 = r6 + 8u;
                                f10 = (f64)(f32)(f6 + (f64)(f32)(f4 * (f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - f7)));
                                if (r0 == 0u) {
                                    r3 = r3 * 0x343fdu;
                                    r3 = r3 + 0x270000u;
                                    r3 = r3 - 0x613du;
                                }
                                r5 = (u32)rd8(r10);
                                f6 = (f64)rdf32(r9);
                                r0 = r5 & 3u;
                                c0lt = (s32)r0 < 1;
                                do {
                                    if (r0 == 1u) {
                                        if (r5 != 1u) {
                                            if (((r5 >> 3u) & 1u) != 0u) {
                                                f8 = (f64)rdf32(0x805778d4u);
                                            } else {
                                                f8 = (f64)rdf32(0x805778a8u);
                                            }
                                            if (((r5 >> 2u) & 1u) != 0u) {
                                                f9 = (f64)rdf32(0x805778d4u);
                                            } else {
                                                f9 = (f64)rdf32(0x805778a8u);
                                            }
                                            f6 = (f64)(f32)(f6 - f10);
                                            f6 = (f64)(f32)(f2 * f6);
                                            f0 = (f64)(f32)(f8 + (f64)(f32)((f64)(f32)(f2 * (f64)(f32)(f2 * (f64)(f32)((f64)(f32)(f8 + f9) - f5))) + (f64)(f32)(f2 * (f64)(f32)(f1 + (f64)(f32)((f64)(f32)(f3 * f8) - f9)))));
                                            f0 = (f64)(f32)(f6 * f0);
                                            f10 = (f64)(f32)(f10 + f0);
                                        } else {
                                            f10 = (f64)(f32)(f10 + (f64)(f32)(f2 * (f64)(f32)(f2 * (f64)(f32)((f64)(f32)(f1 - (f64)(f32)(f5 * f2)) * (f64)(f32)(f6 - f10)))));
                                        }
                                    } else {
                                        if (!c0lt) {
                                            if ((s32)r0 < 3) break;
                                        } else if ((s32)r0 >= 0) {
                                            f10 = (f64)(f32)(f10 + (f64)(f32)(f2 * (f64)(f32)(f6 - f10)));
                                            break;
                                        }
                                        f10 = (f64)rdf32(0x805778a8u);
                                    }
                                } while (0);
                                wrf32d(r30, f10);
                                r9 = r9 + 4u;
                            }
                            r7 = (r7 << 1u) & 0xfffeu;
                            r10 = r10 + 1u;
                            r30 = r30 + 4u;
                        }
                    }
                } else {
                    f5 = (f64)rdf32(0x805778d0u);
                    r4 = 1u;
                    f3 = (f64)rdf32(0x805778d8u);
                    f1 = (f64)rdf32(0x805778ccu);
                    while ((s32)r4 <= (s32)r8) {
                        if ((r27 & r4) != 0u) {
                            f9 = (f64)rdf32(r5);
                            f6 = (f64)rdf32(r9);
                            do {
                                if (f9 != f6) {
                                    r3 = (u32)rd8(r10);
                                    r0 = r3 & 3u;
                                    c0lt = (s32)r0 < 1;
                                    if (r0 == 1u) {
                                        if (r3 != 1u) {
                                            if (((r3 >> 3u) & 1u) != 0u) {
                                                f7 = (f64)rdf32(0x805778d4u);
                                            } else {
                                                f7 = (f64)rdf32(0x805778a8u);
                                            }
                                            if (((r3 >> 2u) & 1u) != 0u) {
                                                f8 = (f64)rdf32(0x805778d4u);
                                            } else {
                                                f8 = (f64)rdf32(0x805778a8u);
                                            }
                                            f6 = (f64)(f32)(f6 - f9);
                                            f6 = (f64)(f32)(f2 * f6);
                                            f0 = (f64)(f32)(f7 + (f64)(f32)((f64)(f32)(f2 * (f64)(f32)(f2 * (f64)(f32)((f64)(f32)(f7 + f8) - f5))) + (f64)(f32)(f2 * (f64)(f32)(f1 + (f64)(f32)((f64)(f32)(f3 * f7) - f8)))));
                                            f0 = (f64)(f32)(f6 * f0);
                                            f9 = (f64)(f32)(f9 + f0);
                                        } else {
                                            f9 = (f64)(f32)(f9 + (f64)(f32)(f2 * (f64)(f32)(f2 * (f64)(f32)((f64)(f32)(f1 - (f64)(f32)(f5 * f2)) * (f64)(f32)(f6 - f9)))));
                                        }
                                    } else {
                                        if (!c0lt) {
                                            if ((s32)r0 < 3) break;
                                        } else if ((s32)r0 >= 0) {
                                            f9 = (f64)(f32)(f9 + (f64)(f32)(f2 * (f64)(f32)(f6 - f9)));
                                            break;
                                        }
                                        f9 = (f64)rdf32(0x805778a8u);
                                    }
                                }
                            } while (0);
                            wrf32d(r30, f9);
                            r5 = r5 + 4u;
                            r9 = r9 + 4u;
                        }
                        r4 = (r4 << 1u) & 0xfffeu;
                        r10 = r10 + 1u;
                        r30 = r30 + 4u;
                    }
                }
            } else {
                r3 = r5 * r3;
                r3 = r4 + r3;
                r12 = (u32)rd8(r3 + 2u);
                r3 = r3 + 0xcu;
                if (r12 != 0u) {
                    r3 = (u32)rd16(r3);
                    r6 = r6 * 0x7b929u;
                    wr32(0x817fdfa8u, ((u32)param_4 * 0x3f81f635u) + ((u32)rd16(param_1 + 6u) * 0x30a74193u) + (r6 + ((r3 * 0x371097e7u) + 0x4bf53u)));
                    r6 = (u32)rd8(0x817fdfaau) ^ (u32)rd8(0x817fdfabu);
                    r4 = (u32)rd8(0x817fdfa8u);
                    r5 = (u32)rd8(0x817fdfa9u) ^ r6;
                    wr8(0x817fdfaau, (u8)r6);
                    r4 = r4 ^ r5;
                    wr8(0x817fdfa9u, (u8)r5);
                    wr8(0x817fdfa8u, (u8)r4);
                    r7 = rd32(0x817fdfa8u);
                    if ((r12 & 2u) != 0u) {
                        r5 = (u32)rd16(r24);
                        r6 = (r7 >> 0x10u) & 0xffffu;
                        r0 = r0 * (r6 - (ppc_divwu(r6, r5) * r5));
                        r4 = r24 + r0 + 4u;
                        r7 = (r7 * 0x343fdu) + 0x270000u;
                        r7 = r7 - 0x613du;
                    } else {
                        r0 = r3 * r0;
                        r4 = r25 + r0 + 4u;
                    }
                    f1 = rdf64(0x805778b0u);
                    r5 = 1u;
                    while ((s32)r5 <= (s32)r8) {
                        if ((r27 & r5) != 0u) {
                            f2 = (f64)rdf32(r4 + 4u);
                            f3 = (f64)rdf32(r4);
                            r4 = r4 + 8u;
                            wrf32d(r30, (f64)(f32)(f3 + (f64)(f32)(f2 * (f64)(f32)(px_b2f((u64)((r7 >> 0x10u) & 0xffffu) | 0x4330000000000000ull) - f1))));
                            if (((u32)rd8(param_1 + 4u) & 4u) == 0u) {
                                r7 = (r7 * 0x343fdu) + 0x270000u;
                                r7 = r7 - 0x613du;
                            }
                        }
                        r5 = (r5 << 1u) & 0xfffeu;
                        r30 = r30 + 4u;
                    }
                } else {
                    r4 = 1u;
                    while ((s32)r4 <= (s32)r8) {
                        if ((r27 & r4) != 0u) {
                            f0 = (f64)rdf32(r3);
                            r3 = r3 + 4u;
                            wrf32d(r30, f0);
                        }
                        r4 = (r4 << 1u) & 0xfffeu;
                        r30 = r30 + 4u;
                    }
                }
            }
        }
    } else {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = (u32)param_5;
        (void)tc_call(0x80318ad4u, &a);
    }
    return;
}
