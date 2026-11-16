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

void fn_803179ec(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 c0eq = 0, c0lt = 0, c1eq = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r11 = 0, r12 = 0, r18 = 0;
    u32 r19 = 0, r20 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0, f5 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r11 = (u32)rd8(param_1 + 4u);
    r30 = param_1 + 0x20u;
    r12 = r11 & 0x20u;
    r29 = rd32(param_1 + 0x10u) + (r30 + rd32(param_1 + 0xcu));
    r28 = r29 + rd32(param_1 + 0x14u);
    r26 = 0u;
    r19 = 0u;
    do {
        if (r12 != 0u || (u32)rd8(param_1 + 5u) > 1u) {
            if ((r11 & 0x80u) != 0u) {
                if (param_3 < param_5) {
                    r23 = (u32)rd16(param_1 + 8u);
                    if (r23 <= 1u || (r11 & 0x40u) == 0u) {
                        f5 = rdf64(0x805778b0u);
                        f31 = (f64)(f32)((f64)(f32)(px_b2f((u64)rd8(param_1 + 5u) | 0x4330000000000000ull) - f5) * (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r23 | 0x4330000000000000ull) - f5), (f64)(f32)(px_b2f((u64)param_5 | 0x4330000000000000ull) - f5)));
                        a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f5) * f31), (f64)(f32)(px_b2f((u64)r23 | 0x4330000000000000ull) - f5));
                        r3 = tc_call(0x802558e4u, &a);
                        f2 = rdf64(0x805778b0u);
                        r26 = r3;
                        f0 = (f64)(f32)((f64)(f32)((f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f2) * f31) - (f64)(f32)(px_b2f((u64)(r3 * r23) | 0x4330000000000000ull) - f2));
                        f0 = px_ctiw(f0, ppc_fctiwz(f0));
                        r27 = (u32)px_f2b(f0);
                    } else {
                        r23 = r23 - 1u;
                        r24 = (u32)rd8(param_1 + 5u);
                        f4 = rdf64(0x805778b0u);
                        f1 = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805778c0u) + (f64)(f32)((f64)(f32)(px_b2f((u64)(r23 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805778b8u)) * (f64)(f32)(px_b2f((u64)r24 | 0x4330000000000000ull) - f4))), (f64)(f32)(px_b2f((u64)param_5 | 0x4330000000000000ull) - f4));
                        f1 = (f64)(f32)((f64)(f32)(px_b2f((u64)param_3 | 0x4330000000000000ull) - f4) * f1);
                        a.f[0] = f1;
                        r3 = tc_call(0x802558e4u, &a);
                        r26 = ppc_divwu(r3, r23);
                        if (r26 < r24) {
                            if ((r26 & 1u) != 0u) {
                                r27 = ((r23 * (r26 + 1u)) - r3) & 0xffffu;
                            } else {
                                r27 = (r3 - (r26 * r23)) & 0xffffu;
                            }
                        } else {
                            r3 = (r24 >> 0x1fu) & 1u;
                            if ((((r24 & 1u) ^ r3) - r3) != 0u) {
                                r27 = r23 & 0xffffu;
                            } else {
                                if (param_3 == (param_5 - 1u)) {
                                    r19 = 1u;
                                }
                                r27 = 0u;
                            }
                            r26 = (r24 - 1u) & 0xffu;
                        }
                    }
                } else {
                    do {
                        if ((r11 & 0x40u) != 0u) {
                            r0 = (u32)rd8(param_1 + 5u);
                            r4 = (r0 >> 0x1fu) & 1u;
                            r0 = r0 & 1u;
                            r0 = r0 ^ r4;
                            r0 = r0 - r4;
                            if (r0 == 0u) {
                                r27 = 0u;
                                break;
                            }
                        }
                        r27 = (u32)rd16(param_1 + 8u);
                    } while (0);
                    r26 = ((u32)rd8(param_1 + 5u) - 1u) & 0xffu;
                }
            } else {
                r27 = (u32)rd16(param_1 + 8u);
                if (r27 <= 1u || (r11 & 0x40u) == 0u) {
                    r26 = ppc_divwu(param_3, r27);
                    if (r12 == 0u) {
                        r3 = (u32)rd8(param_1 + 5u);
                        if (r26 >= r3) {
                            r26 = (r3 - 1u) & 0xffu;
                            break;
                        }
                    }
                    r27 = (param_3 - (r26 * r27)) & 0xffffu;
                } else {
                    r6 = r27 - 1u;
                    r26 = ppc_divwu(param_3, r6);
                    if (r12 == 0u) {
                        r4 = (u32)rd8(param_1 + 5u);
                        c1eq = r26 == r4;
                        if (r26 >= r4) {
                            r3 = (r4 >> 0x1fu) & 1u;
                            if ((((r4 & 1u) ^ r3) - r3) != 0u) {
                                r27 = r6 & 0xffffu;
                            } else {
                                if (c1eq && (param_3 - (r26 * r6)) == 0u) {
                                    r19 = 1u;
                                }
                                r27 = 0u;
                            }
                            r26 = (r4 - 1u) & 0xffu;
                            break;
                        }
                    }
                    if ((r26 & 1u) != 0u) {
                        r27 = ((r6 * (r26 + 1u)) - param_3) & 0xffffu;
                    } else {
                        r27 = (param_3 - (r26 * r6)) & 0xffffu;
                    }
                }
            }
        } else if ((r11 & 0x80u) != 0u) {
            r27 = ppc_divwu((u32)rd16(param_1 + 8u) * param_3, param_5) & 0xffffu;
        } else {
            r27 = (u32)rd16(param_1 + 8u);
            if (param_3 < r27) {
                r27 = param_3 & 0xffffu;
            }
        }
    } while (0);
    r4 = (u32)rd8(param_1 + 4u);
    r24 = 0u;
    r3 = r4 & 0x20u;
    do {
        if (r3 != 0u || (u32)rd8(param_1 + 5u) > 1u) {
            if ((r4 & 0x80u) != 0u) {
                r3 = param_3 + 1u;
                if (r3 < param_5) {
                    r23 = (u32)rd16(param_1 + 8u);
                    if (r23 <= 1u || (r4 & 0x40u) == 0u) {
                        f5 = rdf64(0x805778b0u);
                        f31 = (f64)(f32)((f64)(f32)(px_b2f((u64)rd8(param_1 + 5u) | 0x4330000000000000ull) - f5) * (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r23 | 0x4330000000000000ull) - f5), (f64)(f32)(px_b2f((u64)param_5 | 0x4330000000000000ull) - f5)));
                        a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(px_b2f((u64)(param_3 + 1u) | 0x4330000000000000ull) - f5) * f31), (f64)(f32)(px_b2f((u64)r23 | 0x4330000000000000ull) - f5));
                        r3 = tc_call(0x802558e4u, &a);
                        r24 = r3;
                        f2 = rdf64(0x805778b0u);
                        f0 = (f64)(f32)((f64)(f32)((f64)(f32)(px_b2f((u64)(param_3 + 1u) | 0x4330000000000000ull) - f2) * f31) - (f64)(f32)(px_b2f((u64)(r3 * r23) | 0x4330000000000000ull) - f2));
                        f0 = px_ctiw(f0, ppc_fctiwz(f0));
                        r25 = (u32)px_f2b(f0);
                    } else {
                        r23 = r23 - 1u;
                        r25 = (u32)rd8(param_1 + 5u);
                        f4 = rdf64(0x805778b0u);
                        f1 = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805778c0u) + (f64)(f32)((f64)(f32)(px_b2f((u64)(r23 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805778b8u)) * (f64)(f32)(px_b2f((u64)r25 | 0x4330000000000000ull) - f4))), (f64)(f32)(px_b2f((u64)param_5 | 0x4330000000000000ull) - f4));
                        f1 = (f64)(f32)((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f4) * f1);
                        a.f[0] = f1;
                        r3 = tc_call(0x802558e4u, &a);
                        r24 = ppc_divwu(r3, r23);
                        if (r24 < r25) {
                            if ((r24 & 1u) != 0u) {
                                r25 = ((r23 * (r24 + 1u)) - r3) & 0xffffu;
                            } else {
                                r25 = (r3 - (r24 * r23)) & 0xffffu;
                            }
                        } else {
                            r4 = (r25 >> 0x1fu) & 1u;
                            r4 = ((r25 & 1u) ^ r4) - r4;
                            r4 = ppc_cntlzw(r4);
                            r24 = (r25 - 1u) & 0xffu;
                            r25 = r23 & 0xffffu & ~(0u - ((r4 >> 5u) & 1u));
                        }
                    }
                } else {
                    do {
                        if ((r4 & 0x40u) != 0u) {
                            r0 = (u32)rd8(param_1 + 5u);
                            r3 = (r0 >> 0x1fu) & 1u;
                            r0 = r0 & 1u;
                            r0 = r0 ^ r3;
                            r0 = r0 - r3;
                            if (r0 == 0u) {
                                r25 = 0u;
                                break;
                            }
                        }
                        r25 = (u32)rd16(param_1 + 8u);
                    } while (0);
                    r24 = ((u32)rd8(param_1 + 5u) - 1u) & 0xffu;
                }
            } else {
                r25 = (u32)rd16(param_1 + 8u);
                if (r25 <= 1u || (r4 & 0x40u) == 0u) {
                    r24 = ppc_divwu(param_3 + 1u, r25);
                    if (r3 == 0u) {
                        r3 = (u32)rd8(param_1 + 5u);
                        if (r24 >= r3) {
                            r24 = (r3 - 1u) & 0xffu;
                            break;
                        }
                    }
                    r25 = (param_3 + 1u - (r24 * r25)) & 0xffffu;
                } else {
                    r6 = r25 - 1u;
                    r24 = ppc_divwu(param_3 + 1u, r6);
                    if (r3 == 0u) {
                        r5 = (u32)rd8(param_1 + 5u);
                        if (r24 >= r5) {
                            r4 = (r5 >> 0x1fu) & 1u;
                            r4 = ((r5 & 1u) ^ r4) - r4;
                            r4 = ppc_cntlzw(r4);
                            r24 = (r5 - 1u) & 0xffu;
                            r25 = r6 & 0xffffu & ~(0u - ((r4 >> 5u) & 1u));
                            break;
                        }
                    }
                    if ((r24 & 1u) != 0u) {
                        r25 = ((r6 * (r24 + 1u)) - 1u - param_3) & 0xffffu;
                    } else {
                        r25 = (param_3 + 1u - (r24 * r6)) & 0xffffu;
                    }
                }
            }
        } else if ((r4 & 0x80u) != 0u) {
            r25 = ppc_divwu((u32)rd16(param_1 + 8u) * (param_3 + 1u), param_5) & 0xffffu;
        } else {
            r25 = (u32)rd16(param_1 + 8u);
            r0 = param_3 + 1u;
            if (r0 < r25) {
                r25 = r0 & 0xffffu;
            }
        }
    } while (0);
    r3 = r25 & 0xffffu;
    r23 = r30 + 4u;
    if (r26 != r24) {
        if (((u32)rd8(param_1 + 4u) & 0x40u) == 0u) {
            r4 = r27 & 0xffffu;
            r5 = (u32)rd16(r23);
            r6 = 0u;
            r20 = (u32)rd16(r30) - 1u;
            c0eq = r4 == r5;
            r3 = (u32)((s32)(((r20 >> 0x1fu) & 1u) + r20) >> 1);
            if ((s32)r4 < (s32)r5 || c0eq) {
                r20 = 0u;
            } else if ((s32)rd16(r23 + (r20 * 0x18u)) >= (s32)r4) {
                r0 = (u32)rd16(r23 + (r3 * 0x18u));
                while ((s32)r6 < (s32)r3) {
                    if (r4 != r0) {
                        if ((s32)r0 < (s32)r4) {
                            r6 = r3;
                        }
                        if ((s32)r0 >= (s32)r4) {
                            r20 = r3;
                        }
                    } else {
                        r20 = r3;
                    }
                    r3 = r6 + r20;
                    r3 = (u32)((s32)(((r3 >> 0x1fu) & 1u) + r3) >> 1);
                    r0 = (u32)rd16(r23 + (r3 * 0x18u));
                }
                r20 = r6;
            }
            r18 = r27 & 0xffffu;
            r19 = r23 + (r20 * 0x18u);
            while ((s32)r20 < (s32)rd16(r30)) {
                if ((u32)rd16(r19) >= r18) {
                    a.r[0] = r19;
                    a.r[1] = param_4;
                    a.r[2] = param_1;
                    a.r[3] = r28;
                    a.r[4] = r29;
                    a.r[5] = param_2;
                    a.r[6] = r26;
                    (void)tc_call(0x80317888u, &a);
                }
                r19 = r19 + 0x18u;
                r20 = r20 + 1u;
            }
            r20 = r26 + 1u;
            while (r20 < r24) {
                r19 = r23;
                r18 = 0u;
                while ((s32)r18 < (s32)rd16(r30)) {
                    a.r[0] = r19;
                    a.r[1] = param_4;
                    a.r[2] = param_1;
                    a.r[3] = r28;
                    a.r[4] = r29;
                    a.r[5] = param_2;
                    a.r[6] = r26;
                    (void)tc_call(0x80317888u, &a);
                    r19 = r19 + 0x18u;
                    r18 = r18 + 1u;
                }
                r20 = r20 + 1u;
            }
            r18 = r25 & 0xffffu;
            r19 = 0u;
            while ((s32)r19 < (s32)rd16(r30) && r18 > (u32)rd16(r23)) {
                a.r[0] = r23;
                a.r[1] = param_4;
                a.r[2] = param_1;
                a.r[3] = r28;
                a.r[4] = r29;
                a.r[5] = param_2;
                a.r[6] = r26;
                (void)tc_call(0x80317888u, &a);
                r23 = r23 + 0x18u;
                r19 = r19 + 1u;
            }
        } else {
            r20 = r26 & 1u;
            if (r20 != 0u) {
                r4 = r27 & 0xffffu;
                r6 = 0u;
                r19 = (u32)rd16(r30) - 1u;
                r3 = (u32)((s32)(((r19 >> 0x1fu) & 1u) + r19) >> 1);
                if ((s32)r4 < (s32)rd16(r23)) {
                    r19 = 0u;
                } else {
                    r0 = (u32)rd16(r23 + (r19 * 0x18u));
                    if ((s32)r0 >= (s32)r4 && r4 != r0) {
                        r0 = (u32)rd16(r23 + (r3 * 0x18u));
                        while ((s32)r6 < (s32)r3) {
                            if (r4 != r0) {
                                if ((s32)r0 < (s32)r4) {
                                    r6 = r3;
                                }
                                if ((s32)r0 >= (s32)r4) {
                                    r19 = r3;
                                }
                            } else {
                                r6 = r3;
                            }
                            r3 = r6 + r19;
                            r3 = (u32)((s32)(((r3 >> 0x1fu) & 1u) + r3) >> 1);
                            r0 = (u32)rd16(r23 + (r3 * 0x18u));
                        }
                        r19 = r6;
                    }
                }
                r18 = r27 & 0xffffu;
                r27 = r23 + (r19 * 0x18u);
                while ((s32)r19 >= 0) {
                    r0 = (u32)rd16(r27);
                    if (r18 >= r0) {
                        if (r0 == 0u) break;
                        a.r[0] = r27;
                        a.r[1] = param_4;
                        a.r[2] = param_1;
                        a.r[3] = r28;
                        a.r[4] = r29;
                        a.r[5] = param_2;
                        a.r[6] = r26;
                        (void)tc_call(0x80317888u, &a);
                    }
                    r27 = r27 - 0x18u;
                    r19 = r19 - 1u;
                }
            } else {
                r4 = r27 & 0xffffu;
                r5 = (u32)rd16(r23);
                r6 = 0u;
                r19 = (u32)rd16(r30) - 1u;
                c0eq = r4 == r5;
                r3 = (u32)((s32)(((r19 >> 0x1fu) & 1u) + r19) >> 1);
                if ((s32)r4 < (s32)r5 || c0eq) {
                    r19 = 0u;
                } else if ((s32)rd16(r23 + (r19 * 0x18u)) >= (s32)r4) {
                    r0 = (u32)rd16(r23 + (r3 * 0x18u));
                    while ((s32)r6 < (s32)r3) {
                        if (r4 != r0) {
                            if ((s32)r0 < (s32)r4) {
                                r6 = r3;
                            }
                            if ((s32)r0 >= (s32)r4) {
                                r19 = r3;
                            }
                        } else {
                            r19 = r3;
                        }
                        r3 = r6 + r19;
                        r3 = (u32)((s32)(((r3 >> 0x1fu) & 1u) + r3) >> 1);
                        r0 = (u32)rd16(r23 + (r3 * 0x18u));
                    }
                    r19 = r6;
                }
                r18 = r27 & 0xffffu;
                r27 = r23 + (r19 * 0x18u);
                while ((s32)r19 < (s32)rd16(r30)) {
                    r4 = (u32)rd16(r27);
                    if (r4 >= r18) {
                        if (r4 == ((u32)rd16(param_1 + 8u) - 1u)) break;
                        a.r[0] = r27;
                        a.r[1] = param_4;
                        a.r[2] = param_1;
                        a.r[3] = r28;
                        a.r[4] = r29;
                        a.r[5] = param_2;
                        a.r[6] = r26;
                        (void)tc_call(0x80317888u, &a);
                    }
                    r27 = r27 + 0x18u;
                    r19 = r19 + 1u;
                }
            }
            r18 = r26 + 1u;
            while (r18 < r24) {
                if (r20 != 0u) {
                    r19 = (u32)rd16(r30) - 1u;
                    r27 = r23 + (r19 * 0x18u);
                    while ((s32)r19 >= 0 && (u32)rd16(r27) != 0u) {
                        a.r[0] = r27;
                        a.r[1] = param_4;
                        a.r[2] = param_1;
                        a.r[3] = r28;
                        a.r[4] = r29;
                        a.r[5] = param_2;
                        a.r[6] = r26;
                        (void)tc_call(0x80317888u, &a);
                        r27 = r27 - 0x18u;
                        r19 = r19 - 1u;
                    }
                } else {
                    r19 = r23;
                    r27 = 0u;
                    for (;;) {
                        if ((s32)r27 >= (s32)rd16(r30)) {
                            fl_ = 2u;
                            break;
                        }
                        if ((u32)rd16(r19) == ((u32)rd16(param_1 + 8u) - 1u)) {
                            fl_ = 1u;
                            break;
                        }
                        a.r[0] = r19;
                        a.r[1] = param_4;
                        a.r[2] = param_1;
                        a.r[3] = r28;
                        a.r[4] = r29;
                        a.r[5] = param_2;
                        a.r[6] = r26;
                        (void)tc_call(0x80317888u, &a);
                        r19 = r19 + 0x18u;
                        r27 = r27 + 1u;
                    }
                    if (fl_ == 2u) {
                        fl_ = 0u;
                    } else if (fl_ == 1u) {
                        fl_ = 0u;
                    }
                }
                r18 = r18 + 1u;
            }
            if ((r24 & 1u) != 0u) {
                r18 = r25 & 0xffffu;
                r19 = (u32)rd16(r30) - 1u;
                r20 = r23 + (r19 * 0x18u);
                while ((s32)r19 >= 0) {
                    if (r18 >= (u32)rd16(r20)) {
                        return;
                    }
                    a.r[0] = r20;
                    a.r[1] = param_4;
                    a.r[2] = param_1;
                    a.r[3] = r28;
                    a.r[4] = r29;
                    a.r[5] = param_2;
                    a.r[6] = r26;
                    (void)tc_call(0x80317888u, &a);
                    r20 = r20 - 0x18u;
                    r19 = r19 - 1u;
                }
            } else {
                r18 = r25 & 0xffffu;
                r19 = 0u;
                while ((s32)r19 < (s32)rd16(r30)) {
                    if (r18 <= (u32)rd16(r23)) {
                        return;
                    }
                    a.r[0] = r23;
                    a.r[1] = param_4;
                    a.r[2] = param_1;
                    a.r[3] = r28;
                    a.r[4] = r29;
                    a.r[5] = param_2;
                    a.r[6] = r26;
                    (void)tc_call(0x80317888u, &a);
                    r23 = r23 + 0x18u;
                    r19 = r19 + 1u;
                }
            }
        }
    } else {
        if ((r27 & 0xffffu) == r3) {
            if (r19 == 0u) {
                return;
            }
            r25 = 1u;
        }
        r0 = r27 & 0xffffu;
        if (r0 >= (r25 & 0xffffu)) {
            r5 = 0u;
            r19 = (u32)rd16(r30) - 1u;
            r4 = (u32)((s32)(((r19 >> 0x1fu) & 1u) + r19) >> 1);
            if ((s32)r0 < (s32)rd16(r23)) {
                r19 = 0u;
            } else {
                r3 = (u32)rd16(r23 + (r19 * 0x18u));
                if ((s32)r3 >= (s32)r0 && r0 != r3) {
                    r3 = (u32)rd16(r23 + (r4 * 0x18u));
                    while ((s32)r5 < (s32)r4) {
                        if (r0 != r3) {
                            if ((s32)r3 < (s32)r0) {
                                r5 = r4;
                            }
                            if ((s32)r3 >= (s32)r0) {
                                r19 = r4;
                            }
                        } else {
                            r5 = r4;
                        }
                        r4 = r5 + r19;
                        r4 = (u32)((s32)(((r4 >> 0x1fu) & 1u) + r4) >> 1);
                        r3 = (u32)rd16(r23 + (r4 * 0x18u));
                    }
                    r19 = r5;
                }
            }
            r18 = r25 & 0xffffu;
            r20 = r27 & 0xffffu;
            r23 = r23 + (r19 * 0x18u);
            while ((s32)r19 >= 0) {
                r0 = (u32)rd16(r23);
                if (r20 >= r0) {
                    if (r0 <= r18) {
                        return;
                    }
                    a.r[0] = r23;
                    a.r[1] = param_4;
                    a.r[2] = param_1;
                    a.r[3] = r28;
                    a.r[4] = r29;
                    a.r[5] = param_2;
                    a.r[6] = r26;
                    (void)tc_call(0x80317888u, &a);
                }
                r23 = r23 - 0x18u;
                r19 = r19 - 1u;
            }
        } else {
            r5 = 0u;
            r4 = (u32)rd16(r23);
            r19 = (u32)rd16(r30) - 1u;
            c0lt = (s32)r0 < (s32)r4;
            c0eq = r0 == r4;
            r4 = (u32)((s32)(((r19 >> 0x1fu) & 1u) + r19) >> 1);
            if (c0lt || c0eq) {
                r19 = 0u;
            } else if ((s32)rd16(r23 + (r19 * 0x18u)) >= (s32)r0) {
                r3 = (u32)rd16(r23 + (r4 * 0x18u));
                while ((s32)r5 < (s32)r4) {
                    if (r0 != r3) {
                        if ((s32)r3 < (s32)r0) {
                            r5 = r4;
                        }
                        if ((s32)r3 >= (s32)r0) {
                            r19 = r4;
                        }
                    } else {
                        r19 = r4;
                    }
                    r4 = r5 + r19;
                    r4 = (u32)((s32)(((r4 >> 0x1fu) & 1u) + r4) >> 1);
                    r3 = (u32)rd16(r23 + (r4 * 0x18u));
                }
                r19 = r5;
            }
            r18 = r25 & 0xffffu;
            r20 = r27 & 0xffffu;
            r23 = r23 + (r19 * 0x18u);
            while ((s32)r19 < (s32)rd16(r30)) {
                r0 = (u32)rd16(r23);
                if (r0 >= r20) {
                    if (r18 <= r0) {
                        return;
                    }
                    a.r[0] = r23;
                    a.r[1] = param_4;
                    a.r[2] = param_1;
                    a.r[3] = r28;
                    a.r[4] = r29;
                    a.r[5] = param_2;
                    a.r[6] = r26;
                    (void)tc_call(0x80317888u, &a);
                }
                r23 = r23 + 0x18u;
                r19 = r19 + 1u;
            }
        }
    }
    return;
}
