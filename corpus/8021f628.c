#include "tc_rt.h"

u32 fn_8021f628(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu);
    a.r[0] = r31 + 0x1040u;
    f1 = tc_callf(0x80220be8u, &a);
    r3 = rd32(0x803d2a60u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32(r3) + 0xcu), &a);
    r0 = rd32((u32)param_1 + 0x20u);
    c0lt = (s32)r0 < 3;
    do {
        if (r0 == 3u) {
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
                }
            }
            wr32((u32)param_1 + 0x20u, 4u);
        } else if (!c0lt) {
            c0lt = (s32)r0 < 5;
            if (r0 == 5u) {
                a.r[0] = r31 + 0x14d8u;
                r3 = tc_call(0x801f1144u, &a);
                if (r3 != 0u) {
                    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x20u;
                    a.r[1] = 0u;
                    (void)tc_call(0x800f8544u, &a);
                }
            } else if (c0lt) {
                a.f[0] = (f64)rdf32(0x80576a30u);
                a.r[0] = rd32(0x803d2a60u) + 0xcu;
                r3 = tc_call(0x801f90a4u, &a);
                f1 = tc_lastf();
                if (r3 == 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x44u;
                    a.r[1] = 1u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x80119edcu, &a);
                    a.r[0] = r31 + 0x14d8u;
                    a.r[1] = 0x8033c984u;
                    (void)tc_call(0x801f100cu, &a);
                    a.r[0] = r31 + 0x14d8u;
                    a.r[1] = 0u;
                    (void)tc_call(0x801f10b8u, &a);
                    r3 = rd32((u32)param_1 + 0x1cu);
                    wr32((u32)param_1 + 0x20u, 0u);
                    r3 = rd32(r3 + 0x1cu);
                    r3 = r3 + 0x44u;
                    a.r[0] = r3;
                    a.r[1] = 1u;
                    (void)tc_call(0x8011a004u, &a);
                }
            }
        } else {
            c0lt = (s32)r0 < 1;
            if (r0 == 1u) {
                r4 = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu);
                r3 = r4 + 0x1040u;
                r4 = r4 + 0x44u;
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r3 + 0x28u) + 0xcu), &a);
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
                        wr32((u32)param_1 + 0x20u, 5u);
                        a.r[0] = r31 + 0x14d8u;
                        a.r[1] = 0x8033c997u;
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
                r3 = r3 + 0x1040u;
                a.r[0] = r3;
                a.r[1] = r4;
                r3 = tc_call(0x80220760u, &a);
                if (r3 == 0u) {
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 4u;
                    (void)tc_call(0x8010a75cu, &a);
                } else {
                    wr32((u32)param_1 + 0x20u, 2u);
                    a.r[0] = r31 + 0x14d8u;
                    a.r[1] = 0x8033c98cu;
                    (void)tc_call(0x801f100cu, &a);
                    a.r[0] = r31 + 0x14d8u;
                    a.r[1] = 0u;
                    f1 = tc_callf(0x801f10b8u, &a);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x44u;
                    a.r[1] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x80119edcu, &a);
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 2u;
                    (void)tc_call(0x8010a75cu, &a);
                }
            } else if (!c0lt) {
                r28 = 1u;
                a.r[0] = r31 + 0x14d8u;
                r3 = tc_call(0x801f1144u, &a);
                if (r3 != 0u) {
                    a.f[0] = (f64)rdf32(0x80576a30u);
                    a.r[0] = rd32(0x803d2a60u) + 0xcu;
                    a.r[1] = rd32(rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x430u);
                    r3 = tc_call(0x801f8ffcu, &a);
                    r28 = r3;
                }
                if (r28 == 0u) {
                    wr32((u32)param_1 + 0x20u, 3u);
                }
            } else if ((s32)r0 >= 0) {
                a.r[0] = r31 + 0x14d8u;
                r3 = tc_call(0x801f1144u, &a);
                if (r3 != 0u) {
                    r3 = rd32((u32)param_1 + 0x1cu);
                    wr32((u32)param_1 + 0x20u, 1u);
                    r3 = rd32(r3 + 0x1cu);
                    r3 = r3 + 0x44u;
                    a.r[0] = r3;
                    a.r[1] = 0u;
                    (void)tc_call(0x8011a004u, &a);
                }
            }
        }
    } while (0);
    r3 = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu);
    r29 = r3 + 0x44u;
    r3 = r3 + 0x1040u;
    a.r[0] = r3;
    a.r[1] = rd32(r29 + 0x3ecu);
    r3 = tc_call(0x801894d8u, &a);
    a.r[0] = r29;
    a.r[1] = r3;
    (void)tc_call(0x80119ffcu, &a);
    a.r[0] = r31 + 0x14d8u;
    a.r[1] = 1u;
    (void)tc_call(0x801f0fa0u, &a);
    wr32(rd32(0x80571398u) + 0x1b8u, 2u);
    r3 = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu);
    r4 = rd32(r3 + 0x430u);
    r3 = r3 + 0x1040u;
    a.r[0] = r3;
    a.r[1] = r4;
    r3 = tc_call(0x80220760u, &a);
    if (r3 == 0u) {
        wr32(rd32(0x80571398u) + 0x1bcu, 0u);
    } else {
        wr32(rd32(0x80571398u) + 0x1bcu, rd32(rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x430u) + 1u);
    }
    return 1u;
}
