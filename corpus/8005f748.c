#include "tc_rt.h"

u32 fn_8005f748(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    r0 = rd32(0x803541bcu);
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
    do {
        if (r3 == 0u) {
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
                    (void)tc_call(0x80173430u, &a);
                    break;
                }
            }
        }
        (void)tc_call(0x80173424u, &a);
    } while (0);
    (void)tc_call(0x80173094u, &a);
    if ((u32)rd8(0x804c093cu) == 8u) {
        (void)tc_call(0x80173088u, &a);
        wr32((u32)param_1 + 0xcu, 1u);
        r4 = rd32(0x804863d8u);
        wr32(r4 + 0x9cu, rd32(r4 + 0x9cu) & 0xbfffffffu);
        a.r[0] = 0x80486da8u;
        (void)tc_call(0x800b872cu, &a);
        a.r[0] = rd32(0x804863d8u);
        (void)tc_call(0x80067334u, &a);
    }
    a.r[0] = (u32)param_1;
    a.r[1] = 0x180u;
    (void)tc_call(0x8005df48u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x180u;
    (void)tc_call(0x8005df40u, &a);
    return 1u;
}
