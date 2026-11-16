#include "tc_rt.h"

void fn_801137e4(u32 param_r3, u32 param_r4)
{
    u32 c0eq = 0, ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r22 = 0;
    u32 r23 = 0, r24 = 0, r25 = 0, r26 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf20u, 0x817fe000u);
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
    f27 = (f64)rdf32(0x805707e4u);
    f31 = (f64)rdf32(0x80574124u);
    r29 = param_r3;
    r31 = 0xffffffffu;
    r30 = 0u;
    do {
        r6 = rd32(r29 + 0x40u);
        if (r6 == 0u) {
            r0 = 0xffffffffu;
        } else {
            r0 = rd32(r29);
        }
        if (r0 != 4u && param_r4 == r0) {
            c0eq = r6 == 0u;
            if (!c0eq) {
                if (c0eq) {
                    r0 = 0xffffffffu;
                } else {
                    r0 = rd32(r29);
                }
                if (r0 != 4u) {
                    r24 = rd32(r29 + 0x4cu);
                    f30 = (f64)rdf32(0x805707e4u);
                    if (r24 == 0u) {
                        r22 = rd32(r29 + 0x48u);
                        if (r22 != 0u) {
                            wrf32d(0x817fdf78u, f31);
                            wrf32d(0x817fdf74u, f31);
                            wrf32d(0x817fdf70u, f31);
                            a.r[0] = 0x817fdf70u;
                            f1 = tc_callf(0x8010fc28u, &a);
                            a.r[0] = r22;
                            a.r[1] = 0x817fdf70u;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.f[0] = f1;
                            f1 = tc_callf(rd32(rd32(r22 + 0x30u) + 0x1cu), &a);
                            f30 = f1;
                        }
                    } else {
                        c0eq = rd32(r24 + 0x40u) == 0u;
                        if (!c0eq) {
                            if (c0eq) {
                                r0 = 0xffffffffu;
                            } else {
                                r0 = rd32(r24);
                            }
                            if (r0 != 4u) {
                                r3 = rd32(r24 + 0x4cu);
                                f28 = (f64)rdf32(0x805707e4u);
                                if (r3 == 0u) {
                                    r22 = rd32(r24 + 0x48u);
                                    if (r22 != 0u) {
                                        wrf32d(0x817fdf60u, f31);
                                        wrf32d(0x817fdf5cu, f31);
                                        wrf32d(0x817fdf58u, f31);
                                        a.r[0] = 0x817fdf58u;
                                        f1 = tc_callf(0x8010fc28u, &a);
                                        a.r[0] = r22;
                                        a.r[1] = 0x817fdf58u;
                                        a.r[2] = 0u;
                                        a.r[3] = 0u;
                                        a.r[4] = 0u;
                                        a.r[5] = 0u;
                                        a.r[6] = 0u;
                                        a.f[0] = f1;
                                        f1 = tc_callf(rd32(rd32(r22 + 0x30u) + 0x1cu), &a);
                                        f28 = f1;
                                    }
                                } else {
                                    a.r[0] = r3;
                                    f1 = tc_callf(0x80112600u, &a);
                                    r22 = rd32(r24 + 0x48u);
                                    f29 = f1;
                                    if (r22 != 0u) {
                                        wrf32d(0x817fdf6cu, f31);
                                        wrf32d(0x817fdf68u, f31);
                                        wrf32d(0x817fdf64u, f31);
                                        a.r[0] = 0x817fdf64u;
                                        f1 = tc_callf(0x8010fc28u, &a);
                                        a.r[0] = r22;
                                        a.r[1] = 0x817fdf64u;
                                        a.r[2] = 0u;
                                        a.r[3] = 0u;
                                        a.r[4] = 0u;
                                        a.r[5] = 0u;
                                        a.r[6] = 0u;
                                        a.f[0] = f1;
                                        f1 = tc_callf(rd32(rd32(r22 + 0x30u) + 0x1cu), &a);
                                        f28 = f1;
                                    }
                                    if (!(f28 < f29)) {
                                        f28 = f29;
                                    }
                                }
                            } else {
                                a.r[0] = r24;
                                f1 = tc_callf(0x80112a88u, &a);
                                f28 = f1;
                            }
                        } else {
                            f28 = f30;
                        }
                        r22 = rd32(r29 + 0x48u);
                        if (r22 != 0u) {
                            wrf32d(0x817fdf84u, f31);
                            wrf32d(0x817fdf80u, f31);
                            wrf32d(0x817fdf7cu, f31);
                            a.r[0] = 0x817fdf7cu;
                            f1 = tc_callf(0x8010fc28u, &a);
                            a.r[0] = r22;
                            a.r[1] = 0x817fdf7cu;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.f[0] = f1;
                            f1 = tc_callf(rd32(rd32(r22 + 0x30u) + 0x1cu), &a);
                            f30 = f1;
                        }
                        if (!(f30 < f28)) {
                            f30 = f28;
                        }
                    }
                } else {
                    if (r6 == 0u) {
                        r0 = 0xffffffffu;
                    } else {
                        r0 = rd32(r29);
                    }
                    do {
                        if (r0 == 4u) {
                            r7 = rd32(0x805707e8u);
                            r4 = 0u;
                            r3 = r6 - r7;
                            r5 = r29 + ((r7 << 2u) & 0xfffffffcu);
                            ctr = r3;
                            if ((s32)r3 > 0) {
                                while ((rd32(r5) - 0x7fff0000u) == 0xffffu) {
                                    r4 = r4 + 1u;
                                    r5 = r5 + 4u;
                                    ctr = ctr - 1u;
                                    if (ctr == 0u) break;
                                }
                            }
                            r4 = r4 + r7;
                            r25 = 0u;
                            r24 = 0u;
                            r3 = r29 + ((r4 << 2u) & 0xfffffffcu);
                            r4 = r4 + 5u;
                            r26 = r6 - r4;
                            r22 = r29 + ((r4 << 2u) & 0xfffffffcu);
                            r23 = rd32(r3 + 4u) & 8u;
                            for (;;) {
                                if ((s32)r24 >= (s32)r26) {
                                    fl_ = 2u;
                                    break;
                                }
                                r3 = rd32(r22);
                                if (r3 != 0xffffffffu) {
                                    if (r3 == 0u) {
                                        f30 = (f64)rdf32(0x80574144u);
                                        fl_ = 1u;
                                        break;
                                    }
                                    r25 = 1u;
                                    a.r[0] = r3;
                                    r3 = tc_call(0x8014d8acu, &a);
                                    if (r23 != 0u) {
                                        r3 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
                                    }
                                    if (r3 != 0u) {
                                        f30 = (f64)rdf32(0x8057413cu);
                                        fl_ = 1u;
                                        break;
                                    }
                                }
                                r22 = r22 + 4u;
                                r24 = r24 + 1u;
                            }
                            if (fl_ == 2u) {
                                fl_ = 0u;
                            } else if (fl_ == 1u) {
                                fl_ = 0u;
                                break;
                            }
                            if (r25 == 0u) {
                                f30 = (f64)rdf32(0x8057413cu);
                            } else {
                                f30 = (f64)rdf32(0x805707e4u);
                            }
                        } else {
                            f30 = (f64)rdf32(0x805707e4u);
                        }
                    } while (0);
                    r7 = rd32(r29 + 0x40u);
                    if (r7 == 0u) {
                        r0 = 0xffffffffu;
                    } else {
                        r0 = rd32(r29);
                    }
                    if (r0 == 4u) {
                        r8 = rd32(0x805707e8u);
                        r5 = 0u;
                        r0 = r7 - r8;
                        r6 = (r8 << 2u) & 0xfffffffcu;
                        r4 = r29 + r6;
                        ctr = r0;
                        if ((s32)r0 > 0) {
                            while ((rd32(r4) - 0x7fff0000u) == 0xffffu) {
                                r5 = r5 + 1u;
                                r4 = r4 + 4u;
                                ctr = ctr - 1u;
                                if (ctr == 0u) break;
                            }
                        }
                        r0 = r8 + (r5 + 1u);
                        if ((s32)r0 < (s32)r7) {
                            r0 = (r0 << 2u) & 0xfffffffcu;
                            r4 = rd32(r29 + r0);
                        } else {
                            r4 = 0u;
                        }
                        r0 = r7 - r8;
                        r5 = r29 + r6;
                        r6 = 0u;
                        ctr = r0;
                        if ((s32)r0 > 0) {
                            while ((rd32(r5) - 0x7fff0000u) == 0xffffu) {
                                r6 = r6 + 1u;
                                r5 = r5 + 4u;
                                ctr = ctr - 1u;
                                if (ctr == 0u) break;
                            }
                        }
                        r0 = r8 + (r6 + 2u);
                        if ((s32)r0 < (s32)r7) {
                            r0 = (r0 << 2u) & 0xfffffffcu;
                            r3 = rd32(r29 + r0);
                        } else {
                            r3 = 0u;
                        }
                        if ((r4 & 0x10u) == 0u) {
                            if ((r4 & 0x40u) == 0u) {
                                r0 = 1u;
                            } else {
                                a.r[0] = r3;
                                r3 = tc_call(0x800a6894u, &a);
                                r26 = r3;
                                if (r3 != 0u) {
                                    a.r[0] = r3;
                                    r3 = tc_call(0x800a68e0u, &a);
                                    if (r3 == 0u) {
                                        r0 = 1u;
                                    } else {
                                        a.r[0] = r26;
                                        r3 = tc_call(0x8015e420u, &a);
                                        r0 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
                                    }
                                } else {
                                    r0 = 1u;
                                }
                            }
                        } else {
                            a.r[0] = r3;
                            r3 = tc_call(0x800a7a44u, &a);
                            if (r3 != 0u) {
                                if ((rd32(r3 + 0x90u) & 7u) != 0u) {
                                    a.r[0] = r3;
                                    r3 = tc_call(0x800ca270u, &a);
                                    r0 = (ppc_cntlzw(r3 & 1u) >> 5u) & 0x7ffffffu;
                                } else {
                                    r0 = 1u;
                                }
                            } else {
                                r0 = 0u;
                            }
                        }
                    } else {
                        r0 = 1u;
                    }
                    if (r0 == 0u) {
                        f30 = (f64)rdf32(0x805707e4u);
                    }
                }
            } else {
                f30 = (f64)rdf32(0x805707e4u);
            }
            f28 = (f64)rdf32(0x805707e4u);
            if (((((((f30 < f28) << 0x1fu) | ((f30 > f28) << 0x1eu) | ((f30 == f28) << 0x1du) | (((f30 != f30) || (f28 != f28)) << 0x1cu)) >> 0x1du) & 1u) ^ 1u) != 0u) {
                r6 = rd32(r29 + 0x40u);
                c0eq = r6 == 0u;
                if (!c0eq) {
                    if (c0eq) {
                        r0 = 0xffffffffu;
                    } else {
                        r0 = rd32(r29);
                    }
                    if (r0 != 4u) {
                        r24 = rd32(r29 + 0x4cu);
                        f28 = (f64)rdf32(0x805707e4u);
                        if (r24 == 0u) {
                            r22 = rd32(r29 + 0x48u);
                            if (r22 != 0u) {
                                wrf32d(0x817fdf3cu, f31);
                                wrf32d(0x817fdf38u, f31);
                                wrf32d(0x817fdf34u, f31);
                                a.r[0] = 0x817fdf34u;
                                f1 = tc_callf(0x8010fc28u, &a);
                                a.r[0] = r22;
                                a.r[1] = 0x817fdf34u;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.f[0] = f1;
                                f1 = tc_callf(rd32(rd32(r22 + 0x30u) + 0x1cu), &a);
                                f28 = f1;
                            }
                        } else {
                            c0eq = rd32(r24 + 0x40u) == 0u;
                            if (!c0eq) {
                                if (c0eq) {
                                    r0 = 0xffffffffu;
                                } else {
                                    r0 = rd32(r24);
                                }
                                if (r0 != 4u) {
                                    r3 = rd32(r24 + 0x4cu);
                                    f30 = (f64)rdf32(0x805707e4u);
                                    if (r3 == 0u) {
                                        r22 = rd32(r24 + 0x48u);
                                        if (r22 != 0u) {
                                            wrf32d(0x817fdf54u, f31);
                                            wrf32d(0x817fdf50u, f31);
                                            wrf32d(0x817fdf4cu, f31);
                                            a.r[0] = 0x817fdf4cu;
                                            f1 = tc_callf(0x8010fc28u, &a);
                                            a.r[0] = r22;
                                            a.r[1] = 0x817fdf4cu;
                                            a.r[2] = 0u;
                                            a.r[3] = 0u;
                                            a.r[4] = 0u;
                                            a.r[5] = 0u;
                                            a.r[6] = 0u;
                                            a.f[0] = f1;
                                            f1 = tc_callf(rd32(rd32(r22 + 0x30u) + 0x1cu), &a);
                                            f30 = f1;
                                        }
                                    } else {
                                        a.r[0] = r3;
                                        f1 = tc_callf(0x80112600u, &a);
                                        r22 = rd32(r24 + 0x48u);
                                        f29 = f1;
                                        if (r22 != 0u) {
                                            wrf32d(0x817fdf48u, f31);
                                            wrf32d(0x817fdf44u, f31);
                                            wrf32d(0x817fdf40u, f31);
                                            a.r[0] = 0x817fdf40u;
                                            f1 = tc_callf(0x8010fc28u, &a);
                                            a.r[0] = r22;
                                            a.r[1] = 0x817fdf40u;
                                            a.r[2] = 0u;
                                            a.r[3] = 0u;
                                            a.r[4] = 0u;
                                            a.r[5] = 0u;
                                            a.r[6] = 0u;
                                            a.f[0] = f1;
                                            f1 = tc_callf(rd32(rd32(r22 + 0x30u) + 0x1cu), &a);
                                            f30 = f1;
                                        }
                                        if (!(f30 < f29)) {
                                            f30 = f29;
                                        }
                                    }
                                } else {
                                    a.r[0] = r24;
                                    f1 = tc_callf(0x80112a88u, &a);
                                    f30 = f1;
                                }
                            } else {
                                f30 = f28;
                            }
                            r22 = rd32(r29 + 0x48u);
                            if (r22 != 0u) {
                                wrf32d(0x817fdf30u, f31);
                                wrf32d(0x817fdf2cu, f31);
                                wrf32d(0x817fdf28u, f31);
                                a.r[0] = 0x817fdf28u;
                                f1 = tc_callf(0x8010fc28u, &a);
                                a.r[0] = r22;
                                a.r[1] = 0x817fdf28u;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.f[0] = f1;
                                f1 = tc_callf(rd32(rd32(r22 + 0x30u) + 0x1cu), &a);
                                f28 = f1;
                            }
                            if (!(f28 < f30)) {
                                f28 = f30;
                            }
                        }
                    } else {
                        if (r6 == 0u) {
                            r0 = 0xffffffffu;
                        } else {
                            r0 = rd32(r29);
                        }
                        if (r0 == 4u) {
                            r7 = rd32(0x805707e8u);
                            r5 = 0u;
                            r3 = r6 - r7;
                            r4 = r29 + ((r7 << 2u) & 0xfffffffcu);
                            ctr = r3;
                            if ((s32)r3 > 0) {
                                while ((rd32(r4) - 0x7fff0000u) == 0xffffu) {
                                    r5 = r5 + 1u;
                                    r4 = r4 + 4u;
                                    ctr = ctr - 1u;
                                    if (ctr == 0u) break;
                                }
                            }
                            r4 = r5 + r7;
                            r25 = 0u;
                            r24 = 0u;
                            r3 = r29 + ((r4 << 2u) & 0xfffffffcu);
                            r4 = r4 + 5u;
                            r26 = r6 - r4;
                            r23 = r29 + ((r4 << 2u) & 0xfffffffcu);
                            r22 = rd32(r3 + 4u) & 8u;
                            for (;;) {
                                if ((s32)r24 >= (s32)r26) {
                                    fl_ = 5u;
                                    break;
                                }
                                r3 = rd32(r23);
                                if (r3 != 0xffffffffu) {
                                    if (r3 == 0u) {
                                        fl_ = 3u;
                                        break;
                                    }
                                    r25 = 1u;
                                    a.r[0] = r3;
                                    r3 = tc_call(0x8014d8acu, &a);
                                    if (r22 != 0u) {
                                        r3 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
                                    }
                                    if (r3 != 0u) {
                                        fl_ = 4u;
                                        break;
                                    }
                                }
                                r23 = r23 + 4u;
                                r24 = r24 + 1u;
                            }
                            do {
                                if (fl_ == 5u) {
                                    fl_ = 0u;
                                    fl_ = 6u;
                                    break;
                                }
                                if (fl_ == 4u) {
                                    fl_ = 0u;
                                } else if (fl_ == 3u) {
                                    fl_ = 0u;
                                    break;
                                }
                                f28 = (f64)rdf32(0x8057413cu);
                                fl_ = 7u;
                                break;
                            } while (0);
                            if (fl_ == 7u) {
                                fl_ = 0u;
                            } else if (fl_ == 6u) {
                                fl_ = 0u;
                                if (r25 == 0u) {
                                    f28 = (f64)rdf32(0x8057413cu);
                                } else {
                                    f28 = (f64)rdf32(0x805707e4u);
                                }
                            } else {
                                f28 = (f64)rdf32(0x80574144u);
                            }
                        } else {
                            f28 = (f64)rdf32(0x805707e4u);
                        }
                        r7 = rd32(r29 + 0x40u);
                        if (r7 == 0u) {
                            r0 = 0xffffffffu;
                        } else {
                            r0 = rd32(r29);
                        }
                        if (r0 == 4u) {
                            r9 = rd32(0x805707e8u);
                            r4 = 0u;
                            r0 = r7 - r9;
                            r8 = (r9 << 2u) & 0xfffffffcu;
                            r5 = r29 + r8;
                            ctr = r0;
                            if ((s32)r0 > 0) {
                                while ((rd32(r5) - 0x7fff0000u) == 0xffffu) {
                                    r4 = r4 + 1u;
                                    r5 = r5 + 4u;
                                    ctr = ctr - 1u;
                                    if (ctr == 0u) break;
                                }
                            }
                            r0 = r9 + (r4 + 1u);
                            if ((s32)r0 < (s32)r7) {
                                r0 = (r0 << 2u) & 0xfffffffcu;
                                r6 = rd32(r29 + r0);
                            } else {
                                r6 = 0u;
                            }
                            r0 = r7 - r9;
                            r5 = r29 + r8;
                            r4 = 0u;
                            ctr = r0;
                            if ((s32)r0 > 0) {
                                while ((rd32(r5) - 0x7fff0000u) == 0xffffu) {
                                    r4 = r4 + 1u;
                                    r5 = r5 + 4u;
                                    ctr = ctr - 1u;
                                    if (ctr == 0u) break;
                                }
                            }
                            r0 = r9 + (r4 + 2u);
                            if ((s32)r0 < (s32)r7) {
                                r0 = (r0 << 2u) & 0xfffffffcu;
                                r3 = rd32(r29 + r0);
                            } else {
                                r3 = 0u;
                            }
                            if ((r6 & 0x10u) == 0u) {
                                if ((r6 & 0x40u) == 0u) {
                                    r0 = 1u;
                                } else {
                                    a.r[0] = r3;
                                    r3 = tc_call(0x800a6894u, &a);
                                    r24 = r3;
                                    if (r3 != 0u) {
                                        a.r[0] = r3;
                                        r3 = tc_call(0x800a68e0u, &a);
                                        if (r3 == 0u) {
                                            r0 = 1u;
                                        } else {
                                            a.r[0] = r24;
                                            r3 = tc_call(0x8015e420u, &a);
                                            r0 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
                                        }
                                    } else {
                                        r0 = 1u;
                                    }
                                }
                            } else {
                                a.r[0] = r3;
                                r3 = tc_call(0x800a7a44u, &a);
                                if (r3 != 0u) {
                                    if ((rd32(r3 + 0x90u) & 7u) != 0u) {
                                        a.r[0] = r3;
                                        r3 = tc_call(0x800ca270u, &a);
                                        r0 = (ppc_cntlzw(r3 & 1u) >> 5u) & 0x7ffffffu;
                                    } else {
                                        r0 = 1u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                            }
                        } else {
                            r0 = 1u;
                        }
                        if (r0 == 0u) {
                            f28 = (f64)rdf32(0x805707e4u);
                        }
                    }
                }
                if (f28 > f27) {
                    f27 = f28;
                    r31 = r30;
                }
            }
        }
        r30 = r30 + 1u;
        r29 = r29 + 0x50u;
    } while ((s32)r30 < 96);
    return;
}
