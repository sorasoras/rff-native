#include "tc_rt.h"

u32 fn_802061a8(s32 param_1)
{
    u32 lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r12 = 0;
    u32 r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0, t0 = 0, t2 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = (u32)param_1;
    do {
        wr32(r1 - 0x20u, r1);
        r1 = r1 - 0x20u;
        wr32(r1 + 0x24u, lr);
        t0 = r1 + 8u;
        wr32(t0, r26);
        wr32(t0 + 4u, r27);
        wr32(t0 + 8u, 0u);
        wr32(t0 + 0xcu, 0u);
        wr32(t0 + 0x10u, r30);
        wr32(t0 + 0x14u, 0u);
        r26 = r3;
        r3 = rd32(r3 + 0x1cu);
        a.r[0] = r3;
        r3 = tc_call(0x802001ccu, &a);
        f1 = tc_lastf();
        r27 = r3;
        a.r[0] = rd32(r26 + 0x1cu);
        r3 = tc_call(0x80200098u, &a);
        f1 = tc_lastf();
        r30 = rd32(r3 + 0x3ecu);
        a.r[0] = rd32(r26 + 0x1cu);
        r3 = tc_call(0x80200098u, &a);
        f1 = tc_lastf();
        r5 = tc_junkr(5u);
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        r12 = rd32(r27 + 0x28u);
        r4 = r3;
        r3 = r27;
        r12 = rd32(r12 + 0xcu);
        lr = 0x802061f4u;
    } while (r12 == 0x802061a8u);
    a.r[0] = r27;
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
    r4 = rd32(r26 + 0x20u);
    r3 = rd32(r26 + 0x1cu);
    r29 = rd32(r4 + 0x20u);
    a.r[0] = r3;
    r3 = tc_call(0x80200098u, &a);
    f1 = tc_lastf();
    a.r[0] = r3;
    r3 = tc_call(0x8011a4b4u, &a);
    f1 = tc_lastf();
    r5 = rd32(r26 + 0x1cu);
    r28 = r3;
    r27 = (u32)rd16(r3 + 0xbcu);
    r3 = rd32(r5 + 0x28u);
    r3 = rd32(r3 + 0x2cu);
    a.r[0] = r3;
    a.r[1] = r29;
    r3 = tc_call(0x80197508u, &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        r3 = rd32(r26 + 0x1cu);
        r3 = rd32(r3 + 0x28u);
        r3 = rd32(r3 + 0x30u);
        a.r[0] = r3;
        a.r[1] = r29;
        r3 = tc_call(0x80197508u, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            r3 = 0u;
            r0 = 0u;
            if ((s32)r27 >= 504 && (s32)r27 <= 646) {
                r0 = 1u;
            }
            if (r0 != 0u) {
                r3 = 1u;
            } else {
                r0 = 0u;
                if ((s32)r27 >= 0 && (s32)r27 <= 36) {
                    r0 = 1u;
                }
                if (r0 != 0u) {
                    r3 = 1u;
                } else {
                    r0 = 0u;
                    if ((s32)r27 >= 353 && (s32)r27 <= 360) {
                        r0 = 1u;
                    }
                    if (r0 != 0u) {
                        r3 = 1u;
                    }
                }
            }
            if (r3 == 0u) {
                a.r[0] = 0x8049f1b0u;
                a.r[1] = r27;
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
                    a.r[0] = rd32(r26 + 0x1cu);
                    r3 = tc_call(0x80200098u, &a);
                    f1 = tc_lastf();
                    if (rd32(r3 + 0x3e8u) == 1u) {
                        a.r[0] = rd32(r26 + 0x1cu);
                        r3 = tc_call(0x80200098u, &a);
                        f1 = tc_lastf();
                        r27 = r3;
                        a.r[0] = r3;
                        a.r[1] = rd32(r3 + 0x3ecu);
                        a.r[2] = 2u;
                        r3 = tc_call(0x80119fb0u, &a);
                        f1 = tc_lastf();
                        wr32(r27 + 0x3e8u, 2u);
                        a.r[0] = rd32(r26 + 0x1cu);
                        r3 = tc_call(0x80200098u, &a);
                        f1 = tc_lastf();
                        r27 = r3;
                        a.r[0] = r3;
                        a.r[1] = r30;
                        a.r[2] = rd32(r3 + 0x3e8u);
                        r3 = tc_call(0x80119fb0u, &a);
                        f1 = tc_lastf();
                        wr32(r27 + 0x3ecu, r30);
                    }
                }
            } else {
                a.r[0] = rd32(r26 + 0x1cu);
                r3 = tc_call(0x80200098u, &a);
                f1 = tc_lastf();
                if (rd32(r3 + 0x3e8u) == 2u) {
                    a.r[0] = rd32(r26 + 0x1cu);
                    r3 = tc_call(0x80200098u, &a);
                    f1 = tc_lastf();
                    r27 = r3;
                    a.r[0] = r3;
                    a.r[1] = rd32(r3 + 0x3ecu);
                    a.r[2] = 1u;
                    r3 = tc_call(0x80119fb0u, &a);
                    f1 = tc_lastf();
                    wr32(r27 + 0x3e8u, 1u);
                    a.r[0] = rd32(r26 + 0x1cu);
                    r3 = tc_call(0x80200098u, &a);
                    f1 = tc_lastf();
                    r27 = r3;
                    a.r[0] = r3;
                    a.r[1] = r30;
                    a.r[2] = rd32(r3 + 0x3e8u);
                    r3 = tc_call(0x80119fb0u, &a);
                    f1 = tc_lastf();
                    wr32(r27 + 0x3ecu, r30);
                }
            }
        } else {
            a.r[0] = rd32(r26 + 0x1cu);
            r3 = tc_call(0x80200098u, &a);
            f1 = tc_lastf();
            if (rd32(r3 + 0x3e8u) == 1u) {
                a.r[0] = rd32(r26 + 0x1cu);
                r3 = tc_call(0x80200098u, &a);
                f1 = tc_lastf();
                r27 = r3;
                a.r[0] = r3;
                a.r[1] = rd32(r3 + 0x3ecu);
                a.r[2] = 2u;
                r3 = tc_call(0x80119fb0u, &a);
                f1 = tc_lastf();
                wr32(r27 + 0x3e8u, 2u);
                a.r[0] = rd32(r26 + 0x1cu);
                r3 = tc_call(0x80200098u, &a);
                f1 = tc_lastf();
                r27 = r3;
                a.r[0] = r3;
                a.r[1] = r30;
                a.r[2] = rd32(r3 + 0x3e8u);
                r3 = tc_call(0x80119fb0u, &a);
                f1 = tc_lastf();
                wr32(r27 + 0x3ecu, r30);
            }
        }
    } else {
        a.r[0] = rd32(r26 + 0x1cu);
        r3 = tc_call(0x80200098u, &a);
        f1 = tc_lastf();
        if (rd32(r3 + 0x3e8u) != 1u) {
            a.r[0] = rd32(r26 + 0x1cu);
            r3 = tc_call(0x80200098u, &a);
            f1 = tc_lastf();
            r27 = r3;
            a.r[0] = r3;
            a.r[1] = rd32(r3 + 0x3ecu);
            a.r[2] = 1u;
            r3 = tc_call(0x80119fb0u, &a);
            f1 = tc_lastf();
            wr32(r27 + 0x3e8u, 1u);
            a.r[0] = rd32(r26 + 0x1cu);
            r3 = tc_call(0x80200098u, &a);
            f1 = tc_lastf();
            r27 = r3;
            a.r[0] = r3;
            a.r[1] = r30;
            a.r[2] = rd32(r3 + 0x3e8u);
            r3 = tc_call(0x80119fb0u, &a);
            f1 = tc_lastf();
            wr32(r27 + 0x3ecu, r30);
        }
    }
    a.r[0] = rd32(r26 + 0x1cu);
    r3 = tc_call(0x80200098u, &a);
    f1 = tc_lastf();
    if (rd32(r3 + 0x3e8u) != 1u) {
        a.r[0] = rd32(r26 + 0x1cu);
        r3 = tc_call(0x80200098u, &a);
        f1 = tc_lastf();
        if (rd32(r3 + 0x3e8u) != 2u) {
            a.r[0] = rd32(r26 + 0x1cu);
            r3 = tc_call(0x8020020cu, &a);
            f1 = tc_lastf();
        } else {
            a.r[0] = rd32(r26 + 0x1cu);
            r3 = tc_call(0x80200268u, &a);
            f1 = tc_lastf();
        }
    } else {
        a.r[0] = rd32(r26 + 0x1cu);
        r3 = tc_call(0x80200234u, &a);
        f1 = tc_lastf();
    }
    a.r[0] = rd32(r26 + 0x1cu);
    r3 = tc_call(0x802001ccu, &a);
    f1 = tc_lastf();
    r31 = r3;
    a.r[0] = rd32(r26 + 0x1cu);
    r3 = tc_call(0x80200098u, &a);
    f1 = tc_lastf();
    if (r30 != rd32(r3 + 0x3ecu)) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = 1u;
        r3 = tc_call(0x8010a75cu, &a);
        f1 = tc_lastf();
    }
    r3 = rd32(r26 + 0x1cu);
    r0 = rd32(r31 + 0x10u);
    r5 = rd32(r3 + 0x1cu);
    r4 = rd32(r3 + 0x68u);
    r6 = rd32(r5 + 0x430u);
    r5 = rd32(r31 + 0x2cu);
    r27 = r6 + r0;
    r30 = rd32(r5 + ((r27 << 2u) & 0xfffffffcu));
    do {
        if (r31 != r4) {
            r0 = rd32(0x803541bcu);
            if (r0 != 0u) {
                r3 = rd32(0x805711ccu);
                r3 = rd32(r3 + 0xfcu);
                if (r3 != 1u) {
                    if (r3 != 2u) {
                        r5 = 0u;
                    } else {
                        r5 = rd32(0x80354174u);
                    }
                } else {
                    r5 = rd32(0x80354140u);
                }
            } else {
                r5 = 0u;
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
                        r3 = r5 & r3;
                    }
                } else {
                    r3 = rd32(0x80354198u);
                    r3 = rd32(r3);
                    r3 = r5 & r3;
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
                            r5 = 0u;
                        } else {
                            r5 = rd32(0x80354190u);
                        }
                    } else {
                        r5 = rd32(0x8035415cu);
                    }
                } else {
                    r5 = 0u;
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
                            r3 = r5 & r3;
                        }
                    } else {
                        r3 = rd32(0x80354198u);
                        r3 = rd32(r3);
                        r3 = r5 & r3;
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
                                r5 = 0u;
                            } else {
                                r5 = rd32(0x80354178u);
                            }
                        } else {
                            r5 = rd32(0x80354144u);
                        }
                    } else {
                        r5 = 0u;
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
                                r3 = r5 & r3;
                            }
                        } else {
                            r3 = rd32(0x80354198u);
                            r3 = rd32(r3);
                            r3 = r5 & r3;
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
                                    r5 = 0u;
                                } else {
                                    r5 = rd32(0x80354194u);
                                }
                            } else {
                                r5 = rd32(0x80354160u);
                            }
                        } else {
                            r5 = 0u;
                        }
                        if (r0 != 0u) {
                            r3 = rd32(0x805711ccu);
                            r0 = rd32(r3 + 0xfcu);
                            if (r0 != 1u) {
                                if (r0 != 2u) {
                                    r0 = 0u;
                                } else {
                                    r3 = rd32(0x803541a8u);
                                    r0 = r5 & rd32(r3);
                                }
                            } else {
                                r3 = rd32(0x80354198u);
                                r0 = r5 & rd32(r3);
                            }
                        } else {
                            r0 = 0u;
                        }
                        if (r0 == 0u) break;
                    }
                    a.r[0] = r4;
                    a.r[1] = r29;
                    r3 = tc_call(0x80197508u, &a);
                    f1 = tc_lastf();
                    if (r3 == 0u) {
                        a.r[0] = rd32(r26 + 0x20u) + 0x28u;
                        a.r[1] = 3u;
                        r3 = tc_call(0x800f8544u, &a);
                        f1 = tc_lastf();
                    } else {
                        a.r[0] = rd32(r26 + 0x1cu);
                        r3 = tc_call(0x80200098u, &a);
                        f1 = tc_lastf();
                        r28 = r3;
                        a.r[0] = r3;
                        a.r[1] = 0u;
                        a.r[2] = rd32(r3 + 0x3e8u);
                        r3 = tc_call(0x80119fb0u, &a);
                        f1 = tc_lastf();
                        wr32(r28 + 0x3ecu, 0u);
                        a.r[0] = rd32(r26 + 0x1cu);
                        r3 = tc_call(0x8020020cu, &a);
                        f1 = tc_lastf();
                        a.r[0] = rd32(r26 + 0x1cu);
                        r3 = tc_call(0x80200098u, &a);
                        f1 = tc_lastf();
                        r28 = r3;
                        a.r[0] = r3;
                        a.r[1] = rd32(r3 + 0x3ecu);
                        a.r[2] = 0u;
                        r3 = tc_call(0x80119fb0u, &a);
                        f1 = tc_lastf();
                        wr32(r28 + 0x3e8u, 0u);
                        a.r[0] = rd32(r26 + 0x20u) + 0x28u;
                        a.r[1] = 0u;
                        r3 = tc_call(0x800f8544u, &a);
                        f1 = tc_lastf();
                    }
                    a.r[0] = rd32(r26 + 0x1cu);
                    r3 = tc_call(0x80200098u, &a);
                    f1 = tc_lastf();
                    a.r[0] = r3;
                    r3 = tc_call(0x8011a424u, &a);
                    f1 = tc_lastf();
                    wr32(rd32(r26 + 0x20u) + 0x20u, 0u);
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 3u;
                    r3 = tc_call(0x8010a75cu, &a);
                    f1 = tc_lastf();
                    break;
                }
            }
            if (r29 != r30) {
                a.r[0] = r4;
                a.r[1] = r29;
                r3 = tc_call(0x80197508u, &a);
                f1 = tc_lastf();
                if (r3 == 0u) {
                    a.r[0] = r30;
                    a.r[1] = r29;
                    r3 = tc_call(0x80162024u, &a);
                    f1 = tc_lastf();
                    r3 = rd32(r26 + 0x1cu);
                    r4 = rd32(r3 + 0x28u);
                    if (r31 == rd32(r4 + 0x2cu)) {
                        a.r[0] = r3;
                        r3 = tc_call(0x80200098u, &a);
                        f1 = tc_lastf();
                        a.r[0] = r3;
                        r3 = tc_call(0x8011a4b4u, &a);
                        f1 = tc_lastf();
                        r6 = (u32)rd8(r3 + 0xbfu);
                        r5 = (u32)rd8(r3 + 0xbeu);
                        r0 = (u32)rd16(r3 + 0xbcu);
                        r3 = (r27 * 6u) - 0x7fb66fa0u;
                        wr16(r3 + 0x11cu, (u16)r0);
                        wr8(r3 + 0x11eu, (u8)r5);
                        wr8(r3 + 0x11fu, (u8)r6);
                        r3 = rd32(r26 + 0x1cu);
                        r3 = rd32(r3 + 0x28u);
                        r3 = rd32(r3 + 0x2cu);
                        a.r[0] = r3;
                        a.r[1] = r29;
                        r3 = tc_call(0x8019774cu, &a);
                        f1 = tc_lastf();
                        if ((u32)rd16(r29 + 0xbcu) != 0x2e8u) {
                            r3 = r3 * 6u;
                            r5 = (u32)rd8(r29 + 0xbfu);
                            r4 = (u32)rd8(r29 + 0xbeu);
                            r3 = r3 - 0x7fb66fa0u;
                            wr16(r3 + 0x11cu, rd16(r29 + 0xbcu));
                            wr8(r3 + 0x11eu, (u8)r4);
                            wr8(r3 + 0x11fu, (u8)r5);
                        } else {
                            a.r[0] = r3;
                            r3 = tc_call(0x800f955cu, &a);
                            f1 = tc_lastf();
                        }
                    }
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 2u;
                    r3 = tc_call(0x8010a75cu, &a);
                    f1 = tc_lastf();
                } else {
                    r3 = rd32(r26 + 0x1cu);
                    r3 = rd32(r3 + 0x28u);
                    r3 = rd32(r3 + 0x2cu);
                    if (r31 != r3) {
                        a.r[0] = r30;
                        a.r[1] = r29;
                        r3 = tc_call(0x80161f9cu, &a);
                        f1 = tc_lastf();
                        if (r3 == 0u) {
                            a.r[0] = 0x804b9da0u;
                            a.r[1] = 4u;
                            r3 = tc_call(0x8010a75cu, &a);
                            f1 = tc_lastf();
                        } else {
                            a.r[0] = r30;
                            a.r[1] = r29;
                            r3 = tc_call(0x80162024u, &a);
                            f1 = tc_lastf();
                            a.r[0] = 0x804b9da0u;
                            a.r[1] = 2u;
                            r3 = tc_call(0x8010a75cu, &a);
                            f1 = tc_lastf();
                        }
                    } else {
                        a.r[0] = r3;
                        a.r[1] = r28;
                        r3 = tc_call(0x80201aa8u, &a);
                        f1 = tc_lastf();
                        if (r3 != 0u) {
                            a.r[0] = 0x804b9da0u;
                            a.r[1] = 4u;
                            r3 = tc_call(0x8010a75cu, &a);
                            f1 = tc_lastf();
                        } else {
                            a.r[0] = rd32(r26 + 0x1cu);
                            r3 = tc_call(0x80200098u, &a);
                            f1 = tc_lastf();
                            a.r[0] = r3;
                            r3 = tc_call(0x8011a4b4u, &a);
                            f1 = tc_lastf();
                            r7 = (u32)rd8(r3 + 0xbfu);
                            r6 = (u32)rd8(r3 + 0xbeu);
                            r0 = (u32)rd16(r3 + 0xbcu);
                            r3 = (r27 * 6u) - 0x7fb66fa0u;
                            wr16(r3 + 0x11cu, (u16)r0);
                            wr8(r3 + 0x11eu, (u8)r6);
                            wr8(r3 + 0x11fu, (u8)r7);
                            r3 = rd32(r26 + 0x1cu);
                            r3 = rd32(r3 + 0x28u);
                            r3 = rd32(r3 + 0x2cu);
                            a.r[0] = r3;
                            a.r[1] = r28;
                            r3 = tc_call(0x80201b34u, &a);
                            f1 = tc_lastf();
                            a.r[0] = r30;
                            r3 = tc_call(0x80161ac4u, &a);
                            f1 = tc_lastf();
                            wr16(r30 + 0xbcu, 0x2e8u);
                            wr8(r30 + 0xbeu, 0u);
                            wr8(r30 + 0xbfu, 0u);
                            a.r[0] = r30 + 0xbcu;
                            a.r[1] = r29 + 0xbcu;
                            a.r[2] = 4u;
                            r3 = tc_call(0x80004338u, &a);
                            f1 = tc_lastf();
                            a.r[0] = r30;
                            r3 = tc_call(0x80161a60u, &a);
                            f1 = tc_lastf();
                            a.r[0] = 0x804b9da0u;
                            a.r[1] = 2u;
                            r3 = tc_call(0x8010a75cu, &a);
                            f1 = tc_lastf();
                        }
                    }
                }
            } else {
                a.r[0] = 0x804b9da0u;
                a.r[1] = 3u;
                r3 = tc_call(0x8010a75cu, &a);
                f1 = tc_lastf();
            }
            a.r[0] = rd32(r26 + 0x1cu);
            r3 = tc_call(0x80200098u, &a);
            f1 = tc_lastf();
            a.r[0] = r3;
            r3 = tc_call(0x8011a424u, &a);
            f1 = tc_lastf();
            wr32(rd32(r26 + 0x20u) + 0x20u, 0u);
            a.r[0] = rd32(r26 + 0x1cu);
            r3 = tc_call(0x8020020cu, &a);
            f1 = tc_lastf();
            a.r[0] = rd32(r26 + 0x1cu);
            r3 = tc_call(0x80200098u, &a);
            f1 = tc_lastf();
            r28 = r3;
            a.r[0] = r3;
            a.r[1] = rd32(r3 + 0x3ecu);
            a.r[2] = 0u;
            r3 = tc_call(0x80119fb0u, &a);
            f1 = tc_lastf();
            wr32(r28 + 0x3e8u, 0u);
            a.r[0] = rd32(r26 + 0x20u) + 0x28u;
            a.r[1] = 0u;
            r3 = tc_call(0x800f8544u, &a);
            f1 = tc_lastf();
        } else {
            a.r[0] = r3;
            r3 = tc_call(0x8020020cu, &a);
            f1 = tc_lastf();
            a.r[0] = rd32(r26 + 0x1cu);
            r3 = tc_call(0x80200098u, &a);
            f1 = tc_lastf();
            r27 = r3;
            a.r[0] = r3;
            a.r[1] = rd32(r3 + 0x3ecu);
            a.r[2] = 0u;
            r3 = tc_call(0x80119fb0u, &a);
            f1 = tc_lastf();
            wr32(r27 + 0x3e8u, 0u);
            a.r[0] = rd32(r26 + 0x20u) + 0x28u;
            a.r[1] = 1u;
            r3 = tc_call(0x800f8544u, &a);
            f1 = tc_lastf();
        }
    } while (0);
    t2 = r1 + 8u;
    r26 = rd32(t2);
    r27 = rd32(t2 + 4u);
    r28 = rd32(t2 + 8u);
    r29 = rd32(t2 + 0xcu);
    r30 = rd32(t2 + 0x10u);
    r31 = rd32(t2 + 0x14u);
    r0 = rd32(r1 + 0x24u);
    return 1u;
}
