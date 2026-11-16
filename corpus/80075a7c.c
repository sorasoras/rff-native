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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_80075a7c(void)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r3 = rd32(0x80571184u);
    c0lt = (s32)r3 < 3;
    do {
        if (r3 == 3u) {
            r4 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
            if ((s32)r4 <= 0) {
                r4 = 0u;
            }
            if ((s32)r4 >= 65535) {
                r4 = 0xffffu;
            }
            if ((s32)r4 <= 0) {
                r4 = 0x64u;
            }
            r0 = r4 & 0xffffu;
            if (r0 >= 0xffffu) {
                r0 = 0xffffu;
            }
            wr16(0x8049908au, (u16)r0);
            r0 = (u32)rd16(0x80499214u);
            wr16(0x8049908cu, 0x2710u);
            if (r0 != 0x2e8u) {
                a.r[0] = 0x80499214u;
                (void)tc_call(0x800817c0u, &a);
                wr16(0x80499214u, 0x2e8u);
                wr8(0x80499216u, 1u);
                wr8(0x80499217u, 1u);
            }
            r28 = 0u;
            do {
                a.r[0] = rd32(0x804863d8u);
                a.r[1] = r28;
                (void)tc_call(0x8006d830u, &a);
                r28 = r28 + 1u;
            } while (r28 < 0x1au);
        } else {
            if (!c0lt) {
                c0lt = (s32)r3 < 5;
                if (r3 == 5u) {
                    r5 = (u32)rd16(0x8049908au);
                    r6 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
                    if ((s32)r6 <= 0) {
                        r6 = 0u;
                    }
                    if ((s32)r6 >= 65535) {
                        r6 = 0xffffu;
                    }
                    if ((s32)r6 <= 0) {
                        r6 = 0x64u;
                    }
                    r6 = r6 & 0xffffu;
                    r4 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
                    if ((s32)r4 <= 0) {
                        r4 = 0u;
                    }
                    if ((s32)r4 >= 65535) {
                        r4 = 0xffffu;
                    }
                    if ((s32)r4 <= 0) {
                        r4 = 0x64u;
                    }
                    f0 = (f64)(f32)((f64)rdf32(0x80572780u) * (f64)(f32)(px_b2f((u64)(r4 & 0xffffu) | 0x4330000000000000ull) - rdf64(0x80572760u)));
                    f0 = px_ctiw(f0, ppc_fctiwz(f0));
                    if ((s32)r6 >= (s32)(r5 + ((u32)px_f2b(f0) & 0xffffu))) {
                        r4 = (u32)rd16(0x8049908au);
                        r5 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
                        if ((s32)r5 <= 0) {
                            r5 = 0u;
                        }
                        if ((s32)r5 >= 65535) {
                            r5 = 0xffffu;
                        }
                        if ((s32)r5 <= 0) {
                            r5 = 0x64u;
                        }
                        f0 = (f64)(f32)((f64)rdf32(0x80572780u) * (f64)(f32)(px_b2f((u64)(r5 & 0xffffu) | 0x4330000000000000ull) - rdf64(0x80572760u)));
                        f0 = px_ctiw(f0, ppc_fctiwz(f0));
                        r0 = r4 + ((u32)px_f2b(f0) & 0xffffu);
                    } else {
                        r4 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
                        if ((s32)r4 <= 0) {
                            r4 = 0u;
                        }
                        if ((s32)r4 >= 65535) {
                            r4 = 0xffffu;
                        }
                        if ((s32)r4 <= 0) {
                            r4 = 0x64u;
                        }
                        r0 = r4 & 0xffffu;
                    }
                    r0 = r0 & 0xffffu;
                    if (r0 < 1u) {
                        r0 = 1u;
                    }
                    r0 = r0 & 0xffffu;
                    if (r0 >= 0xffffu) {
                        r0 = 0xffffu;
                    }
                    r3 = (u32)rd16(0x8049908cu);
                    wr16(0x8049908au, (u16)r0);
                    r0 = r3 + 0x1770u;
                    if ((s32)r0 > 10000) {
                        r0 = 0x2710u;
                    }
                    r0 = r0 & 0xffffu;
                    if (r0 >= 0x2710u) {
                        r0 = 0x2710u;
                    }
                    wr16(0x8049908cu, (u16)r0);
                    if ((u32)rd16(0x80499214u) != 0x2e8u) {
                        a.r[0] = 0x80499214u;
                        (void)tc_call(0x800817c0u, &a);
                        wr16(0x80499214u, 0x2e8u);
                        wr8(0x80499216u, 1u);
                        wr8(0x80499217u, 1u);
                    }
                    r26 = 0u;
                    r27 = 0u;
                    do {
                        if (r27 != 2u) {
                            a.r[0] = rd32(0x804863d8u);
                            a.r[1] = r27;
                            (void)tc_call(0x8006d830u, &a);
                        } else {
                            r28 = 1u;
                            if ((rd32(0x80499094u) & 4u) == 0u) {
                                a.r[0] = 0x8049e140u;
                                a.r[1] = 4u;
                                r3 = tc_call(0x801a8f18u, &a);
                                if (r3 == 0u) {
                                    r28 = 0u;
                                }
                            }
                            if (r28 != 0u) {
                                r26 = 1u;
                            }
                        }
                        r27 = r27 + 1u;
                    } while (r27 < 0x1au);
                    if (r26 == 0u) {
                        r28 = 1u;
                        if ((rd32(0x80499094u) & 0x800000u) == 0u) {
                            a.r[0] = 0x8049e140u;
                            a.r[1] = 0x800000u;
                            r3 = tc_call(0x801a8f18u, &a);
                            if (r3 == 0u) {
                                r28 = 0u;
                            }
                        }
                        if (r28 != 0u) break;
                        f1 = tc_callf(0x80040a00u, &a);
                        f0 = (f64)rdf32(0x80572784u);
                        f1 = (f64)(f32)((f64)rdf32(0x8057273cu) * f1);
                        if (!((f1 < f0) || (f1 == f0))) break;
                        r0 = rd32(0x80499094u);
                        wrf32d(0x804991b4u, (f64)rdf32(0x80572734u));
                        r0 = r0 | 4u;
                        wr32(0x80499094u, r0);
                        break;
                    }
                    wrf32d(0x804991b4u, (f64)rdf32(0x80572734u));
                    break;
                }
                if (c0lt) {
                    r5 = (u32)rd16(0x8049908au);
                    r6 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
                    if ((s32)r6 <= 0) {
                        r6 = 0u;
                    }
                    if ((s32)r6 >= 65535) {
                        r6 = 0xffffu;
                    }
                    if ((s32)r6 <= 0) {
                        r6 = 0x64u;
                    }
                    r6 = r6 & 0xffffu;
                    r4 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
                    if ((s32)r4 <= 0) {
                        r4 = 0u;
                    }
                    if ((s32)r4 >= 65535) {
                        r4 = 0xffffu;
                    }
                    if ((s32)r4 <= 0) {
                        r4 = 0x64u;
                    }
                    f0 = (f64)(f32)((f64)rdf32(0x80572778u) * (f64)(f32)(px_b2f((u64)(r4 & 0xffffu) | 0x4330000000000000ull) - rdf64(0x80572760u)));
                    f0 = px_ctiw(f0, ppc_fctiwz(f0));
                    if ((s32)r6 >= (s32)(r5 + ((u32)px_f2b(f0) & 0xffffu))) {
                        r4 = (u32)rd16(0x8049908au);
                        r5 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
                        if ((s32)r5 <= 0) {
                            r5 = 0u;
                        }
                        if ((s32)r5 >= 65535) {
                            r5 = 0xffffu;
                        }
                        if ((s32)r5 <= 0) {
                            r5 = 0x64u;
                        }
                        f0 = (f64)(f32)((f64)rdf32(0x80572778u) * (f64)(f32)(px_b2f((u64)(r5 & 0xffffu) | 0x4330000000000000ull) - rdf64(0x80572760u)));
                        f0 = px_ctiw(f0, ppc_fctiwz(f0));
                        r0 = r4 + ((u32)px_f2b(f0) & 0xffffu);
                    } else {
                        r4 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
                        if ((s32)r4 <= 0) {
                            r4 = 0u;
                        }
                        if ((s32)r4 >= 65535) {
                            r4 = 0xffffu;
                        }
                        if ((s32)r4 <= 0) {
                            r4 = 0x64u;
                        }
                        r0 = r4 & 0xffffu;
                    }
                    r0 = r0 & 0xffffu;
                    if (r0 < 1u) {
                        r0 = 1u;
                    }
                    r0 = r0 & 0xffffu;
                    if (r0 >= 0xffffu) {
                        r0 = 0xffffu;
                    }
                    r3 = (u32)rd16(0x8049908cu);
                    wr16(0x8049908au, (u16)r0);
                    r0 = r3 + 0x1f40u;
                    if ((s32)r0 > 10000) {
                        r0 = 0x2710u;
                    }
                    r0 = r0 & 0xffffu;
                    if (r0 >= 0x2710u) {
                        r0 = 0x2710u;
                    }
                    wr16(0x8049908cu, (u16)r0);
                    if ((u32)rd16(0x80499214u) != 0x2e8u) {
                        a.r[0] = 0x80499214u;
                        (void)tc_call(0x800817c0u, &a);
                        wr16(0x80499214u, 0x2e8u);
                        wr8(0x80499216u, 1u);
                        wr8(0x80499217u, 1u);
                    }
                    r26 = 0u;
                    r27 = 0u;
                    do {
                        if (r27 != 2u) {
                            a.r[0] = rd32(0x804863d8u);
                            a.r[1] = r27;
                            (void)tc_call(0x8006d830u, &a);
                        } else {
                            r28 = 1u;
                            if ((rd32(0x80499094u) & 4u) == 0u) {
                                a.r[0] = 0x8049e140u;
                                a.r[1] = 4u;
                                r3 = tc_call(0x801a8f18u, &a);
                                if (r3 == 0u) {
                                    r28 = 0u;
                                }
                            }
                            if (r28 != 0u) {
                                r26 = 1u;
                            }
                        }
                        r27 = r27 + 1u;
                    } while (r27 < 0x1au);
                    if (r26 == 0u) {
                        r28 = 1u;
                        if ((rd32(0x80499094u) & 0x800000u) == 0u) {
                            a.r[0] = 0x8049e140u;
                            a.r[1] = 0x800000u;
                            r3 = tc_call(0x801a8f18u, &a);
                            if (r3 == 0u) {
                                r28 = 0u;
                            }
                        }
                        if (r28 != 0u) break;
                        f1 = tc_callf(0x80040a00u, &a);
                        f0 = (f64)rdf32(0x8057277cu);
                        f1 = (f64)(f32)((f64)rdf32(0x8057273cu) * f1);
                        if (!((f1 < f0) || (f1 == f0))) break;
                        r0 = rd32(0x80499094u);
                        wrf32d(0x804991b4u, (f64)rdf32(0x80572734u));
                        r0 = r0 | 4u;
                        wr32(0x80499094u, r0);
                        break;
                    }
                    wrf32d(0x804991b4u, (f64)rdf32(0x80572734u));
                    break;
                }
            } else {
                if ((s32)r3 >= 2) {
                    r5 = (u32)rd16(0x8049908au);
                    r6 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
                    if ((s32)r6 <= 0) {
                        r6 = 0u;
                    }
                    if ((s32)r6 >= 65535) {
                        r6 = 0xffffu;
                    }
                    if ((s32)r6 <= 0) {
                        r6 = 0x64u;
                    }
                    r6 = r6 & 0xffffu;
                    r4 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
                    if ((s32)r4 <= 0) {
                        r4 = 0u;
                    }
                    if ((s32)r4 >= 65535) {
                        r4 = 0xffffu;
                    }
                    if ((s32)r4 <= 0) {
                        r4 = 0x64u;
                    }
                    f0 = (f64)(f32)((f64)rdf32(0x80572770u) * (f64)(f32)(px_b2f((u64)(r4 & 0xffffu) | 0x4330000000000000ull) - rdf64(0x80572760u)));
                    f0 = px_ctiw(f0, ppc_fctiwz(f0));
                    if ((s32)r6 >= (s32)(r5 + ((u32)px_f2b(f0) & 0xffffu))) {
                        r4 = (u32)rd16(0x8049908au);
                        r5 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
                        if ((s32)r5 <= 0) {
                            r5 = 0u;
                        }
                        if ((s32)r5 >= 65535) {
                            r5 = 0xffffu;
                        }
                        if ((s32)r5 <= 0) {
                            r5 = 0x64u;
                        }
                        f0 = (f64)(f32)((f64)rdf32(0x80572770u) * (f64)(f32)(px_b2f((u64)(r5 & 0xffffu) | 0x4330000000000000ull) - rdf64(0x80572760u)));
                        f0 = px_ctiw(f0, ppc_fctiwz(f0));
                        r0 = r4 + ((u32)px_f2b(f0) & 0xffffu);
                    } else {
                        r4 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
                        if ((s32)r4 <= 0) {
                            r4 = 0u;
                        }
                        if ((s32)r4 >= 65535) {
                            r4 = 0xffffu;
                        }
                        if ((s32)r4 <= 0) {
                            r4 = 0x64u;
                        }
                        r0 = r4 & 0xffffu;
                    }
                    r0 = r0 & 0xffffu;
                    if (r0 < 1u) {
                        r0 = 1u;
                    }
                    r0 = r0 & 0xffffu;
                    if (r0 >= 0xffffu) {
                        r0 = 0xffffu;
                    }
                    r3 = (u32)rd16(0x8049908cu);
                    wr16(0x8049908au, (u16)r0);
                    r0 = r3 + 0x1388u;
                    if ((s32)r0 > 10000) {
                        r0 = 0x2710u;
                    }
                    r0 = r0 & 0xffffu;
                    if (r0 >= 0x2710u) {
                        r0 = 0x2710u;
                    }
                    r26 = 0u;
                    r27 = 0u;
                    wr16(0x8049908cu, (u16)r0);
                    do {
                        if (r27 != 2u) {
                            a.r[0] = rd32(0x804863d8u);
                            a.r[1] = r27;
                            (void)tc_call(0x8006d830u, &a);
                        } else {
                            r28 = 1u;
                            if ((rd32(0x80499094u) & 4u) == 0u) {
                                a.r[0] = 0x8049e140u;
                                a.r[1] = 4u;
                                r3 = tc_call(0x801a8f18u, &a);
                                if (r3 == 0u) {
                                    r28 = 0u;
                                }
                            }
                            if (r28 != 0u) {
                                r26 = 1u;
                            }
                        }
                        r27 = r27 + 1u;
                    } while (r27 < 0x1au);
                    if (r26 == 0u) {
                        r28 = 1u;
                        if ((rd32(0x80499094u) & 0x800000u) == 0u) {
                            a.r[0] = 0x8049e140u;
                            a.r[1] = 0x800000u;
                            r3 = tc_call(0x801a8f18u, &a);
                            if (r3 == 0u) {
                                r28 = 0u;
                            }
                        }
                        if (r28 != 0u) break;
                        f1 = tc_callf(0x80040a00u, &a);
                        f0 = (f64)rdf32(0x80572774u);
                        f1 = (f64)(f32)((f64)rdf32(0x8057273cu) * f1);
                        if (!((f1 < f0) || (f1 == f0))) break;
                        r0 = rd32(0x80499094u);
                        wrf32d(0x804991b4u, (f64)rdf32(0x80572734u));
                        r0 = r0 | 4u;
                        wr32(0x80499094u, r0);
                        break;
                    }
                    wrf32d(0x804991b4u, (f64)rdf32(0x80572734u));
                    break;
                }
                if ((s32)r3 >= 0) {
                    r5 = (u32)rd16(0x8049908au);
                    r6 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
                    if ((s32)r6 <= 0) {
                        r6 = 0u;
                    }
                    if ((s32)r6 >= 65535) {
                        r6 = 0xffffu;
                    }
                    if ((s32)r6 <= 0) {
                        r6 = 0x64u;
                    }
                    r6 = r6 & 0xffffu;
                    r4 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
                    if ((s32)r4 <= 0) {
                        r4 = 0u;
                    }
                    if ((s32)r4 >= 65535) {
                        r4 = 0xffffu;
                    }
                    if ((s32)r4 <= 0) {
                        r4 = 0x64u;
                    }
                    f0 = (f64)(f32)((f64)rdf32(0x80572770u) * (f64)(f32)(px_b2f((u64)(r4 & 0xffffu) | 0x4330000000000000ull) - rdf64(0x80572760u)));
                    f0 = px_ctiw(f0, ppc_fctiwz(f0));
                    if ((s32)r6 >= (s32)(r5 + ((u32)px_f2b(f0) & 0xffffu))) {
                        r4 = (u32)rd16(0x8049908au);
                        r5 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
                        if ((s32)r5 <= 0) {
                            r5 = 0u;
                        }
                        if ((s32)r5 >= 65535) {
                            r5 = 0xffffu;
                        }
                        if ((s32)r5 <= 0) {
                            r5 = 0x64u;
                        }
                        f0 = (f64)(f32)((f64)rdf32(0x80572770u) * (f64)(f32)(px_b2f((u64)(r5 & 0xffffu) | 0x4330000000000000ull) - rdf64(0x80572760u)));
                        f0 = px_ctiw(f0, ppc_fctiwz(f0));
                        r0 = r4 + ((u32)px_f2b(f0) & 0xffffu);
                    } else {
                        r4 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
                        if ((s32)r4 <= 0) {
                            r4 = 0u;
                        }
                        if ((s32)r4 >= 65535) {
                            r4 = 0xffffu;
                        }
                        if ((s32)r4 <= 0) {
                            r4 = 0x64u;
                        }
                        r0 = r4 & 0xffffu;
                    }
                    r0 = r0 & 0xffffu;
                    if (r0 < 1u) {
                        r0 = 1u;
                    }
                    r0 = r0 & 0xffffu;
                    if (r0 >= 0xffffu) {
                        r0 = 0xffffu;
                    }
                    r3 = (u32)rd16(0x8049908cu);
                    wr16(0x8049908au, (u16)r0);
                    r0 = r3 + 0x1388u;
                    if ((s32)r0 > 10000) {
                        r0 = 0x2710u;
                    }
                    r0 = r0 & 0xffffu;
                    if (r0 >= 0x2710u) {
                        r0 = 0x2710u;
                    }
                    r27 = 0u;
                    r26 = 0u;
                    wr16(0x8049908cu, (u16)r0);
                    do {
                        if (r26 != 2u) {
                            a.r[0] = rd32(0x804863d8u);
                            a.r[1] = r26;
                            (void)tc_call(0x8006d830u, &a);
                        } else {
                            r28 = 1u;
                            if ((rd32(0x80499094u) & 4u) == 0u) {
                                a.r[0] = 0x8049e140u;
                                a.r[1] = 4u;
                                r3 = tc_call(0x801a8f18u, &a);
                                if (r3 == 0u) {
                                    r28 = 0u;
                                }
                            }
                            if (r28 != 0u) {
                                r27 = 1u;
                            }
                        }
                        r26 = r26 + 1u;
                    } while (r26 < 0x1au);
                    if (r27 == 0u) {
                        r28 = 1u;
                        if ((rd32(0x80499094u) & 0x800000u) == 0u) {
                            a.r[0] = 0x8049e140u;
                            a.r[1] = 0x800000u;
                            r3 = tc_call(0x801a8f18u, &a);
                            if (r3 == 0u) {
                                r28 = 0u;
                            }
                        }
                        if (r28 == 0u) {
                            f1 = tc_callf(0x80040a00u, &a);
                            f0 = (f64)rdf32(0x80572774u);
                            f1 = (f64)(f32)((f64)rdf32(0x8057273cu) * f1);
                            if ((f1 < f0) || (f1 == f0)) {
                                r0 = rd32(0x80499094u);
                                wrf32d(0x804991b4u, (f64)rdf32(0x80572734u));
                                r0 = r0 | 4u;
                                wr32(0x80499094u, r0);
                            }
                        }
                    } else {
                        wrf32d(0x804991b4u, (f64)rdf32(0x80572734u));
                    }
                    if ((u32)rd16(0x80499214u) != 0x2e8u) {
                        a.r[0] = 0x80499214u;
                        (void)tc_call(0x800817c0u, &a);
                        wr16(0x80499214u, 0x2e8u);
                        wr8(0x80499216u, 1u);
                        wr8(0x80499217u, 1u);
                    }
                    r26 = 0u;
                    do {
                        if (r26 != 2u) {
                            a.r[0] = rd32(0x804863d8u);
                            a.r[1] = r26;
                            (void)tc_call(0x8006d830u, &a);
                        }
                        r26 = r26 + 1u;
                    } while (r26 < 0x1au);
                    break;
                }
            }
            r4 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
            if ((s32)r4 <= 0) {
                r4 = 0u;
            }
            if ((s32)r4 >= 65535) {
                r4 = 0xffffu;
            }
            if ((s32)r4 <= 0) {
                r4 = 0x64u;
            }
            r0 = r4 & 0xffffu;
            if (r0 >= 0xffffu) {
                r0 = 0xffffu;
            }
            wr16(0x8049908au, (u16)r0);
            r0 = (u32)rd16(0x80499214u);
            wr16(0x8049908cu, 0x2710u);
            if (r0 != 0x2e8u) {
                a.r[0] = 0x80499214u;
                (void)tc_call(0x800817c0u, &a);
                wr16(0x80499214u, 0x2e8u);
                wr8(0x80499216u, 1u);
                wr8(0x80499217u, 1u);
            }
            r26 = 0u;
            do {
                a.r[0] = rd32(0x804863d8u);
                a.r[1] = r26;
                (void)tc_call(0x8006d830u, &a);
                r26 = r26 + 1u;
            } while (r26 < 0x1au);
        }
    } while (0);
    if ((u32)rd16(0x8049908au) == 0u) {
        wr16(0x8049908au, 1u);
    }
    return;
}
