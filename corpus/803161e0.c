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

void fn_803161e0(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5)
{
    u32 c0eq = 0, c0lt = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    u32 r11 = 0, r12 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r29 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r8 = (u32)rd16(param_1 + 8u);
    r25 = param_1 + 0x20u;
    r0 = rd32(param_1 + 0x10u);
    r24 = r25 + rd32(param_1 + 0xcu);
    r26 = (u32)rd8(param_1 + 3u);
    wr32(0x817fdfa8u, 0x43300000u);
    r29 = param_2;
    r31 = param_3;
    r23 = r24 + r0;
    r6 = 0u;
    if (r8 > 1u) {
        r22 = (u32)rd8(param_1 + 4u);
        r4 = r22 & 0x20u;
        if (r4 != 0u || (u32)rd8(param_1 + 5u) > 1u) {
            if ((r22 & 0x80u) != 0u) {
                r4 = (u32)param_5 - 1u;
                if (param_3 < r4) {
                    r3 = (u32)rd8(param_1 + 5u);
                    r27 = r8 - 1u;
                    r0 = r27 ^ 0x80000000u;
                    f5 = rdf64(0x805778b0u);
                    wr32(0x817fdfacu, r3);
                    f3 = rdf64(0x805778b8u);
                    wr32(0x817fdfacu, r4);
                    wr32(0x817fdfacu, r0);
                    f31 = (f64)(f32)((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f5) * (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f3), (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f5)));
                    a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f5) * f31), (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f3));
                    r3 = tc_call(0x802558e4u, &a);
                    r4 = r3 * r27;
                    f2 = rdf64(0x805778b0u);
                    r6 = r3;
                    wr32(0x817fdfacu, r4);
                    f4 = (f64)(f32)((f64)(f32)((f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f2) * f31) - (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f2));
                    if ((r22 & 0x40u) != 0u && (r3 & 1u) != 0u) {
                        f4 = (f64)(f32)((f64)(f32)(px_b2f((u64)(r27 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805778b8u)) - f4);
                    }
                    r7 = (u32)px_f2b(px_ctiw(f4, ppc_fctiwz(f4)));
                } else {
                    do {
                        if ((r22 & 0x40u) != 0u) {
                            r0 = (u32)rd8(param_1 + 5u);
                            r4 = (r0 >> 0x1fu) & 1u;
                            r0 = r0 & 1u;
                            r0 = r0 ^ r4;
                            r0 = r0 - r4;
                            if (r0 == 0u) {
                                r7 = 0u;
                                break;
                            }
                        }
                        r7 = (r8 - 1u) & 0xffffu;
                    } while (0);
                    r6 = ((u32)rd8(param_1 + 5u) - 1u) & 0xffu;
                    f4 = (f64)(f32)(px_b2f((u64)r7 | 0x4330000000000000ull) - rdf64(0x805778b0u));
                }
            } else {
                r7 = r8 - 1u;
                r6 = ppc_divwu(param_3, r7);
                do {
                    if ((r22 & 0x40u) != 0u) {
                        if (r4 == 0u) {
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
                        if (r4 == 0u) {
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
                wr32(0x817fdfacu, r0);
                f4 = (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f1);
            }
        } else if ((r22 & 0x80u) != 0u) {
            if ((u32)param_5 != 1u) {
                r3 = (r8 - 1u) ^ 0x80000000u;
                f5 = rdf64(0x805778b0u);
                wr32(0x817fdfacu, r3);
                f3 = rdf64(0x805778b8u);
                wr32(0x817fdfacu, r3);
                f4 = (f64)(f32)((f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f5) * (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f3), (f64)(f32)(px_b2f((u64)((u32)param_5 - 1u) | 0x4330000000000000ull) - f5)));
                if (f4 > (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f3)) {
                    f4 = (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f3);
                }
            } else {
                f1 = rdf64(0x805778b8u);
                r0 = (r8 - 1u) ^ 0x80000000u;
                wr32(0x817fdfacu, r0);
                f4 = (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f1);
            }
            r7 = (u32)px_f2b(px_ctiw(f4, ppc_fctiwz(f4)));
        } else {
            r0 = r8 - 1u;
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
    r5 = (u32)rd8(r26 - 0x7fc627b0u);
    r8 = (u32)rd8(r26 - 0x7fc626b0u);
    if (r5 != 0u) {
        r0 = r7 & 0xffffu;
        r4 = (u32)rd16(r25);
        f2 = rdf64(0x805778b8u);
        wr32(0x817fdfacu, r0 ^ 0x80000000u);
        r10 = r4 - 1u;
        r11 = (r5 << 2u) & 0xfffffffcu;
        r9 = (r5 << 3u) & 0xfffffff8u;
        f0 = (f64)rdf32(0x805778c4u);
        r5 = r25 + 4u;
        r4 = r11 + 0xcu;
        r3 = r9 + 4u;
        r22 = (u32)((s32)(((r10 >> 0x1fu) & 1u) + r10) >> 1);
        r27 = 0u;
        f1 = (f64)(f32)ppc_fabs((f64)(f32)((f64)(f32)(rdf64(0x817fdfa8u) - f2) - f4));
        r11 = (u32)rd16(r25 + 4u);
        r7 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
        c0eq = r0 == r11;
        do {
            if ((s32)r0 >= (s32)r11) {
                if (!c0eq) {
                    r31 = (u32)rd16(r5 + (r10 * r4));
                    if ((s32)r31 > (s32)r0) {
                        r12 = (u32)rd16(r5 + (r22 * r4));
                        for (;;) {
                            if ((s32)r27 >= (s32)r22) {
                                r10 = r27;
                                r7 = 0u;
                                fl_ = 1u;
                                break;
                            }
                            if (r0 == r12) {
                                fl_ = 2u;
                                break;
                            }
                            if ((s32)r12 >= (s32)r0) {
                                r10 = r22;
                                r31 = r12;
                            } else {
                                r27 = r22;
                                r11 = r12;
                            }
                            r22 = r27 + r10;
                            r22 = (u32)((s32)(((r22 >> 0x1fu) & 1u) + r22) >> 1);
                            r12 = (u32)rd16(r5 + (r22 * r4));
                        }
                        if (fl_ == 2u) {
                            fl_ = 0u;
                        } else if (fl_ == 1u) {
                            fl_ = 0u;
                            break;
                        }
                        r10 = r22;
                        if (r7 == 0u) {
                            r11 = r12;
                            r31 = (u32)rd16(r5 + ((r22 + 1u) * r4));
                        }
                    } else {
                        r7 = 1u;
                    }
                } else {
                    c0eq = r10 == 0u;
                    r10 = 0u;
                    if (!c0eq) {
                        if (r7 == 0u) {
                            r31 = (u32)rd16(r5 + r4);
                        }
                    } else {
                        r7 = 1u;
                    }
                }
            } else {
                r10 = 0u;
                r7 = 1u;
            }
        } while (0);
        if (r7 == 0u) {
            r12 = (u32)rd8(param_1 + 4u);
            r7 = r6;
            if ((r12 & 0x40u) != 0u) {
                r27 = r12 & 0x20u;
                if (r27 != 0u || (u32)rd8(param_1 + 5u) > 1u) {
                    r21 = r6 & 1u;
                    if (r21 == 0u && (s32)(r10 + 1u) >= (s32)((u32)rd16(r25) - 1u) && (r27 != 0u || r6 < ((u32)rd8(param_1 + 5u) - 1u))) {
                        r7 = r6 + 1u;
                    }
                    if (r21 != 0u && r10 == 0u && r6 != 0u) {
                        r6 = r6 + 1u;
                    }
                }
            }
            r11 = r11 & 0xffffu;
            wr32(0x817fdfacu, r11);
            r11 = ((r31 & 0xffffu) - r11) ^ 0x80000000u;
            r0 = r10 + 1u;
            r10 = r10 * r4;
            f0 = (f64)(f32)(px_b2f((u64)r11 | 0x4330000000000000ull) - rdf64(0x805778b8u));
            r12 = r5 + r10;
            r11 = r0 * r4;
            r0 = (u32)rd8(r12 + 2u);
            f2 = (f64)(f32)px_fdiv((f64)(f32)(f4 - (f64)(f32)(rdf64(0x817fdfa8u) - rdf64(0x805778b0u))), f0);
            r10 = r12 + 0xcu;
            r5 = r5 + r11;
            r21 = (((0u - r0) | r0) >> 0x1fu) & 1u;
            r4 = (u32)rd8(r5 + 2u);
            r11 = r12 + 4u;
            r5 = r5 + 0xcu;
            r12 = (((0u - r4) | r4) >> 0x1fu) & 1u;
            if (r21 != 0u || r12 != 0u) {
                if (r21 == 0u || r12 != 0u) {
                    if (r21 != 0u || r12 == 0u) {
                        r0 = r0 & 2u;
                        c0eq = r0 == 0u;
                        r10 = (u32)rd16(r10);
                        r6 = r6 * 0x7b929u;
                        r0 = ((u32)param_4 * 0x3f81f635u) + ((u32)rd16(param_1 + 6u) * 0x30a74193u);
                        r6 = r6 + r0;
                        r6 = r6 + ((r10 * 0x371097e7u) + 0x50000u);
                        r6 = r6 - 0x40adu;
                        wr32(0x817fdf8cu, r6);
                        r25 = (u32)rd8(0x817fdf8eu) ^ (u32)rd8(0x817fdf8fu);
                        r6 = (u32)rd8(0x817fdf8cu);
                        r12 = (u32)rd8(0x817fdf8du) ^ r25;
                        wr8(0x817fdf8eu, (u8)r25);
                        r6 = r6 ^ r12;
                        wr8(0x817fdf8du, (u8)r12);
                        wr8(0x817fdf8cu, (u8)r6);
                        r6 = rd32(0x817fdf8cu);
                        if (!c0eq) {
                            r25 = (u32)rd16(r23);
                            r27 = (r6 >> 0x10u) & 0xffffu;
                            r6 = r6 * 0x343fdu;
                            r6 = r6 + 0x270000u;
                            r6 = r6 - 0x613du;
                            r10 = r23 + (r3 * (r27 - (ppc_divwu(r27, r25) * r25))) + 4u;
                        } else {
                            r10 = r10 * r3;
                            r10 = r24 + r10;
                            r10 = r10 + 4u;
                        }
                        r5 = (u32)rd16(r5);
                        r7 = r7 * 0x7b929u;
                        r4 = r4 & 2u;
                        c0eq = r4 == 0u;
                        r0 = r7 + r0;
                        r0 = r0 + ((r5 * 0x371097e7u) + 0x50000u) - 0x40adu;
                        wr32(0x817fdf88u, r0);
                        r7 = (u32)rd8(0x817fdf8au) ^ (u32)rd8(0x817fdf8bu);
                        r0 = (u32)rd8(0x817fdf88u);
                        r4 = (u32)rd8(0x817fdf89u) ^ r7;
                        wr8(0x817fdf8au, (u8)r7);
                        r0 = r0 ^ r4;
                        wr8(0x817fdf89u, (u8)r4);
                        wr8(0x817fdf88u, (u8)r0);
                        r4 = rd32(0x817fdf88u);
                        if (!c0eq) {
                            r12 = (u32)rd16(r23);
                            r24 = (r4 >> 0x10u) & 0xffffu;
                            r3 = r3 * (r24 - (ppc_divwu(r24, r12) * r12));
                            r4 = r4 * 0x343fdu;
                            r3 = r23 + r3;
                            r3 = r3 + 4u;
                            r4 = r4 + 0x270000u;
                            r4 = r4 - 0x613du;
                        } else {
                            r3 = r24 + (r5 * r3);
                            r3 = r3 + 4u;
                        }
                        r0 = 0u;
                        if ((u32)rd8(r10 + r9) != 0u) {
                            if ((r6 & 0x10000u) == 0u) {
                                r0 = 1u;
                            }
                            r6 = (r6 * 0x343fdu) + 0x270000u;
                            r6 = r6 - 0x613du;
                        }
                        r5 = 0u;
                        if ((u32)rd8(r3 + r9) != 0u) {
                            if ((r4 & 0x10000u) == 0u) {
                                r5 = 1u;
                            }
                            r4 = r4 * 0x343fdu;
                            r4 = r4 + 0x270000u;
                            r4 = r4 - 0x613du;
                        }
                        f0 = rdf64(0x805778b0u);
                        r21 = 1u;
                        f7 = (f64)rdf32(0x805778d0u);
                        f5 = (f64)rdf32(0x805778d8u);
                        f4 = (f64)rdf32(0x805778ccu);
                        while ((s32)r21 <= (s32)r8) {
                            if ((r26 & r21) != 0u) {
                                r9 = (r6 >> 0x10u) & 0xffffu;
                                f3 = (f64)rdf32(r10 + 4u);
                                wr32(0x817fdfacu, r9);
                                f6 = (f64)rdf32(r10);
                                r10 = r10 + 8u;
                                f1 = (f64)(f32)(f6 + (f64)(f32)(f3 * (f64)(f32)(px_b2f((u64)r9 | 0x4330000000000000ull) - f0)));
                                if (r0 != 0u) {
                                    f1 = -f1;
                                }
                                f6 = (f64)rdf32(r3 + 4u);
                                f8 = (f64)rdf32(r3);
                                r3 = r3 + 8u;
                                f8 = (f64)(f32)(f8 + (f64)(f32)(f6 * (f64)(f32)(px_b2f((u64)((r4 >> 0x10u) & 0xffffu) | 0x4330000000000000ull) - f0)));
                                if (r5 != 0u) {
                                    f8 = -f8;
                                }
                                r12 = (u32)rd8(r11);
                                r9 = r12 & 3u;
                                c0lt = (s32)r9 < 1;
                                do {
                                    if (r9 == 1u) {
                                        if (r12 != 1u) {
                                            if (((r12 >> 3u) & 1u) != 0u) {
                                                f9 = (f64)rdf32(0x805778d4u);
                                            } else {
                                                f9 = (f64)rdf32(0x805778a8u);
                                            }
                                            if (((r12 >> 2u) & 1u) != 0u) {
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
                                            if ((s32)r9 < 3) break;
                                        } else if ((s32)r9 >= 0) {
                                            f1 = (f64)(f32)(f1 + (f64)(f32)(f2 * (f64)(f32)(f8 - f1)));
                                            break;
                                        }
                                        f1 = (f64)rdf32(0x805778a8u);
                                    }
                                } while (0);
                                wrf32d(r29, f1);
                            }
                            r11 = r11 + 1u;
                            r29 = r29 + 4u;
                            if (((u32)rd8(param_1 + 4u) & 4u) == 0u) {
                                r6 = r6 * 0x343fdu;
                                r4 = r4 * 0x343fdu;
                                r6 = r6 + 0x270000u;
                                r6 = r6 - 0x613du;
                                r4 = r4 + 0x270000u;
                                r4 = r4 - 0x613du;
                            }
                            r21 = (r21 << 1u) & 0xfffeu;
                        }
                    } else {
                        r0 = (u32)rd16(r5);
                        r4 = r4 & 2u;
                        c0eq = r4 == 0u;
                        wr32(0x817fdf90u, ((u32)param_4 * 0x3f81f635u) + ((u32)rd16(param_1 + 6u) * 0x30a74193u) + ((r7 * 0x7b929u) + ((r0 * 0x371097e7u) + 0x4bf53u)));
                        r6 = (u32)rd8(0x817fdf92u) ^ (u32)rd8(0x817fdf93u);
                        r4 = (u32)rd8(0x817fdf90u);
                        r5 = (u32)rd8(0x817fdf91u) ^ r6;
                        wr8(0x817fdf92u, (u8)r6);
                        r4 = r4 ^ r5;
                        wr8(0x817fdf91u, (u8)r5);
                        wr8(0x817fdf90u, (u8)r4);
                        r4 = rd32(0x817fdf90u);
                        if (!c0eq) {
                            r7 = (u32)rd16(r23);
                            r12 = (r4 >> 0x10u) & 0xffffu;
                            r6 = r23 + (r3 * (r12 - (ppc_divwu(r12, r7) * r7))) + 4u;
                            r4 = (r4 * 0x343fdu) + 0x269ec3u;
                        } else {
                            r0 = r0 * r3;
                            r6 = r24 + r0 + 4u;
                        }
                        r7 = 0u;
                        if ((u32)rd8(r6 + r9) != 0u) {
                            if ((r4 & 0x10000u) == 0u) {
                                r7 = 1u;
                            }
                            r4 = (r4 * 0x343fdu) + 0x270000u;
                            r4 = r4 - 0x613du;
                        }
                        f7 = rdf64(0x805778b0u);
                        r9 = 1u;
                        f5 = (f64)rdf32(0x805778d0u);
                        f3 = (f64)rdf32(0x805778d8u);
                        f1 = (f64)rdf32(0x805778ccu);
                        while ((s32)r9 <= (s32)r8) {
                            if ((r26 & r9) != 0u) {
                                f4 = (f64)rdf32(r6 + 4u);
                                f6 = (f64)rdf32(r6);
                                r6 = r6 + 8u;
                                f6 = (f64)(f32)(f6 + (f64)(f32)(f4 * (f64)(f32)(px_b2f((u64)((r4 >> 0x10u) & 0xffffu) | 0x4330000000000000ull) - f7)));
                                if (r7 != 0u) {
                                    f6 = -f6;
                                }
                                r3 = (u32)rd8(r11);
                                f8 = (f64)rdf32(r10);
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
                                wrf32d(r29, f8);
                                r10 = r10 + 4u;
                            }
                            r11 = r11 + 1u;
                            r29 = r29 + 4u;
                            if (((u32)rd8(param_1 + 4u) & 4u) == 0u) {
                                r4 = (r4 * 0x343fdu) + 0x270000u;
                                r4 = r4 - 0x613du;
                            }
                            r9 = (r9 << 1u) & 0xfffeu;
                        }
                    }
                } else {
                    r4 = (u32)rd16(r10);
                    r0 = r0 & 2u;
                    c0eq = r0 == 0u;
                    wr32(0x817fdf94u, ((u32)param_4 * 0x3f81f635u) + ((u32)rd16(param_1 + 6u) * 0x30a74193u) + ((r6 * 0x7b929u) + ((r4 * 0x371097e7u) + 0x4bf53u)));
                    r7 = (u32)rd8(0x817fdf96u) ^ (u32)rd8(0x817fdf97u);
                    r0 = (u32)rd8(0x817fdf94u);
                    r6 = (u32)rd8(0x817fdf95u) ^ r7;
                    wr8(0x817fdf96u, (u8)r7);
                    r0 = r0 ^ r6;
                    wr8(0x817fdf95u, (u8)r6);
                    wr8(0x817fdf94u, (u8)r0);
                    r6 = rd32(0x817fdf94u);
                    if (!c0eq) {
                        r10 = (u32)rd16(r23);
                        r12 = (r6 >> 0x10u) & 0xffffu;
                        r7 = r23 + (r3 * (r12 - (ppc_divwu(r12, r10) * r10))) + 4u;
                        r6 = (r6 * 0x343fdu) + 0x270000u;
                        r6 = r6 - 0x613du;
                    } else {
                        r3 = r24 + (r4 * r3);
                        r7 = r3 + 4u;
                    }
                    r0 = (u32)rd8(r7 + r9);
                    r9 = 0u;
                    if (r0 != 0u) {
                        if ((r6 & 0x10000u) == 0u) {
                            r9 = 1u;
                        }
                        r6 = (r6 * 0x343fdu) + 0x270000u;
                        r6 = r6 - 0x613du;
                    }
                    f7 = rdf64(0x805778b0u);
                    r10 = 1u;
                    f5 = (f64)rdf32(0x805778d0u);
                    f3 = (f64)rdf32(0x805778d8u);
                    f1 = (f64)rdf32(0x805778ccu);
                    while ((s32)r10 <= (s32)r8) {
                        if ((r26 & r10) != 0u) {
                            r0 = (r6 >> 0x10u) & 0xffffu;
                            f4 = (f64)rdf32(r7 + 4u);
                            wr32(0x817fdfacu, r0);
                            f6 = (f64)rdf32(r7);
                            r7 = r7 + 8u;
                            f10 = (f64)(f32)(f6 + (f64)(f32)(f4 * (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f7)));
                            if (r9 != 0u) {
                                f10 = -f10;
                            }
                            r3 = (u32)rd8(r11);
                            f6 = (f64)rdf32(r5);
                            r0 = r3 & 3u;
                            c0lt = (s32)r0 < 1;
                            do {
                                if (r0 == 1u) {
                                    if (r3 != 1u) {
                                        if (((r3 >> 3u) & 1u) != 0u) {
                                            f8 = (f64)rdf32(0x805778d4u);
                                        } else {
                                            f8 = (f64)rdf32(0x805778a8u);
                                        }
                                        if (((r3 >> 2u) & 1u) != 0u) {
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
                            wrf32d(r29, f10);
                            r5 = r5 + 4u;
                        }
                        r11 = r11 + 1u;
                        r29 = r29 + 4u;
                        if (((u32)rd8(param_1 + 4u) & 4u) == 0u) {
                            r6 = (r6 * 0x343fdu) + 0x270000u;
                            r6 = r6 - 0x613du;
                        }
                        r10 = (r10 << 1u) & 0xfffeu;
                    }
                }
            } else {
                f5 = (f64)rdf32(0x805778d0u);
                r4 = 1u;
                f3 = (f64)rdf32(0x805778d8u);
                f1 = (f64)rdf32(0x805778ccu);
                while ((s32)r4 <= (s32)r8) {
                    if ((r26 & r4) != 0u) {
                        f9 = (f64)rdf32(r10);
                        f6 = (f64)rdf32(r5);
                        do {
                            if (f9 != f6) {
                                r3 = (u32)rd8(r11);
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
                        wrf32d(r29, f9);
                        r10 = r10 + 4u;
                        r5 = r5 + 4u;
                    }
                    r4 = (r4 << 1u) & 0xfffeu;
                    r11 = r11 + 1u;
                    r29 = r29 + 4u;
                }
            }
        } else {
            r5 = r5 + (r10 * r4);
            r22 = (u32)rd8(r5 + 2u);
            r5 = r5 + 0xcu;
            if (r22 != 0u) {
                r0 = (u32)rd16(r5);
                r6 = r6 * 0x7b929u;
                wr32(0x817fdf98u, ((u32)param_4 * 0x3f81f635u) + ((u32)rd16(param_1 + 6u) * 0x30a74193u) + (r6 + ((r0 * 0x371097e7u) + 0x4bf53u)));
                r6 = (u32)rd8(0x817fdf9au) ^ (u32)rd8(0x817fdf9bu);
                r4 = (u32)rd8(0x817fdf98u);
                r5 = (u32)rd8(0x817fdf99u) ^ r6;
                wr8(0x817fdf9au, (u8)r6);
                r4 = r4 ^ r5;
                wr8(0x817fdf99u, (u8)r5);
                wr8(0x817fdf98u, (u8)r4);
                r4 = rd32(0x817fdf98u);
                if ((r22 & 2u) != 0u) {
                    r7 = (u32)rd16(r23);
                    r10 = (r4 >> 0x10u) & 0xffffu;
                    r6 = r23 + (r3 * (r10 - (ppc_divwu(r10, r7) * r7))) + 4u;
                    r4 = (r4 * 0x343fdu) + 0x269ec3u;
                } else {
                    r0 = r0 * r3;
                    r6 = r24 + r0 + 4u;
                }
                r7 = 0u;
                if ((u32)rd8(r6 + r9) != 0u) {
                    if ((r4 & 0x10000u) == 0u) {
                        r7 = 1u;
                    }
                    r4 = (r4 * 0x343fdu) + 0x270000u;
                    r4 = r4 - 0x613du;
                }
                f1 = rdf64(0x805778b0u);
                r9 = 1u;
                while ((s32)r9 <= (s32)r8) {
                    if ((r26 & r9) != 0u) {
                        f2 = (f64)rdf32(r6 + 4u);
                        f3 = (f64)rdf32(r6);
                        r6 = r6 + 8u;
                        f0 = (f64)(f32)(f3 + (f64)(f32)(f2 * (f64)(f32)(px_b2f((u64)((r4 >> 0x10u) & 0xffffu) | 0x4330000000000000ull) - f1)));
                        if (r7 != 0u) {
                            f0 = -f0;
                        }
                        wrf32d(r29, f0);
                    }
                    r29 = r29 + 4u;
                    if (((u32)rd8(param_1 + 4u) & 4u) == 0u) {
                        r4 = (r4 * 0x343fdu) + 0x270000u;
                        r4 = r4 - 0x613du;
                    }
                    r9 = (r9 << 1u) & 0xfffeu;
                }
            } else {
                r3 = 1u;
                while ((s32)r3 <= (s32)r8) {
                    if ((r26 & r3) != 0u) {
                        f0 = (f64)rdf32(r5);
                        r5 = r5 + 4u;
                        wrf32d(r29, f0);
                    }
                    r3 = (r3 << 1u) & 0xfffeu;
                    r29 = r29 + 4u;
                }
            }
        }
    }
    return;
}
