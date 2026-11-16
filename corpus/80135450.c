#include "tc_rt.h"

u32 fn_80135450(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r31 = rd32((u32)param_1 + 0x1cu);
    a.r[0] = r31;
    r3 = tc_call(0x80132d54u, &a);
    f1 = tc_lastf();
    a.r[0] = r3;
    a.r[1] = r31 + 0x48u;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0xcu), &a);
    r4 = 0u;
    r3 = rd32(rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x45cu);
    if (rd32(r3 + 0x110u) != 0u) {
        r0 = rd32(r3 + 0x114u);
        if ((s32)r0 >= 0) {
            r0 = r0 * 0x24u;
            r3 = rd32(r3 + 0x10cu);
            r4 = r3 + r0;
        }
    } else {
        r4 = 0u;
    }
    r31 = 0x2e8u;
    if (r4 != 0u) {
        r31 = rd32(r4);
    }
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
        if (r31 == 0x2e8u) {
            a.r[0] = 0x804b9da0u;
            a.r[1] = 4u;
            (void)tc_call(0x8010a75cu, &a);
        } else {
            a.r[0] = 0x804b9da0u;
            a.r[1] = 6u;
            (void)tc_call(0x8010a75cu, &a);
            a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x64cu;
            (void)tc_call(0x8014b81cu, &a);
        }
    }
    a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x64cu;
    a.r[1] = r31;
    (void)tc_call(0x8014b838u, &a);
    wr16(0x817fdfe8u, (u16)r31);
    r3 = rd32(0x80571398u);
    wr8(0x817fdfeau, 1u);
    wr8(0x817fdfebu, 1u);
    r3 = rd32(r3 + 0x38u);
    a.r[0] = r3;
    a.r[1] = 0x817fdfe8u;
    (void)tc_call(0x801c1334u, &a);
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
                        a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
                        a.r[1] = 7u;
                        (void)tc_call(0x800f8544u, &a);
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = 6u;
                        (void)tc_call(0x8010a75cu, &a);
                        return 1u;
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
                    if (r31 != 0u) {
                        return 1u;
                    }
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 4u;
                    (void)tc_call(0x8010a75cu, &a);
                    return 1u;
                }
            }
            a.r[0] = rd32((u32)param_1 + 0x1cu);
            a.r[1] = 0u;
            r3 = tc_call(0x801317b8u, &a);
            if (r3 == 0u) {
                a.r[0] = 0x804b9da0u;
                a.r[1] = 4u;
                (void)tc_call(0x8010a75cu, &a);
                return 1u;
            }
            a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
            a.r[1] = 8u;
            (void)tc_call(0x800f8544u, &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 3u;
            (void)tc_call(0x8010a75cu, &a);
            return 1u;
        }
    }
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x80135b44u, &a);
    if (r3 == 0u) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = 4u;
        (void)tc_call(0x8010a75cu, &a);
    } else {
        a.r[0] = 0x804b9da0u;
        a.r[1] = 2u;
        (void)tc_call(0x8010a75cu, &a);
    }
    return 1u;
}
