#include "tc_rt.h"

void fn_800bd47c(u32 param_r3)
{
    u32 c0lt = 0, ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    u32 r11 = 0, r12 = 0, r25 = 0, r26 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    r31 = rd32(0x804863d8u);
    r4 = rd32(r31 + 0xa48u);
    r30 = rd32(r31 + 0x5c0u);
    if (r4 == 0u) {
        r29 = 0x2e8u;
    } else {
        r29 = rd32(r4 + 0x74u);
    }
    wr32(param_r3 + 0x18b0u, 0u);
    wr32(param_r3 + 0x1af8u, 0u);
    wr32(param_r3 + 0x1d40u, 0u);
    if (rd32(rd32(0x805711ccu) + 0xfcu) != 2u) {
        f3 = (f64)rdf32(0x80572c98u);
        f2 = (f64)rdf32(0x80572e30u);
        f1 = (f64)rdf32(0x80572e14u);
        f0 = (f64)rdf32(0x80572e34u);
        wrf32d(param_r3 + 0x17a4u, f3);
        wrf32d(param_r3 + 0x17a8u, f3);
        wrf32d(param_r3 + 0x17acu, f2);
        wrf32d(param_r3 + 0x17b0u, f1);
        wrf32d(param_r3 + 0x19ecu, f2);
        wrf32d(param_r3 + 0x19f0u, f3);
        wrf32d(param_r3 + 0x19f4u, f0);
        wrf32d(param_r3 + 0x19f8u, f1);
    } else {
        f3 = (f64)rdf32(0x80572e14u);
        f2 = (f64)rdf32(0x80572e30u);
        f1 = (f64)rdf32(0x80572ca0u);
        f0 = (f64)rdf32(0x80572e34u);
        wrf32d(param_r3 + 0x17a4u, (f64)rdf32(0x80572c98u));
        wrf32d(param_r3 + 0x17a8u, f3);
        wrf32d(param_r3 + 0x17acu, f2);
        wrf32d(param_r3 + 0x17b0u, f1);
        wrf32d(param_r3 + 0x19ecu, f2);
        wrf32d(param_r3 + 0x19f0u, f3);
        wrf32d(param_r3 + 0x19f4u, f0);
        wrf32d(param_r3 + 0x19f8u, f1);
    }
    a.r[0] = 0x803d29f8u;
    a.r[1] = 0u;
    r3 = tc_call(0x8009a644u, &a);
    r26 = r3;
    a.r[0] = 0x803d29f8u;
    a.r[1] = 1u;
    r3 = tc_call(0x8009a644u, &a);
    f0 = (f64)rdf32(0x80572dc4u);
    r27 = r3;
    wr32(param_r3 + 0x1918u, 0u);
    f1 = (f64)rdf32(0x80572de4u);
    wr32(param_r3 + 0x1b60u, 0u);
    wr32(param_r3 + 0x1da8u, 0u);
    wrf32d(param_r3 + 0x191cu, f0);
    wrf32d(param_r3 + 0x1b64u, f0);
    wrf32d(param_r3 + 0x1dacu, f0);
    r5 = rd32(0x804890d8u);
    r0 = rd32(0x804890dcu);
    wr32(0x817fdfb4u, rd32(0x804890d4u));
    wr32(0x817fdfb8u, r5);
    wr32(0x817fdfbcu, r0);
    a.f[0] = f1;
    a.r[0] = 0x817fdfb4u;
    a.r[1] = 0x817fdfb4u;
    f1 = tc_callf(0x802343c8u, &a);
    a.r[0] = r31;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    f1 = tc_callf(rd32(rd32(r31) + 0x2cu), &a);
    f31 = f1;
    r3 = rd32(0x817fdfb8u);
    r0 = rd32(0x817fdfbcu);
    wr32(0x817fdfa8u, rd32(0x817fdfb4u));
    wr32(0x817fdfacu, r3);
    wr32(0x817fdfb0u, r0);
    a.f[0] = f1;
    f1 = tc_callf(0x80262704u, &a);
    f30 = (f64)(f32)f1;
    a.f[0] = f31;
    f1 = tc_callf(0x80262b10u, &a);
    f4 = (f64)(f32)f1;
    f1 = (f64)rdf32(0x817fdfb0u);
    f3 = (f64)rdf32(0x817fdfa8u);
    f0 = (f64)(f32)(f1 * f30);
    f2 = (f64)(f32)(f1 * f4);
    f1 = -f4;
    f2 = ppc_fmadds(f3, f30, f2);
    f0 = ppc_fmadds(f3, f1, f0);
    wrf32d(0x817fdfb4u, f2);
    wrf32d(0x817fdfbcu, f0);
    a.r[0] = r31;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    r3 = tc_call(rd32(rd32(r31) + 0x28u), &a);
    a.r[0] = 0x817fdfb4u;
    a.r[1] = r3;
    a.r[2] = 0x817fdfb4u;
    (void)tc_call(0x80234380u, &a);
    do {
        if (rd32(r31 + 0x290u) != 0x19u) {
            a.r[0] = r31;
            r3 = tc_call(0x800c37fcu, &a);
            if (r3 != 0u) {
                r3 = tc_call(0x800cf66cu, &a);
                if (r3 == 0u) {
                    wr32(param_r3 + 0x1918u, 0x12u);
                    break;
                }
            }
            a.r[0] = r31;
            r3 = tc_call(0x800c397cu, &a);
            if (r3 == 0u) {
                a.r[0] = r31;
                r3 = tc_call(0x800c3728u, &a);
                do {
                    if (r3 != 0u) {
                        r3 = tc_call(0x800cf66cu, &a);
                        if (r3 != 0u) {
                            r3 = tc_call(0x800cf66cu, &a);
                            if (r3 != 4u) break;
                        }
                        wr32(param_r3 + 0x1918u, 0x10u);
                        fl_ = 1u;
                        break;
                    }
                } while (0);
                if (fl_ == 1u) {
                    fl_ = 0u;
                } else if (r26 == 0xffffffffu || r29 != 0x2e8u) {
                    a.r[0] = r31;
                    r3 = tc_call(0x800c3728u, &a);
                    if (r3 != 0u) {
                        r3 = tc_call(0x800cf66cu, &a);
                        if (r3 == 3u) {
                            r0 = rd32(rd32(0x805711e8u) + 0x48u);
                            c0lt = (s32)r0 < 7;
                            if (r0 == 7u) {
                                wr32(param_r3 + 0x1918u, 0x16u);
                                break;
                            }
                            if (!c0lt) {
                                if (r0 == 9u) {
                                    wr32(param_r3 + 0x1918u, 0x11u);
                                    break;
                                }
                            } else {
                                c0lt = (s32)r0 < 5;
                                if (r0 == 5u) {
                                    if (r29 == 0x1c4u || r29 == 0x1c5u || r29 == 0x1c6u || r29 == 0x1c7u) {
                                        wr32(param_r3 + 0x1918u, 0x1eu);
                                        break;
                                    }
                                    break;
                                }
                                if (c0lt && (s32)r0 >= 3) {
                                    wr32(param_r3 + 0x1918u, 0x11u);
                                    break;
                                }
                            }
                            wr32(param_r3 + 0x1918u, 0u);
                            break;
                        }
                    }
                    a.r[0] = r31;
                    r3 = tc_call(0x800c43b4u, &a);
                    if (r3 == 0u) {
                        a.r[0] = r30;
                        r3 = tc_call(0x800cd6e4u, &a);
                        if ((r3 & 0xffu) == 0x11u) {
                            a.r[0] = r31;
                            r3 = tc_call(0x800c3320u, &a);
                            if (r3 != 0u) {
                                a.r[0] = rd32(0x805706e8u);
                                r3 = tc_call(0x8007d150u, &a);
                                if (rd32(r3 + 4u) != 1u) {
                                    wr32(param_r3 + 0x1918u, 0xeu);
                                    break;
                                }
                            }
                        }
                        a.r[0] = r30;
                        r3 = tc_call(0x800cd6e4u, &a);
                        if ((r3 & 0xffu) == 0x12u) {
                            a.r[0] = r31;
                            r3 = tc_call(0x800c3320u, &a);
                            if (r3 != 0u) {
                                wr32(param_r3 + 0x1918u, 0x21u);
                                break;
                            }
                        }
                        a.r[0] = r30;
                        r3 = tc_call(0x800cd6e4u, &a);
                        if ((r3 & 0xffu) == 7u) {
                            r3 = rd32(r31 + 0xa48u);
                            if (r3 == 0u) {
                                r0 = 0x2e8u;
                            } else {
                                r0 = rd32(r3 + 0x74u);
                            }
                            if (r0 == 0x2e8u && rd32(r31 + 0x290u) != 0xbu && ((ppc_cntlzw(rd32(0x80571188u) & 0x100u) >> 5u) & 0x7ffffffu) != 0u) {
                                a.r[0] = r31;
                                r3 = tc_call(0x80146460u, &a);
                                if (r3 == 0u) {
                                    a.r[0] = r31;
                                    r3 = tc_call(0x800c3320u, &a);
                                    if (r3 == 0u) {
                                        wr32(param_r3 + 0x1918u, 0u);
                                        break;
                                    }
                                    wr32(param_r3 + 0x1918u, 0xfu);
                                    break;
                                }
                                if (rd32(r31 + 0x290u) != 7u) {
                                    a.r[0] = r31;
                                    r3 = tc_call(0x800c3320u, &a);
                                    if (r3 == 0u) {
                                        wr32(param_r3 + 0x1918u, 0u);
                                        break;
                                    }
                                    wr32(param_r3 + 0x1918u, 0xbu);
                                    break;
                                }
                                r3 = rd32(param_r3 + 0x18a0u);
                                wr32(param_r3 + 0x1918u, 0x15u);
                                if (r3 != 0u) {
                                    a.r[0] = r3;
                                    r3 = tc_call(0x8004c630u, &a);
                                    if ((s32)r3 > 1) {
                                        wr32(param_r3 + 0x18a4u, 1u);
                                    }
                                }
                                f3 = (f64)rdf32(0x80572c98u);
                                f2 = (f64)rdf32(0x80572ca0u);
                                f4 = (f64)rdf32(param_r3 + 0x1904u);
                                f0 = (f64)(f32)((f64)rdf32(0x80572e40u) + (f64)(f32)((f64)rdf32(param_r3 + 0x1900u) + (f64)rdf32(param_r3 + 0x1914u)));
                                wrf32d(param_r3 + 0x18c4u, f3);
                                wrf32d(param_r3 + 0x18c8u, f3);
                                wrf32d(param_r3 + 0x18ccu, f2);
                                wrf32d(param_r3 + 0x18d0u, f2);
                                wrf32d(param_r3 + 0x188cu, f0);
                                wrf32d(param_r3 + 0x1890u, f4);
                                break;
                            }
                        }
                        a.r[0] = r31;
                        r3 = tc_call(0x800c3320u, &a);
                        if (r3 == 0u) {
                            wr32(param_r3 + 0x1918u, 0u);
                        } else {
                            a.r[0] = r30;
                            r3 = tc_call(0x800cd6e4u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            r3 = r3 & 0xffu;
                            r0 = r3 - 5u;
                            if (r0 > 0xbu) {
                                wr32(param_r3 + 0x1918u, 0u);
                            } else {
                                r0 = (r0 << 2u) & 0xfffffffcu;
                                r3 = rd32(r0 - 0x7fcabaf8u);
                                sw_ = r3;
                                switch (sw_) {
                                case 0x800bdb88u:
                                    wr32(param_r3 + 0x1918u, 0xdu);
                                    break;
                                case 0x800bdb7cu:
                                    wr32(param_r3 + 0x1918u, 0xcu);
                                    break;
                                case 0x800bdb94u:
                                    wr32(param_r3 + 0x1918u, 0xfu);
                                    break;
                                case 0x800bdb58u:
                                    wr32(param_r3 + 0x1918u, 9u);
                                    break;
                                case 0x800bdb64u:
                                    wr32(param_r3 + 0x1918u, 0xau);
                                    break;
                                case 0x800bdb70u:
                                    wr32(param_r3 + 0x1918u, 0x1du);
                                    break;
                                case 0x800bdb40u:
                                    wr32(param_r3 + 0x1918u, 7u);
                                    break;
                                case 0x800bdb34u:
                                    wr32(param_r3 + 0x1918u, 6u);
                                    break;
                                case 0x800bdb10u:
                                    wr32(param_r3 + 0x1918u, 3u);
                                    break;
                                case 0x800bdb1cu:
                                    wr32(param_r3 + 0x1918u, 4u);
                                    break;
                                case 0x800bdb28u:
                                    wr32(param_r3 + 0x1918u, 5u);
                                    break;
                                case 0x800bdb4cu:
                                    wr32(param_r3 + 0x1918u, 0x14u);
                                    break;
                                default:
                                    a.r[0] = r3;
                                    a.r[1] = r4;
                                    a.r[2] = 0u;
                                    a.r[3] = 0u;
                                    a.r[4] = 0u;
                                    a.f[0] = f1;
                                    a.f[1] = 0.0;
                                    a.f[2] = 0.0;
                                    a.f[3] = 0.0;
                                    r3 = tc_call(sw_, &a);
                                    r0 = 0u;
                                    r4 = tc_lastr4();
                                    r5 = 0u;
                                    r6 = 0u;
                                    r7 = 0u;
                                    r8 = 0u;
                                    r9 = 0u;
                                    r10 = 0u;
                                    r11 = 0u;
                                    r12 = 0u;
                                    f0 = 0.0;
                                    f2 = 0.0;
                                    f3 = 0.0;
                                    f4 = 0.0;
                                    f5 = 0.0;
                                    f6 = 0.0;
                                    f7 = 0.0;
                                    f8 = 0.0;
                                    f9 = 0.0;
                                    f10 = 0.0;
                                    f11 = 0.0;
                                    f12 = 0.0;
                                    f13 = 0.0;
                                    ctr = 0u;
                                    return;
                                }
                            }
                        }
                    } else {
                        wr32(param_r3 + 0x1918u, 0x17u);
                    }
                } else {
                    wr32(param_r3 + 0x1918u, r26);
                }
            } else if (r27 == 0xffffffffu || r29 == 0x2e8u) {
                if ((s32)r29 < 448 || (s32)r29 > 451) {
                    do {
                        if (r29 != 0x2e8u) {
                            a.r[0] = 0x8049f1b0u;
                            a.r[1] = r29;
                            r3 = tc_call(0x8015f2b0u, &a);
                            r0 = r3 & 0xffu;
                            r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                            r0 = r0 & 0x1fu;
                            r3 = 0u;
                            if (r0 != 0u) {
                                r3 = 1u;
                            }
                            if (r3 == 0u) {
                                a.r[0] = 0x8049f1b0u;
                                a.r[1] = r29;
                                r3 = tc_call(0x8015f2b0u, &a);
                                r0 = r3 & 0xffu;
                                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                                r0 = r0 & 0x180000u;
                                r3 = 0u;
                                if (r0 != 0u) {
                                    r3 = 1u;
                                }
                                if (r3 == 0u) {
                                    a.r[0] = 0x8049f1b0u;
                                    a.r[1] = r29;
                                    r3 = tc_call(0x8015f2b0u, &a);
                                    r0 = r3 & 0xffu;
                                    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                                    r0 = r0 & 0x400000u;
                                    r3 = 0u;
                                    if (r0 != 0u) {
                                        r3 = 1u;
                                    }
                                    if (r3 == 0u) {
                                        a.r[0] = 0x8049f1b0u;
                                        a.r[1] = r29;
                                        r3 = tc_call(0x8015f2b0u, &a);
                                        r0 = r3 & 0xffu;
                                        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                                        r0 = r0 & 0x200000u;
                                        r3 = 0u;
                                        if (r0 != 0u) {
                                            r3 = 1u;
                                        }
                                        if (r3 == 0u) {
                                            r0 = 0u;
                                            break;
                                        }
                                    }
                                }
                            }
                            a.r[0] = 0x8049f1b0u;
                            a.r[1] = r29;
                            r3 = tc_call(0x8015f2d0u, &a);
                            if ((r3 & 0xffu) != 0u) {
                                r0 = 0u;
                            } else {
                                r0 = 1u;
                            }
                        } else {
                            r0 = 1u;
                        }
                    } while (0);
                    if (r0 == 0u) {
                        wr32(param_r3 + 0x1918u, 0u);
                    } else {
                        wr32(param_r3 + 0x1918u, 0x19u);
                    }
                } else {
                    a.r[0] = rd32(0x805706e8u);
                    r3 = tc_call(0x8007d150u, &a);
                    if (rd32(r3 + 4u) != 0u || (s32)rd32(0x805706e8u) > 8) {
                        wr32(param_r3 + 0x1918u, 0u);
                    } else {
                        wr32(param_r3 + 0x1918u, 0x1fu);
                    }
                }
            } else {
                wr32(param_r3 + 0x1918u, r27);
            }
        } else {
            wr32(param_r3 + 0x1918u, 0x14u);
        }
    } while (0);
    r3 = rd32(param_r3 + 0x1810u);
    r25 = rd32(param_r3 + 0x1918u);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x8004c630u, &a);
        if ((s32)r3 > (s32)r25) {
            wr32(param_r3 + 0x1814u, r25);
        }
    }
    wr32(param_r3 + 0x1f30u, 0x2e8u);
    do {
        if (rd32(r31 + 0x290u) != 0x19u) {
            r3 = rd32(r31 + 0xa48u);
            if (r3 == 0u) {
                r0 = 0x2e8u;
            } else {
                r0 = rd32(r3 + 0x74u);
            }
            if (r0 != 0x2e8u) {
                a.r[0] = r31;
                r3 = tc_call(0x800c4854u, &a);
                if (r3 != 0u) {
                    wr32(param_r3 + 0x1b60u, 0x1cu);
                    break;
                }
            }
            a.r[0] = r31;
            r3 = tc_call(0x800c38bcu, &a);
            if (r3 != 0u) {
                r3 = tc_call(0x800cf66cu, &a);
                if (r3 == 2u) {
                    wr32(param_r3 + 0x1b60u, 0x18u);
                    r3 = rd32(rd32(0x805711e8u) + 0x20u);
                    if (r3 == 0u) break;
                    wr32(param_r3 + 0x1f30u, rd32(r3 + 0x74u));
                    break;
                }
            }
            a.r[0] = r31;
            r3 = tc_call(0x800c3a3cu, &a);
            if (r3 == 0u || rd32(rd32(0x804863d8u) + 0xa1cu) == 0u) {
                if (rd32(0x805711ecu) != 0u || rd32(r31 + 0x290u) != 0xbu) {
                    a.r[0] = r31;
                    r3 = tc_call(0x800c341cu, &a);
                    if (r3 == 0u) {
                        a.r[0] = r30;
                        r3 = tc_call(0x800cd6e4u, &a);
                        if ((r3 & 0xffu) == 7u) {
                            r3 = rd32(r31 + 0xa48u);
                            if (r3 == 0u) {
                                r0 = 0x2e8u;
                            } else {
                                r0 = rd32(r3 + 0x74u);
                            }
                            if (r0 == 0x2e8u && rd32(r31 + 0x290u) != 0xbu && ((ppc_cntlzw(rd32(0x80571188u) & 0x100u) >> 5u) & 0x7ffffffu) != 0u) {
                                a.r[0] = r31;
                                r3 = tc_call(0x80146460u, &a);
                                if (r3 == 0u || rd32(r31 + 0x290u) != 7u) {
                                    wr32(param_r3 + 0x1b60u, 0u);
                                    break;
                                }
                                wr32(param_r3 + 0x1b60u, 0x3bu);
                                break;
                            }
                        }
                        wr32(param_r3 + 0x1b60u, 0u);
                    } else {
                        r3 = rd32(param_r3 + 0x1ae8u);
                        if (r3 != 0u) {
                            a.r[0] = r3;
                            r3 = tc_call(0x8004c630u, &a);
                            if ((s32)r3 > 0) {
                                wr32(param_r3 + 0x1aecu, 0u);
                            }
                        }
                        if (rd32(rd32(0x805711ccu) + 0xfcu) != 2u) {
                            f2 = (f64)rdf32(0x80572c98u);
                            f1 = (f64)rdf32(0x80572e30u);
                            f0 = (f64)rdf32(0x80572e14u);
                            wrf32d(param_r3 + 0x1b0cu, f2);
                            wrf32d(param_r3 + 0x1b10u, f2);
                            wrf32d(param_r3 + 0x1b14u, f1);
                            wrf32d(param_r3 + 0x1b18u, f0);
                        } else {
                            f2 = (f64)rdf32(0x80572e14u);
                            f1 = (f64)rdf32(0x80572e30u);
                            f0 = (f64)rdf32(0x80572ca0u);
                            wrf32d(param_r3 + 0x1b0cu, (f64)rdf32(0x80572c98u));
                            wrf32d(param_r3 + 0x1b10u, f2);
                            wrf32d(param_r3 + 0x1b14u, f1);
                            wrf32d(param_r3 + 0x1b18u, f0);
                        }
                        f0 = (f64)(f32)((f64)rdf32(param_r3 + 0x1b48u) + (f64)rdf32(param_r3 + 0x1b5cu));
                        wrf32d(param_r3 + 0x1ad8u, (f64)(f32)((f64)rdf32(0x80572ca0u) + (f64)rdf32(param_r3 + 0x1b4cu)));
                        wrf32d(param_r3 + 0x1ad4u, f0);
                        a.r[0] = r30;
                        r3 = tc_call(0x800cd6e4u, &a);
                        if ((r3 & 0xffu) != 0x10u) {
                            r0 = 0x20u;
                        } else {
                            r0 = 8u;
                        }
                        wr32(param_r3 + 0x1b60u, r0);
                        if ((rd32(0x80499094u) & 0x10u) != 0u) {
                            wrf32d(param_r3 + 0x1b64u, (f64)rdf32(0x80572db8u));
                        }
                    }
                } else {
                    r3 = tc_call(0x801b10a8u, &a);
                    if (r3 == 0u) {
                        wrf32d(param_r3 + 0x1b64u, (f64)rdf32(0x80572db8u));
                    }
                    wr32(param_r3 + 0x1b60u, 0x1au);
                    if (rd32(rd32(0x805711ccu) + 0xfcu) == 1u) {
                        r3 = rd32(param_r3 + 0x1ae8u);
                        if (r3 != 0u) {
                            a.r[0] = r3;
                            r3 = tc_call(0x8004c630u, &a);
                            if ((s32)r3 > 1) {
                                wr32(param_r3 + 0x1aecu, 1u);
                            }
                        }
                        f3 = (f64)rdf32(0x80572c98u);
                        f2 = (f64)rdf32(0x80572ca0u);
                        f4 = (f64)rdf32(param_r3 + 0x1b4cu);
                        f0 = (f64)(f32)((f64)rdf32(0x80572e40u) + (f64)(f32)((f64)rdf32(param_r3 + 0x1b48u) + (f64)rdf32(param_r3 + 0x1b5cu)));
                        wrf32d(param_r3 + 0x1b0cu, f3);
                        wrf32d(param_r3 + 0x1b10u, f3);
                        wrf32d(param_r3 + 0x1b14u, f2);
                        wrf32d(param_r3 + 0x1b18u, f2);
                        wrf32d(param_r3 + 0x1ad4u, f0);
                        wrf32d(param_r3 + 0x1ad8u, f4);
                    }
                }
            } else {
                wr32(param_r3 + 0x1b60u, 0x23u);
            }
        } else {
            wr32(param_r3 + 0x1b60u, 0x14u);
        }
    } while (0);
    r3 = rd32(param_r3 + 0x1a58u);
    r25 = rd32(param_r3 + 0x1b60u);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x8004c630u, &a);
        if ((s32)r3 > (s32)r25) {
            wr32(param_r3 + 0x1a5cu, r25);
        }
    }
    r3 = tc_call(0x800c47f4u, &a);
    if (r3 == 0u || rd32(r31 + 0x290u) != 0x19u) {
        a.r[0] = r31;
        r3 = tc_call(0x800c3afcu, &a);
        if (r3 == 0u) {
            a.r[0] = r31;
            r3 = tc_call(0x800c3c88u, &a);
            if (r3 == 0u) {
                wr32(param_r3 + 0x1da8u, 0u);
            } else {
                f2 = (f64)rdf32(0x80572c98u);
                f1 = (f64)rdf32(0x80572ca0u);
                f0 = (f64)rdf32(0x80572e3cu);
                wrf32d(param_r3 + 0x1c34u, (f64)rdf32(0x80572e38u));
                wrf32d(param_r3 + 0x1c38u, f2);
                wrf32d(param_r3 + 0x1c3cu, f1);
                wrf32d(param_r3 + 0x1c40u, f0);
                wr32(param_r3 + 0x1da8u, 0x22u);
            }
        } else {
            f2 = (f64)rdf32(0x80572c98u);
            f1 = (f64)rdf32(0x80572ca0u);
            f0 = (f64)rdf32(0x80572e3cu);
            wrf32d(param_r3 + 0x1c34u, (f64)rdf32(0x80572e38u));
            wrf32d(param_r3 + 0x1c38u, f2);
            wrf32d(param_r3 + 0x1c3cu, f1);
            wrf32d(param_r3 + 0x1c40u, f0);
            wr32(param_r3 + 0x1da8u, 0x13u);
        }
    } else {
        if (rd32(rd32(0x805711ccu) + 0xfcu) != 2u) {
            f2 = (f64)rdf32(0x80572c98u);
            f1 = (f64)rdf32(0x80572c9cu);
            f0 = (f64)rdf32(0x80572e14u);
            wrf32d(param_r3 + 0x1c34u, (f64)rdf32(0x80572e48u));
            wrf32d(param_r3 + 0x1c38u, f2);
            wrf32d(param_r3 + 0x1c3cu, f1);
            wrf32d(param_r3 + 0x1c40u, f0);
        } else {
            f2 = (f64)rdf32(0x80572e14u);
            f1 = (f64)rdf32(0x80572e48u);
            f0 = (f64)rdf32(0x80572ca0u);
            wrf32d(param_r3 + 0x1c34u, (f64)rdf32(0x80572e44u));
            wrf32d(param_r3 + 0x1c38u, f2);
            wrf32d(param_r3 + 0x1c3cu, f1);
            wrf32d(param_r3 + 0x1c40u, f0);
        }
        wr32(param_r3 + 0x1da8u, 0x17u);
    }
    r3 = rd32(param_r3 + 0x1ca0u);
    r25 = rd32(param_r3 + 0x1da8u);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x8004c630u, &a);
        if ((s32)r3 > (s32)r25) {
            wr32(param_r3 + 0x1ca4u, r25);
        }
    }
    return;
}
