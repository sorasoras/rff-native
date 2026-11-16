#include "tc_rt.h"

u32 fn_80122904(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r26 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r29 = 0xffffffffu;
    if (rd32(0x803541bcu) != 0u) {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 != 1u) {
            if (r0 != 2u) {
                r6 = 0u;
            } else {
                r6 = rd32(0x80354174u);
            }
        } else {
            r6 = rd32(0x80354140u);
        }
    } else {
        r6 = 0u;
    }
    if (rd32(0x803541bcu) != 0u) {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 != 1u) {
            if (r0 != 2u) {
                r0 = 0u;
            } else {
                r0 = r6 & rd32(rd32(0x803541a8u));
            }
        } else {
            r0 = r6 & rd32(rd32(0x80354198u));
        }
    } else {
        r0 = 0u;
    }
    do {
        if (r0 == 0u) {
            if (rd32(0x803541bcu) != 0u) {
                r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r0 != 1u) {
                    if (r0 != 2u) {
                        r6 = 0u;
                    } else {
                        r6 = rd32(0x80354190u);
                    }
                } else {
                    r6 = rd32(0x8035415cu);
                }
            } else {
                r6 = 0u;
            }
            if (rd32(0x803541bcu) != 0u) {
                r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r0 != 1u) {
                    if (r0 != 2u) {
                        r0 = 0u;
                    } else {
                        r0 = r6 & rd32(rd32(0x803541a8u));
                    }
                } else {
                    r0 = r6 & rd32(rd32(0x80354198u));
                }
            } else {
                r0 = 0u;
            }
            if (r0 == 0u) {
                if (rd32(0x803541bcu) != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
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
                if (rd32(0x803541bcu) != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r0 = 0u;
                        } else {
                            r0 = r5 & rd32(rd32(0x803541a8u));
                        }
                    } else {
                        r0 = r5 & rd32(rd32(0x80354198u));
                    }
                } else {
                    r0 = 0u;
                }
                if (r0 == 0u) {
                    if (rd32(0x803541bcu) != 0u) {
                        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r0 != 1u) {
                            if (r0 != 2u) {
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
                    if (rd32(0x803541bcu) != 0u) {
                        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r0 != 1u) {
                            if (r0 != 2u) {
                                r0 = 0u;
                            } else {
                                r0 = r5 & rd32(rd32(0x803541a8u));
                            }
                        } else {
                            r0 = r5 & rd32(rd32(0x80354198u));
                        }
                    } else {
                        r0 = 0u;
                    }
                    if (r0 == 0u) break;
                }
                a.r[0] = 0x804b9da0u;
                a.r[1] = 3u;
                (void)tc_call(0x8010a75cu, &a);
                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x450u;
                (void)tc_call(0x8019437cu, &a);
                a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
                a.r[1] = 0u;
                (void)tc_call(0x800f8544u, &a);
                break;
            }
        }
        r5 = rd32((u32)param_1 + 0x1cu);
        r31 = 0u;
        r4 = rd32(r5 + 0x464u);
        if (r4 != 0u) {
            r4 = rd32(r4 + 0x1a8u);
            r31 = rd32(r5 + 0x5bcu) * r4;
        }
        r6 = rd32((u32)param_1 + 0x1cu);
        r28 = 0u;
        r4 = rd32(r6 + 0x464u);
        r0 = 0u;
        r30 = rd32(0x80499090u);
        if (r4 != 0u) {
            r4 = rd32(r4 + 0x1a8u);
            r0 = rd32(r6 + 0x5bcu) * r4;
        }
        if (r0 != 0u) {
            if ((s32)(r30 - r31) >= 0) {
                wr16(0x817fdfd8u, 0x2e8u);
                wr8(0x817fdfdau, 1u);
                wr8(0x817fdfdbu, 1u);
                a.r[0] = 0x817fdfd8u;
                a.r[1] = rd32(rd32((u32)param_1 + 0x1cu) + 0x5c0u);
                a.r[2] = 4u;
                (void)tc_call(0x80004338u, &a);
                a.r[0] = 0x8049f1b0u;
                a.r[1] = (u32)rd16(0x817fdfd8u);
                r3 = tc_call(0x8015f2b0u, &a);
                r0 = r3 & 0xffu;
                r3 = 0u;
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = r0 & 0x1800000u;
                if (r0 != 0u) {
                    r3 = 1u;
                }
                if (r3 == 0u) {
                    wr8(0x817fdfdau, (u8)rd32(rd32(rd32((u32)param_1 + 0x1cu) + 0x464u) + 0x1a8u));
                    a.r[0] = 0x817fdfd8u;
                    r3 = tc_call(0x80082354u, &a);
                    if (r3 != 0u) {
                        r28 = 1u;
                    }
                } else {
                    r4 = (u32)rd16(0x817fdfd8u);
                    r0 = 0u;
                    if ((s32)r4 >= 462 && (s32)r4 <= 503) {
                        r0 = 1u;
                    }
                    if (r0 != 0u) {
                        r4 = r4 - 0x1ceu;
                        wr8(r4 - 0x7fb66eccu, 1u);
                    }
                    r28 = 1u;
                }
            }
        } else {
            r28 = 0u;
        }
        if (r28 == 0u) {
            a.r[0] = 0x804b9da0u;
            a.r[1] = 4u;
            (void)tc_call(0x8010a75cu, &a);
            r4 = rd32((u32)param_1 + 0x1cu);
            r0 = 0u;
            r3 = rd32(r4 + 0x464u);
            if (r3 != 0u) {
                r3 = rd32(r3 + 0x1a8u);
                r0 = rd32(r4 + 0x5bcu) * r3;
            }
            if (r0 != 0u) {
                if ((s32)(r30 - r31) >= 0) {
                    a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x92cu;
                    (void)tc_call(0x80124134u, &a);
                    r3 = rd32(rd32((u32)param_1 + 0x1cu) + 0xdc4u);
                    wr32(rd32((u32)param_1 + 0x20u) + 0x5cu, 0u);
                    r3 = r3 * 0x14u;
                    r29 = r3 + 0xeu;
                    a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
                    a.r[1] = 0u;
                    (void)tc_call(0x800f8544u, &a);
                    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x450u;
                    (void)tc_call(0x8019437cu, &a);
                } else {
                    a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x92cu;
                    (void)tc_call(0x80124134u, &a);
                    r29 = (rd32(rd32((u32)param_1 + 0x1cu) + 0xdc4u) * 0x14u) + 0xfu;
                }
            } else {
                a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x92cu;
                (void)tc_call(0x80124134u, &a);
                r29 = (rd32(rd32((u32)param_1 + 0x1cu) + 0xdc4u) * 0x14u) + 0x10u;
            }
        } else {
            r4 = r30 - r31;
            if (r4 >= 0x5f5e0ffu) {
                r4 = 0x5f5e0ffu;
            }
            wr32(0x80499090u, r4);
            if (rd32(rd32((u32)param_1 + 0x1cu) + 0xdc4u) == 0u) {
                r4 = 0x3b9ac9ffu;
                r0 = rd32(0x80492b88u) + r31;
                if (r0 <= 0x3b9ac9ffu) {
                    r4 = r0;
                }
                wr32(0x80492b88u, r4);
            }
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0xcu;
            (void)tc_call(0x8010a75cu, &a);
            a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x92cu;
            (void)tc_call(0x801240d4u, &a);
            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x450u;
            (void)tc_call(0x8019437cu, &a);
            wr32(rd32((u32)param_1 + 0x20u) + 0x5cu, 0u);
            a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
            a.r[1] = 0u;
            (void)tc_call(0x800f8544u, &a);
        }
    } while (0);
    if ((s32)r29 > 0) {
        r3 = tc_call(0x80052e18u, &a);
        r26 = r3;
        wr32(rd32((u32)param_1 + 0x1cu) + 0xdccu, r3);
        a.r[0] = 0x13u;
        a.r[1] = r29;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        a.r[0] = r26;
        a.r[1] = r3;
        a.r[2] = 0xffffffffu;
        (void)tc_call(0x801f8638u, &a);
    }
    return 1u;
}
