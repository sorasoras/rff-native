#include "tc_rt.h"

u32 fn_801342fc(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x80132d54u, &a);
    f1 = tc_lastf();
    a.r[0] = r3;
    a.r[1] = rd32((u32)param_1 + 0x1cu) + 0x48u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0xcu), &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x80132da0u, &a);
    r6 = rd32((u32)param_1 + 0x1cu);
    r30 = r3;
    r28 = ((rd32(r6 + 0x434u) + rd32(r3 + 0x10u)) << 2u) & 0xfffffffcu;
    r29 = rd32(rd32(r3 + 0x2cu) + r28);
    a.r[0] = r6 + 0x48u;
    r3 = tc_call(0x8011a4b4u, &a);
    f1 = tc_lastf();
    r31 = r3;
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
                                    r4 = rd32(0x80354184u);
                                }
                            } else {
                                r4 = rd32(0x80354150u);
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
                                        r4 = rd32(0x80354188u);
                                    }
                                } else {
                                    r4 = rd32(0x80354154u);
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
                                if (r0 == 0u) break;
                                r3 = rd32(rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x454u);
                                a.r[0] = r3;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.f[0] = f1;
                                (void)tc_call(rd32(rd32(r3 + 0x28u) + 0x24u), &a);
                                a.r[0] = 0x804b9da0u;
                                a.r[1] = 0xbu;
                                (void)tc_call(0x8010a75cu, &a);
                                break;
                            }
                            r3 = rd32((u32)param_1 + 0x1cu);
                            if ((s32)rd32(r3 + 0x8f0u) <= 0) {
                                a.r[0] = 0x804b9da0u;
                                a.r[1] = 4u;
                                (void)tc_call(0x8010a75cu, &a);
                                break;
                            }
                            r31 = r3 + 0x48u;
                            a.r[0] = r31;
                            a.r[1] = rd32(r3 + 0x434u);
                            a.r[2] = 1u;
                            (void)tc_call(0x80119fb0u, &a);
                            wr32(r31 + 0x3e8u, 1u);
                            r3 = rd32((u32)param_1 + 0x1cu);
                            r31 = r3 + 0x48u;
                            a.r[0] = r31;
                            a.r[1] = 0u;
                            a.r[2] = rd32(r3 + 0x430u);
                            (void)tc_call(0x80119fb0u, &a);
                            wr32(r31 + 0x3ecu, 0u);
                            a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
                            a.r[1] = 4u;
                            (void)tc_call(0x800f8544u, &a);
                            a.r[0] = 0x804b9da0u;
                            a.r[1] = 6u;
                            (void)tc_call(0x8010a75cu, &a);
                            break;
                        }
                        r31 = 0u;
                        r5 = 0u;
                        ctr = 6u;
                        do {
                            r3 = rd32((u32)param_1 + 0x1cu);
                            if ((u32)rd16(rd32(rd32(rd32(r3 + 0x458u) + 0x2cu) + r5) + 0xbcu) != 0x2e8u) {
                                a.r[0] = r3;
                                a.r[1] = 1u;
                                r3 = tc_call(0x801317b8u, &a);
                                if (r3 == 0u) break;
                                a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
                                a.r[1] = 9u;
                                (void)tc_call(0x800f8544u, &a);
                                r31 = 1u;
                                break;
                            }
                            r5 = r5 + 4u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                        if (r31 != 0u) break;
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = 4u;
                        (void)tc_call(0x8010a75cu, &a);
                        break;
                    }
                }
                a.r[0] = rd32((u32)param_1 + 0x1cu);
                a.r[1] = 0u;
                r3 = tc_call(0x801317b8u, &a);
                if (r3 == 0u) {
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 4u;
                    (void)tc_call(0x8010a75cu, &a);
                    break;
                }
                a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
                a.r[1] = 8u;
                (void)tc_call(0x800f8544u, &a);
                a.r[0] = 0x804b9da0u;
                a.r[1] = 3u;
                (void)tc_call(0x8010a75cu, &a);
                break;
            }
        }
        wr32(rd32((u32)param_1 + 0x20u) + 0x5cu, r29);
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x48u;
        a.r[1] = r29 + 0xbcu;
        (void)tc_call(0x8011a2acu, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        a.r[1] = r29;
        r3 = tc_call(0x80131becu, &a);
        if (r3 == 0u) {
            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x48u;
            (void)tc_call(0x8011a4a8u, &a);
        }
        wr8(r31 + 0xbeu, 1u);
        r3 = (u32)rd8(r29 + 0xbeu) - 1u;
        wr8(r29 + 0xbeu, (u8)r3);
        if ((r3 & 0xffu) == 0u) {
            a.r[0] = r29;
            (void)tc_call(0x80161ac4u, &a);
            wr16(r29 + 0xbcu, 0x2e8u);
            wr8(r29 + 0xbeu, 0u);
            wr8(r29 + 0xbfu, 0u);
        }
        a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
        a.r[1] = 3u;
        (void)tc_call(0x800f8544u, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 2u;
        (void)tc_call(0x8010a75cu, &a);
    } while (0);
    r5 = rd32(0x803541bcu);
    if (r5 != 0u) {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 != 1u) {
            if (r0 != 2u) {
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
    if (r5 != 0u) {
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
    if (r0 != 0u) {
        if (r29 == 0u || (u32)rd16(r29 + 0xbcu) == 0x2e8u) {
            a.r[0] = 0x804b9da0u;
            a.r[1] = 4u;
            (void)tc_call(0x8010a75cu, &a);
        } else {
            a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x64cu;
            (void)tc_call(0x8014b81cu, &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 6u;
            (void)tc_call(0x8010a75cu, &a);
        }
    }
    a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x64cu;
    a.r[1] = (u32)rd16(rd32(rd32(r30 + 0x2cu) + r28) + 0xbcu);
    (void)tc_call(0x8014b838u, &a);
    a.r[0] = rd32(rd32(0x80571398u) + 0x38u);
    a.r[1] = rd32(rd32(r30 + 0x2cu) + r28) + 0xbcu;
    (void)tc_call(0x801c1334u, &a);
    return 1u;
}
