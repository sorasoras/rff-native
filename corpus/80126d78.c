#include "tc_rt.h"

u32 fn_80126d78(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x8012542cu, &a);
    f1 = tc_lastf();
    r31 = r3;
    a.r[0] = r3;
    a.r[1] = rd32((u32)param_1 + 0x1cu) + 0x44u;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0xcu), &a);
    r3 = rd32((u32)param_1 + 0x1cu);
    r29 = rd32(r3 + 0x430u);
    r28 = r3 + 0x44u;
    a.r[0] = r28;
    a.r[1] = r29;
    a.r[2] = rd32(r3 + 0x42cu);
    f1 = tc_callf(0x80119fb0u, &a);
    wr32(r28 + 0x3ecu, r29);
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
                    a.r[0] = r31;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r31 + 0x28u) + 0x24u), &a);
                    r3 = 1u;
                    return r3;
                }
            }
            wr32(rd32((u32)param_1 + 0x1cu) + 0x434u, 1u);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 3u;
            (void)tc_call(0x8010a75cu, &a);
            r3 = 0u;
            return r3;
        }
    }
    r3 = rd32((u32)param_1 + 0x1cu);
    r4 = rd32(r3 + 0x430u);
    r3 = r3 + 0x44u;
    r31 = rd32(rd32(r31 + 0x2cu) + (((r4 + rd32(r31 + 0x10u)) << 2u) & 0xfffffffcu));
    a.r[0] = r3;
    a.r[1] = r31 + 0xbcu;
    (void)tc_call(0x8011a2acu, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44u;
    r3 = tc_call(0x8011a4b4u, &a);
    f1 = tc_lastf();
    wr8(r3 + 0xbeu, 0u);
    r3 = rd32(rd32(rd32(rd32((u32)param_1 + 0x1cu) + 0xc4cu) + 0x2cu));
    a.r[0] = r3;
    a.r[1] = (u32)rd16(r31 + 0xbcu);
    a.r[2] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r3 + 0xccu) + 0x10u), &a);
    if (r3 == 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44u;
        (void)tc_call(0x8011a4a8u, &a);
    }
    wr32(rd32((u32)param_1 + 0x1cu) + 0xf24u, r31);
    r3 = (u32)rd16(r31 + 0xbcu);
    if (r3 == 0x2e8u || (s32)rd8(r31 + 0xbeu) <= 1) {
        if (r3 == 0x2e8u) {
            wr8(r31 + 0xbeu, 1u);
            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44u;
            r3 = tc_call(0x8011a4b4u, &a);
            wr8(r3 + 0xbeu, 0u);
            a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
            a.r[1] = 1u;
            (void)tc_call(0x800f8544u, &a);
        } else {
            a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x44u;
            r3 = tc_call(0x8011a4b4u, &a);
            wr8(r3 + 0xbeu, 1u);
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
            a.r[1] = 3u;
            (void)tc_call(0x800f8544u, &a);
        }
    } else {
        a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
        a.r[1] = 2u;
        (void)tc_call(0x800f8544u, &a);
    }
    a.r[0] = 0x804b9da0u;
    a.r[1] = 2u;
    (void)tc_call(0x8010a75cu, &a);
    r3 = 1u;
    return r3;
}
