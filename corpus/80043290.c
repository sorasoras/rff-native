#include "tc_rt.h"

void fn_80043290(void)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    f31 = (f64)rdf32(0x8057209cu);
    r26 = 0u;
    r28 = 0x803bf6e8u;
    r27 = 0u;
    do {
        r25 = r28 + 0x844u;
        a.r[0] = r27;
        a.r[1] = r28;
        a.r[2] = 0x10u;
        r3 = tc_call(0x802ba63cu, &a);
        wr32(r28 + 0x840u, r3);
        wr32(r25, rd32(r28) & 0xffffu);
        wr32(r25 + 4u, rd32(r28 + 4u) & 0xffffu);
        wr32(r25 + 8u, rd32(r28 + 8u) & 0xffffu);
        wr32(r25 + 0xfcu, (u32)rd8(r28 + 0x5cu));
        wr8(r25 + 0x101u, rd8(r28 + 0x5eu));
        wr32(r25 + 0x104u, (u32)(s8)rd8(r28 + 0x5du));
        wr16(r25 + 0x108u, (u16)rd32(r28 + 0x840u));
        a.r[0] = r27;
        a.r[1] = r25 + 0x100u;
        r3 = tc_call(0x8027a6a8u, &a);
        if (r3 != 0u) {
            wr8(r25 + 0x100u, 0xffu);
        }
        if (rd32(r25 + 0x104u) != 0u || rd32(r25 + 0xfcu) != 2u) {
            wr32(r25 + 0x10u, 0u);
            wr32(r25 + 0x14u, 0u);
            wr32(r25 + 0x18u, 0u);
        } else {
            wr32(r25 + 0x10u, rd32(r28 + 0x60u));
            wr32(r25 + 0x14u, rd32(r28 + 0x64u));
            wr32(r25 + 0x18u, rd32(r28 + 0x68u));
        }
        if (rd32(0x803c1c7cu) == 0u) {
            if ((s32)rd32(r25 + 0xf0u) <= 0) {
                if ((s32)rd32(r25 + 0xf4u) > 0) {
                    r3 = tc_call(0x8003c9c8u, &a);
                    r0 = rd32(r25 + 0xf4u) - r3;
                    wr32(r25 + 0xf4u, r0);
                    if ((s32)r0 < 0) {
                        wr32(r25 + 0xf4u, 0u);
                    }
                }
            } else {
                r3 = tc_call(0x8003c9c8u, &a);
                r0 = rd32(r25 + 0xf0u) - r3;
                wr32(r25 + 0xf0u, r0);
                if ((s32)r0 <= 0) {
                    wr32(r25 + 0xf0u, 0u);
                    a.r[0] = r27;
                    a.r[1] = 0u;
                    (void)tc_call(0x8027a740u, &a);
                    wr32(r25 + 0xf4u, rd32(0x803c1c6cu));
                }
            }
        }
        r4 = rd32(r25 + 0xcu);
        if (rd32(r25 + 4u) != 0u) {
            wr32(r25 + 0xe0u, 0u);
            wr32(r25 + 0xe4u, 0u);
            r4 = rd32(r25 + 4u);
        } else {
            r0 = rd32(r25 + 0xe0u);
            c0lt = (s32)r0 < 1;
            if (r0 == 1u) {
                r0 = rd32(r25 + 0xe4u) + 1u;
                wr32(r25 + 0xe4u, r0);
                if ((s32)r0 >= 3) {
                    wr32(r25 + 0xe4u, 0u);
                    r4 = rd32(r25);
                } else {
                    r4 = 0u;
                }
            } else if (c0lt && (s32)r0 >= 0) {
                r3 = rd32(r25 + 0xe4u);
                if ((s32)r3 >= 16) {
                    wr32(r25 + 0xe4u, 0u);
                    r4 = rd32(r25);
                    wr32(r25 + 0xe0u, rd32(r25 + 0xe0u) + 1u);
                } else {
                    r4 = 0u;
                    wr32(r25 + 0xe4u, r3 + 1u);
                }
            }
        }
        wr32(r25 + 0xcu, r4);
        r22 = rd32(r25 + 0x1cu);
        if (rd32(r25 + 0x14u) != 0u) {
            wr32(r25 + 0xe8u, 0u);
            wr32(r25 + 0xecu, 0u);
            r22 = rd32(r25 + 0x14u);
        } else {
            r0 = rd32(r25 + 0xe8u);
            c0lt = (s32)r0 < 1;
            if (r0 == 1u) {
                r3 = tc_call(0x8003c9c8u, &a);
                r0 = rd32(r25 + 0xecu) + r3;
                wr32(r25 + 0xecu, r0);
                if ((s32)r0 >= 3) {
                    wr32(r25 + 0xecu, 0u);
                    r22 = rd32(r25 + 0x10u);
                } else {
                    r22 = 0u;
                }
            } else if (c0lt && (s32)r0 >= 0) {
                if ((s32)rd32(r25 + 0xecu) >= 20) {
                    wr32(r25 + 0xecu, 0u);
                    r22 = rd32(r25 + 0x10u);
                    wr32(r25 + 0xe8u, rd32(r25 + 0xe8u) + 1u);
                } else {
                    r22 = 0u;
                    r3 = tc_call(0x8003c9c8u, &a);
                    wr32(r25 + 0xecu, rd32(r25 + 0xecu) + r3);
                }
            }
        }
        wr32(r25 + 0x1cu, r22);
        wr32(0x817fdfa8u, 0u);
        a.r[0] = r27;
        a.r[1] = 0x817fdfa8u;
        r3 = tc_call(0x8027a174u, &a);
        c0lt = (s32)r3 < -1;
        wr32(r25 + 0x104u, r3);
        do {
            if (r3 != 0xffffffffu) {
                if (!c0lt) {
                    if ((s32)r3 >= 1) break;
                    r0 = rd32(r25 + 0xfcu);
                    c0lt = (s32)r0 < 2;
                    do {
                        if (r0 == 2u) {
                            wrf32d(r25 + 0x58u, (f64)rdf32(r28 + 0x6cu));
                            wrf32d(r25 + 0x5cu, (f64)rdf32(r28 + 0x70u));
                            wrf32d(r25 + 0x60u, (f64)rdf32(r28 + 0x74u));
                            wrf32d(r25 + 0x64u, (f64)rdf32(r28 + 0x78u));
                            wrf32d(r25 + 0x68u, (f64)rdf32(r28 + 0x7cu));
                            wrf32d(r25 + 0x6cu, (f64)rdf32(r28 + 0x80u));
                        } else if (c0lt) {
                            c0lt = (s32)r0 < 0;
                            if (r0 != 0u) {
                                if (c0lt) break;
                                r3 = r28;
                                f3 = (f64)rdf32(0x8057209cu);
                                r4 = 0u;
                                wrf32d(r25 + 0x58u, (f64)rdf32(r28 + 0x60u));
                                wrf32d(r25 + 0x5cu, (f64)rdf32(r28 + 0x64u));
                                wrf32d(r25 + 0x38u, (f64)rdf32(r28 + 0x68u));
                                wrf32d(r25 + 0x3cu, (f64)rdf32(r28 + 0x6cu));
                                wrf32d(r25 + 0x40u, (f64)rdf32(r28 + 0x70u));
                                while ((s32)r4 < (s32)rd32(r28 + 0x840u)) {
                                    f0 = (f64)rdf32(r3 + 0x6cu);
                                    f2 = (f64)rdf32(r3 + 0x68u);
                                    f1 = (f64)(f32)(f0 * f0);
                                    f0 = (f64)rdf32(r3 + 0x70u);
                                    f1 = ppc_fmadds(f2, f2, f1);
                                    f0 = ppc_fmadds(f0, f0, f1);
                                    if (f3 < f0) {
                                        wrf32d(r25 + 0x44u, f2);
                                        f3 = f0;
                                        wrf32d(r25 + 0x48u, (f64)rdf32(r3 + 0x6cu));
                                        wrf32d(r25 + 0x4cu, (f64)rdf32(r3 + 0x70u));
                                    }
                                    r3 = r3 + 0x84u;
                                    r4 = r4 + 1u;
                                }
                            }
                            if (rd32(r25 + 0xfcu) == 0u) {
                                wrf32d(r25 + 0x58u, f31);
                                wrf32d(r25 + 0x5cu, f31);
                                wrf32d(r25 + 0x38u, f31);
                                wrf32d(r25 + 0x3cu, f31);
                                wrf32d(r25 + 0x40u, f31);
                                wrf32d(r25 + 0x44u, f31);
                                wrf32d(r25 + 0x48u, f31);
                                wrf32d(r25 + 0x4cu, f31);
                            }
                            wrf32d(r25 + 0x20u, (f64)rdf32(r28 + 0xcu));
                            wrf32d(r25 + 0x24u, (f64)rdf32(r28 + 0x10u));
                            wrf32d(r25 + 0x28u, (f64)rdf32(r28 + 0x14u));
                            wrf32d(r25 + 0x50u, (f64)rdf32(r28 + 0x54u));
                            wrf32d(r25 + 0x54u, (f64)rdf32(r28 + 0x58u));
                            wrf32d(r25 + 0x60u, f31);
                            wrf32d(r25 + 0x64u, f31);
                            wrf32d(r25 + 0x68u, f31);
                            wrf32d(r25 + 0x6cu, f31);
                        }
                    } while (0);
                    if (rd32(r25 + 0xfcu) != 0xffu) {
                        r23 = 3u;
                        f30 = (f64)rdf32(0x8057209cu);
                        r22 = 0u;
                        r24 = r28 + ((rd32(r28 + 0x840u) - 1u) * 0x84u);
                        while ((s32)r22 < (s32)rd32(r28 + 0x840u)) {
                            f0 = (f64)rdf32(r24 + 0x10u);
                            f2 = (f64)rdf32(r24 + 0xcu);
                            f1 = (f64)(f32)(f0 * f0);
                            f0 = (f64)rdf32(r24 + 0x14u);
                            f1 = ppc_fmadds(f2, f2, f1);
                            f0 = ppc_fmadds(f0, f0, f1);
                            if (f30 < f0) {
                                wrf32d(r25 + 0x2cu, f2);
                                f30 = f0;
                                wrf32d(r25 + 0x30u, (f64)rdf32(r24 + 0x10u));
                                wrf32d(r25 + 0x34u, (f64)rdf32(r24 + 0x14u));
                            }
                            r0 = (u32)(s8)rd8(r24 + 0x5eu);
                            if (r0 != 2u) {
                                c0eq = r0 == 0u;
                                if ((s32)r0 <= 0) {
                                    if (!c0eq) {
                                        a.r[0] = r25 + 0xc4u;
                                        a.r[1] = r24;
                                        (void)tc_call(0x8004322cu, &a);
                                        r0 = 2u;
                                        if ((s32)r23 < 2) {
                                            r0 = r23;
                                        }
                                        r23 = r0;
                                    }
                                } else {
                                    a.r[0] = r25 + 0xa8u;
                                    a.r[1] = r24;
                                    (void)tc_call(0x8004322cu, &a);
                                    r3 = rd32(r25 + 0xacu);
                                    r0 = 1u;
                                    wr32(r25 + 0xc4u, rd32(r25 + 0xa8u));
                                    wr32(r25 + 0xc8u, r3);
                                    r3 = rd32(r25 + 0xb4u);
                                    wr32(r25 + 0xccu, rd32(r25 + 0xb0u));
                                    wr32(r25 + 0xd0u, r3);
                                    r3 = rd32(r25 + 0xbcu);
                                    wr32(r25 + 0xd4u, rd32(r25 + 0xb8u));
                                    wr32(r25 + 0xd8u, r3);
                                    wrf32d(r25 + 0xdcu, (f64)rdf32(r25 + 0xc0u));
                                    if ((s32)r23 < 1) {
                                        r0 = r23;
                                    }
                                    r23 = r0;
                                }
                            } else {
                                a.r[0] = r25 + 0x8cu;
                                a.r[1] = r24;
                                (void)tc_call(0x8004322cu, &a);
                                r3 = rd32(r25 + 0x90u);
                                r23 = r23 & (u32)((s32)r23 >> 31);
                                wr32(r25 + 0xa8u, rd32(r25 + 0x8cu));
                                wr32(r25 + 0xacu, r3);
                                r0 = rd32(r25 + 0x98u);
                                wr32(r25 + 0xb0u, rd32(r25 + 0x94u));
                                wr32(r25 + 0xb4u, r0);
                                r0 = rd32(r25 + 0xa0u);
                                wr32(r25 + 0xb8u, rd32(r25 + 0x9cu));
                                wr32(r25 + 0xbcu, r0);
                                wrf32d(r25 + 0xc0u, (f64)rdf32(r25 + 0xa4u));
                                r0 = rd32(r25 + 0x90u);
                                wr32(r25 + 0xc4u, rd32(r25 + 0x8cu));
                                wr32(r25 + 0xc8u, r0);
                                r0 = rd32(r25 + 0x98u);
                                wr32(r25 + 0xccu, rd32(r25 + 0x94u));
                                wr32(r25 + 0xd0u, r0);
                                r0 = rd32(r25 + 0xa0u);
                                wr32(r25 + 0xd4u, rd32(r25 + 0x9cu));
                                wr32(r25 + 0xd8u, r0);
                                wrf32d(r25 + 0xdcu, (f64)rdf32(r25 + 0xa4u));
                                r0 = rd32(r25 + 0x90u);
                                wr32(r25 + 0x70u, rd32(r25 + 0x8cu));
                                wr32(r25 + 0x74u, r0);
                                r0 = rd32(r25 + 0x98u);
                                wr32(r25 + 0x78u, rd32(r25 + 0x94u));
                                wr32(r25 + 0x7cu, r0);
                                r0 = rd32(r25 + 0xa0u);
                                wr32(r25 + 0x80u, rd32(r25 + 0x9cu));
                                wr32(r25 + 0x84u, r0);
                                wrf32d(r25 + 0x88u, (f64)rdf32(r25 + 0xa4u));
                            }
                            r22 = r22 + 1u;
                            r24 = r24 - 0x84u;
                        }
                        if ((s32)r23 <= 1) {
                            r4 = r25 + (r23 * 0x1cu);
                            r0 = rd32(r4 + 0x90u);
                            wr32(r25 + 0x70u, rd32(r4 + 0x8cu));
                            wr32(r25 + 0x74u, r0);
                            r0 = rd32(r4 + 0x98u);
                            wr32(r25 + 0x78u, rd32(r4 + 0x94u));
                            wr32(r25 + 0x7cu, r0);
                            r0 = rd32(r4 + 0xa0u);
                            wr32(r25 + 0x80u, rd32(r4 + 0x9cu));
                            wr32(r25 + 0x84u, r0);
                            wrf32d(r25 + 0x88u, (f64)rdf32(r4 + 0xa4u));
                        }
                    }
                    if (rd32(r28 + 0x950u) == 0u) {
                        a.r[0] = r27;
                        r3 = tc_call(0x8027cb20u, &a);
                        if (r3 != 0u) {
                            a.r[0] = r27;
                            (void)tc_call(0x802bb0fcu, &a);
                        }
                    } else {
                        a.r[0] = r27;
                        r3 = tc_call(0x8027cb20u, &a);
                        if (r3 == 0u) {
                            a.r[0] = r27;
                            (void)tc_call(0x802bb118u, &a);
                        }
                    }
                    r26 = r26 + 1u;
                    if ((s32)r26 <= (s32)rd32(0x803c1c70u)) break;
                    a.r[0] = r27;
                    (void)tc_call(0x8027a0b0u, &a);
                    break;
                }
                if (r3 != 0xfffffffcu) break;
            }
            wrf32d(r25 + 0x20u, f31);
            wrf32d(r25 + 0x24u, f31);
            wrf32d(r25 + 0x28u, f31);
            wrf32d(r25 + 0x2cu, f31);
            wrf32d(r25 + 0x30u, f31);
            wrf32d(r25 + 0x34u, f31);
            wrf32d(r25 + 0x38u, f31);
            wrf32d(r25 + 0x3cu, f31);
            wrf32d(r25 + 0x40u, f31);
            wrf32d(r25 + 0x44u, f31);
            wrf32d(r25 + 0x48u, f31);
            wrf32d(r25 + 0x4cu, f31);
            wrf32d(r25 + 0x50u, f31);
            wrf32d(r25 + 0x54u, f31);
            wrf32d(r25 + 0x58u, f31);
            wrf32d(r25 + 0x5cu, f31);
            wrf32d(r25 + 0x60u, f31);
            wrf32d(r25 + 0x64u, f31);
            wrf32d(r25 + 0x68u, f31);
            wrf32d(r25 + 0x6cu, f31);
        } while (0);
        r27 = r27 + 1u;
        r28 = r28 + 0x954u;
    } while (r27 < 4u);
    return;
}
