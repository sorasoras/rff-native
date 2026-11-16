#include "tc_rt.h"

u32 fn_80134bc0(s32 param_1)
{
    u32 c1eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r24 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r26 = rd32((u32)param_1 + 0x1cu);
    a.r[0] = r26;
    r3 = tc_call(0x80132d54u, &a);
    f1 = tc_lastf();
    a.r[0] = r3;
    a.r[1] = r26 + 0x48u;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0xcu), &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x48u;
    r3 = tc_call(0x8011a4b4u, &a);
    r27 = r3;
    r30 = rd32(rd32((u32)param_1 + 0x20u) + 0x5cu);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x80132d54u, &a);
    r5 = rd32((u32)param_1 + 0x1cu);
    r26 = rd32(r5 + 0x434u) + rd32(r3 + 0x10u);
    a.r[0] = r5;
    r3 = tc_call(0x80132da0u, &a);
    r28 = (r26 << 2u) & 0xfffffffcu;
    r0 = rd32(0x803541bcu);
    r31 = r3;
    r29 = rd32(rd32(r3 + 0x2cu) + r28);
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
    do {
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
                                        r4 = rd32(0x8035417cu);
                                    }
                                } else {
                                    r4 = rd32(0x80354148u);
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
                            if (r29 == 0u || (u32)rd16(r29 + 0xbcu) == 0x2e8u) {
                                a.r[0] = 0x804b9da0u;
                                a.r[1] = 4u;
                                (void)tc_call(0x8010a75cu, &a);
                                break;
                            }
                            a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x64cu;
                            (void)tc_call(0x8014b81cu, &a);
                            a.r[0] = 0x804b9da0u;
                            a.r[1] = 6u;
                            (void)tc_call(0x8010a75cu, &a);
                            break;
                        }
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = 4u;
                        (void)tc_call(0x8010a75cu, &a);
                        break;
                    }
                }
                a.r[0] = r30;
                a.r[1] = r27;
                a.r[2] = 0xffffffffu;
                (void)tc_call(0x801621e4u, &a);
                wr32(rd32((u32)param_1 + 0x20u) + 0x5cu, 0u);
                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x48u;
                (void)tc_call(0x8011a424u, &a);
                a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
                a.r[1] = 1u;
                (void)tc_call(0x800f8544u, &a);
                a.r[0] = 0x804b9da0u;
                a.r[1] = 3u;
                (void)tc_call(0x8010a75cu, &a);
                break;
            }
        }
        r26 = 0u;
        r24 = 1u;
        a.r[0] = rd32(rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x458u);
        a.r[1] = r30;
        r3 = tc_call(0x80197508u, &a);
        if (r3 != 0u) {
            a.r[0] = rd32((u32)param_1 + 0x1cu);
            a.r[1] = r29;
            r3 = tc_call(0x80131becu, &a);
            if (r3 == 0u) {
                r24 = 0u;
            }
        }
        a.r[0] = rd32(rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x458u);
        a.r[1] = r29;
        r3 = tc_call(0x80197508u, &a);
        if (r3 != 0u) {
            a.r[0] = rd32((u32)param_1 + 0x1cu);
            a.r[1] = r27;
            r3 = tc_call(0x80131becu, &a);
            if (r3 == 0u) {
                r24 = 0u;
            }
        }
        if (r24 != 0u) {
            r0 = (u32)rd16(r27 + 0xbcu);
            if (r0 != 0x2e8u) {
                r3 = (u32)rd16(r29 + 0xbcu);
                c1eq = r3 == 0x2e8u;
                if (!c1eq) {
                    r4 = 0u;
                    if (r0 == r3 && ((u32)rd8(r27 + 0xbfu) == (u32)rd8(r29 + 0xbfu) || c1eq)) {
                        r4 = 1u;
                    }
                    if (r4 == 0u) {
                        if ((u32)rd16(r30 + 0xbcu) == 0x2e8u && (s32)rd8(r29 + 0xbeu) <= 1) {
                            a.r[0] = r29;
                            a.r[1] = r27;
                            r3 = tc_call(0x80161f9cu, &a);
                            if (r3 != 0u) {
                                a.r[0] = r29;
                                a.r[1] = r27;
                                (void)tc_call(0x80162024u, &a);
                                a.r[0] = r27;
                                a.r[1] = r30;
                                (void)tc_call(0x80162024u, &a);
                                r26 = 1u;
                            }
                        }
                    } else {
                        a.r[0] = rd32(rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x458u);
                        a.r[1] = r29;
                        r3 = tc_call(0x80197508u, &a);
                        if (r3 == 0u) {
                            r26 = 1u;
                            a.r[0] = r29;
                            a.r[1] = r27;
                            a.r[2] = 0xffffffffu;
                            (void)tc_call(0x801621e4u, &a);
                            if ((u32)rd16(r27 + 0xbcu) != 0x2e8u) {
                                a.r[0] = r30;
                                a.r[1] = r27;
                                a.r[2] = 0xffffffffu;
                                (void)tc_call(0x801621e4u, &a);
                            }
                        }
                    }
                } else {
                    a.r[0] = r27;
                    a.r[1] = r29;
                    r3 = tc_call(0x80161f9cu, &a);
                    if (r3 != 0u) {
                        a.r[0] = r29;
                        a.r[1] = r27;
                        r3 = tc_call(0x80162024u, &a);
                        r26 = r3;
                    }
                }
            } else {
                a.r[0] = r30;
                a.r[1] = r29;
                r3 = tc_call(0x80161f9cu, &a);
                if (r3 != 0u) {
                    a.r[0] = r29;
                    a.r[1] = r30;
                    a.r[2] = 1u;
                    (void)tc_call(0x801623dcu, &a);
                    r26 = 1u;
                }
            }
        }
        a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
        a.r[1] = 1u;
        (void)tc_call(0x800f8544u, &a);
        if (r26 == 0u) {
            a.r[0] = r30;
            a.r[1] = r27;
            a.r[2] = 0xffffffffu;
            (void)tc_call(0x801621e4u, &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 4u;
            (void)tc_call(0x8010a75cu, &a);
        } else {
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0xau;
            (void)tc_call(0x8010a75cu, &a);
            a.r[0] = rd32(rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x458u);
            a.r[1] = r30;
            r3 = tc_call(0x80197508u, &a);
            if (r3 != 0u) {
                a.r[0] = rd32(rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x458u);
                a.r[1] = r30;
                r3 = tc_call(0x8019774cu, &a);
                r3 = rd32(0x80571398u) + ((r3 << 2u) & 0xfffffffcu);
                wr32(r3 + 0x104u, (u32)rd16(r30 + 0xbcu));
            }
            a.r[0] = rd32(rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x458u);
            a.r[1] = r29;
            r3 = tc_call(0x80197508u, &a);
            if (r3 != 0u) {
                a.r[0] = rd32(rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x458u);
                a.r[1] = r29;
                r3 = tc_call(0x8019774cu, &a);
                r3 = rd32(0x80571398u) + ((r3 << 2u) & 0xfffffffcu);
                wr32(r3 + 0x104u, (u32)rd16(r29 + 0xbcu));
            }
        }
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x48u;
        (void)tc_call(0x8011a424u, &a);
        wr32(rd32((u32)param_1 + 0x20u) + 0x5cu, 0u);
    } while (0);
    a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x64cu;
    a.r[1] = (u32)rd16(rd32(rd32(r31 + 0x2cu) + r28) + 0xbcu);
    (void)tc_call(0x8014b838u, &a);
    a.r[0] = rd32(rd32(0x80571398u) + 0x38u);
    a.r[1] = rd32(rd32(r31 + 0x2cu) + r28) + 0xbcu;
    f1 = tc_callf(0x801c1334u, &a);
    a.r[0] = r27;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r27 + 0xccu) + 0xcu), &a);
    return 1u;
}
