#include "tc_rt.h"

u32 fn_801fc204(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = 0x804de14cu;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    r3 = tc_call(0x801f4324u, &a);
    f1 = tc_lastf();
    r29 = r3;
    r30 = 0u;
    if (r3 != 0u && rd32(r3 + 8u) == 0u) {
        r30 = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x801f4780u, &a);
        f1 = tc_lastf();
        if (rd32(r3 + 0x14u) == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r29;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x801f4780u, &a);
            f1 = tc_lastf();
            if (rd32(r3 + 8u) == 0u) {
                r30 = 1u;
            }
        }
    }
    wr32(rd32((u32)param_1 + 0x1cu) + 0x18cu, r30);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    f1 = tc_callf(0x801fb99cu, &a);
    r30 = 1u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r29;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x801f4780u, &a);
    f1 = tc_lastf();
    if (rd32(r3 + 0x14u) == 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r29;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x801f4780u, &a);
        if (rd32(r3 + 8u) == 0u) {
            r30 = 0u;
        }
    }
    if (r30 == 0u) {
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
                r3 = rd32(0x803541ccu);
                do {
                    if ((r3 & 8u) == 0u) {
                        r4 = rd32(0x803541c8u);
                        if ((r4 & 2u) == 0u) {
                            if (r0 != 0u) {
                                r5 = rd32(rd32(0x805711ccu) + 0xfcu);
                                if (r5 != 1u) {
                                    if (r5 != 2u) {
                                        r6 = 0u;
                                    } else {
                                        r6 = rd32(0x8035416cu);
                                    }
                                } else {
                                    r6 = rd32(0x80354138u);
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
                                        r5 = r6 & rd32(rd32(0x803541b4u));
                                    }
                                } else {
                                    r5 = r6 & rd32(rd32(0x803541a4u));
                                }
                            } else {
                                r5 = 0u;
                            }
                            if (r5 != 0u) break;
                        }
                        do {
                            if ((r3 & 2u) == 0u) {
                                if ((r4 & 8u) == 0u) {
                                    if (r0 != 0u) {
                                        r5 = rd32(rd32(0x805711ccu) + 0xfcu);
                                        if (r5 != 1u) {
                                            if (r5 != 2u) {
                                                r6 = 0u;
                                            } else {
                                                r6 = rd32(0x80354170u);
                                            }
                                        } else {
                                            r6 = rd32(0x8035413cu);
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
                                                r5 = r6 & rd32(rd32(0x803541b4u));
                                            }
                                        } else {
                                            r5 = r6 & rd32(rd32(0x803541a4u));
                                        }
                                    } else {
                                        r5 = 0u;
                                    }
                                    if (r5 != 0u) break;
                                }
                                if (r0 != 0u) {
                                    r5 = rd32(rd32(0x805711ccu) + 0xfcu);
                                    if (r5 != 1u) {
                                        if (r5 != 2u) {
                                            r6 = 0u;
                                        } else {
                                            r6 = rd32(0x80354178u);
                                        }
                                    } else {
                                        r6 = rd32(0x80354144u);
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
                                                r6 = rd32(0x80354194u);
                                            }
                                        } else {
                                            r6 = rd32(0x80354160u);
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
                                                    r6 = rd32(0x80354184u);
                                                }
                                            } else {
                                                r6 = rd32(0x80354150u);
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
                                            if ((r3 & 1u) != 0u) {
                                                a.r[0] = rd32((u32)param_1 + 0x1cu);
                                                (void)tc_call(0x801fb828u, &a);
                                                return 1u;
                                            }
                                            if ((r4 & 4u) == 0u) {
                                                if (r0 != 0u) {
                                                    r5 = rd32(rd32(0x805711ccu) + 0xfcu);
                                                    if (r5 != 1u) {
                                                        if (r5 != 2u) {
                                                            r6 = 0u;
                                                        } else {
                                                            r6 = rd32(0x80354164u);
                                                        }
                                                    } else {
                                                        r6 = rd32(0x80354130u);
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
                                                            r5 = r6 & rd32(rd32(0x803541b4u));
                                                        }
                                                    } else {
                                                        r5 = r6 & rd32(rd32(0x803541a4u));
                                                    }
                                                } else {
                                                    r5 = 0u;
                                                }
                                                if (r5 != 0u) {
                                                    a.r[0] = rd32((u32)param_1 + 0x1cu);
                                                    (void)tc_call(0x801fb828u, &a);
                                                    return 1u;
                                                }
                                            }
                                            r3 = r3 & 4u;
                                            if (r3 == 0u) {
                                                if ((r4 & 1u) != 0u) {
                                                    return 1u;
                                                }
                                                if (r0 != 0u) {
                                                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                                                    if (r3 != 1u) {
                                                        if (r3 != 2u) {
                                                            r4 = 0u;
                                                        } else {
                                                            r4 = rd32(0x80354168u);
                                                        }
                                                    } else {
                                                        r4 = rd32(0x80354134u);
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
                                                            r0 = r4 & rd32(rd32(0x803541b4u));
                                                        }
                                                    } else {
                                                        r0 = r4 & rd32(rd32(0x803541a4u));
                                                    }
                                                } else {
                                                    r0 = 0u;
                                                }
                                                if (r0 == 0u) {
                                                    return 1u;
                                                }
                                            }
                                            a.r[0] = rd32((u32)param_1 + 0x1cu);
                                            (void)tc_call(0x801fb724u, &a);
                                            return 1u;
                                        }
                                        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd8u;
                                        a.r[1] = 3u;
                                        (void)tc_call(0x800f8544u, &a);
                                        wr32(rd32((u32)param_1 + 0x1cu) + 0x11cu, 1u);
                                        return 1u;
                                    }
                                }
                                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd8u;
                                a.r[1] = 3u;
                                (void)tc_call(0x800f8544u, &a);
                                wr32(rd32((u32)param_1 + 0x1cu) + 0x118u, 1u);
                                return 1u;
                            }
                        } while (0);
                        a.r[0] = 0x804de14cu;
                        r3 = tc_call(0x801f416cu, &a);
                        if (r3 == 0u) {
                            a.r[0] = 0x804b9da0u;
                            a.r[1] = 4u;
                            (void)tc_call(0x8010a75cu, &a);
                            return 1u;
                        }
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = 0xfadu;
                        (void)tc_call(0x8010a75cu, &a);
                        a.r[0] = 0x804de14cu;
                        f1 = tc_callf(0x801f40c8u, &a);
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0x804de14cu;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x801f4574u, &a);
                        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd8u;
                        a.r[1] = 3u;
                        (void)tc_call(0x800f8544u, &a);
                        return 1u;
                    }
                } while (0);
                a.r[0] = 0x804de14cu;
                r3 = tc_call(0x801f412cu, &a);
                if (r3 == 0u) {
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 4u;
                    (void)tc_call(0x8010a75cu, &a);
                    return 1u;
                }
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0xfadu;
                (void)tc_call(0x8010a75cu, &a);
                a.r[0] = 0x804de14cu;
                f1 = tc_callf(0x801f4064u, &a);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x804de14cu;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x801f4574u, &a);
                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd8u;
                a.r[1] = 3u;
                (void)tc_call(0x800f8544u, &a);
                return 1u;
            }
        }
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x120u;
        (void)tc_call(0x801e63e8u, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 2u;
        (void)tc_call(0x8010a75cu, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd8u;
        a.r[1] = 1u;
        (void)tc_call(0x800f8544u, &a);
    } else {
        wr32(rd32((u32)param_1 + 0x1cu) + 0x18cu, 0u);
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd8u;
        a.r[1] = 2u;
        (void)tc_call(0x800f8544u, &a);
    }
    return 1u;
}
