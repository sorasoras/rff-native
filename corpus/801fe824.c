#include "tc_rt.h"

u32 fn_801fe824(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x801fdf30u, &a);
    r29 = rd32(r3 + 0x3ecu);
    r31 = rd32((u32)param_1 + 0x1cu) + 0x10cu;
    r3 = tc_call(0x801fdf30u, &a);
    f1 = tc_lastf();
    a.r[0] = r31;
    a.r[1] = r3;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r31 + 0x28u) + 0xcu), &a);
    r3 = tc_call(0x801fdf30u, &a);
    f1 = tc_lastf();
    r31 = rd32(r3 + 0x3ecu);
    do {
        if (r29 == r31) {
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
                            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x10cu;
                            (void)tc_call(0x80131098u, &a);
                            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd0u;
                            a.r[1] = 4u;
                            (void)tc_call(0x800f8544u, &a);
                            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x9c8u;
                            r3 = tc_call(0x8013f704u, &a);
                            r29 = r3;
                            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x9c8u;
                            r3 = tc_call(0x8013f6f0u, &a);
                            r3 = r3 & 0xffffu;
                            a.r[0] = r3;
                            (void)tc_call(0x8014d968u, &a);
                            a.r[0] = 0x12059u;
                            a.r[1] = r29;
                            f1 = tc_callf(0x8014d9dcu, &a);
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
                            r3 = tc_call(0x801f45acu, &a);
                            r3 = rd32(r3 + 0x10u);
                            a.r[0] = r3;
                            f1 = tc_callf(0x8013fdd0u, &a);
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
                            r3 = tc_call(0x801f45acu, &a);
                            r3 = rd32(r3 + 0x10u);
                            a.r[0] = r3;
                            f1 = tc_callf(0x8013fe24u, &a);
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
                            r3 = tc_call(0x801f45acu, &a);
                            wr32(r3 + 0xcu, 1u);
                            break;
                        }
                    }
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x10cu;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x80130ed0u, &a);
                    break;
                }
            }
            r29 = rd32((u32)param_1 + 0x1cu) + 0x10cu;
            r3 = tc_call(0x801fdf30u, &a);
            a.r[0] = r29;
            a.r[1] = r3;
            (void)tc_call(0x80130dc4u, &a);
        }
    } while (0);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x10cu;
    a.r[1] = r31;
    r3 = tc_call(0x801894d8u, &a);
    r29 = r3;
    r3 = tc_call(0x801fdf30u, &a);
    a.r[0] = r3;
    a.r[1] = r29;
    (void)tc_call(0x80119ffcu, &a);
    return 1u;
}
