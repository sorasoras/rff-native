#include "tc_rt.h"

u32 fn_8012f688(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x1cu);
    r3 = r4 + 0x44u;
    r4 = r4 + 0x900u;
    r29 = rd32(r4 + 0x3ecu);
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    f1 = tc_callf(rd32(rd32(r3 + 0x28u) + 0xcu), &a);
    r3 = rd32((u32)param_1 + 0x1cu);
    r31 = rd32(r3 + 0xcecu);
    r4 = r3 + 0x900u;
    do {
        if (r29 == r31) {
            r0 = rd32(0x803541bcu);
            if (r0 != 0u) {
                r5 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r5 != 1u) {
                    if (r5 != 2u) {
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
            if (r0 != 0u) {
                r5 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r5 != 1u) {
                    if (r5 != 2u) {
                        r5 = 0u;
                    } else {
                        r5 = r6 & rd32(rd32(0x803541a8u));
                    }
                } else {
                    r5 = r6 & rd32(rd32(0x80354198u));
                }
            } else {
                r5 = 0u;
            }
            if (r5 == 0u) {
                if (r0 != 0u) {
                    r5 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r5 != 1u) {
                        if (r5 != 2u) {
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
                if (r0 != 0u) {
                    r5 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r5 != 1u) {
                        if (r5 != 2u) {
                            r5 = 0u;
                        } else {
                            r5 = r6 & rd32(rd32(0x803541a8u));
                        }
                    } else {
                        r5 = r6 & rd32(rd32(0x80354198u));
                    }
                } else {
                    r5 = 0u;
                }
                if (r5 == 0u) {
                    if (r0 != 0u) {
                        r4 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r4 != 1u) {
                            if (r4 != 2u) {
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
                                    r5 = rd32(0x80354194u);
                                }
                            } else {
                                r5 = rd32(0x80354160u);
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
                                        r5 = rd32(0x80354184u);
                                    }
                                } else {
                                    r5 = rd32(0x80354150u);
                                }
                            } else {
                                r5 = 0u;
                            }
                            if (r0 != 0u) {
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
                            r3 = r3 + 0x44u;
                            a.r[0] = r3;
                            r3 = tc_call(0x80131098u, &a);
                            if (r3 == 0u) {
                                a.r[0] = 0x804b9da0u;
                                a.r[1] = 4u;
                                (void)tc_call(0x8010a75cu, &a);
                                break;
                            }
                            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd08u;
                            a.r[1] = 2u;
                            (void)tc_call(0x800f8544u, &a);
                            a.r[0] = 0x804b9da0u;
                            a.r[1] = 0x138bu;
                            (void)tc_call(0x8010a75cu, &a);
                            break;
                        }
                    }
                    r3 = r3 + 0x44u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = r3;
                    a.r[3] = r6;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x80130ed0u, &a);
                    break;
                }
            }
            r3 = r3 + 0x44u;
            a.r[0] = r3;
            a.r[1] = r4;
            (void)tc_call(0x80130dc4u, &a);
        }
    } while (0);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44u;
    a.r[1] = r31;
    r3 = tc_call(0x801894d8u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x900u;
    a.r[1] = r3;
    (void)tc_call(0x80119ffcu, &a);
    return 1u;
}
