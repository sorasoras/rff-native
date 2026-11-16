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

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

static f64 px_lo(f64 x)
{
    return (f64)px_w2f((u32)px_f2b(x));
}

static f64 px_pq(f64 x)
{
    u64 b = px_f2b(x);
    if ((b & 0x7ff0000000000000ull) == 0x7ff0000000000000ull && (b & 0x000fffffffffffffull) != 0)
        return px_b2f(b | 0x0008000000000000ull);
    return x;
}

static f64 px_psub(f64 a, f64 b)
{
    f64 r = a - b;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        return px_b2f(0x7ff8000000000000ull);
    }
    return r;
}

static f64 px_pmul(f64 a, f64 c)
{
    f64 r = a * c;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (c != c) return px_pq(c);
        return px_b2f(0x7ff8000000000000ull);
    }
    return r;
}

void fn_800c57a4(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 c0lt = 0, fl_ = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u);
    u32 r10 = tc_argr(7u), r11 = tc_argr(8u), r12 = tc_argr(9u), r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    u32 t2 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f31 = 0.0, t3 = 0.0, t4 = 0.0;
    TcArgs a = {0};
    (void)param_3;
    (void)param_4;
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_1;
    r4 = param_2;
    for (;;) {
        wr32(r1 - 0x80u, r1);
        r1 = r1 - 0x80u;
        wr32(r1 + 0x84u, lr);
        wrf64(r1 + 0x70u, f31);
        wrf32d(r1 + 0x78u, px_lo(f31));
        r11 = r1 + 0x70u;
        wr32(r11 - 0x24u, r23);
        wr32(r11 - 0x20u, r24);
        wr32(r11 - 0x1cu, r25);
        wr32(r11 - 0x18u, r26);
        wr32(r11 - 0x14u, r27);
        wr32(r11 - 0x10u, r28);
        wr32(r11 - 0xcu, r29);
        wr32(r11 - 8u, r30);
        wr32(r11 - 4u, r31);
        r23 = r3;
        r27 = r4;
        f1 = tc_callf(0x800816b0u, &a);
        r3 = tc_lastr();
        r0 = tc_junkr(0u);
        r5 = tc_junkr(5u);
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        f2 = 0.0;
        r3 = (u32)rd16(r4);
        r26 = 0u;
        r25 = 0u;
        if ((s32)r3 < 37 || (s32)r3 > 84) {
            if ((s32)r3 < 115 || (s32)r3 > 133) {
                if ((s32)r3 < 134 || (s32)r3 > 336) {
                    if ((s32)r3 >= 337 && (s32)r3 <= 352) {
                        r0 = r3 - 0x43u;
                    }
                } else {
                    r0 = r3 - 0x43u;
                }
            } else {
                r0 = r3 - 0x43u;
            }
        } else {
            r0 = r3 - 0x25u;
        }
        r0 = (r0 << 4u) & 0xfffffff0u;
        r0 = (u32)rd8(r0 - 0x7fb5fba1u);
        r24 = (u32)(s8)r0;
        if (r24 != 0xffffffffu) {
            if ((s32)r24 < 60 || (s32)r24 > 67) {
                r4 = (u32)rd16(r4);
                r5 = (u32)rd8(r27 + 3u);
                if ((s32)r4 < 37 || (s32)r4 > 84) {
                    if ((s32)r4 < 115 || (s32)r4 > 133) {
                        if ((s32)r4 < 134 || (s32)r4 > 336) {
                            if ((s32)r4 >= 337 && (s32)r4 <= 352) {
                                r6 = r4 - 0x43u;
                            }
                        } else {
                            r6 = r4 - 0x43u;
                        }
                    } else {
                        r6 = r4 - 0x43u;
                    }
                } else {
                    r6 = r4 - 0x25u;
                }
                r3 = (u32)rd16(((r6 << 4u) & 0xfffffff0u) - 0x7fb5fba8u);
                if ((((s32)r4 >= 37 && (s32)r4 <= 84) || ((s32)r4 >= 115 && (s32)r4 <= 133) || ((s32)r4 >= 134 && (s32)r4 <= 336)) && r3 != 0u) {
                    r3 = (r3 + ((r5 - 1u) * 0x1eu)) & 0xffffu;
                }
                wr32(r1 + 0x38u, 0x43300000u);
                f1 = rdf64(0x80572f28u);
                wr32(r1 + 0x3cu, (r3 * 0x1eu) ^ 0x80000000u);
                f1 = (f64)(f32)px_psub(rdf64(r1 + 0x38u), f1);
                a.f[0] = f1;
                a.r[0] = r23;
                a.r[1] = r24;
                r3 = tc_call(0x800c630cu, &a);
                f1 = tc_lastf();
                a.r[0] = r23;
                a.r[1] = r24;
                f1 = tc_callf(0x800c6248u, &a);
                r3 = tc_lastr();
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                f2 = 0.0;
            } else {
                r3 = (u32)rd16(r4);
                if ((s32)r3 < 37 || (s32)r3 > 84) {
                    if ((s32)r3 < 115 || (s32)r3 > 133) {
                        if ((s32)r3 < 134 || (s32)r3 > 336) {
                            if ((s32)r3 >= 337 && (s32)r3 <= 352) {
                                r5 = r3 - 0x43u;
                            }
                        } else {
                            r5 = r3 - 0x43u;
                        }
                    } else {
                        r5 = r3 - 0x43u;
                    }
                } else {
                    r5 = r3 - 0x25u;
                }
                r5 = ((r5 << 4u) & 0xfffffff0u) - 0x7fb60e50u;
                r5 = (u32)rd8(r5 + 0x12b0u);
                a.r[0] = r23;
                a.r[1] = r24;
                a.r[2] = r5;
                f1 = tc_callf(0x800c6620u, &a);
                r3 = tc_lastr();
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                f2 = 0.0;
                r26 = 1u;
            }
        }
        r3 = (u32)rd16(r27);
        if ((s32)r3 < 37 || (s32)r3 > 84) {
            if ((s32)r3 < 115 || (s32)r3 > 133) {
                if ((s32)r3 < 134 || (s32)r3 > 336) {
                    if ((s32)r3 >= 337 && (s32)r3 <= 352) {
                        r31 = r3 - 0x43u;
                    }
                } else {
                    r31 = r3 - 0x43u;
                }
            } else {
                r31 = r3 - 0x43u;
            }
        } else {
            r31 = r3 - 0x25u;
        }
        r31 = (u32)(s8)rd8(((r31 << 4u) & 0xfffffff0u) - 0x7fb5fb9fu);
        if (r31 != 0xffffffffu) {
            if ((s32)r31 < 60 || (s32)r31 > 67) {
                r4 = (u32)rd16(r27);
                r5 = (u32)rd8(r27 + 3u);
                if ((s32)r4 < 37 || (s32)r4 > 84) {
                    if ((s32)r4 < 115 || (s32)r4 > 133) {
                        if ((s32)r4 < 134 || (s32)r4 > 336) {
                            if ((s32)r4 >= 337 && (s32)r4 <= 352) {
                                r30 = r4 - 0x43u;
                            }
                        } else {
                            r30 = r4 - 0x43u;
                        }
                    } else {
                        r30 = r4 - 0x43u;
                    }
                } else {
                    r30 = r4 - 0x25u;
                }
                r3 = (u32)rd16(((r30 << 4u) & 0xfffffff0u) - 0x7fb5fba8u);
                if ((((s32)r4 >= 37 && (s32)r4 <= 84) || ((s32)r4 >= 115 && (s32)r4 <= 133) || ((s32)r4 >= 134 && (s32)r4 <= 336)) && r3 != 0u) {
                    r3 = (r3 + ((r5 - 1u) * 0x1eu)) & 0xffffu;
                }
                wr32(r1 + 0x38u, 0x43300000u);
                f1 = rdf64(0x80572f28u);
                wr32(r1 + 0x3cu, (r3 * 0x1eu) ^ 0x80000000u);
                f1 = (f64)(f32)px_psub(rdf64(r1 + 0x38u), f1);
                a.f[0] = f1;
                a.r[0] = r23;
                a.r[1] = r31;
                r3 = tc_call(0x800c630cu, &a);
                f1 = tc_lastf();
                a.r[0] = r23;
                a.r[1] = r31;
                f1 = tc_callf(0x800c6248u, &a);
                r3 = tc_lastr();
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                f2 = 0.0;
            } else {
                r3 = (u32)rd16(r27);
                if ((s32)r3 < 37 || (s32)r3 > 84) {
                    if ((s32)r3 < 115 || (s32)r3 > 133) {
                        if ((s32)r3 < 134 || (s32)r3 > 336) {
                            if ((s32)r3 >= 337 && (s32)r3 <= 352) {
                                r30 = r3 - 0x43u;
                            }
                        } else {
                            r30 = r3 - 0x43u;
                        }
                    } else {
                        r30 = r3 - 0x43u;
                    }
                } else {
                    r30 = r3 - 0x25u;
                }
                a.r[0] = r23;
                a.r[1] = r31;
                a.r[2] = (u32)rd8(((r30 << 4u) & 0xfffffff0u) - 0x7fb5fb9eu);
                f1 = tc_callf(0x800c6620u, &a);
                r3 = tc_lastr();
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                f2 = 0.0;
                r25 = 1u;
            }
        }
        if (r26 != 0u || r25 != 0u) {
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0x432u;
            f1 = tc_callf(0x8010a75cu, &a);
            r3 = tc_lastr();
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            f2 = 0.0;
        }
        if ((r26 == 0u && r24 != 0xffffffffu) || (r25 == 0u && r31 != 0xffffffffu)) {
            r4 = (u32)rd16(r27);
            r5 = (u32)rd8(r27 + 3u);
            if ((s32)r4 < 37 || (s32)r4 > 84) {
                if ((s32)r4 < 115 || (s32)r4 > 133) {
                    if ((s32)r4 < 134 || (s32)r4 > 336) {
                        if ((s32)r4 >= 337 && (s32)r4 <= 352) {
                            r29 = r4 - 0x43u;
                        }
                    } else {
                        r29 = r4 - 0x43u;
                    }
                } else {
                    r29 = r4 - 0x43u;
                }
            } else {
                r29 = r4 - 0x25u;
            }
            r3 = (u32)rd16(((r29 << 4u) & 0xfffffff0u) - 0x7fb5fba8u);
            if ((((s32)r4 >= 37 && (s32)r4 <= 84) || ((s32)r4 >= 115 && (s32)r4 <= 133) || ((s32)r4 >= 134 && (s32)r4 <= 336)) && r3 != 0u) {
                r3 = (r3 + ((r5 - 1u) * 0x1eu)) & 0xffffu;
            }
            wr32(r1 + 0x3cu, r3);
            f2 = rdf64(0x80572f30u);
            wr32(r1 + 0x38u, 0x43300000u);
            f0 = (f64)rdf32(0x80572eacu);
            f1 = rdf64(r1 + 0x38u);
            f31 = (f64)(f32)px_psub(f1, f2);
            if (f0 != f31) {
                r26 = 0x80499214u;
                a.r[0] = 0x80499214u;
                r3 = tc_call(0x800817c0u, &a);
                f1 = tc_lastf();
                wr16(0x80499214u, 0x2e8u);
                wr8(0x80499216u, 1u);
                wr8(0x80499217u, 1u);
                r3 = tc_call(0x800816b0u, &a);
                f1 = tc_lastf();
                a.r[0] = r27;
                f1 = tc_callf(0x8008178cu, &a);
                r3 = tc_lastr();
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                f2 = 0.0;
                r0 = (u32)rd16(r27);
                f0 = (f64)rdf32(0x80572f24u);
                wr16(0x80499214u, (u16)r0);
                f0 = (f64)(f32)px_pmul(f0, f31);
                r3 = rd32(0x80499094u) | 0x40u;
                wr8(0x80499216u, rd8(r27 + 2u));
                wr8(0x80499217u, rd8(r27 + 3u));
                wrf32d(0x804991c4u, f0);
                wr32(0x80499094u, r3);
            }
        }
        r5 = (u32)rd16(r27);
        r6 = (u32)rd8(r27 + 3u);
        if ((s32)r5 < 37 || (s32)r5 > 84) {
            if ((s32)r5 < 115 || (s32)r5 > 133) {
                if ((s32)r5 < 134 || (s32)r5 > 336) {
                    if ((s32)r5 >= 337 && (s32)r5 <= 352) {
                        r28 = r5 - 0x43u;
                    }
                } else {
                    r28 = r5 - 0x43u;
                }
            } else {
                r28 = r5 - 0x43u;
            }
        } else {
            r28 = r5 - 0x25u;
        }
        r4 = (u32)rd16(((r28 << 4u) & 0xfffffff0u) - 0x7fb5fba6u);
        if ((s32)r5 >= 337 && (s32)r5 <= 352) {
            r4 = (r4 + ((r6 - 1u) * 0x3e8u)) & 0xffffu;
        }
        r6 = (u32)rd16(0x80499088u);
        r0 = rd32(0x8049e14cu);
        r5 = (u32)rd16(0x8049908au);
        r6 = r6 + r0;
        if ((s32)r6 <= 0) {
            r6 = 0u;
        }
        if ((s32)r6 >= 65535) {
            r6 = 0xffffu;
        }
        if ((s32)r6 <= 0) {
            r6 = 0x64u;
        }
        if ((s32)r4 >= (s32)((r6 & 0xffffu) - r5)) {
            r6 = (u32)rd16(0x80499088u);
            r0 = rd32(0x8049e14cu);
            r5 = (u32)rd16(0x8049908au);
            r6 = r6 + r0;
            if ((s32)r6 <= 0) {
                r6 = 0u;
            }
            if ((s32)r6 >= 65535) {
                r6 = 0xffffu;
            }
            if ((s32)r6 <= 0) {
                r6 = 0x64u;
            }
            r0 = (r6 & 0xffffu) - r5;
        } else {
            r0 = r4;
        }
        r5 = (u32)rd16(r27);
        r25 = r0 & 0xffffu;
        r6 = (u32)rd8(r27 + 3u);
        if ((s32)r5 < 37 || (s32)r5 > 84) {
            if ((s32)r5 < 115 || (s32)r5 > 133) {
                if ((s32)r5 < 134 || (s32)r5 > 336) {
                    if ((s32)r5 >= 337 && (s32)r5 <= 352) {
                        r27 = r5 - 0x43u;
                    }
                } else {
                    r27 = r5 - 0x43u;
                }
            } else {
                r27 = r5 - 0x43u;
            }
        } else {
            r27 = r5 - 0x25u;
        }
        r27 = (u32)rd16(((r27 << 4u) & 0xfffffff0u) - 0x7fb5fba4u);
        if (((s32)r5 >= 37 && (s32)r5 <= 84) || ((s32)r5 >= 115 && (s32)r5 <= 133) || ((s32)r5 >= 134 && (s32)r5 <= 336)) {
            r27 = (r27 + ((r6 - 1u) * 0x1f4u)) & 0xffffu;
        }
        r6 = (u32)rd16(0x80499088u);
        r0 = rd32(0x8049e14cu);
        r5 = (u32)rd16(0x8049908au);
        r6 = r6 + r0;
        if ((s32)r6 <= 0) {
            r6 = 0u;
        }
        if ((s32)r6 >= 65535) {
            r6 = 0xffffu;
        }
        if ((s32)r6 <= 0) {
            r6 = 0x64u;
        }
        if ((s32)(r25 + r5) >= (s32)(r6 & 0xffffu)) {
            r5 = (u32)rd16(0x80499088u);
            r5 = r5 + rd32(0x8049e14cu);
            if ((s32)r5 <= 0) {
                r5 = 0u;
            }
            if ((s32)r5 >= 65535) {
                r5 = 0xffffu;
            }
            if ((s32)r5 <= 0) {
                r5 = 0x64u;
            }
            r0 = r5 & 0xffffu;
        } else {
            r0 = r25 + (u32)rd16(0x8049908au);
        }
        r0 = r0 & 0xffffu;
        if (r0 >= 0xffffu) {
            r0 = 0xffffu;
        }
        r3 = rd32(0x80571144u);
        wr16(0x8049908au, (u16)r0);
        if ((s32)r3 < 0 || (s32)r3 >= 70) {
            fl_ = 1u;
            break;
        }
        r28 = rd32(0x80571140u);
        if (r28 == 0u) {
            fl_ = 1u;
            break;
        }
        r12 = rd32(r28);
        r3 = r28;
        r12 = rd32(r12 + 0xdcu);
        lr = 0x800c60b0u;
        if (r12 != 0x800c57a4u) {
            fl_ = 2u;
            break;
        }
    }
    do {
        if (fl_ == 2u) {
            fl_ = 0u;
        } else if (fl_ == 1u) {
            fl_ = 0u;
            break;
        }
        a.r[0] = r28;
        a.r[1] = r4;
        a.r[2] = 0x80499060u;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        r3 = tc_call(r12, &a);
        f1 = tc_lastf();
        wr32(r1 + 8u, r24);
        r26 = r1 + 8u;
        r29 = 0u;
        r24 = 0u;
        wr32(r1 + 0xcu, r31);
        do {
            r0 = rd32(r26 + r24);
            c0lt = (s32)r0 < 71;
            if (r0 == 0x47u) {
                a.r[0] = r28;
                a.r[1] = 4u;
                r3 = tc_call(0x800b0fecu, &a);
                f1 = tc_lastf();
            } else if (!c0lt) {
                c0lt = (s32)r0 < 73;
                if (r0 == 0x49u) {
                    a.r[0] = r28;
                    r3 = tc_call(0x800b0fa0u, &a);
                    f1 = tc_lastf();
                } else if (c0lt) {
                    a.r[0] = r28;
                    a.r[1] = 5u;
                    r3 = tc_call(0x800b0fecu, &a);
                    f1 = tc_lastf();
                }
            } else {
                c0lt = (s32)r0 < 69;
                if (r0 == 0x45u) {
                    a.r[0] = r28;
                    a.r[1] = 1u;
                    r3 = tc_call(0x800b0fecu, &a);
                    f1 = tc_lastf();
                } else if (!c0lt) {
                    a.r[0] = r28;
                    a.r[1] = 2u;
                    r3 = tc_call(0x800b0fecu, &a);
                    f1 = tc_lastf();
                } else if ((s32)r0 >= 68) {
                    a.r[0] = r28;
                    a.r[1] = 0u;
                    r3 = tc_call(0x800b0fecu, &a);
                    f1 = tc_lastf();
                }
            }
            r29 = r29 + 1u;
            r24 = r24 + 4u;
        } while ((s32)r29 < 2);
    } while (0);
    f0 = (f64)rdf32(0x80572eacu);
    wrf32d(r1 + 0x30u, f0);
    wrf32d(r1 + 0x2cu, f0);
    wrf32d(r1 + 0x28u, f0);
    a.r[0] = r23;
    a.r[1] = r1 + 0x28u;
    r3 = tc_call(0x8019fbdcu, &a);
    f1 = tc_lastf();
    r4 = rd32(r1 + 0x28u);
    r5 = rd32(r1 + 0x2cu);
    r6 = rd32(r1 + 0x30u);
    wr32(r1 + 0x10u, r4);
    f1 = (f64)rdf32(0x80572eb4u);
    wr32(r1 + 0x14u, r5);
    r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)(r25 + 0x63u)) >> 5);
    wr32(r1 + 0x18u, r6);
    a.r[0] = r0 + ((r0 >> 0x1fu) & 1u);
    a.r[1] = r1 + 0x10u;
    a.r[2] = 3u;
    r3 = tc_call(0x800d7d2cu, &a);
    f1 = tc_lastf();
    r0 = (r27 + (u32)rd16(0x8049908cu)) & 0xffffu;
    if (r0 >= 0x2710u) {
        r0 = 0x2710u;
    }
    f1 = (f64)rdf32(0x80572eacu);
    f0 = (f64)rdf32(0x80572ef8u);
    wr16(0x8049908cu, (u16)r0);
    wrf32d(r1 + 0x24u, f1);
    wrf32d(r1 + 0x20u, f1);
    wrf32d(r1 + 0x1cu, f1);
    f0 = (f64)(f32)px_pmul(f0, (f64)rdf32(r23 + 0xb4u));
    wrf32d(r1 + 0x20u, f0);
    a.r[0] = r23;
    a.r[1] = 0x69u;
    a.r[2] = 0xffffffffu;
    a.r[3] = r1 + 0x1cu;
    r3 = tc_call(0x801a09a8u, &a);
    f1 = tc_lastf();
    t2 = r1 + 0x78u;
    t3 = (f64)rdf32(t2);
    t4 = (f64)rdf32(t2);
    r11 = r1 + 0x70u;
    f31 = rdf64(r1 + 0x70u);
    r23 = rd32(r11 - 0x24u);
    r24 = rd32(r11 - 0x20u);
    r25 = rd32(r11 - 0x1cu);
    r26 = rd32(r11 - 0x18u);
    r27 = rd32(r11 - 0x14u);
    r28 = rd32(r11 - 0x10u);
    r29 = rd32(r11 - 0xcu);
    r30 = rd32(r11 - 8u);
    r31 = rd32(r11 - 4u);
    r0 = rd32(r1 + 0x84u);
    return;
}
