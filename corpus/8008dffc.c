#include "tc_rt.h"

void fn_8008dffc(u32 param_r3, u32 param_r4, u32 param_r6)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r22 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    u32 r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8017c124u, &a);
    r29 = r3;
    r3 = tc_call(0x8017c1c0u, &a);
    r28 = r3;
    a.r[0] = param_r3;
    a.r[1] = r29;
    a.r[2] = r3;
    a.r[3] = param_r4;
    r3 = tc_call(0x8008de8cu, &a);
    r30 = r3;
    r31 = (ppc_cntlzw(param_r6) >> 5u) & 0x7ffffffu;
    if (param_r4 == 3u && r31 != 0u) {
        f1 = tc_callf(0x80040a00u, &a);
        f0 = (f64)rdf32(0x8057299cu);
        f1 = (f64)(f32)((f64)rdf32(0x80572990u) * f1);
        c0lt = f1 < f0;
        if (((((c0lt << 0x1fu) | ((f1 > f0) << 0x1eu) | ((c0lt || (f1 == f0)) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
            r3 = rd32(param_r3 + 0x8cu);
            if (((ppc_cntlzw((u32)((s32)((r3 << 1u) & 0xc0000000u) >> 31)) >> 5u) & 0x7ffffffu) == 0u) {
                r4 = (u32)rd8(rd32(param_r3));
                r3 = (r3 & 0xbfffffffu) | ((ppc_cntlzw((((0u - r4) | r4) >> 0x1fu) & 1u) << 0x19u) & 0x40000000u);
                wr32(param_r3 + 0x8cu, r3);
            }
            wr8(rd32(param_r3), 0u);
            r3 = rd32(param_r3 + 0x8cu);
            if (((ppc_cntlzw((u32)((s32)r3 >> 31)) >> 5u) & 0x7ffffffu) == 0u) {
                r4 = (u32)rd8(rd32(param_r3) + 1u);
                r3 = (r3 & 0x7fffffffu) | ((ppc_cntlzw((((0u - r4) | r4) >> 0x1fu) & 1u) << 0x1au) & 0x80000000u);
                wr32(param_r3 + 0x8cu, r3);
            }
            wr8(rd32(param_r3) + 1u, 0u);
            wr8(rd32(param_r3) + 7u, 0u);
        }
    }
    a.r[0] = param_r6;
    r3 = tc_call(0x8007d150u, &a);
    r27 = rd32(r3 + 0xcu);
    c0lt = (s32)r27 < 3;
    do {
        if (r27 == 3u) {
            r26 = 2u;
        } else {
            if (!c0lt) {
                if ((s32)r27 < 5) {
                    r26 = 4u;
                    break;
                }
            } else {
                c0lt = (s32)r27 < 1;
                if (r27 == 1u) {
                    r26 = 0xfu;
                    break;
                }
                if (!c0lt) {
                    r26 = 1u;
                    break;
                }
            }
            r22 = (u32)rd8(0x80492821u);
            if (r22 == 3u && (((u32)rd8(0x80492823u) + ((u32)rd8(0x80492822u) * 6u) + 1u) & 0xffu) == 1u) {
                a.r[0] = param_r3;
                (void)tc_call(0x8008f96cu, &a);
            }
            r26 = (((r22 & 0x20u) != 0u) ? 0u : (1u << (r22 & 0x1fu))) & 0xffu;
        }
    } while (0);
    r3 = rd32(param_r3);
    if ((u32)rd8(r3 + 1u) == 0u && (u32)rd8(r3) == 0u) {
        if (param_r6 != 0x40u) {
            if (r27 != 1u) {
                if (r27 != 2u) {
                    if (r27 != 3u) {
                        if (r27 != 4u) {
                            if (param_r4 == 4u || param_r4 == 3u) {
                                r0 = 4u;
                            } else {
                                r0 = (u32)rd8(0x80492821u);
                            }
                        } else {
                            r0 = 2u;
                        }
                    } else {
                        r0 = 1u;
                    }
                } else {
                    r0 = 0u;
                }
            } else {
                r0 = 5u;
            }
        } else {
            r0 = 0u;
        }
        r0 = r0 * 0x48u;
        r22 = r0 - 0x7fb8d27cu;
        f1 = tc_callf(0x80040a00u, &a);
        r27 = 0u;
        f30 = (f64)rdf32(0x8057296cu);
        r25 = 0u;
        f31 = (f64)(f32)((f64)rdf32(0x80572990u) * f1);
        do {
            a.r[0] = param_r3;
            a.r[1] = r27;
            a.r[2] = r29;
            a.r[3] = r28;
            f1 = tc_callf(0x8008dd18u, &a);
            if (param_r4 == 3u || param_r4 == 4u) {
                f1 = (f64)rdf32(0x80572968u);
            }
            f30 = ppc_fmadds(f1, (f64)rdf32(r22 + r25), f30);
            if ((f30 > f31) || (f30 == f31)) {
                r4 = rd32(param_r3 + 0x8cu);
                if (((ppc_cntlzw((u32)((s32)r4 >> 31)) >> 5u) & 0x7ffffffu) == 0u) {
                    r5 = (u32)rd8(rd32(param_r3) + 1u);
                    r4 = (r4 & 0x7fffffffu) | ((ppc_cntlzw((((3u - r5) | (r5 - 3u)) >> 0x1fu) & 1u) << 0x1au) & 0x80000000u);
                    wr32(param_r3 + 0x8cu, r4);
                }
                wr8(rd32(param_r3) + 1u, 3u);
                r3 = tc_call(0x8008df44u, &a);
                if (r3 == 0xffffffffu) {
                    r4 = rd32(param_r3 + 0x8cu);
                    if (((ppc_cntlzw((u32)((s32)r4 >> 31)) >> 5u) & 0x7ffffffu) == 0u) {
                        r0 = r27 & 0xffu;
                        r5 = (u32)rd8(rd32(param_r3) + 2u);
                        r3 = r5 - r0;
                        r0 = r0 - r5;
                        r0 = r3 | r0;
                        r0 = (r0 >> 0x1fu) & 1u;
                        r0 = ppc_cntlzw(r0);
                        r4 = (r4 & 0x7fffffffu) | ((r0 << 0x1au) & 0x80000000u);
                        wr32(param_r3 + 0x8cu, r4);
                    }
                    wr8(rd32(param_r3) + 2u, (u8)r27);
                } else {
                    r5 = rd32(param_r3 + 0x8cu);
                    if (((ppc_cntlzw((u32)((s32)r5 >> 31)) >> 5u) & 0x7ffffffu) == 0u) {
                        r0 = r3 & 0xffu;
                        r6 = (u32)rd8(rd32(param_r3) + 2u);
                        r4 = r6 - r0;
                        r0 = r0 - r6;
                        r0 = r4 | r0;
                        r0 = (r0 >> 0x1fu) & 1u;
                        r0 = ppc_cntlzw(r0);
                        r5 = (r5 & 0x7fffffffu) | ((r0 << 0x1au) & 0x80000000u);
                        wr32(param_r3 + 0x8cu, r5);
                    }
                    wr8(rd32(param_r3) + 2u, (u8)r3);
                }
                wr8(rd32(param_r3) + 5u, 1u);
                break;
            }
            r27 = r27 + 1u;
            r25 = r25 + 4u;
        } while ((s32)r27 < 18);
    }
    r5 = (u32)rd8(rd32(param_r3));
    c0lt = (s32)r5 < 2;
    do {
        if (r5 != 2u) {
            if (c0lt) {
                c0lt = (s32)r5 < 0;
                if (r5 == 0u) break;
                if (!c0lt) {
                    if (param_r4 == 1u && r31 != 0u) {
                        r4 = rd32(param_r3 + 0x8cu);
                        if (((ppc_cntlzw((u32)((s32)((r4 << 1u) & 0xc0000000u) >> 31)) >> 5u) & 0x7ffffffu) == 0u) {
                            r4 = (r4 & 0xbfffffffu) | ((ppc_cntlzw((((2u - r5) | (r5 - 2u)) >> 0x1fu) & 1u) << 0x19u) & 0x40000000u);
                            wr32(param_r3 + 0x8cu, r4);
                        }
                        wr8(rd32(param_r3), 2u);
                    }
                    r0 = (u32)rd8(rd32(param_r3) + 1u);
                    if (r0 == 1u || r0 == 2u) {
                        r3 = rd32(param_r3);
                        r5 = (u32)rd8(r3 + 3u);
                        if (r5 >= 4u) {
                            r4 = (u32)rd8(r3 + 2u);
                            r3 = (u32)rd8(r3 + 1u);
                            a.r[0] = r3;
                            a.r[1] = r4;
                            a.r[2] = r5;
                            r3 = tc_call(0x8008dbc4u, &a);
                            r3 = ((r3 << 2u) & 0xfffffffcu) - 0x7fb8e130u;
                            r3 = r3 + 0xc60u;
                        } else {
                            r4 = (u32)rd8(r3 + 2u);
                            r3 = (u32)rd8(r3 + 1u);
                            r5 = (r5 + 1u) & 0xffu;
                            a.r[0] = r3;
                            a.r[1] = r4;
                            a.r[2] = r5;
                            r3 = tc_call(0x8008dbc4u, &a);
                            r3 = ((r3 << 2u) & 0xfffffffcu) - 0x7fb8e130u;
                            r3 = r3 + 0xc60u;
                        }
                        if (((u32)rd8(r3 + 1u) & r26) != 0u) {
                            a.r[0] = param_r3;
                            a.r[1] = r28;
                            r3 = tc_call(0x8008ddfcu, &a);
                            if (r3 == 0u) break;
                        }
                        a.r[0] = param_r3;
                        (void)tc_call(0x8008eab4u, &a);
                        break;
                    }
                    break;
                }
                break;
            }
            c0lt = (s32)r5 < 4;
            if (r5 != 4u) {
                if (!c0lt) break;
                do {
                    if (param_r4 == 1u && r31 != 0u) {
                        r4 = rd32(param_r3 + 0x8cu);
                        if (((ppc_cntlzw((u32)((s32)((r4 << 1u) & 0xc0000000u) >> 31)) >> 5u) & 0x7ffffffu) == 0u) {
                            r4 = (r4 & 0xbfffffffu) | ((ppc_cntlzw((((2u - r5) | (r5 - 2u)) >> 0x1fu) & 1u) << 0x19u) & 0x40000000u);
                            wr32(param_r3 + 0x8cu, r4);
                        }
                        wr8(rd32(param_r3), 2u);
                        break;
                    }
                    r4 = rd32(param_r3 + 0x8cu);
                    if (((ppc_cntlzw((u32)((s32)((r4 << 1u) & 0xc0000000u) >> 31)) >> 5u) & 0x7ffffffu) == 0u) {
                        r5 = (u32)rd8(rd32(param_r3));
                        r4 = (r4 & 0xbfffffffu) | ((ppc_cntlzw((((1u - r5) | (r5 - 1u)) >> 0x1fu) & 1u) << 0x19u) & 0x40000000u);
                        wr32(param_r3 + 0x8cu, r4);
                    }
                    wr8(rd32(param_r3), 1u);
                } while (0);
                r3 = rd32(param_r3);
                r4 = (u32)rd8(r3 + 7u);
                if ((r4 & 0xf0u) != 0x10u) {
                    r4 = (r4 >> 5u) & 7u;
                    while (r4 != 0u) {
                        r0 = (u32)rd8(rd32(param_r3) + 4u) + 1u;
                        if ((s32)r0 > 200) {
                            r0 = 0xc8u;
                        }
                        r4 = (r4 >> 1u) & 0x7fffffffu;
                        wr8(rd32(param_r3) + 4u, (u8)r0);
                    }
                } else {
                    r0 = (u32)rd8(r3 + 1u);
                    if (r0 == 1u || r0 == 2u) {
                        r3 = rd32(param_r3);
                        if ((u32)rd8(r3 + 3u) == 0u) {
                            r3 = (u32)rd8(r3 + 5u);
                            if ((r3 & 0x80u) == 0u) {
                                r3 = r3 & 0x7fu;
                                r0 = r3 + 1u;
                                if ((s32)r0 > 10) {
                                    r0 = 0xau;
                                }
                                wr8(rd32(param_r3) + 5u, (u8)r0);
                                r3 = rd32(param_r3);
                                wr8(r3 + 5u, (u8)((u32)rd8(r3 + 5u) | 0x80u));
                            }
                        }
                    }
                }
                r0 = (u32)rd8(rd32(param_r3) + 1u);
                if (r0 == 1u || r0 == 2u) {
                    r3 = rd32(param_r3);
                    r5 = (u32)rd8(r3 + 3u);
                    if (r5 >= 4u) {
                        r4 = (u32)rd8(r3 + 2u);
                        r3 = (u32)rd8(r3 + 1u);
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = r5;
                        r3 = tc_call(0x8008dbc4u, &a);
                        r3 = ((r3 << 2u) & 0xfffffffcu) - 0x7fb8e130u;
                        r3 = r3 + 0xc60u;
                    } else {
                        r4 = (u32)rd8(r3 + 2u);
                        r3 = (u32)rd8(r3 + 1u);
                        r5 = (r5 + 1u) & 0xffu;
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = r5;
                        r3 = tc_call(0x8008dbc4u, &a);
                        r3 = ((r3 << 2u) & 0xfffffffcu) - 0x7fb8e130u;
                        r3 = r3 + 0xc60u;
                    }
                    if (((u32)rd8(r3 + 1u) & r26) != 0u) {
                        a.r[0] = param_r3;
                        a.r[1] = r28;
                        r3 = tc_call(0x8008ddfcu, &a);
                        if (r3 == 0u) break;
                    }
                    a.r[0] = param_r3;
                    (void)tc_call(0x8008eab4u, &a);
                    break;
                }
                break;
            }
        }
        r0 = (u32)rd8(rd32(param_r3) + 1u);
        do {
            if (r0 == 1u || r0 == 2u) {
                r3 = rd32(param_r3);
                r5 = (u32)rd8(r3 + 3u);
                if (r5 >= 4u) {
                    r4 = (u32)rd8(r3 + 2u);
                    r3 = (u32)rd8(r3 + 1u);
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    r3 = tc_call(0x8008dbc4u, &a);
                    r3 = ((r3 << 2u) & 0xfffffffcu) - 0x7fb8e130u;
                    if (((u32)rd8(r3 + 0xc61u) & r26) != 0u) {
                        a.r[0] = param_r3;
                        a.r[1] = r28;
                        r3 = tc_call(0x8008ddfcu, &a);
                        if (r3 == 0u) break;
                    }
                    a.r[0] = param_r3;
                    (void)tc_call(0x8008eab4u, &a);
                } else {
                    if ((u32)rd8(r3) == 4u) {
                        r4 = (u32)rd8(r3 + 7u);
                        if ((r4 & 0xf0u) != 0x10u) {
                            r4 = (r4 >> 5u) & 7u;
                            while (r4 != 0u) {
                                r0 = (u32)rd8(rd32(param_r3) + 4u) + 1u;
                                if ((s32)r0 > 200) {
                                    r0 = 0xc8u;
                                }
                                r4 = (r4 >> 1u) & 0x7fffffffu;
                                wr8(rd32(param_r3) + 4u, (u8)r0);
                            }
                        } else {
                            r0 = (u32)rd8(r3 + 1u);
                            if (r0 == 1u || r0 == 2u) {
                                r3 = rd32(param_r3);
                                if ((u32)rd8(r3 + 3u) == 0u) {
                                    r3 = (u32)rd8(r3 + 5u);
                                    if ((r3 & 0x80u) == 0u) {
                                        r3 = r3 & 0x7fu;
                                        r0 = r3 + 1u;
                                        if ((s32)r0 > 10) {
                                            r0 = 0xau;
                                        }
                                        wr8(rd32(param_r3) + 5u, (u8)r0);
                                        r3 = rd32(param_r3);
                                        wr8(r3 + 5u, (u8)((u32)rd8(r3 + 5u) | 0x80u));
                                    }
                                }
                            }
                        }
                    }
                    r3 = rd32(param_r3);
                    r4 = (u32)rd8(r3 + 2u);
                    r0 = (u32)rd8(r3 + 3u) + 1u;
                    r3 = (u32)rd8(r3 + 1u);
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = r0 & 0xffu;
                    r3 = tc_call(0x8008dbc4u, &a);
                    r25 = ((r3 << 2u) & 0xfffffffcu) - 0x7fb8e130u;
                    if (((u32)rd8(r25 + 0xc61u) & r26) != 0u) {
                        a.r[0] = param_r3;
                        a.r[1] = r28;
                        r3 = tc_call(0x8008ddfcu, &a);
                        if (r3 == 0u) {
                            r0 = (u32)rd8(r25 + 0xc60u) + r30;
                            if ((s32)r0 < 0) {
                                r0 = 0u;
                            }
                            r4 = rd32(param_r3);
                            r3 = (u32)rd8(r4 + 4u) + 1u;
                            if (r3 > 0xffu) {
                                r3 = 0xffu;
                            }
                            r0 = r0 & 0xffu;
                            wr8(r4 + 4u, (u8)r3);
                            if ((r3 & 0xffu) < r0) break;
                            wr8(rd32(param_r3) + 4u, 0u);
                            r4 = rd32(param_r3 + 0x8cu);
                            r6 = (u32)rd8(rd32(param_r3) + 3u);
                            r5 = (r6 + 1u) & 0xffu;
                            if (((ppc_cntlzw((u32)((s32)r4 >> 31)) >> 5u) & 0x7ffffffu) == 0u) {
                                r4 = (r4 & 0x7fffffffu) | ((ppc_cntlzw((((r6 - r5) | (r5 - r6)) >> 0x1fu) & 1u) << 0x1au) & 0x80000000u);
                                wr32(param_r3 + 0x8cu, r4);
                            }
                            wr8(rd32(param_r3) + 3u, (u8)r5);
                            r3 = rd32(param_r3);
                            wr8(r3 + 5u, (u8)((u32)rd8(r3 + 5u) & 0x7fu));
                            break;
                        }
                    }
                    a.r[0] = param_r3;
                    (void)tc_call(0x8008eab4u, &a);
                }
            }
        } while (0);
        r5 = (u32)rd8(rd32(param_r3));
        if (r5 != 4u) {
            if (param_r4 != 1u || r31 == 0u) {
                r4 = rd32(param_r3 + 0x8cu);
                if (((ppc_cntlzw((u32)((s32)((r4 << 1u) & 0xc0000000u) >> 31)) >> 5u) & 0x7ffffffu) == 0u) {
                    r5 = (u32)rd8(rd32(param_r3));
                    r4 = (r4 & 0xbfffffffu) | ((ppc_cntlzw((((1u - r5) | (r5 - 1u)) >> 0x1fu) & 1u) << 0x19u) & 0x40000000u);
                    wr32(param_r3 + 0x8cu, r4);
                }
                wr8(rd32(param_r3), 1u);
            }
        } else if (param_r4 != 1u || r31 == 0u) {
            r4 = rd32(param_r3 + 0x8cu);
            if (((ppc_cntlzw((u32)((s32)((r4 << 1u) & 0xc0000000u) >> 31)) >> 5u) & 0x7ffffffu) == 0u) {
                r5 = (u32)rd8(rd32(param_r3));
                r4 = (r4 & 0xbfffffffu) | ((ppc_cntlzw((((1u - r5) | (r5 - 1u)) >> 0x1fu) & 1u) << 0x19u) & 0x40000000u);
                wr32(param_r3 + 0x8cu, r4);
            }
            wr8(rd32(param_r3), 1u);
        } else {
            r4 = rd32(param_r3 + 0x8cu);
            if (((ppc_cntlzw((u32)((s32)((r4 << 1u) & 0xc0000000u) >> 31)) >> 5u) & 0x7ffffffu) == 0u) {
                r4 = (r4 & 0xbfffffffu) | ((ppc_cntlzw((((2u - r5) | (r5 - 2u)) >> 0x1fu) & 1u) << 0x19u) & 0x40000000u);
                wr32(param_r3 + 0x8cu, r4);
            }
            wr8(rd32(param_r3), 2u);
        }
    } while (0);
    wr8(rd32(param_r3) + 7u, 0u);
    r4 = rd32(param_r3);
    if ((u32)rd8(r4 + 1u) == 2u && (u32)rd8(r4 + 2u) == 0x10u && (u32)rd8(r4 + 3u) == 4u) {
        r0 = (u32)rd8(r4 + 4u) + 1u;
        if (r0 > 0xffu) {
            r0 = 0xffu;
        }
        wr8(r4 + 4u, (u8)r0);
        if ((r0 & 0xffu) == 3u) {
            r4 = rd32(param_r3 + 0x8cu);
            if (((ppc_cntlzw((u32)((s32)r4 >> 31)) >> 5u) & 0x7ffffffu) == 0u) {
                r5 = (u32)rd8(rd32(param_r3) + 2u);
                r4 = (r4 & 0x7fffffffu) | ((ppc_cntlzw((((0x11u - r5) | (r5 - 0x11u)) >> 0x1fu) & 1u) << 0x1au) & 0x80000000u);
                wr32(param_r3 + 0x8cu, r4);
            }
            wr8(rd32(param_r3) + 2u, 0x11u);
            wr8(rd32(param_r3) + 4u, 0u);
        }
    }
    return;
}
