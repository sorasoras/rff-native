#include "tc_rt.h"

u32 fn_801fdff0(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
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
    r3 = tc_call(0x801f45acu, &a);
    if (rd32(r3 + 0xcu) == 0u) {
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
                r5 = rd32(0x803541ccu);
                do {
                    if ((r5 & 8u) == 0u) {
                        r6 = rd32(0x803541c8u);
                        if ((r6 & 2u) == 0u) {
                            if (r0 != 0u) {
                                r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                                if (r3 != 1u) {
                                    if (r3 != 2u) {
                                        r4 = 0u;
                                    } else {
                                        r4 = rd32(0x8035416cu);
                                    }
                                } else {
                                    r4 = rd32(0x80354138u);
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
                                        r3 = r4 & rd32(rd32(0x803541b4u));
                                    }
                                } else {
                                    r3 = r4 & rd32(rd32(0x803541a4u));
                                }
                            } else {
                                r3 = 0u;
                            }
                            if (r3 != 0u) break;
                        }
                        do {
                            if ((r5 & 2u) == 0u) {
                                if ((r6 & 8u) == 0u) {
                                    if (r0 != 0u) {
                                        r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                                        if (r3 != 1u) {
                                            if (r3 != 2u) {
                                                r4 = 0u;
                                            } else {
                                                r4 = rd32(0x80354170u);
                                            }
                                        } else {
                                            r4 = rd32(0x8035413cu);
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
                                                r3 = r4 & rd32(rd32(0x803541b4u));
                                            }
                                        } else {
                                            r3 = r4 & rd32(rd32(0x803541a4u));
                                        }
                                    } else {
                                        r3 = 0u;
                                    }
                                    if (r3 != 0u) break;
                                }
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
                                        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd0u;
                                        a.r[1] = 6u;
                                        (void)tc_call(0x800f8544u, &a);
                                        wr32(rd32((u32)param_1 + 0x1cu) + 0xa5cu, 1u);
                                        return 1u;
                                    }
                                }
                                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd0u;
                                a.r[1] = 6u;
                                (void)tc_call(0x800f8544u, &a);
                                wr32(rd32((u32)param_1 + 0x1cu) + 0xa58u, 1u);
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
                        (void)tc_call(0x801f40c8u, &a);
                        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd0u;
                        a.r[1] = 6u;
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
                (void)tc_call(0x801f4064u, &a);
                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd0u;
                a.r[1] = 6u;
                (void)tc_call(0x800f8544u, &a);
                return 1u;
            }
        }
        a.r[0] = 0x804b9da0u;
        a.r[1] = 2u;
        (void)tc_call(0x8010a75cu, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x9e0u;
        (void)tc_call(0x801e63e8u, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd0u;
        a.r[1] = 1u;
        (void)tc_call(0x800f8544u, &a);
    } else {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd0u;
        a.r[1] = 5u;
        (void)tc_call(0x800f8544u, &a);
    }
    return 1u;
}
