#include "tc_rt.h"

u32 fn_8020583c(s32 param_1)
{
    u32 fl_ = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u);
    u32 r12 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0, t0 = 0, t4 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = (u32)param_1;
    for (;;) {
        wr32(r1 - 0x20u, r1);
        r1 = r1 - 0x20u;
        wr32(r1 + 0x24u, lr);
        t0 = r1 + 0xcu;
        wr32(t0, r27);
        wr32(t0 + 4u, r28);
        wr32(t0 + 8u, r29);
        wr32(t0 + 0xcu, r30);
        wr32(t0 + 0x10u, r31);
        r27 = r3;
        r3 = rd32(r3 + 0x1cu);
        a.r[0] = r3;
        r3 = tc_call(0x802001ccu, &a);
        f1 = tc_lastf();
        r30 = r3;
        a.r[0] = rd32(r27 + 0x1cu);
        r3 = tc_call(0x80200098u, &a);
        f1 = tc_lastf();
        r4 = rd32(r27 + 0x20u);
        r29 = rd32(r3 + 0x3ecu);
        r28 = rd32(r4 + 0x20u);
        a.r[0] = rd32(r27 + 0x1cu);
        r3 = tc_call(0x80200098u, &a);
        f1 = tc_lastf();
        a.r[0] = r3;
        r3 = tc_call(0x8011a4b4u, &a);
        f1 = tc_lastf();
        r31 = (u32)rd16(r28 + 0xbcu);
        a.r[0] = rd32(r27 + 0x1cu);
        r3 = tc_call(0x80200098u, &a);
        f1 = tc_lastf();
        r5 = tc_junkr(5u);
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        r12 = rd32(r30 + 0x28u);
        r4 = r3;
        r3 = r30;
        r12 = rd32(r12 + 0xcu);
        lr = 0x802058a0u;
        if (r12 != 0x8020583cu) {
            a.r[0] = r30;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            r3 = rd32(r27 + 0x1cu);
            r3 = rd32(r3 + 0x28u);
            r3 = rd32(r3 + 0x2cu);
            a.r[0] = r3;
            a.r[1] = r28;
            r3 = tc_call(0x80197508u, &a);
            f1 = tc_lastf();
            if (r3 == 0u) {
                r3 = rd32(r27 + 0x1cu);
                r3 = rd32(r3 + 0x28u);
                r3 = rd32(r3 + 0x30u);
                a.r[0] = r3;
                a.r[1] = r28;
                r3 = tc_call(0x80197508u, &a);
                f1 = tc_lastf();
                if (r3 == 0u) {
                    r3 = 0u;
                    r0 = 0u;
                    if ((s32)r31 >= 504 && (s32)r31 <= 646) {
                        r0 = 1u;
                    }
                    if (r0 != 0u) {
                        r3 = 1u;
                    } else {
                        r0 = 0u;
                        if ((s32)r31 >= 0 && (s32)r31 <= 36) {
                            r0 = 1u;
                        }
                        if (r0 != 0u) {
                            r3 = 1u;
                        } else {
                            r0 = 0u;
                            if ((s32)r31 >= 353 && (s32)r31 <= 360) {
                                r0 = 1u;
                            }
                            if (r0 != 0u) {
                                r3 = 1u;
                            }
                        }
                    }
                    if (r3 == 0u) {
                        a.r[0] = 0x8049f1b0u;
                        a.r[1] = r31;
                        r3 = tc_call(0x8015f2b0u, &a);
                        f1 = tc_lastf();
                        r0 = r3 & 0xffu;
                        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                        r0 = r0 & 0x180000u;
                        r3 = 0u;
                        if (r0 != 0u) {
                            r3 = 1u;
                        }
                        if (r3 != 0u) {
                            a.r[0] = rd32(r27 + 0x1cu);
                            r3 = tc_call(0x80200098u, &a);
                            f1 = tc_lastf();
                            if (rd32(r3 + 0x3e8u) == 1u) {
                                a.r[0] = rd32(r27 + 0x1cu);
                                r3 = tc_call(0x80200098u, &a);
                                f1 = tc_lastf();
                                r31 = r3;
                                a.r[0] = r3;
                                a.r[1] = rd32(r3 + 0x3ecu);
                                a.r[2] = 2u;
                                r3 = tc_call(0x80119fb0u, &a);
                                f1 = tc_lastf();
                                wr32(r31 + 0x3e8u, 2u);
                                a.r[0] = rd32(r27 + 0x1cu);
                                r3 = tc_call(0x80200098u, &a);
                                f1 = tc_lastf();
                                r31 = r3;
                                a.r[0] = r3;
                                a.r[1] = r29;
                                a.r[2] = rd32(r3 + 0x3e8u);
                                r3 = tc_call(0x80119fb0u, &a);
                                f1 = tc_lastf();
                                wr32(r31 + 0x3ecu, r29);
                            }
                        }
                    } else {
                        a.r[0] = rd32(r27 + 0x1cu);
                        r3 = tc_call(0x80200098u, &a);
                        f1 = tc_lastf();
                        if (rd32(r3 + 0x3e8u) == 2u) {
                            a.r[0] = rd32(r27 + 0x1cu);
                            r3 = tc_call(0x80200098u, &a);
                            f1 = tc_lastf();
                            r31 = r3;
                            a.r[0] = r3;
                            a.r[1] = rd32(r3 + 0x3ecu);
                            a.r[2] = 1u;
                            r3 = tc_call(0x80119fb0u, &a);
                            f1 = tc_lastf();
                            wr32(r31 + 0x3e8u, 1u);
                            a.r[0] = rd32(r27 + 0x1cu);
                            r3 = tc_call(0x80200098u, &a);
                            f1 = tc_lastf();
                            r31 = r3;
                            a.r[0] = r3;
                            a.r[1] = r29;
                            a.r[2] = rd32(r3 + 0x3e8u);
                            r3 = tc_call(0x80119fb0u, &a);
                            f1 = tc_lastf();
                            wr32(r31 + 0x3ecu, r29);
                        }
                    }
                } else {
                    a.r[0] = rd32(r27 + 0x1cu);
                    r3 = tc_call(0x80200098u, &a);
                    f1 = tc_lastf();
                    if (rd32(r3 + 0x3e8u) == 1u) {
                        a.r[0] = rd32(r27 + 0x1cu);
                        r3 = tc_call(0x80200098u, &a);
                        f1 = tc_lastf();
                        r31 = r3;
                        a.r[0] = r3;
                        a.r[1] = rd32(r3 + 0x3ecu);
                        a.r[2] = 2u;
                        r3 = tc_call(0x80119fb0u, &a);
                        f1 = tc_lastf();
                        wr32(r31 + 0x3e8u, 2u);
                        a.r[0] = rd32(r27 + 0x1cu);
                        r3 = tc_call(0x80200098u, &a);
                        f1 = tc_lastf();
                        r31 = r3;
                        a.r[0] = r3;
                        a.r[1] = r29;
                        a.r[2] = rd32(r3 + 0x3e8u);
                        r3 = tc_call(0x80119fb0u, &a);
                        f1 = tc_lastf();
                        wr32(r31 + 0x3ecu, r29);
                    }
                }
            } else {
                a.r[0] = rd32(r27 + 0x1cu);
                r3 = tc_call(0x80200098u, &a);
                f1 = tc_lastf();
                if (rd32(r3 + 0x3e8u) != 1u) {
                    a.r[0] = rd32(r27 + 0x1cu);
                    r3 = tc_call(0x80200098u, &a);
                    f1 = tc_lastf();
                    r31 = r3;
                    a.r[0] = r3;
                    a.r[1] = rd32(r3 + 0x3ecu);
                    a.r[2] = 1u;
                    r3 = tc_call(0x80119fb0u, &a);
                    f1 = tc_lastf();
                    wr32(r31 + 0x3e8u, 1u);
                    a.r[0] = rd32(r27 + 0x1cu);
                    r3 = tc_call(0x80200098u, &a);
                    f1 = tc_lastf();
                    r31 = r3;
                    a.r[0] = r3;
                    a.r[1] = r29;
                    a.r[2] = rd32(r3 + 0x3e8u);
                    r3 = tc_call(0x80119fb0u, &a);
                    f1 = tc_lastf();
                    wr32(r31 + 0x3ecu, r29);
                }
            }
            a.r[0] = rd32(r27 + 0x1cu);
            r3 = tc_call(0x80200098u, &a);
            f1 = tc_lastf();
            if (rd32(r3 + 0x3e8u) != 1u) {
                a.r[0] = rd32(r27 + 0x1cu);
                r3 = tc_call(0x80200098u, &a);
                f1 = tc_lastf();
                if (rd32(r3 + 0x3e8u) != 2u) {
                    r3 = rd32(r27 + 0x1cu);
                    r4 = rd32(r3 + 0x28u);
                    if (r30 != rd32(r4 + 0x2cu)) {
                        a.r[0] = r3;
                        r3 = tc_call(0x8020020cu, &a);
                        f1 = tc_lastf();
                    }
                } else {
                    a.r[0] = rd32(r27 + 0x1cu);
                    r3 = tc_call(0x80200268u, &a);
                    f1 = tc_lastf();
                }
            } else {
                a.r[0] = rd32(r27 + 0x1cu);
                r3 = tc_call(0x80200234u, &a);
                f1 = tc_lastf();
            }
            a.r[0] = rd32(r27 + 0x1cu);
            r3 = tc_call(0x802001ccu, &a);
            f1 = tc_lastf();
            if (r30 != r3) {
                a.r[0] = rd32(r27 + 0x1cu);
                r3 = tc_call(0x80200098u, &a);
                f1 = tc_lastf();
                if (rd32(r3 + 0x3e8u) != 0u) {
                    a.r[0] = rd32(r27 + 0x1cu);
                    r3 = tc_call(0x802001ccu, &a);
                    f1 = tc_lastf();
                    r31 = r3;
                    a.r[0] = rd32(r27 + 0x1cu);
                    r3 = tc_call(0x80200098u, &a);
                    f1 = tc_lastf();
                    r5 = tc_junkr(5u);
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    r12 = rd32(r31 + 0x28u);
                    r4 = r3;
                    r3 = r31;
                    r12 = rd32(r12 + 0xcu);
                    lr = 0x80205b70u;
                    if (r12 == 0x8020583cu) continue;
                    a.r[0] = r31;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    r3 = tc_call(r12, &a);
                    f1 = tc_lastf();
                }
            }
            a.r[0] = rd32(r27 + 0x1cu);
            r3 = tc_call(0x802001ccu, &a);
            f1 = tc_lastf();
            r31 = r3;
            a.r[0] = rd32(r27 + 0x1cu);
            r3 = tc_call(0x80200098u, &a);
            f1 = tc_lastf();
            if (r29 != rd32(r3 + 0x3ecu)) {
                a.r[0] = 0x804b9da0u;
                a.r[1] = 1u;
                r3 = tc_call(0x8010a75cu, &a);
                f1 = tc_lastf();
            }
            a.r[0] = rd32(r27 + 0x1cu);
            r3 = tc_call(0x80200098u, &a);
            f1 = tc_lastf();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            if (rd32(r3 + 0x3f0u) != 0u) {
                fl_ = 4u;
                break;
            }
            r0 = rd32(0x803541bcu);
            if (r0 != 0u) {
                r3 = rd32(0x805711ccu);
                r3 = rd32(r3 + 0xfcu);
                if (r3 != 1u) {
                    if (r3 != 2u) {
                        r4 = 0u;
                    } else {
                        r4 = rd32(0x80354174u);
                    }
                } else {
                    r4 = rd32(0x80354140u);
                }
            } else {
                r4 = 0u;
            }
            if (r0 != 0u) {
                r3 = rd32(0x805711ccu);
                r3 = rd32(r3 + 0xfcu);
                if (r3 != 1u) {
                    if (r3 != 2u) {
                        r3 = 0u;
                    } else {
                        r3 = rd32(0x803541a8u);
                        r3 = rd32(r3);
                        r3 = r4 & r3;
                    }
                } else {
                    r3 = rd32(0x80354198u);
                    r3 = rd32(r3);
                    r3 = r4 & r3;
                }
            } else {
                r3 = 0u;
            }
            if (r3 == 0u) {
                if (r0 != 0u) {
                    r3 = rd32(0x805711ccu);
                    r3 = rd32(r3 + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
                            r4 = 0u;
                        } else {
                            r4 = rd32(0x80354190u);
                        }
                    } else {
                        r4 = rd32(0x8035415cu);
                    }
                } else {
                    r4 = 0u;
                }
                if (r0 != 0u) {
                    r3 = rd32(0x805711ccu);
                    r3 = rd32(r3 + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
                            r3 = 0u;
                        } else {
                            r3 = rd32(0x803541a8u);
                            r3 = rd32(r3);
                            r3 = r4 & r3;
                        }
                    } else {
                        r3 = rd32(0x80354198u);
                        r3 = rd32(r3);
                        r3 = r4 & r3;
                    }
                } else {
                    r3 = 0u;
                }
                if (r3 == 0u) {
                    fl_ = 2u;
                    break;
                }
            }
            r4 = rd32(r27 + 0x1cu);
            r3 = rd32(r4 + 0x28u);
            if (r31 == rd32(r3 + 0x2cu)) {
                fl_ = 3u;
                break;
            }
            r3 = rd32(r4 + 0x68u);
            r12 = rd32(r3 + 0x28u);
            r12 = rd32(r12 + 0x1cu);
            lr = 0x80205e4cu;
            if (r12 != 0x8020583cu) {
                a.r[0] = r3;
                a.r[1] = r28;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                r3 = tc_call(r12, &a);
                f1 = tc_lastf();
                if (r3 == 0u) {
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 4u;
                    r3 = tc_call(0x8010a75cu, &a);
                    f1 = tc_lastf();
                    fl_ = 1u;
                    break;
                }
                a.r[0] = r3;
                a.r[1] = r28;
                a.r[2] = 0xffffffffu;
                r3 = tc_call(0x801621e4u, &a);
                f1 = tc_lastf();
                a.r[0] = r28;
                r3 = tc_call(0x80161ac4u, &a);
                f1 = tc_lastf();
                wr16(r28 + 0xbcu, 0x2e8u);
                wr8(r28 + 0xbeu, 0u);
                wr8(r28 + 0xbfu, 0u);
                a.r[0] = 0x804b9da0u;
                a.r[1] = 2u;
                r3 = tc_call(0x8010a75cu, &a);
                f1 = tc_lastf();
                fl_ = 1u;
                break;
            }
        }
    }
    do {
        if (fl_ == 4u) {
            fl_ = 0u;
            fl_ = 5u;
            break;
        }
        if (fl_ != 3u) {
            if (fl_ == 2u) {
                fl_ = 0u;
            } else if (fl_ == 1u) {
                fl_ = 0u;
                break;
            }
            if (r0 != 0u) {
                r3 = rd32(0x805711ccu);
                r3 = rd32(r3 + 0xfcu);
                if (r3 != 1u) {
                    if (r3 != 2u) {
                        r4 = 0u;
                    } else {
                        r4 = rd32(0x80354178u);
                    }
                } else {
                    r4 = rd32(0x80354144u);
                }
            } else {
                r4 = 0u;
            }
            if (r0 != 0u) {
                r3 = rd32(0x805711ccu);
                r3 = rd32(r3 + 0xfcu);
                if (r3 != 1u) {
                    if (r3 != 2u) {
                        r3 = 0u;
                    } else {
                        r3 = rd32(0x803541a8u);
                        r3 = rd32(r3);
                        r3 = r4 & r3;
                    }
                } else {
                    r3 = rd32(0x80354198u);
                    r3 = rd32(r3);
                    r3 = r4 & r3;
                }
            } else {
                r3 = 0u;
            }
            if (r3 == 0u) {
                if (r0 != 0u) {
                    r3 = rd32(0x805711ccu);
                    r3 = rd32(r3 + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
                            r4 = 0u;
                        } else {
                            r4 = rd32(0x80354194u);
                        }
                    } else {
                        r4 = rd32(0x80354160u);
                    }
                } else {
                    r4 = 0u;
                }
                if (r0 != 0u) {
                    r3 = rd32(0x805711ccu);
                    r0 = rd32(r3 + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r0 = 0u;
                        } else {
                            r3 = rd32(0x803541a8u);
                            r0 = r4 & rd32(r3);
                        }
                    } else {
                        r3 = rd32(0x80354198u);
                        r0 = r4 & rd32(r3);
                    }
                } else {
                    r0 = 0u;
                }
                if (r0 == 0u) {
                    fl_ = 6u;
                    break;
                }
            }
            a.r[0] = rd32(r27 + 0x1cu);
            r3 = tc_call(0x80200098u, &a);
            f1 = tc_lastf();
            a.r[0] = r3;
            r3 = tc_call(0x8011a424u, &a);
            f1 = tc_lastf();
            wr32(rd32(r27 + 0x20u) + 0x20u, 0u);
            a.r[0] = rd32(r27 + 0x20u) + 0x28u;
            a.r[1] = 3u;
            r3 = tc_call(0x800f8544u, &a);
            f1 = tc_lastf();
            a.r[0] = 0x804b9da0u;
            a.r[1] = 3u;
            r3 = tc_call(0x8010a75cu, &a);
            f1 = tc_lastf();
            fl_ = 6u;
            break;
        }
        fl_ = 0u;
        a.r[0] = r28;
        r3 = tc_call(0x80161ac4u, &a);
        f1 = tc_lastf();
        wr16(r28 + 0xbcu, 0x2e8u);
        wr8(r28 + 0xbeu, 0u);
        wr8(r28 + 0xbfu, 0u);
        r3 = rd32(r27 + 0x1cu);
        r3 = rd32(r3 + 0x28u);
        r3 = rd32(r3 + 0x2cu);
        a.r[0] = r3;
        a.r[1] = r28;
        r3 = tc_call(0x8019774cu, &a);
        f1 = tc_lastf();
        r5 = (r3 * 6u) - 0x7fb66fa0u;
        wr16(r5 + 0x11cu, 0x2e8u);
        wr8(r5 + 0x11eu, 1u);
        wr8(r5 + 0x11fu, 1u);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 2u;
        r3 = tc_call(0x8010a75cu, &a);
        f1 = tc_lastf();
    } while (0);
    if (fl_ == 6u) {
        fl_ = 0u;
    } else if (fl_ == 5u) {
        fl_ = 0u;
        a.r[0] = rd32(r27 + 0x1cu);
        r3 = tc_call(0x80200098u, &a);
        f1 = tc_lastf();
        if (rd32(r3 + 0x3e8u) == 0u) {
            r3 = rd32(r27 + 0x1cu);
            r4 = rd32(r3 + 0x28u);
            if (r30 == rd32(r4 + 0x2cu)) {
                a.r[0] = r3;
                r3 = tc_call(0x80200098u, &a);
                f1 = tc_lastf();
                r28 = r3;
                a.r[0] = r3;
                a.r[1] = r29;
                a.r[2] = rd32(r3 + 0x3e8u);
                r3 = tc_call(0x80119fb0u, &a);
                f1 = tc_lastf();
                wr32(r28 + 0x3ecu, r29);
                a.r[0] = rd32(r27 + 0x1cu);
                r3 = tc_call(0x80200234u, &a);
                f1 = tc_lastf();
                a.r[0] = rd32(r27 + 0x20u) + 0x28u;
                a.r[1] = 4u;
                r3 = tc_call(0x800f8544u, &a);
                f1 = tc_lastf();
            } else {
                a.r[0] = r3;
                r3 = tc_call(0x8020020cu, &a);
                f1 = tc_lastf();
                a.r[0] = rd32(r27 + 0x1cu);
                r3 = tc_call(0x80200098u, &a);
                f1 = tc_lastf();
                r28 = r3;
                a.r[0] = r3;
                a.r[1] = rd32(r3 + 0x3ecu);
                a.r[2] = 0u;
                r3 = tc_call(0x80119fb0u, &a);
                f1 = tc_lastf();
                wr32(r28 + 0x3e8u, 0u);
                a.r[0] = rd32(r27 + 0x20u) + 0x28u;
                a.r[1] = 1u;
                r3 = tc_call(0x800f8544u, &a);
                f1 = tc_lastf();
            }
        } else {
            a.r[0] = rd32(r27 + 0x20u) + 0x28u;
            a.r[1] = 4u;
            r3 = tc_call(0x800f8544u, &a);
            f1 = tc_lastf();
        }
    } else {
        a.r[0] = rd32(r27 + 0x1cu);
        r3 = tc_call(0x80200098u, &a);
        f1 = tc_lastf();
        a.r[0] = r3;
        r3 = tc_call(0x8011a424u, &a);
        f1 = tc_lastf();
        wr32(rd32(r27 + 0x20u) + 0x20u, 0u);
        a.r[0] = rd32(r27 + 0x20u) + 0x28u;
        a.r[1] = 3u;
        r3 = tc_call(0x800f8544u, &a);
        f1 = tc_lastf();
    }
    t4 = r1 + 0xcu;
    r27 = rd32(t4);
    r28 = rd32(t4 + 4u);
    r29 = rd32(t4 + 8u);
    r30 = rd32(t4 + 0xcu);
    r31 = rd32(t4 + 0x10u);
    r0 = rd32(r1 + 0x24u);
    return 1u;
}
