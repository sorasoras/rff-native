#include "tc_rt.h"

u32 fn_801b47ec(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0x1cu);
    r30 = rd32(r5 + 0x1284u);
    if (r30 == 0x21u) {
        a.r[0] = rd32(r5 + 0x1cu) + 0xbd0u;
        a.r[1] = 0x19u;
        (void)tc_call(0x8020f18cu, &a);
    } else {
        r0 = (u32)rd8((r30 * 0x38u) - 0x7fb64fc9u);
        if ((r0 & 2u) != 0u) {
            a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xbd0u;
            a.r[1] = 0x13u;
            (void)tc_call(0x8020f18cu, &a);
        } else {
            r0 = r0 & 4u;
            if (r0 == 0u) {
                a.r[0] = rd32(r5 + 0x1cu) + 0xbd0u;
                a.r[1] = 0x19u;
                (void)tc_call(0x8020f18cu, &a);
            } else {
                a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xbd0u;
                a.r[1] = 0x13u;
                (void)tc_call(0x8020f18cu, &a);
            }
        }
    }
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x801b434cu, &a);
    wr32(r3 + 0x3f0u, 0u);
    r3 = rd32((u32)param_1 + 0x1cu);
    r29 = rd32(r3 + 0x28u);
    a.r[0] = r3;
    r3 = tc_call(0x801b434cu, &a);
    f1 = tc_lastf();
    a.r[0] = r29;
    a.r[1] = r3;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r29 + 0x28u) + 0xcu), &a);
    r3 = rd32((u32)param_1 + 0x1cu);
    if (r30 == rd32(r3 + 0x1284u)) {
        if (rd32(0x803541bcu) != 0u) {
            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r0 != 1u) {
                if (r0 != 2u) {
                    r5 = 0u;
                } else {
                    r5 = rd32(0x8035417cu);
                }
            } else {
                r5 = rd32(0x80354148u);
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
                if (r0 == 0u) {
                    if (rd32(0x803541bcu) != 0u) {
                        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r0 != 1u) {
                            if (r0 != 2u) {
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
                    if (rd32(0x803541bcu) != 0u) {
                        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r0 != 1u) {
                            if (r0 != 2u) {
                                r0 = 0u;
                            } else {
                                r0 = r5 & rd32(rd32(0x803541b4u));
                            }
                        } else {
                            r0 = r5 & rd32(rd32(0x803541a4u));
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
                                    r5 = rd32(0x80354188u);
                                }
                            } else {
                                r5 = rd32(0x80354154u);
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
                                    r0 = r5 & rd32(rd32(0x803541b4u));
                                }
                            } else {
                                r0 = r5 & rd32(rd32(0x803541a4u));
                            }
                        } else {
                            r0 = 0u;
                        }
                        if (r0 == 0u) {
                            return 1u;
                        }
                        a.r[0] = rd32((u32)param_1 + 0x1cu);
                        a.r[1] = 0u;
                        (void)tc_call(0x80221890u, &a);
                        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x2cu;
                        a.r[1] = 3u;
                        (void)tc_call(0x800f8544u, &a);
                        return 1u;
                    }
                    a.r[0] = rd32((u32)param_1 + 0x1cu);
                    a.r[1] = 1u;
                    (void)tc_call(0x80221890u, &a);
                    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x2cu;
                    a.r[1] = 3u;
                    (void)tc_call(0x800f8544u, &a);
                    return 1u;
                }
            }
            a.r[0] = rd32((u32)param_1 + 0x1cu);
            r3 = tc_call(0x801b434cu, &a);
            wr32(r3 + 0x3f0u, 1u);
            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x2cu;
            a.r[1] = 4u;
            (void)tc_call(0x800f8544u, &a);
        } else {
            a.r[0] = rd32((u32)param_1 + 0x1cu);
            (void)tc_call(0x801b3e08u, &a);
        }
    } else {
        a.r[0] = r3;
        (void)tc_call(0x801b3efcu, &a);
    }
    return 1u;
}
