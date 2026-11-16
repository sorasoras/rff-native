#include "tc_rt.h"

u32 fn_80122efc(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r26 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r29 = 0xffffffffu;
    r30 = rd32((u32)param_1 + 0x1cu);
    r26 = rd32(r30 + 0xdc8u);
    a.r[0] = r30;
    f1 = tc_callf(0x80121e80u, &a);
    a.r[0] = r26;
    a.r[1] = rd32((u32)param_1 + 0x1cu) + 0x44u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r26 + 0x28u) + 0xcu), &a);
    r31 = rd32(r30 + 0x430u);
    r27 = r30 + 0x44u;
    a.r[0] = r27;
    a.r[1] = r31;
    a.r[2] = rd32(r30 + 0x42cu);
    (void)tc_call(0x80119fb0u, &a);
    wr32(r27 + 0x3ecu, r31);
    a.r[0] = r30;
    (void)tc_call(0x80122290u, &a);
    r31 = rd32(rd32(r26 + 0x2cu) + (((rd32(r30 + 0x430u) + rd32(r26 + 0x10u)) << 2u) & 0xfffffffcu));
    if (rd32(0x803541bcu) != 0u) {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 != 1u) {
            if (r0 != 2u) {
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
    do {
        if (r0 == 0u) {
            if (rd32(0x803541bcu) != 0u) {
                r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r0 != 1u) {
                    if (r0 != 2u) {
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
                a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x92cu;
                (void)tc_call(0x8012406cu, &a);
                a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
                a.r[1] = 2u;
                (void)tc_call(0x800f8544u, &a);
                break;
            }
        }
        r4 = (u32)rd16(r31 + 0xbcu);
        r3 = 1u;
        if (r4 != 0x2e8u) {
            if (rd32(r30 + 0xdc4u) == 2u) {
                r0 = 0u;
                if ((s32)r4 >= 462 && (s32)r4 <= 503) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    r0 = 0u;
                } else {
                    r0 = (ppc_cntlzw((u32)rd8(r4 - 0x7fb6709au) - 1u) >> 5u) & 0x7ffffffu;
                }
                if (r0 != 0u) {
                    r3 = 0u;
                    r29 = 0x11u;
                } else {
                    r3 = 1u;
                }
            }
        } else {
            r29 = 0x10u;
            r3 = 0u;
        }
        if (r3 == 0u) {
            a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x92cu;
            (void)tc_call(0x80124134u, &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 4u;
            (void)tc_call(0x8010a75cu, &a);
        } else {
            a.r[0] = 0x804b9da0u;
            a.r[1] = 2u;
            (void)tc_call(0x8010a75cu, &a);
            wr32(rd32((u32)param_1 + 0x20u) + 0x5cu, r31);
            a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
            a.r[1] = 1u;
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
