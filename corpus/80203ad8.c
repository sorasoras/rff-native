#include "tc_rt.h"

u32 fn_80203ad8(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x1cu);
    r30 = rd32(r4 + 0x68u);
    a.r[0] = r4;
    r3 = tc_call(0x80200098u, &a);
    wr32(r3 + 0x3f0u, 0u);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x80200098u, &a);
    f1 = tc_lastf();
    a.r[0] = r30;
    a.r[1] = r3;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r30 + 0x28u) + 0xcu), &a);
    r3 = rd32((u32)param_1 + 0x1cu);
    r4 = rd32(r30 + 0x2cu);
    r30 = rd32(rd32(r3 + 0x1cu) + 0x430u) + rd32(r30 + 0x10u);
    r31 = rd32(r4 + ((r30 << 2u) & 0xfffffffcu));
    a.r[0] = r3;
    r3 = tc_call(0x80200098u, &a);
    f1 = tc_lastf();
    if (rd32(r3 + 0x3e8u) == 0u) {
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
                        r3 = rd32(rd32((u32)param_1 + 0x1cu) + 0x68u);
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.f[0] = f1;
                        (void)tc_call(rd32(rd32(r3 + 0x28u) + 0x24u), &a);
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = 0xbu;
                        (void)tc_call(0x8010a75cu, &a);
                        r3 = 1u;
                        return r3;
                    }
                }
                a.r[0] = rd32((u32)param_1 + 0x1cu);
                r3 = tc_call(0x80200098u, &a);
                wr32(r3 + 0x3f0u, 1u);
                r3 = 0u;
                return r3;
            }
        }
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        r3 = tc_call(0x80200098u, &a);
        a.r[0] = r3;
        a.r[1] = r31 + 0xbcu;
        (void)tc_call(0x8011a2acu, &a);
        wr32(rd32((u32)param_1 + 0x20u) + 0x24u, r30);
        wr32(rd32((u32)param_1 + 0x20u) + 0x20u, r31);
        a.r[0] = rd32((u32)param_1 + 0x20u) + 0x28u;
        a.r[1] = 2u;
        (void)tc_call(0x800f8544u, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 2u;
        (void)tc_call(0x8010a75cu, &a);
    } else {
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        r3 = tc_call(0x80200098u, &a);
        if (rd32(r3 + 0x3e8u) != 1u) {
            a.r[0] = rd32((u32)param_1 + 0x1cu);
            (void)tc_call(0x80200268u, &a);
        } else {
            a.r[0] = rd32((u32)param_1 + 0x1cu);
            (void)tc_call(0x80200234u, &a);
        }
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        r3 = tc_call(0x802001ccu, &a);
        r30 = r3;
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        r3 = tc_call(0x80200098u, &a);
        f1 = tc_lastf();
        a.r[0] = r30;
        a.r[1] = r3;
        a.r[2] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r30 + 0x28u) + 0xcu), &a);
        a.r[0] = rd32((u32)param_1 + 0x20u) + 0x28u;
        a.r[1] = 3u;
        (void)tc_call(0x800f8544u, &a);
    }
    r3 = 1u;
    return r3;
}
