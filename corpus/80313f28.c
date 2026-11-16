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

void fn_80313f28(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5)
{
    u32 c0eq = 0, c0lt = 0, ca = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    u32 r10 = 0, r11 = 0, r12 = 0, r16 = 0, r17 = 0, r18 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0;
    u32 r25 = 0, r26 = 0, r27 = 0, r28 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f12 = 0.0, f13 = 0.0;
    f64 f31 = 0.0;
    TcArgs a = {0};
    c0eq = (u32)rd8(param_1) == 0xabu;
    r30 = param_2;
    wr32(0x817fdf98u, 0x43300000u);
    r16 = param_3;
    if (!c0eq) {
        r25 = (u32)rd8(param_1 + 3u);
        r9 = (u32)rd8(r25 - 0x7fc627b0u);
        r24 = (u32)rd8(r25 - 0x7fc626b0u);
        if (r9 != 0u) {
            r4 = (u32)rd16(param_1 + 8u);
            r22 = param_1 + 0x20u;
            r21 = r22 + rd32(param_1 + 0xcu);
            r23 = (r9 + 0xdu) & 0xfffffffeu;
            r20 = r21 + rd32(param_1 + 0x10u);
            r28 = (r9 << 1u) & 0xfffffffeu;
            r19 = 0u;
            if (r4 > 1u) {
                r27 = (u32)rd8(param_1 + 4u);
                r6 = r27 & 0x20u;
                if (r6 != 0u || (u32)rd8(param_1 + 5u) > 1u) {
                    if ((r27 & 0x80u) != 0u) {
                        r6 = (u32)param_5 - 1u;
                        if (param_3 < r6) {
                            r3 = (u32)rd8(param_1 + 5u);
                            r26 = r4 - 1u;
                            r0 = r26 ^ 0x80000000u;
                            f5 = rdf64(0x805778b0u);
                            wr32(0x817fdf9cu, r3);
                            f3 = rdf64(0x805778b8u);
                            wr32(0x817fdf9cu, r6);
                            wr32(0x817fdf9cu, r0);
                            f31 = (f64)(f32)((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f5) * (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f3), (f64)(f32)(px_b2f((u64)r6 | 0x4330000000000000ull) - f5)));
                            a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f5) * f31), (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f3));
                            r3 = tc_call(0x802558e4u, &a);
                            r4 = r3 * r26;
                            f2 = rdf64(0x805778b0u);
                            r19 = r3;
                            wr32(0x817fdf9cu, r4);
                            f4 = (f64)(f32)((f64)(f32)((f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f2) * f31) - (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f2));
                            if ((r27 & 0x40u) != 0u && (r3 & 1u) != 0u) {
                                f4 = (f64)(f32)((f64)(f32)(px_b2f((u64)(r26 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805778b8u)) - f4);
                            }
                            r4 = (u32)px_f2b(px_ctiw(f4, ppc_fctiwz(f4)));
                        } else {
                            do {
                                if ((r27 & 0x40u) != 0u) {
                                    r0 = (u32)rd8(param_1 + 5u);
                                    r5 = (r0 >> 0x1fu) & 1u;
                                    r0 = r0 & 1u;
                                    r0 = r0 ^ r5;
                                    r0 = r0 - r5;
                                    if (r0 == 0u) {
                                        r4 = 0u;
                                        break;
                                    }
                                }
                                r4 = (r4 - 1u) & 0xffffu;
                            } while (0);
                            r19 = ((u32)rd8(param_1 + 5u) - 1u) & 0xffu;
                            f4 = (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - rdf64(0x805778b0u));
                        }
                    } else {
                        r7 = r4 - 1u;
                        r19 = ppc_divwu(param_3, r7);
                        do {
                            if ((r27 & 0x40u) != 0u) {
                                if (r6 == 0u) {
                                    r6 = (u32)rd8(param_1 + 5u);
                                    if (r19 >= r6) {
                                        r4 = (r6 >> 0x1fu) & 1u;
                                        r4 = ((r6 & 1u) ^ r4) - r4;
                                        r4 = ppc_cntlzw(r4);
                                        r19 = (r6 - 1u) & 0xffu;
                                        r4 = r7 & 0xffffu & ~(0u - ((r4 >> 5u) & 1u));
                                        break;
                                    }
                                }
                                if ((r19 & 1u) != 0u) {
                                    r4 = ((r7 * (r19 + 1u)) - param_3) & 0xffffu;
                                } else {
                                    r4 = (param_3 - (r19 * r7)) & 0xffffu;
                                }
                            } else {
                                if (r6 == 0u) {
                                    r3 = (u32)rd8(param_1 + 5u);
                                    if (r19 >= r3) {
                                        r4 = r7 & 0xffffu;
                                        r19 = (r3 - 1u) & 0xffu;
                                        break;
                                    }
                                }
                                r4 = (param_3 - (r19 * r7)) & 0xffffu;
                            }
                        } while (0);
                        r0 = r4 & 0xffffu;
                        f1 = rdf64(0x805778b0u);
                        wr32(0x817fdf9cu, r0);
                        f4 = (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f1);
                    }
                } else if ((r27 & 0x80u) != 0u) {
                    if ((u32)param_5 != 1u) {
                        r3 = (r4 - 1u) ^ 0x80000000u;
                        f5 = rdf64(0x805778b0u);
                        wr32(0x817fdf9cu, r3);
                        f3 = rdf64(0x805778b8u);
                        wr32(0x817fdf9cu, r3);
                        f4 = (f64)(f32)((f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f5) * (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f3), (f64)(f32)(px_b2f((u64)((u32)param_5 - 1u) | 0x4330000000000000ull) - f5)));
                        if (f4 > (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f3)) {
                            f4 = (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f3);
                        }
                    } else {
                        f1 = rdf64(0x805778b8u);
                        r0 = (r4 - 1u) ^ 0x80000000u;
                        wr32(0x817fdf9cu, r0);
                        f4 = (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f1);
                    }
                    r4 = (u32)px_f2b(px_ctiw(f4, ppc_fctiwz(f4)));
                } else {
                    r0 = r4 - 1u;
                    r4 = param_3 & 0xffffu;
                    if (param_3 >= r0) {
                        r4 = r0 & 0xffffu;
                    }
                    f4 = (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - rdf64(0x805778b0u));
                }
            } else {
                f4 = (f64)rdf32(0x805778a8u);
                r19 = param_3;
                r4 = 0u;
            }
            r4 = r4 & 0xffffu;
            r3 = (u32)rd16(r22);
            f2 = rdf64(0x805778b8u);
            wr32(0x817fdf9cu, r4 ^ 0x80000000u);
            r18 = r3 - 1u;
            f0 = (f64)rdf32(0x805778c4u);
            r27 = r22 + 4u;
            r6 = 0u;
            r5 = (u32)((s32)(((r18 >> 0x1fu) & 1u) + r18) >> 1);
            f1 = (f64)(f32)ppc_fabs((f64)(f32)((f64)(f32)(rdf64(0x817fdf98u) - f2) - f4));
            r17 = (u32)rd16(r22 + 4u);
            r7 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
            c0eq = r4 == r17;
            do {
                if ((s32)r4 >= (s32)r17) {
                    if (!c0eq) {
                        r16 = (u32)rd16(r27 + (r18 * r23));
                        if ((s32)r16 > (s32)r4) {
                            r3 = (u32)rd16(r27 + (r5 * r23));
                            for (;;) {
                                if ((s32)r6 >= (s32)r5) {
                                    r18 = r6;
                                    r7 = 0u;
                                    fl_ = 1u;
                                    break;
                                }
                                if (r4 == r3) {
                                    fl_ = 2u;
                                    break;
                                }
                                if ((s32)r3 >= (s32)r4) {
                                    r18 = r5;
                                    r16 = r3;
                                } else {
                                    r6 = r5;
                                    r17 = r3;
                                }
                                r3 = r6 + r18;
                                r5 = (u32)((s32)(((r3 >> 0x1fu) & 1u) + r3) >> 1);
                                r3 = (u32)rd16(r27 + (r5 * r23));
                            }
                            if (fl_ == 2u) {
                                fl_ = 0u;
                            } else if (fl_ == 1u) {
                                fl_ = 0u;
                                break;
                            }
                            r18 = r5;
                            if (r7 == 0u) {
                                r17 = r3;
                                r16 = (u32)rd16(r27 + ((r5 + 1u) * r23));
                            }
                        } else {
                            r7 = 1u;
                        }
                    } else {
                        c0eq = r18 == 0u;
                        r18 = 0u;
                        if (!c0eq) {
                            if (r7 == 0u) {
                                r16 = (u32)rd16(r27 + r23);
                            }
                        } else {
                            r7 = 1u;
                        }
                    }
                } else {
                    r18 = 0u;
                    r7 = 1u;
                }
            } while (0);
            if (r7 == 0u) {
                r3 = (u32)rd8(param_1 + 4u);
                r26 = r19;
                if ((r3 & 0x40u) != 0u) {
                    r5 = r3 & 0x20u;
                    if (r5 != 0u || (u32)rd8(param_1 + 5u) > 1u) {
                        r6 = r19 & 1u;
                        if (r6 == 0u && (s32)(r18 + 1u) >= (s32)((u32)rd16(r22) - 1u) && (r5 != 0u || r19 < ((u32)rd8(param_1 + 5u) - 1u))) {
                            r26 = r19 + 1u;
                        }
                        if (r6 != 0u && r18 == 0u && r19 != 0u) {
                            r19 = r19 + 1u;
                        }
                    }
                }
                a.f[0] = (f64)(f32)((f64)rdf32(0x805778c8u) * (f64)(f32)(f4 - (f64)(f32)(px_b2f((u64)(r17 & 0xffffu) | 0x4330000000000000ull) - rdf64(0x805778b0u))));
                r3 = tc_call(0x802558e4u, &a);
                r5 = ppc_divwu(r3, (r16 & 0xffffu) - (r17 & 0xffffu));
                r6 = r27 + (r18 * r23);
                r0 = (u32)rd8(r6 + 2u);
                r4 = r6 + 0xcu;
                r7 = r6 + 4u;
                r6 = r27 + ((r18 + 1u) * r23);
                r3 = (u32)rd8(r6 + 2u);
                r9 = (((0u - r0) | r0) >> 0x1fu) & 1u;
                r6 = r6 + 0xcu;
                r8 = (((0u - r3) | r3) >> 0x1fu) & 1u;
                if (r9 != 0u || r8 != 0u) {
                    if (r9 == 0u || r8 != 0u) {
                        if (r9 != 0u || r8 == 0u) {
                            r0 = r0 & 2u;
                            c0eq = r0 == 0u;
                            r4 = (u32)rd16(r4);
                            r0 = ((u32)param_4 * 0x3f81f635u) + ((u32)rd16(param_1 + 6u) * 0x30a74193u);
                            wr32(0x817fdf7cu, (r19 * 0x7b929u) + r0 + ((r4 * 0x371097e7u) + 0x50000u) - 0x40adu);
                            r10 = (u32)rd8(0x817fdf7eu) ^ (u32)rd8(0x817fdf7fu);
                            r8 = (u32)rd8(0x817fdf7cu);
                            r9 = (u32)rd8(0x817fdf7du) ^ r10;
                            wr8(0x817fdf7eu, (u8)r10);
                            r8 = r8 ^ r9;
                            wr8(0x817fdf7du, (u8)r9);
                            wr8(0x817fdf7cu, (u8)r8);
                            r8 = rd32(0x817fdf7cu);
                            if (!c0eq) {
                                r10 = (u32)rd16(r20);
                                r11 = (r8 >> 0x10u) & 0xffffu;
                                r9 = r20 + (r28 * (r11 - (ppc_divwu(r11, r10) * r10))) + 4u;
                                r8 = (r8 * 0x343fdu) + 0x269ec3u;
                            } else {
                                r4 = r4 * r28;
                                r4 = r21 + r4;
                                r9 = r4 + 4u;
                            }
                            r4 = (u32)rd16(r6);
                            r3 = r3 & 2u;
                            c0eq = r3 == 0u;
                            r0 = (r26 * 0x7b929u) + r0;
                            r0 = r0 + ((r4 * 0x371097e7u) + 0x50000u) - 0x40adu;
                            wr32(0x817fdf78u, r0);
                            r6 = (u32)rd8(0x817fdf7au) ^ (u32)rd8(0x817fdf7bu);
                            r0 = (u32)rd8(0x817fdf78u);
                            r3 = (u32)rd8(0x817fdf79u) ^ r6;
                            wr8(0x817fdf7au, (u8)r6);
                            r0 = r0 ^ r3;
                            wr8(0x817fdf79u, (u8)r3);
                            wr8(0x817fdf78u, (u8)r0);
                            r6 = rd32(0x817fdf78u);
                            if (!c0eq) {
                                r10 = (u32)rd16(r20);
                                r11 = (r6 >> 0x10u) & 0xffffu;
                                r4 = r20 + (r28 * (r11 - (ppc_divwu(r11, r10) * r10))) + 4u;
                                r6 = (r6 * 0x343fdu) + 0x270000u;
                                r6 = r6 - 0x613du;
                            } else {
                                r4 = r21 + (r4 * r28) + 4u;
                            }
                            f1 = rdf64(0x805778b0u);
                            r10 = 1u;
                            f0 = (f64)rdf32(0x805778c8u);
                            f10 = rdf64(0x805778b8u);
                            f8 = (f64)rdf32(0x805778d0u);
                            f6 = (f64)rdf32(0x805778d8u);
                            f5 = (f64)rdf32(0x805778ccu);
                            f4 = (f64)rdf32(0x805778a8u);
                            f3 = (f64)rdf32(0x805778dcu);
                            while ((s32)r10 <= (s32)r24) {
                                if ((r25 & r10) == 0u) {
                                    if (((u32)rd8(param_1 + 4u) & 4u) == 0u) {
                                        r8 = r8 * 0x343fdu;
                                        r6 = r6 * 0x343fdu;
                                        r8 = r8 + 0x270000u;
                                        r8 = r8 - 0x613du;
                                        r6 = r6 + 0x270000u;
                                        r6 = r6 - 0x613du;
                                    }
                                } else {
                                    r12 = (u32)rd8(r9);
                                    r0 = (u32)rd8(r9 + 1u) * (u32)(s16)((r8 >> 0x10u) & 0xffffu);
                                    r9 = r9 + 2u;
                                    ca = ((s32)r0 < 0) && ((r0 & 0x7fffu) != 0u);
                                    r0 = (u32)((s32)r0 >> 15);
                                    r0 = r12 + (u32)((u64)r0 + (u64)ca);
                                    if ((s32)r0 < 0) {
                                        r0 = 0u;
                                    }
                                    if ((s32)r0 > 255) {
                                        r0 = 0xffu;
                                    }
                                    r17 = (u32)rd8(param_1 + 4u) & 4u;
                                    if (r17 == 0u) {
                                        r8 = r8 * 0x343fdu;
                                        r8 = r8 + 0x270000u;
                                        r8 = r8 - 0x613du;
                                    }
                                    r16 = (u32)rd8(r4);
                                    r11 = (u32)rd8(r4 + 1u) * (u32)(s16)((r6 >> 0x10u) & 0xffffu);
                                    r4 = r4 + 2u;
                                    ca = ((s32)r11 < 0) && ((r11 & 0x7fffu) != 0u);
                                    r11 = (u32)((s32)r11 >> 15);
                                    r16 = r16 + (u32)((u64)r11 + (u64)ca);
                                    if ((s32)r16 < 0) {
                                        r16 = 0u;
                                    }
                                    if ((s32)r16 > 255) {
                                        r16 = 0xffu;
                                    }
                                    if (r17 == 0u) {
                                        r6 = r6 * 0x343fdu;
                                        r6 = r6 + 0x270000u;
                                        r6 = r6 - 0x613du;
                                    }
                                    r12 = (u32)rd8(r7);
                                    r11 = r12 & 3u;
                                    c0lt = (s32)r11 < 1;
                                    do {
                                        if (r11 == 1u) {
                                            f13 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - f1), f0);
                                            if (r12 != 1u) {
                                                if (((r12 >> 2u) & 1u) != 0u) {
                                                    f9 = (f64)rdf32(0x805778d4u);
                                                } else {
                                                    f9 = (f64)rdf32(0x805778a8u);
                                                }
                                                if (((r12 >> 3u) & 1u) != 0u) {
                                                    f12 = (f64)rdf32(0x805778d4u);
                                                } else {
                                                    f12 = (f64)rdf32(0x805778a8u);
                                                }
                                                r11 = r0 & 0xffu;
                                                wr32(0x817fdf9cu, r11);
                                                f2 = (f64)(f32)(f12 + (f64)(f32)((f64)(f32)(f13 * (f64)(f32)(f13 * (f64)(f32)((f64)(f32)(f12 + f9) - f8))) + (f64)(f32)(f13 * (f64)(f32)(f5 + (f64)(f32)((f64)(f32)(f6 * f12) - f9)))));
                                                f2 = (f64)(f32)((f64)(f32)(f13 * (f64)(f32)(px_b2f((u64)(((r16 & 0xffu) - r11) ^ 0x80000000u) | 0x4330000000000000ull) - f10)) * f2);
                                                f2 = (f64)(f32)((f64)(f32)(px_b2f((u64)r11 | 0x4330000000000000ull) - f1) + f2);
                                                if (!(f2 < f4)) {
                                                    if (!(f2 > f3)) {
                                                        f2 = px_ctiw(f2, ppc_fctiwz(f2));
                                                        r0 = (u32)px_f2b(f2);
                                                    } else {
                                                        r0 = 0xffu;
                                                    }
                                                } else {
                                                    r0 = 0u;
                                                }
                                            } else {
                                                r11 = r0 & 0xffu;
                                                wr32(0x817fdf9cu, r11);
                                                f2 = (f64)(f32)((f64)(f32)(px_b2f((u64)r11 | 0x4330000000000000ull) - f1) + (f64)(f32)(f13 * (f64)(f32)(f13 * (f64)(f32)((f64)(f32)(f5 - (f64)(f32)(f8 * f13)) * (f64)(f32)(px_b2f((u64)(((r16 & 0xffu) - r11) ^ 0x80000000u) | 0x4330000000000000ull) - f10)))));
                                                f2 = px_ctiw(f2, ppc_fctiwz(f2));
                                                r0 = (u32)px_f2b(f2);
                                            }
                                        } else {
                                            if (!c0lt) {
                                                if ((s32)r11 < 3) {
                                                    r0 = r0 & 0xffu;
                                                    break;
                                                }
                                            } else if ((s32)r11 >= 0) {
                                                r11 = r0 & 0xffu;
                                                r0 = (r11 + (((r5 * ((r16 & 0xffu) - r11)) >> 0x10u) & 0xffffu)) & 0xffu;
                                                break;
                                            }
                                            r0 = 0u;
                                        }
                                    } while (0);
                                    wr8(r30, (u8)r0);
                                }
                                r10 = (r10 << 1u) & 0xfffeu;
                                r7 = r7 + 1u;
                                r30 = r30 + 1u;
                            }
                        } else {
                            r0 = (u32)rd16(r6);
                            r3 = r3 & 2u;
                            c0eq = r3 == 0u;
                            wr32(0x817fdf80u, ((u32)param_4 * 0x3f81f635u) + ((u32)rd16(param_1 + 6u) * 0x30a74193u) + ((r26 * 0x7b929u) + ((r0 * 0x371097e7u) + 0x4bf53u)));
                            r8 = (u32)rd8(0x817fdf82u) ^ (u32)rd8(0x817fdf83u);
                            r3 = (u32)rd8(0x817fdf80u);
                            r6 = (u32)rd8(0x817fdf81u) ^ r8;
                            wr8(0x817fdf82u, (u8)r8);
                            r3 = r3 ^ r6;
                            wr8(0x817fdf81u, (u8)r6);
                            wr8(0x817fdf80u, (u8)r3);
                            r3 = rd32(0x817fdf80u);
                            if (!c0eq) {
                                r9 = (u32)rd16(r20);
                                r10 = (r3 >> 0x10u) & 0xffffu;
                                r3 = r3 * 0x343fdu;
                                r6 = r20 + (r28 * (r10 - (ppc_divwu(r10, r9) * r9))) + 4u;
                                r3 = r3 + 0x270000u;
                                r3 = r3 - 0x613du;
                            } else {
                                r0 = r0 * r28;
                                r6 = r21 + r0 + 4u;
                            }
                            f1 = rdf64(0x805778b0u);
                            r0 = 1u;
                            f0 = (f64)rdf32(0x805778c8u);
                            f10 = rdf64(0x805778b8u);
                            f8 = (f64)rdf32(0x805778d0u);
                            f6 = (f64)rdf32(0x805778d8u);
                            f5 = (f64)rdf32(0x805778ccu);
                            f4 = (f64)rdf32(0x805778a8u);
                            f3 = (f64)rdf32(0x805778dcu);
                            while ((s32)r0 <= (s32)r24) {
                                if ((r25 & r0) != 0u) {
                                    r11 = (u32)rd8(r6);
                                    r9 = (u32)rd8(r6 + 1u) * (u32)(s16)((r3 >> 0x10u) & 0xffffu);
                                    r6 = r6 + 2u;
                                    ca = ((s32)r9 < 0) && ((r9 & 0x7fffu) != 0u);
                                    r9 = (u32)((s32)r9 >> 15);
                                    r12 = r11 + (u32)((u64)r9 + (u64)ca);
                                    if ((s32)r12 < 0) {
                                        r12 = 0u;
                                    }
                                    if ((s32)r12 > 255) {
                                        r12 = 0xffu;
                                    }
                                    r11 = (u32)rd8(r7);
                                    r10 = (u32)rd8(r4);
                                    r9 = r11 & 3u;
                                    c0lt = (s32)r9 < 1;
                                    do {
                                        if (r9 == 1u) {
                                            wr32(0x817fdf9cu, r5);
                                            f13 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - f1), f0);
                                            if (r11 != 1u) {
                                                if (((r11 >> 2u) & 1u) != 0u) {
                                                    f9 = (f64)rdf32(0x805778d4u);
                                                } else {
                                                    f9 = (f64)rdf32(0x805778a8u);
                                                }
                                                if (((r11 >> 3u) & 1u) != 0u) {
                                                    f12 = (f64)rdf32(0x805778d4u);
                                                } else {
                                                    f12 = (f64)rdf32(0x805778a8u);
                                                }
                                                r9 = ((r12 & 0xffu) - r10) ^ 0x80000000u;
                                                wr32(0x817fdf9cu, r9);
                                                f2 = (f64)(f32)(f12 + (f64)(f32)((f64)(f32)(f13 * (f64)(f32)(f13 * (f64)(f32)((f64)(f32)(f12 + f9) - f8))) + (f64)(f32)(f13 * (f64)(f32)(f5 + (f64)(f32)((f64)(f32)(f6 * f12) - f9)))));
                                                f2 = (f64)(f32)((f64)(f32)(f13 * (f64)(f32)(px_b2f((u64)r9 | 0x4330000000000000ull) - f10)) * f2);
                                                f2 = (f64)(f32)((f64)(f32)(px_b2f((u64)r10 | 0x4330000000000000ull) - f1) + f2);
                                                if (!(f2 < f4)) {
                                                    if (!(f2 > f3)) {
                                                        f2 = px_ctiw(f2, ppc_fctiwz(f2));
                                                        r10 = (u32)px_f2b(f2);
                                                    } else {
                                                        r10 = 0xffu;
                                                    }
                                                } else {
                                                    r10 = 0u;
                                                }
                                            } else {
                                                r9 = ((r12 & 0xffu) - r10) ^ 0x80000000u;
                                                wr32(0x817fdf9cu, r9);
                                                f2 = (f64)(f32)((f64)(f32)(px_b2f((u64)r10 | 0x4330000000000000ull) - f1) + (f64)(f32)(f13 * (f64)(f32)(f13 * (f64)(f32)((f64)(f32)(f5 - (f64)(f32)(f8 * f13)) * (f64)(f32)(px_b2f((u64)r9 | 0x4330000000000000ull) - f10)))));
                                                f2 = px_ctiw(f2, ppc_fctiwz(f2));
                                                r10 = (u32)px_f2b(f2);
                                            }
                                        } else {
                                            if (!c0lt) {
                                                if ((s32)r9 < 3) break;
                                            } else if ((s32)r9 >= 0) {
                                                r10 = (r10 + (((r5 * ((r12 & 0xffu) - r10)) >> 0x10u) & 0xffffu)) & 0xffu;
                                                break;
                                            }
                                            r10 = 0u;
                                        }
                                    } while (0);
                                    wr8(r30, (u8)r10);
                                    r4 = r4 + 1u;
                                }
                                if (((u32)rd8(param_1 + 4u) & 4u) == 0u) {
                                    r3 = r3 * 0x343fdu;
                                    r3 = r3 + 0x270000u;
                                    r3 = r3 - 0x613du;
                                }
                                r0 = (r0 << 1u) & 0xfffeu;
                                r7 = r7 + 1u;
                                r30 = r30 + 1u;
                            }
                        }
                    } else {
                        r3 = (u32)rd16(r4);
                        r0 = r0 & 2u;
                        c0eq = r0 == 0u;
                        wr32(0x817fdf84u, ((u32)param_4 * 0x3f81f635u) + ((u32)rd16(param_1 + 6u) * 0x30a74193u) + ((r19 * 0x7b929u) + ((r3 * 0x371097e7u) + 0x4bf53u)));
                        r8 = (u32)rd8(0x817fdf86u) ^ (u32)rd8(0x817fdf87u);
                        r0 = (u32)rd8(0x817fdf84u);
                        r4 = (u32)rd8(0x817fdf85u) ^ r8;
                        wr8(0x817fdf86u, (u8)r8);
                        r0 = r0 ^ r4;
                        wr8(0x817fdf85u, (u8)r4);
                        wr8(0x817fdf84u, (u8)r0);
                        r4 = rd32(0x817fdf84u);
                        if (!c0eq) {
                            r9 = (u32)rd16(r20);
                            r10 = (r4 >> 0x10u) & 0xffffu;
                            r4 = r4 * 0x343fdu;
                            r3 = r20 + (r28 * (r10 - (ppc_divwu(r10, r9) * r9))) + 4u;
                            r4 = r4 + 0x270000u;
                            r4 = r4 - 0x613du;
                        } else {
                            r3 = r21 + (r3 * r28);
                            r3 = r3 + 4u;
                        }
                        f1 = rdf64(0x805778b0u);
                        r0 = 1u;
                        f0 = (f64)rdf32(0x805778c8u);
                        f10 = rdf64(0x805778b8u);
                        f8 = (f64)rdf32(0x805778d0u);
                        f6 = (f64)rdf32(0x805778d8u);
                        f5 = (f64)rdf32(0x805778ccu);
                        f4 = (f64)rdf32(0x805778a8u);
                        f3 = (f64)rdf32(0x805778dcu);
                        while ((s32)r0 <= (s32)r24) {
                            if ((r25 & r0) != 0u) {
                                r11 = (u32)rd8(r3);
                                r9 = (u32)rd8(r3 + 1u) * (u32)(s16)((r4 >> 0x10u) & 0xffffu);
                                r3 = r3 + 2u;
                                ca = ((s32)r9 < 0) && ((r9 & 0x7fffu) != 0u);
                                r9 = (u32)((s32)r9 >> 15);
                                r12 = r11 + (u32)((u64)r9 + (u64)ca);
                                if ((s32)r12 < 0) {
                                    r12 = 0u;
                                }
                                if ((s32)r12 > 255) {
                                    r12 = 0xffu;
                                }
                                r10 = (u32)rd8(r7);
                                r11 = (u32)rd8(r6);
                                r9 = r10 & 3u;
                                c0lt = (s32)r9 < 1;
                                do {
                                    if (r9 == 1u) {
                                        f13 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - f1), f0);
                                        if (r10 != 1u) {
                                            if (((r10 >> 2u) & 1u) != 0u) {
                                                f9 = (f64)rdf32(0x805778d4u);
                                            } else {
                                                f9 = (f64)rdf32(0x805778a8u);
                                            }
                                            if (((r10 >> 3u) & 1u) != 0u) {
                                                f12 = (f64)rdf32(0x805778d4u);
                                            } else {
                                                f12 = (f64)rdf32(0x805778a8u);
                                            }
                                            r10 = r12 & 0xffu;
                                            wr32(0x817fdf9cu, r10);
                                            f2 = (f64)(f32)(f12 + (f64)(f32)((f64)(f32)(f13 * (f64)(f32)(f13 * (f64)(f32)((f64)(f32)(f12 + f9) - f8))) + (f64)(f32)(f13 * (f64)(f32)(f5 + (f64)(f32)((f64)(f32)(f6 * f12) - f9)))));
                                            f2 = (f64)(f32)((f64)(f32)(f13 * (f64)(f32)(px_b2f((u64)((r11 - r10) ^ 0x80000000u) | 0x4330000000000000ull) - f10)) * f2);
                                            f2 = (f64)(f32)((f64)(f32)(px_b2f((u64)r10 | 0x4330000000000000ull) - f1) + f2);
                                            if (!(f2 < f4)) {
                                                if (!(f2 > f3)) {
                                                    f2 = px_ctiw(f2, ppc_fctiwz(f2));
                                                    r9 = (u32)px_f2b(f2);
                                                } else {
                                                    r9 = 0xffu;
                                                }
                                            } else {
                                                r9 = 0u;
                                            }
                                        } else {
                                            r10 = r12 & 0xffu;
                                            wr32(0x817fdf9cu, r10);
                                            f2 = (f64)(f32)((f64)(f32)(px_b2f((u64)r10 | 0x4330000000000000ull) - f1) + (f64)(f32)(f13 * (f64)(f32)(f13 * (f64)(f32)((f64)(f32)(f5 - (f64)(f32)(f8 * f13)) * (f64)(f32)(px_b2f((u64)((r11 - r10) ^ 0x80000000u) | 0x4330000000000000ull) - f10)))));
                                            f2 = px_ctiw(f2, ppc_fctiwz(f2));
                                            r9 = (u32)px_f2b(f2);
                                        }
                                    } else {
                                        if (!c0lt) {
                                            if ((s32)r9 < 3) {
                                                r9 = r12 & 0xffu;
                                                break;
                                            }
                                        } else if ((s32)r9 >= 0) {
                                            r10 = r12 & 0xffu;
                                            r9 = (r10 + (((r5 * (r11 - r10)) >> 0x10u) & 0xffffu)) & 0xffu;
                                            break;
                                        }
                                        r9 = 0u;
                                    }
                                } while (0);
                                wr8(r30, (u8)r9);
                                r6 = r6 + 1u;
                            }
                            if (((u32)rd8(param_1 + 4u) & 4u) == 0u) {
                                r4 = r4 * 0x343fdu;
                                r4 = r4 + 0x270000u;
                                r4 = r4 - 0x613du;
                            }
                            r0 = (r0 << 1u) & 0xfffeu;
                            r7 = r7 + 1u;
                            r30 = r30 + 1u;
                        }
                    }
                } else {
                    f1 = rdf64(0x805778b0u);
                    r10 = 1u;
                    f0 = (f64)rdf32(0x805778c8u);
                    f10 = rdf64(0x805778b8u);
                    f8 = (f64)rdf32(0x805778d0u);
                    f6 = (f64)rdf32(0x805778d8u);
                    f5 = (f64)rdf32(0x805778ccu);
                    f4 = (f64)rdf32(0x805778a8u);
                    f3 = (f64)rdf32(0x805778dcu);
                    while ((s32)r10 <= (s32)r24) {
                        if ((r25 & r10) != 0u) {
                            r9 = (u32)rd8(r6);
                            r8 = (u32)rd8(r4);
                            if (r8 != r9) {
                                r3 = (u32)rd8(r7);
                                r0 = r3 & 3u;
                                c0lt = (s32)r0 < 1;
                                do {
                                    if (r0 == 1u) {
                                        wr32(0x817fdf9cu, r5);
                                        f13 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - f1), f0);
                                        if (r3 != 1u) {
                                            if (((r3 >> 2u) & 1u) != 0u) {
                                                f9 = (f64)rdf32(0x805778d4u);
                                            } else {
                                                f9 = (f64)rdf32(0x805778a8u);
                                            }
                                            if (((r3 >> 3u) & 1u) != 0u) {
                                                f12 = (f64)rdf32(0x805778d4u);
                                            } else {
                                                f12 = (f64)rdf32(0x805778a8u);
                                            }
                                            r0 = (r9 - r8) ^ 0x80000000u;
                                            wr32(0x817fdf9cu, r0);
                                            f2 = (f64)(f32)(f12 + (f64)(f32)((f64)(f32)(f13 * (f64)(f32)(f13 * (f64)(f32)((f64)(f32)(f12 + f9) - f8))) + (f64)(f32)(f13 * (f64)(f32)(f5 + (f64)(f32)((f64)(f32)(f6 * f12) - f9)))));
                                            f2 = (f64)(f32)((f64)(f32)(f13 * (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f10)) * f2);
                                            f2 = (f64)(f32)((f64)(f32)(px_b2f((u64)r8 | 0x4330000000000000ull) - f1) + f2);
                                            if (!(f2 < f4)) {
                                                if (!(f2 > f3)) {
                                                    f2 = px_ctiw(f2, ppc_fctiwz(f2));
                                                    r8 = (u32)px_f2b(f2);
                                                } else {
                                                    r8 = 0xffu;
                                                }
                                            } else {
                                                r8 = 0u;
                                            }
                                        } else {
                                            r0 = (r9 - r8) ^ 0x80000000u;
                                            wr32(0x817fdf9cu, r0);
                                            f2 = (f64)(f32)((f64)(f32)(px_b2f((u64)r8 | 0x4330000000000000ull) - f1) + (f64)(f32)(f13 * (f64)(f32)(f13 * (f64)(f32)((f64)(f32)(f5 - (f64)(f32)(f8 * f13)) * (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f10)))));
                                            f2 = px_ctiw(f2, ppc_fctiwz(f2));
                                            r8 = (u32)px_f2b(f2);
                                        }
                                    } else {
                                        if (!c0lt) {
                                            if ((s32)r0 < 3) break;
                                        } else if ((s32)r0 >= 0) {
                                            r8 = (r8 + (((r5 * (r9 - r8)) >> 0x10u) & 0xffffu)) & 0xffu;
                                            break;
                                        }
                                        r8 = 0u;
                                    }
                                } while (0);
                                wr8(r30, (u8)r8);
                            } else {
                                wr8(r30, (u8)r8);
                            }
                            r4 = r4 + 1u;
                            r6 = r6 + 1u;
                        }
                        r10 = (r10 << 1u) & 0xfffeu;
                        r7 = r7 + 1u;
                        r30 = r30 + 1u;
                    }
                }
            } else {
                r4 = r27 + (r18 * r23);
                r9 = (u32)rd8(r4 + 2u);
                r4 = r4 + 0xcu;
                if (r9 != 0u) {
                    r0 = (u32)rd16(r4);
                    wr32(0x817fdf88u, ((u32)param_4 * 0x3f81f635u) + ((u32)rd16(param_1 + 6u) * 0x30a74193u) + ((r19 * 0x7b929u) + ((r0 * 0x371097e7u) + 0x4bf53u)));
                    r5 = (u32)rd8(0x817fdf8au) ^ (u32)rd8(0x817fdf8bu);
                    r3 = (u32)rd8(0x817fdf88u);
                    r4 = (u32)rd8(0x817fdf89u) ^ r5;
                    wr8(0x817fdf8au, (u8)r5);
                    r3 = r3 ^ r4;
                    wr8(0x817fdf89u, (u8)r4);
                    wr8(0x817fdf88u, (u8)r3);
                    r3 = rd32(0x817fdf88u);
                    if ((r9 & 2u) != 0u) {
                        r6 = (u32)rd16(r20);
                        r7 = (r3 >> 0x10u) & 0xffffu;
                        r3 = r3 * 0x343fdu;
                        r7 = r20 + (r28 * (r7 - (ppc_divwu(r7, r6) * r6))) + 4u;
                        r3 = r3 + 0x270000u;
                        r3 = r3 - 0x613du;
                    } else {
                        r0 = r0 * r28;
                        r7 = r21 + r0 + 4u;
                    }
                    r8 = 1u;
                    while ((s32)r8 <= (s32)r24) {
                        if ((r25 & r8) != 0u) {
                            r6 = (u32)rd8(r7);
                            r0 = (u32)rd8(r7 + 1u) * (u32)(s16)((r3 >> 0x10u) & 0xffffu);
                            r7 = r7 + 2u;
                            ca = ((s32)r0 < 0) && ((r0 & 0x7fffu) != 0u);
                            r0 = (u32)((s32)r0 >> 15);
                            r0 = r6 + (u32)((u64)r0 + (u64)ca);
                            if ((s32)r0 < 0) {
                                r0 = 0u;
                            }
                            if ((s32)r0 > 255) {
                                r0 = 0xffu;
                            }
                            wr8(r30, (u8)r0);
                        }
                        if (((u32)rd8(param_1 + 4u) & 4u) == 0u) {
                            r3 = r3 * 0x343fdu;
                            r3 = r3 + 0x270000u;
                            r3 = r3 - 0x613du;
                        }
                        r8 = (r8 << 1u) & 0xfffeu;
                        r30 = r30 + 1u;
                    }
                } else {
                    r3 = 1u;
                    while ((s32)r3 <= (s32)r24) {
                        if ((r25 & r3) != 0u) {
                            r0 = (u32)rd8(r4);
                            r4 = r4 + 1u;
                            wr8(r30, (u8)r0);
                        }
                        r3 = (r3 << 1u) & 0xfffeu;
                        r30 = r30 + 1u;
                    }
                }
            }
        }
    } else {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = (u32)param_5;
        (void)tc_call(0x8031878cu, &a);
    }
    return;
}
