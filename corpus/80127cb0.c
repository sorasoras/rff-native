#include "tc_rt.h"

u32 fn_80127cb0(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x434u, 0u);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x8012542cu, &a);
    f1 = tc_lastf();
    r27 = r3;
    r29 = rd32(r3 + 0x10u);
    a.r[0] = r3;
    a.r[1] = rd32((u32)param_1 + 0x1cu) + 0x44u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0xcu), &a);
    r3 = rd32((u32)param_1 + 0x1cu);
    r31 = rd32(r3 + 0xf24u);
    r3 = r3 + 0x44u;
    a.r[0] = r3;
    r3 = tc_call(0x8011a4b4u, &a);
    r5 = rd32((u32)param_1 + 0x20u);
    r30 = r3;
    r3 = rd32((u32)param_1 + 0x1cu);
    if (rd32(rd32(r5 + 0x1cu) + 0x434u) != 0u || r29 != rd32(r27 + 0x10u)) {
        a.r[0] = r5 + 0x20u;
        a.r[1] = 1u;
        (void)tc_call(0x800f8544u, &a);
    } else {
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
                if ((u32)rd16(r31 + 0xbcu) != 0x2e8u) {
                    a.r[0] = r31;
                    a.r[1] = r30;
                    a.r[2] = 0xffffffffu;
                    (void)tc_call(0x801621e4u, &a);
                } else {
                    a.r[0] = r31 + 0xbcu;
                    a.r[1] = r30 + 0xbcu;
                    a.r[2] = 4u;
                    (void)tc_call(0x80004338u, &a);
                    a.r[0] = r31;
                    (void)tc_call(0x80161a60u, &a);
                }
                a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x44u;
                (void)tc_call(0x8011a424u, &a);
                wr32(rd32((u32)param_1 + 0x1cu) + 0xf24u, 0u);
                a.r[0] = rd32(rd32(0x80571398u) + 0x38u);
                (void)tc_call(0x801c13d4u, &a);
                a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
                a.r[1] = 0u;
                (void)tc_call(0x800f8544u, &a);
                a.r[0] = 0x804b9da0u;
                a.r[1] = 3u;
                (void)tc_call(0x8010a75cu, &a);
                return 1u;
            }
        }
        a.r[0] = r3;
        a.r[1] = r30;
        a.r[2] = r31;
        r3 = tc_call(0x80125044u, &a);
        r29 = r3;
        if (r3 == 0u) {
            a.r[0] = r31;
            a.r[1] = r30;
            a.r[2] = 0xffffffffu;
            (void)tc_call(0x801621e4u, &a);
        } else {
            r6 = (u32)rd16(r3 + 0xbcu);
            r5 = 0u;
            if ((u32)rd16(r30 + 0xbcu) == r6 && ((u32)rd8(r30 + 0xbfu) == (u32)rd8(r3 + 0xbfu) || r6 == 0x2e8u)) {
                r5 = 1u;
            }
            if (r5 == 0u) {
                if ((u32)rd16(r31 + 0xbcu) == 0x2e8u || r6 == 0x2e8u) {
                    r3 = r3;
                    a.r[0] = r3;
                    a.r[1] = r31;
                    r3 = tc_call(0x80161f9cu, &a);
                    if (r3 != 0u) {
                        a.r[0] = r29;
                        a.r[1] = r30;
                        r3 = tc_call(0x80162024u, &a);
                        if (r3 == 0u) {
                            r29 = 0u;
                        } else {
                            a.r[0] = r31;
                            a.r[1] = r30;
                            a.r[2] = 0xffffffffu;
                            (void)tc_call(0x801621e4u, &a);
                        }
                    }
                } else {
                    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0xc48u);
                    a.r[1] = r31;
                    r3 = tc_call(0x80197508u, &a);
                    f1 = tc_lastf();
                    if (r3 == 0u) {
                        a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0xc4cu);
                        a.r[1] = r31;
                        r3 = tc_call(0x80197508u, &a);
                        if (r3 != 0u) {
                            a.r[0] = r29;
                            a.r[1] = r30;
                            a.r[2] = 0xffffffffu;
                            (void)tc_call(0x801621e4u, &a);
                        }
                    } else {
                        r3 = rd32(rd32((u32)param_1 + 0x1cu) + 0xc48u);
                        a.r[0] = r3;
                        a.r[1] = r29;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        r3 = tc_call(rd32(rd32(r3 + 0x28u) + 0x1cu), &a);
                        if (r3 == 0u) {
                            r29 = 0u;
                            a.r[0] = r31;
                            a.r[1] = r30;
                            a.r[2] = 0xffffffffu;
                            (void)tc_call(0x801621e4u, &a);
                        } else {
                            a.r[0] = r3;
                            a.r[1] = r29;
                            a.r[2] = 0xffffffffu;
                            (void)tc_call(0x801621e4u, &a);
                            a.r[0] = r30;
                            a.r[1] = r29;
                            (void)tc_call(0x80162024u, &a);
                        }
                    }
                }
            } else {
                r3 = r3;
                a.r[0] = r3;
                a.r[1] = r30;
                a.r[2] = 0xffffffffu;
                (void)tc_call(0x801621e4u, &a);
                a.r[0] = r31;
                a.r[1] = r30;
                a.r[2] = 0xffffffffu;
                (void)tc_call(0x801621e4u, &a);
            }
        }
        a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x44u;
        (void)tc_call(0x8011a424u, &a);
        wr32(rd32((u32)param_1 + 0x1cu) + 0xf24u, 0u);
        a.r[0] = rd32(rd32(0x80571398u) + 0x38u);
        (void)tc_call(0x801c13d4u, &a);
        a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
        a.r[1] = 0u;
        (void)tc_call(0x800f8544u, &a);
        if (r29 == 0u) {
            a.r[0] = 0x804b9da0u;
            a.r[1] = 4u;
            (void)tc_call(0x8010a75cu, &a);
        } else {
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0xau;
            (void)tc_call(0x8010a75cu, &a);
        }
    }
    return 1u;
}
