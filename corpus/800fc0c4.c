#include "tc_rt.h"

u32 fn_800fc0c4(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x434u, 0u);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x800fa7c0u, &a);
    f1 = tc_lastf();
    a.r[0] = r3;
    a.r[1] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x44u;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0xcu), &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x800fa7c0u, &a);
    f1 = tc_lastf();
    r31 = r3;
    r0 = rd32(0x803541bcu);
    if (r0 != 0u) {
        r4 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r4 != 1u) {
            if (r4 != 2u) {
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
        r4 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r4 != 1u) {
            if (r4 != 2u) {
                r4 = 0u;
            } else {
                r4 = r5 & rd32(rd32(0x803541a8u));
            }
        } else {
            r4 = r5 & rd32(rd32(0x80354198u));
        }
    } else {
        r4 = 0u;
    }
    if (r4 == 0u) {
        if (r0 != 0u) {
            r4 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r4 != 1u) {
                if (r4 != 2u) {
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
            r4 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r4 != 1u) {
                if (r4 != 2u) {
                    r4 = 0u;
                } else {
                    r4 = r5 & rd32(rd32(0x803541a8u));
                }
            } else {
                r4 = r5 & rd32(rd32(0x80354198u));
            }
        } else {
            r4 = 0u;
        }
        if (r4 == 0u) {
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
                                r4 = rd32(0x80354180u);
                            }
                        } else {
                            r4 = rd32(0x8035414cu);
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
                        r3 = 1u;
                        return r3;
                    }
                    a.r[0] = rd32((u32)param_1 + 0x1cu);
                    r3 = tc_call(0x800fb14cu, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    if (r31 != r3) {
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = 4u;
                        (void)tc_call(0x8010a75cu, &a);
                        r3 = 1u;
                        return r3;
                    }
                    a.r[0] = r31;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r31 + 0x28u) + 0x24u), &a);
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 0xbu;
                    (void)tc_call(0x8010a75cu, &a);
                    r3 = 1u;
                    return r3;
                }
            }
            r3 = 0u;
            wr32(rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x434u, 1u);
            return r3;
        }
    }
    r0 = rd32(r3 + 0x10u);
    r3 = rd32(r3 + 0x2cu);
    r30 = rd32(rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x430u) + r0;
    r31 = rd32(r3 + ((r30 << 2u) & 0xfffffffcu));
    a.r[0] = r31;
    a.r[1] = (u32)rd16(r31 + 0xbcu);
    a.r[2] = r5;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r31 + 0xccu) + 0x10u), &a);
    if (r3 == 0u) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = 4u;
        (void)tc_call(0x8010a75cu, &a);
        r3 = 1u;
        return r3;
    }
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x44u;
    a.r[1] = r31 + 0xbcu;
    (void)tc_call(0x8011a2acu, &a);
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x44u;
    r3 = tc_call(0x8011a4b4u, &a);
    wr8(r3 + 0xbeu, 0u);
    wr32(rd32((u32)param_1 + 0x20u) + 0x5cu, r31);
    r3 = (u32)rd16(r31 + 0xbcu);
    if (r3 == 0x2e8u || (s32)rd8(r31 + 0xbeu) <= 1) {
        if (r3 == 0x2e8u) {
            wr8(r31 + 0xbeu, 1u);
            a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
            a.r[1] = 1u;
            (void)tc_call(0x800f8544u, &a);
        } else {
            a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x44u;
            r3 = tc_call(0x8011a4b4u, &a);
            wr8(r3 + 0xbeu, 1u);
            wr32(rd32((u32)param_1 + 0x20u) + 0x5cu, r31);
            r3 = (u32)rd8(r31 + 0xbeu) - 1u;
            wr8(r31 + 0xbeu, (u8)r3);
            if ((r3 & 0xffu) == 0u) {
                a.r[0] = r31;
                (void)tc_call(0x80161ac4u, &a);
                wr16(r31 + 0xbcu, 0x2e8u);
                wr8(r31 + 0xbeu, 0u);
                wr8(r31 + 0xbfu, 0u);
            }
            a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
            a.r[1] = 2u;
            (void)tc_call(0x800f8544u, &a);
        }
    } else {
        a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
        a.r[1] = 3u;
        (void)tc_call(0x800f8544u, &a);
    }
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x800fb154u, &a);
    a.r[0] = r3;
    a.r[1] = r31;
    r3 = tc_call(0x80197508u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        a.r[1] = r30;
        a.r[2] = 0u;
        (void)tc_call(0x800fadb0u, &a);
        r28 = 0u;
        r30 = 0u;
        for (;;) {
            a.r[0] = rd32((u32)param_1 + 0x1cu);
            r3 = tc_call(0x800fb14cu, &a);
            if ((s32)r28 >= (s32)rd32(r3 + 0xcu)) break;
            a.r[0] = rd32((u32)param_1 + 0x1cu);
            r3 = tc_call(0x800fb14cu, &a);
            f1 = tc_lastf();
            a.r[0] = r31;
            a.r[1] = (u32)rd16(rd32(rd32(r3 + 0x2cu) + r30) + 0xbcu);
            a.r[2] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r31 + 0xccu) + 0x10u), &a);
            if (r3 == 0u) {
                a.r[0] = rd32((u32)param_1 + 0x1cu);
                r3 = tc_call(0x800fb14cu, &a);
                a.r[0] = r3;
                a.r[1] = r28;
                a.r[2] = 1u;
                (void)tc_call(0x80185994u, &a);
            }
            r30 = r30 + 4u;
            r28 = r28 + 1u;
        }
    }
    a.r[0] = 0x804b9da0u;
    a.r[1] = 2u;
    (void)tc_call(0x8010a75cu, &a);
    r3 = 1u;
    return r3;
}
