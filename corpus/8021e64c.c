#include "tc_rt.h"

u32 fn_8021e64c(s32 param_1)
{
    u32 c0lt = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x20u);
    r31 = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu);
    c0lt = (s32)r0 < 1;
    r30 = r31 + 0x1580u;
    r29 = r31 + 0x1528u;
    do {
        if (r0 == 1u) {
            r7 = rd32(0x803541ccu);
            do {
                if ((r7 & 8u) == 0u) {
                    r8 = rd32(0x803541c8u);
                    if ((r8 & 2u) == 0u) {
                        r6 = rd32(0x803541bcu);
                        if (r6 != 0u) {
                            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                            if (r0 != 1u) {
                                if (r0 != 2u) {
                                    r5 = 0u;
                                } else {
                                    r5 = rd32(0x8035416cu);
                                }
                            } else {
                                r5 = rd32(0x80354138u);
                            }
                        } else {
                            r5 = 0u;
                        }
                        if (r6 != 0u) {
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
                        if (r0 != 0u) break;
                    }
                    if ((r7 & 2u) == 0u) {
                        if ((r8 & 8u) != 0u) {
                            fl_ = 1u;
                            break;
                        }
                        r6 = rd32(0x803541bcu);
                        if (r6 != 0u) {
                            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                            if (r0 != 1u) {
                                if (r0 != 2u) {
                                    r5 = 0u;
                                } else {
                                    r5 = rd32(0x80354170u);
                                }
                            } else {
                                r5 = rd32(0x8035413cu);
                            }
                        } else {
                            r5 = 0u;
                        }
                        if (r6 != 0u) {
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
                            fl_ = 1u;
                            break;
                        }
                    }
                    if (rd32((u32)param_1 + 0x24u) == 1u) {
                        fl_ = 1u;
                        break;
                    }
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 1u;
                    (void)tc_call(0x8010a75cu, &a);
                    r3 = rd32((u32)param_1 + 0x1cu);
                    wr32((u32)param_1 + 0x24u, 1u);
                    r3 = rd32(r3 + 0x1cu);
                    r3 = r3 + 0x44u;
                    a.r[0] = r3;
                    a.r[1] = rd32(r30 + 4u);
                    (void)tc_call(0x80119ffcu, &a);
                    a.r[0] = r29 + 8u;
                    a.r[1] = 0x8033c93au;
                    (void)tc_call(0x801f100cu, &a);
                    a.r[0] = r29 + 8u;
                    a.r[1] = 0u;
                    (void)tc_call(0x801f10b8u, &a);
                    a.r[0] = r30 + 8u;
                    a.r[1] = 0x8033c94du;
                    (void)tc_call(0x801f100cu, &a);
                    a.r[0] = r30 + 8u;
                    a.r[1] = 0u;
                    (void)tc_call(0x801f10b8u, &a);
                    fl_ = 1u;
                    break;
                }
            } while (0);
            if (fl_ == 1u) {
                fl_ = 0u;
            } else if (rd32((u32)param_1 + 0x24u) != 0u) {
                a.r[0] = 0x804b9da0u;
                a.r[1] = 1u;
                (void)tc_call(0x8010a75cu, &a);
                r3 = rd32((u32)param_1 + 0x1cu);
                wr32((u32)param_1 + 0x24u, 0u);
                r3 = rd32(r3 + 0x1cu);
                r3 = r3 + 0x44u;
                a.r[0] = r3;
                a.r[1] = rd32(r29 + 4u);
                (void)tc_call(0x80119ffcu, &a);
                a.r[0] = r29 + 8u;
                a.r[1] = 0x8033c94du;
                (void)tc_call(0x801f100cu, &a);
                a.r[0] = r29 + 8u;
                a.r[1] = 0u;
                (void)tc_call(0x801f10b8u, &a);
                a.r[0] = r30 + 8u;
                a.r[1] = 0x8033c93au;
                (void)tc_call(0x801f100cu, &a);
                a.r[0] = r30 + 8u;
                a.r[1] = 0u;
                (void)tc_call(0x801f10b8u, &a);
            }
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
                    wr32((u32)param_1 + 0x20u, 2u);
                    a.r[0] = r31 + 0x14d8u;
                    a.r[1] = 0x8033c954u;
                    (void)tc_call(0x801f100cu, &a);
                    a.r[0] = r31 + 0x14d8u;
                    a.r[1] = 0u;
                    (void)tc_call(0x801f10b8u, &a);
                    wr32((u32)param_1 + 0x24u, 2u);
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 3u;
                    (void)tc_call(0x8010a75cu, &a);
                    break;
                }
            }
            wr32((u32)param_1 + 0x20u, 2u);
            a.r[0] = r31 + 0x14d8u;
            a.r[1] = 0x8033c954u;
            (void)tc_call(0x801f100cu, &a);
            a.r[0] = r31 + 0x14d8u;
            a.r[1] = 0u;
            (void)tc_call(0x801f10b8u, &a);
            a.r[0] = r29 + 8u;
            a.r[1] = 0x8033c93au;
            (void)tc_call(0x801f100cu, &a);
            a.r[0] = r29 + 8u;
            a.r[1] = 0u;
            (void)tc_call(0x801f10b8u, &a);
            a.r[0] = r30 + 8u;
            a.r[1] = 0x8033c93au;
            (void)tc_call(0x801f100cu, &a);
            a.r[0] = r30 + 8u;
            a.r[1] = 0u;
            (void)tc_call(0x801f10b8u, &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 2u;
            (void)tc_call(0x8010a75cu, &a);
        } else if (!c0lt) {
            if ((s32)r0 < 3) {
                a.r[0] = r31 + 0x14d8u;
                r3 = tc_call(0x801f1144u, &a);
                if (r3 != 0u) {
                    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x44u;
                    a.r[1] = 1u;
                    (void)tc_call(0x8011a004u, &a);
                    r0 = rd32((u32)param_1 + 0x24u);
                    c0lt = (s32)r0 < 1;
                    if (r0 == 1u) {
                        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x20u;
                        a.r[1] = 2u;
                        (void)tc_call(0x800f8544u, &a);
                    } else if (!c0lt) {
                        if ((s32)r0 < 3) {
                            r3 = 0u;
                            return r3;
                        }
                    } else if ((s32)r0 >= 0) {
                        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x20u;
                        a.r[1] = 1u;
                        (void)tc_call(0x800f8544u, &a);
                    }
                }
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
            if (rd32((u32)param_1 + 0x24u) != 0u) {
                a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x44u;
                a.r[1] = rd32(r30 + 4u);
                (void)tc_call(0x80119ffcu, &a);
            } else {
                a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x44u;
                a.r[1] = rd32(r29 + 4u);
                (void)tc_call(0x80119ffcu, &a);
            }
            wr32(rd32(0x80571398u) + 0x1b8u, 0u);
        }
    } while (0);
    a.r[0] = r31 + 0x14d8u;
    a.r[1] = 1u;
    (void)tc_call(0x801f0fa0u, &a);
    a.r[0] = r30 + 8u;
    a.r[1] = 1u;
    (void)tc_call(0x801f0fa0u, &a);
    a.r[0] = r29 + 8u;
    a.r[1] = 1u;
    (void)tc_call(0x801f0fa0u, &a);
    r3 = 1u;
    return r3;
}
