#include "tc_rt.h"

u32 fn_80127450(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x8012542cu, &a);
    f1 = tc_lastf();
    r30 = r3;
    a.r[0] = r3;
    a.r[1] = rd32((u32)param_1 + 0x1cu) + 0x44u;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0xcu), &a);
    r3 = rd32((u32)param_1 + 0x1cu);
    r31 = rd32(r3 + 0xf24u);
    r3 = r3 + 0x44u;
    a.r[0] = r3;
    r3 = tc_call(0x8011a4b4u, &a);
    r29 = r3;
    r30 = rd32(rd32(r30 + 0x2cu) + (((rd32(rd32((u32)param_1 + 0x1cu) + 0x430u) + rd32(r30 + 0x10u)) << 2u) & 0xfffffffcu));
    do {
        if ((u32)rd16(r3 + 0xbcu) != 0x2e8u) {
            if ((u32)rd16(r30 + 0xbcu) == 0x2e8u) {
                a.r[0] = r30;
                a.r[1] = r29;
                r3 = tc_call(0x80161f9cu, &a);
                if (r3 != 0u) {
                    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xc0cu;
                    a.r[1] = 0xcu;
                    (void)tc_call(0x8020f18cu, &a);
                    break;
                }
            }
            a.r[0] = r30;
            a.r[1] = r29;
            r3 = tc_call(0x80161f9cu, &a);
            if (r3 != 0u) {
                a.r[0] = r31;
                a.r[1] = r30;
                r3 = tc_call(0x80161f9cu, &a);
                if (r3 != 0u) {
                    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xc0cu;
                    a.r[1] = 0x16u;
                    (void)tc_call(0x8020f18cu, &a);
                    break;
                }
            }
            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xc0cu;
            a.r[1] = 0x19u;
            (void)tc_call(0x8020f18cu, &a);
        } else {
            a.r[0] = r31;
            a.r[1] = r30;
            r3 = tc_call(0x80161f9cu, &a);
            if (r3 == 0u || (u32)rd16(r30 + 0xbcu) == 0x2e8u) {
                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xc0cu;
                a.r[1] = 0x19u;
                (void)tc_call(0x8020f18cu, &a);
            } else {
                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xc0cu;
                a.r[1] = 0x16u;
                (void)tc_call(0x8020f18cu, &a);
            }
        }
    } while (0);
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
                        return 1u;
                    }
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 4u;
                    (void)tc_call(0x8010a75cu, &a);
                    return 1u;
                }
            }
            if ((u32)rd16(r31 + 0xbcu) != 0x2e8u) {
                a.r[0] = r31;
                a.r[1] = r29;
                a.r[2] = 0xffffffffu;
                (void)tc_call(0x801621e4u, &a);
            } else {
                a.r[0] = r31 + 0xbcu;
                a.r[1] = r29 + 0xbcu;
                a.r[2] = 4u;
                (void)tc_call(0x80004338u, &a);
                a.r[0] = r31;
                (void)tc_call(0x80161a60u, &a);
            }
            wr32(rd32((u32)param_1 + 0x1cu) + 0xf24u, 0u);
            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44u;
            (void)tc_call(0x8011a424u, &a);
            a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
            a.r[1] = 0u;
            (void)tc_call(0x800f8544u, &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 3u;
            (void)tc_call(0x8010a75cu, &a);
            return 1u;
        }
    }
    r27 = 0u;
    do {
        if (r30 != r31) {
            if ((s32)rd8(r29 + 0xbeu) <= 0) {
                a.r[0] = r30;
                a.r[1] = r31;
                r3 = tc_call(0x80162024u, &a);
                if (r3 == 0u) {
                    r27 = 1u;
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 4u;
                    (void)tc_call(0x8010a75cu, &a);
                } else if ((u32)rd16(r30 + 0xbcu) != 0x2e8u) {
                    a.r[0] = r30;
                    a.r[1] = r29;
                    a.r[2] = 0xffffffffu;
                    (void)tc_call(0x801621e4u, &a);
                }
            } else {
                if ((u32)rd16(r31 + 0xbcu) == 0x2e8u) {
                    r5 = (u32)rd16(r29 + 0xbcu);
                    r4 = 0u;
                    if ((u32)rd16(r30 + 0xbcu) == r5 && ((u32)rd8(r30 + 0xbfu) == (u32)rd8(r29 + 0xbfu) || r5 == 0x2e8u)) {
                        r4 = 1u;
                    }
                    if (r4 == 0u) {
                        a.r[0] = r30;
                        a.r[1] = r31;
                        r3 = tc_call(0x80161f9cu, &a);
                        if (r3 != 0u) {
                            a.r[0] = r29;
                            a.r[1] = r30;
                            r3 = tc_call(0x80161f9cu, &a);
                            if (r3 != 0u) {
                                a.r[0] = r30;
                                a.r[1] = r31;
                                (void)tc_call(0x80162024u, &a);
                                a.r[0] = r29;
                                a.r[1] = r30;
                                (void)tc_call(0x80162024u, &a);
                                break;
                            }
                        }
                        if ((u32)rd16(r31 + 0xbcu) != 0x2e8u) {
                            a.r[0] = r31;
                            a.r[1] = r29;
                            a.r[2] = 0xffffffffu;
                            (void)tc_call(0x801621e4u, &a);
                            break;
                        }
                        a.r[0] = r31 + 0xbcu;
                        a.r[1] = r29 + 0xbcu;
                        a.r[2] = 4u;
                        (void)tc_call(0x80004338u, &a);
                        a.r[0] = r31;
                        (void)tc_call(0x80161a60u, &a);
                        break;
                    }
                }
                a.r[0] = r30;
                a.r[1] = r29;
                r3 = tc_call(0x80161f9cu, &a);
                if (r3 != 0u) {
                    a.r[0] = r31;
                    a.r[1] = r30;
                    r3 = tc_call(0x80161f9cu, &a);
                    if (r3 != 0u) {
                        a.r[0] = r30;
                        a.r[1] = r29;
                        a.r[2] = 0xffffffffu;
                        (void)tc_call(0x801621e4u, &a);
                        if ((u32)rd16(r29 + 0xbcu) == 0x2e8u) break;
                        a.r[0] = r31;
                        a.r[1] = r29;
                        a.r[2] = 0xffffffffu;
                        (void)tc_call(0x801621e4u, &a);
                        break;
                    }
                }
                if ((u32)rd16(r31 + 0xbcu) != 0x2e8u) {
                    a.r[0] = r31;
                    a.r[1] = r29;
                    a.r[2] = 0xffffffffu;
                    (void)tc_call(0x801621e4u, &a);
                } else {
                    a.r[0] = r31 + 0xbcu;
                    a.r[1] = r29 + 0xbcu;
                    a.r[2] = 4u;
                    (void)tc_call(0x80004338u, &a);
                    a.r[0] = r31;
                    (void)tc_call(0x80161a60u, &a);
                }
            }
        } else if ((u32)rd16(r31 + 0xbcu) != 0x2e8u) {
            a.r[0] = r31;
            a.r[1] = r29;
            a.r[2] = 0xffffffffu;
            (void)tc_call(0x801621e4u, &a);
        } else {
            a.r[0] = r31 + 0xbcu;
            a.r[1] = r29 + 0xbcu;
            a.r[2] = 4u;
            (void)tc_call(0x80004338u, &a);
            a.r[0] = r31;
            (void)tc_call(0x80161a60u, &a);
        }
    } while (0);
    if (r27 == 0u) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xau;
        (void)tc_call(0x8010a75cu, &a);
    }
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44u;
    (void)tc_call(0x8011a424u, &a);
    wr32(rd32((u32)param_1 + 0x1cu) + 0xf24u, 0u);
    a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
    a.r[1] = 0u;
    (void)tc_call(0x800f8544u, &a);
    return 1u;
}
