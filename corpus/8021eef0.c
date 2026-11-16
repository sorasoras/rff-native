#include "tc_rt.h"

u32 fn_8021eef0(s32 param_1)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu);
    a.r[0] = r31 + 0x48cu;
    f1 = tc_callf(0x802204b0u, &a);
    r0 = rd32((u32)param_1 + 0x20u);
    c0lt = (s32)r0 < 2;
    do {
        if (r0 == 2u) {
            a.r[0] = 0u;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0xffffffu;
            (void)tc_call(0x80044e78u, &a);
            wr32((u32)param_1 + 0x24u, rd32((u32)param_1 + 0x24u) + 1u);
            a.r[0] = r31 + 0x14d8u;
            r3 = tc_call(0x801f1144u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 != 0u && (s32)rd32((u32)param_1 + 0x24u) > 15) {
                r3 = rd32(0x804b9dfcu);
                c0eq = r3 == 0u;
                if (!c0eq) {
                    r29 = 0u;
                    if (!c0eq) {
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        r3 = tc_call(rd32(rd32(r3) + 0x14u), &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        if (r3 != 0u) {
                            r29 = 1u;
                        }
                    }
                    if (r29 == 0u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0x8033c978u;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x80228554u, &a);
                        break;
                    }
                }
                a.r[0] = 0u;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                (void)tc_call(0x800f2900u, &a);
                a.r[0] = rd32(rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x430u);
                r3 = tc_call(0x80220000u, &a);
                f1 = tc_lastf();
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = 0x30u;
                a.r[3] = 0u;
                a.r[4] = 1u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x800f2370u, &a);
                wr32((u32)param_1 + 0x20u, 0u);
                a.r[0] = r31 + 0x14d8u;
                a.r[1] = 0x8033c95cu;
                (void)tc_call(0x801f100cu, &a);
                a.r[0] = r31 + 0x14d8u;
                a.r[1] = 0u;
                (void)tc_call(0x801f10b8u, &a);
                a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x44u;
                a.r[1] = 1u;
                (void)tc_call(0x8011a004u, &a);
            }
        } else if (!c0lt) {
            if ((s32)r0 < 4) {
                a.r[0] = r31 + 0x14d8u;
                r3 = tc_call(0x801f1144u, &a);
                if (r3 != 0u) {
                    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x20u;
                    a.r[1] = 0u;
                    (void)tc_call(0x800f8544u, &a);
                }
            }
        } else {
            c0lt = (s32)r0 < 0;
            if (r0 == 0u) {
                a.r[0] = r31 + 0x14d8u;
                r3 = tc_call(0x801f1144u, &a);
                if (r3 != 0u) {
                    wr32((u32)param_1 + 0x20u, 1u);
                    a.r[0] = 0x804b9db0u;
                    a.r[1] = 0xffffffffu;
                    (void)tc_call(0x8011f4e4u, &a);
                    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x44u;
                    a.r[1] = 0u;
                    (void)tc_call(0x8011a004u, &a);
                }
            } else if (!c0lt) {
                r4 = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu);
                r3 = r4 + 0x48cu;
                r4 = r4 + 0x44u;
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r3 + 0x28u) + 0xcu), &a);
                a.r[0] = 0u;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0xffffffu;
                (void)tc_call(0x80044e78u, &a);
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
                            if (r0 == 0u) break;
                        }
                        wr32((u32)param_1 + 0x20u, 3u);
                        a.r[0] = r31 + 0x14d8u;
                        a.r[1] = 0x8033c96fu;
                        (void)tc_call(0x801f100cu, &a);
                        a.r[0] = r31 + 0x14d8u;
                        a.r[1] = 0u;
                        (void)tc_call(0x801f10b8u, &a);
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = 3u;
                        (void)tc_call(0x8010a75cu, &a);
                        break;
                    }
                }
                r3 = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu);
                r4 = rd32(r3 + 0x430u);
                r3 = r3 + 0x48cu;
                a.r[0] = r3;
                a.r[1] = r4;
                r3 = tc_call(0x80220654u, &a);
                if (r3 == 0u) {
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 4u;
                    (void)tc_call(0x8010a75cu, &a);
                } else {
                    wr32((u32)param_1 + 0x20u, 2u);
                    a.r[0] = r31 + 0x14d8u;
                    a.r[1] = 0x8033c964u;
                    (void)tc_call(0x801f100cu, &a);
                    a.r[0] = r31 + 0x14d8u;
                    a.r[1] = 0u;
                    (void)tc_call(0x801f10b8u, &a);
                    r3 = rd32((u32)param_1 + 0x1cu);
                    wr32((u32)param_1 + 0x24u, 0u);
                    r3 = rd32(r3 + 0x1cu);
                    r3 = rd32(r3 + 0x430u);
                    a.r[0] = r3;
                    r3 = tc_call(0x80220000u, &a);
                    a.r[0] = 0x804b9db0u;
                    a.r[1] = r3;
                    (void)tc_call(0x8011f4e4u, &a);
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 2u;
                    (void)tc_call(0x8010a75cu, &a);
                }
            }
        }
    } while (0);
    r3 = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu);
    r29 = r3 + 0x44u;
    r3 = r3 + 0x48cu;
    a.r[0] = r3;
    a.r[1] = rd32(r29 + 0x3ecu);
    r3 = tc_call(0x801894d8u, &a);
    a.r[0] = r29;
    a.r[1] = r3;
    (void)tc_call(0x80119ffcu, &a);
    a.r[0] = rd32(rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x430u);
    r3 = tc_call(0x80220000u, &a);
    a.r[0] = r31 + 0x14d8u;
    a.r[1] = r3;
    (void)tc_call(0x801f0fa0u, &a);
    wr32(rd32(0x80571398u) + 0x1b8u, 1u);
    r3 = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu);
    r4 = rd32(r3 + 0x430u);
    r3 = r3 + 0x48cu;
    a.r[0] = r3;
    a.r[1] = r4;
    r3 = tc_call(0x80220654u, &a);
    if (r3 == 0u) {
        wr32(rd32(0x80571398u) + 0x1bcu, 0u);
    } else {
        a.r[0] = rd32(rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x430u);
        r3 = tc_call(0x80220000u, &a);
        wr32(rd32(0x80571398u) + 0x1bcu, r3 + 1u);
    }
    return 1u;
}
