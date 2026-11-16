#include "tc_rt.h"

u32 fn_80204064(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r25 = 0, r26 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x1cu);
    r28 = rd32(r4 + 0x68u);
    a.r[0] = r4;
    r3 = tc_call(0x80200098u, &a);
    wr32(r3 + 0x3f0u, 1u);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x80200098u, &a);
    r31 = rd32(r3 + 0x3ecu);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x80200098u, &a);
    r26 = rd32(r3 + 0x3e8u);
    r25 = r31 + rd32(r28 + 0x10u);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x80200098u, &a);
    f1 = tc_lastf();
    a.r[0] = r28;
    a.r[1] = r3;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r28 + 0x28u) + 0xcu), &a);
    r30 = rd32(rd32((u32)param_1 + 0x20u) + 0x20u);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x80200098u, &a);
    a.r[0] = r3;
    r3 = tc_call(0x8011a4b4u, &a);
    r4 = rd32((u32)param_1 + 0x1cu);
    r29 = r3;
    r0 = rd32(r28 + 0x10u);
    r28 = (u32)rd16(r30 + 0xbcu);
    r0 = rd32(rd32(r4 + 0x1cu) + 0x430u) + r0;
    if (r0 == r25) {
        a.r[0] = r4;
        r3 = tc_call(0x80200098u, &a);
        f1 = tc_lastf();
        if (r26 == rd32(r3 + 0x3e8u)) {
            r0 = rd32(0x803541bcu);
            if (r0 != 0u) {
                r3 = rd32(rd32(0x805711ccu) + 0xfcu);
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
                r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r3 != 1u) {
                    if (r3 != 2u) {
                        r3 = 0u;
                    } else {
                        r3 = r4 & rd32(rd32(0x803541a8u));
                    }
                } else {
                    r3 = r4 & rd32(rd32(0x80354198u));
                }
            } else {
                r3 = 0u;
            }
            if (r3 == 0u) {
                if (r0 != 0u) {
                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
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
                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
                            r3 = 0u;
                        } else {
                            r3 = r4 & rd32(rd32(0x803541a8u));
                        }
                    } else {
                        r3 = r4 & rd32(rd32(0x80354198u));
                    }
                } else {
                    r3 = 0u;
                }
                if (r3 == 0u) {
                    if (r0 != 0u) {
                        r3 = rd32(rd32(0x805711ccu) + 0xfcu);
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
                        r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r3 != 1u) {
                            if (r3 != 2u) {
                                r3 = 0u;
                            } else {
                                r3 = r4 & rd32(rd32(0x803541a8u));
                            }
                        } else {
                            r3 = r4 & rd32(rd32(0x80354198u));
                        }
                    } else {
                        r3 = 0u;
                    }
                    if (r3 == 0u) {
                        if (r0 != 0u) {
                            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
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
                            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                            if (r0 != 1u) {
                                if (r0 != 2u) {
                                    r0 = 0u;
                                } else {
                                    r0 = r4 & rd32(rd32(0x803541a8u));
                                }
                            } else {
                                r0 = r4 & rd32(rd32(0x80354198u));
                            }
                        } else {
                            r0 = 0u;
                        }
                        if (r0 == 0u) {
                            return 1u;
                        }
                    }
                    wr32(rd32((u32)param_1 + 0x20u) + 0x20u, 0u);
                    a.r[0] = rd32((u32)param_1 + 0x1cu);
                    r3 = tc_call(0x80200098u, &a);
                    a.r[0] = r3;
                    (void)tc_call(0x8011a424u, &a);
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 3u;
                    (void)tc_call(0x8010a75cu, &a);
                    a.r[0] = rd32((u32)param_1 + 0x20u) + 0x28u;
                    a.r[1] = 0u;
                    (void)tc_call(0x800f8544u, &a);
                    return 1u;
                }
            }
            r3 = 0u;
            r0 = 0u;
            if ((s32)r28 >= 504 && (s32)r28 <= 646) {
                r0 = 1u;
            }
            if (r0 != 0u) {
                r3 = 1u;
            } else {
                r0 = 0u;
                if ((s32)r28 >= 0 && (s32)r28 <= 36) {
                    r0 = 1u;
                }
                if (r0 != 0u) {
                    r3 = 1u;
                } else {
                    r0 = 0u;
                    if ((s32)r28 >= 353 && (s32)r28 <= 360) {
                        r0 = 1u;
                    }
                    if (r0 != 0u) {
                        r3 = 1u;
                    }
                }
            }
            if (r3 == 0u) {
                a.r[0] = 0x8049f1b0u;
                a.r[1] = r28;
                r3 = tc_call(0x8015f2b0u, &a);
                f1 = tc_lastf();
                r0 = r3 & 0xffu;
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = r0 & 0x180000u;
                r3 = 0u;
                if (r0 != 0u) {
                    r3 = 1u;
                }
                if (r3 == 0u) {
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 4u;
                    (void)tc_call(0x8010a75cu, &a);
                } else {
                    r3 = rd32(rd32(rd32((u32)param_1 + 0x1cu) + 0x28u) + 0x30u);
                    a.r[0] = r3;
                    a.r[1] = r30;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(r3 + 0x28u) + 0x1cu), &a);
                    r26 = r3;
                    if (r3 == 0u) {
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = 4u;
                        (void)tc_call(0x8010a75cu, &a);
                    } else {
                        a.r[0] = r30;
                        (void)tc_call(0x80161ac4u, &a);
                        wr16(r30 + 0xbcu, 0x2e8u);
                        wr8(r30 + 0xbeu, 0u);
                        wr8(r30 + 0xbfu, 0u);
                        a.r[0] = r26;
                        a.r[1] = r29;
                        a.r[2] = 0xffffffffu;
                        (void)tc_call(0x801621e4u, &a);
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = 2u;
                        (void)tc_call(0x8010a75cu, &a);
                    }
                }
            } else {
                r3 = rd32(rd32(rd32((u32)param_1 + 0x1cu) + 0x28u) + 0x2cu);
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3 + 0x28u) + 0x1cu), &a);
                r25 = r3;
                if (r3 != 0u) {
                    a.r[0] = rd32(rd32(rd32((u32)param_1 + 0x1cu) + 0x28u) + 0x2cu);
                    a.r[1] = r25;
                    r3 = tc_call(0x8019774cu, &a);
                    r28 = r3;
                    a.r[0] = rd32(rd32(rd32((u32)param_1 + 0x1cu) + 0x28u) + 0x2cu);
                    a.r[1] = r29;
                    r3 = tc_call(0x80201aa8u, &a);
                    if (r3 != 0u) {
                        r25 = 0u;
                    } else {
                        r8 = (u32)rd8(r30 + 0xbfu);
                        r7 = (u32)rd8(r30 + 0xbeu);
                        r6 = (r28 * 6u) - 0x7fb66fa0u;
                        wr16(r6 + 0x11cu, rd16(r30 + 0xbcu));
                        wr8(r6 + 0x11eu, (u8)r7);
                        wr8(r6 + 0x11fu, (u8)r8);
                        a.r[0] = r25;
                        a.r[1] = r29;
                        a.r[2] = 0xffffffffu;
                        (void)tc_call(0x801621e4u, &a);
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = 2u;
                        (void)tc_call(0x8010a75cu, &a);
                    }
                }
                if (r25 == 0u) {
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 4u;
                    (void)tc_call(0x8010a75cu, &a);
                }
            }
            wr32(rd32((u32)param_1 + 0x20u) + 0x20u, 0u);
            a.r[0] = rd32((u32)param_1 + 0x1cu);
            r3 = tc_call(0x80200098u, &a);
            a.r[0] = r3;
            (void)tc_call(0x8011a424u, &a);
            a.r[0] = rd32((u32)param_1 + 0x20u) + 0x28u;
            a.r[1] = 0u;
            (void)tc_call(0x800f8544u, &a);
            return 1u;
        }
    }
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x80200098u, &a);
    if (rd32(r3 + 0x3e8u) == 0u) {
        a.r[0] = rd32((u32)param_1 + 0x20u) + 0x28u;
        a.r[1] = 1u;
        (void)tc_call(0x800f8544u, &a);
    } else {
        r3 = 0u;
        r0 = 0u;
        if ((s32)r28 >= 504 && (s32)r28 <= 646) {
            r0 = 1u;
        }
        if (r0 != 0u) {
            r3 = 1u;
        } else {
            r0 = 0u;
            if ((s32)r28 >= 0 && (s32)r28 <= 36) {
                r0 = 1u;
            }
            if (r0 != 0u) {
                r3 = 1u;
            } else {
                r0 = 0u;
                if ((s32)r28 >= 353 && (s32)r28 <= 360) {
                    r0 = 1u;
                }
                if (r0 != 0u) {
                    r3 = 1u;
                }
            }
        }
        if (r3 == 0u) {
            a.r[0] = 0x8049f1b0u;
            a.r[1] = r28;
            r3 = tc_call(0x8015f2b0u, &a);
            r0 = r3 & 0xffu;
            r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
            r0 = r0 & 0x180000u;
            r3 = 0u;
            if (r0 != 0u) {
                r3 = 1u;
            }
            if (r3 == 0u) {
                a.r[0] = rd32((u32)param_1 + 0x1cu);
                r3 = tc_call(0x80200098u, &a);
                r26 = r3;
                a.r[0] = r3;
                a.r[1] = r31;
                a.r[2] = rd32(r3 + 0x3e8u);
                (void)tc_call(0x80119fb0u, &a);
                wr32(r26 + 0x3ecu, r31);
                a.r[0] = rd32((u32)param_1 + 0x1cu);
                r3 = tc_call(0x80200098u, &a);
                r26 = r3;
                a.r[0] = r3;
                a.r[1] = rd32(r3 + 0x3ecu);
                a.r[2] = 0u;
                (void)tc_call(0x80119fb0u, &a);
                wr32(r26 + 0x3e8u, 0u);
                a.r[0] = rd32((u32)param_1 + 0x20u) + 0x28u;
                a.r[1] = 1u;
                (void)tc_call(0x800f8544u, &a);
            } else {
                a.r[0] = rd32((u32)param_1 + 0x1cu);
                (void)tc_call(0x80200268u, &a);
                a.r[0] = rd32((u32)param_1 + 0x20u) + 0x28u;
                a.r[1] = 4u;
                (void)tc_call(0x800f8544u, &a);
                a.r[0] = 0x804b9da0u;
                a.r[1] = 1u;
                (void)tc_call(0x8010a75cu, &a);
            }
        } else {
            a.r[0] = rd32((u32)param_1 + 0x1cu);
            (void)tc_call(0x80200234u, &a);
            a.r[0] = rd32((u32)param_1 + 0x20u) + 0x28u;
            a.r[1] = 4u;
            (void)tc_call(0x800f8544u, &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 1u;
            (void)tc_call(0x8010a75cu, &a);
        }
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        r3 = tc_call(0x802001ccu, &a);
        r26 = r3;
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        r3 = tc_call(0x80200098u, &a);
        f1 = tc_lastf();
        a.r[0] = r26;
        a.r[1] = r3;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r26 + 0x28u) + 0xcu), &a);
    }
    return 1u;
}
