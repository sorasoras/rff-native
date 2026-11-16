#include "tc_rt.h"

u32 fn_801390b0(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(rd32((u32)param_1 + 0x1cu) + 0x434u, 0u);
    r4 = rd32((u32)param_1 + 0x1cu);
    r3 = r4 + 0x44cu;
    r4 = r4 + 0x44u;
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0x10u), &a);
    r31 = rd32(rd32((u32)param_1 + 0x1cu) + 0x430u);
    if (rd32(0x803541bcu) != 0u) {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 != 1u) {
            if (r0 != 2u) {
                r5 = 0u;
            } else {
                r5 = rd32(0x80354174u);
            }
        } else {
            r5 = rd32(0x80354140u);
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
    do {
        if (r0 == 0u) {
            if (rd32(0x803541bcu) != 0u) {
                r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r0 != 1u) {
                    if (r0 != 2u) {
                        r5 = 0u;
                    } else {
                        r5 = rd32(0x80354190u);
                    }
                } else {
                    r5 = rd32(0x8035415cu);
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
                    if (r0 == 0u) break;
                }
                a.r[0] = (u32)param_1;
                a.r[1] = 3u;
                (void)tc_call(0x80138f24u, &a);
                wr32(rd32((u32)param_1 + 0x1cu) + 0x7a0u, 2u);
                a.r[0] = 0x804b9da0u;
                a.r[1] = 3u;
                (void)tc_call(0x8010a75cu, &a);
                break;
            }
        }
        if (rd32(0x80571138u) == 0u) {
            r4 = rd32(rd32((u32)param_1 + 0x1cu) + 0x430u);
            if ((rd32(0x8049dfa4u) & (((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu)))) == 0u) {
                a.r[0] = 0x804b9da0u;
                a.r[1] = 4u;
                (void)tc_call(0x8010a75cu, &a);
                return 1u;
            }
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 2u;
        (void)tc_call(0x80138f24u, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 2u;
        (void)tc_call(0x8010a75cu, &a);
    } while (0);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44cu;
    a.r[1] = r31;
    r3 = tc_call(0x801894d8u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44u;
    a.r[1] = r3;
    (void)tc_call(0x80119ffcu, &a);
    return 1u;
}
