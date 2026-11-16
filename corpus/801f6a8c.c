#include "tc_rt.h"

u32 fn_801f6a8c(s32 param_1)
{
    u32 lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r12 = 0;
    u32 r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = (u32)param_1;
    do {
        wr32(r1 - 0x20u, r1);
        r1 = r1 - 0x20u;
        wr32(r1 + 0x24u, lr);
        wr32(r1 + 0x1cu, r31);
        wr32(r1 + 0x18u, r30);
        r30 = r3;
        wr32(r1 + 0x14u, 0u);
        wr32(r1 + 0x10u, 0u);
        r3 = tc_call(0x8012aafcu, &a);
        f1 = tc_lastf();
        wr32(r3 + 0x3f0u, 0u);
        r31 = rd32(r30 + 0x1cu);
        r3 = tc_call(0x8012aafcu, &a);
        f1 = tc_lastf();
        r5 = tc_junkr(5u);
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        r12 = rd32(r31 + 0x28u);
        r4 = r3;
        r3 = r31;
        r12 = rd32(r12 + 0xcu);
        lr = 0x801f6ad8u;
    } while (r12 == 0x801f6a8cu);
    a.r[0] = r31;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = r7;
    a.r[5] = r8;
    a.r[6] = r9;
    a.r[7] = r10;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    r3 = tc_call(0x8012aafcu, &a);
    f1 = tc_lastf();
    r4 = r3;
    r3 = rd32(r30 + 0x1cu);
    r4 = rd32(r4 + 0x3ecu);
    a.r[0] = r3;
    a.r[1] = r4;
    r3 = tc_call(0x801894d8u, &a);
    f1 = tc_lastf();
    r31 = r3;
    r3 = tc_call(0x8012aafcu, &a);
    f1 = tc_lastf();
    a.r[0] = r3;
    a.r[1] = r31;
    r3 = tc_call(0x80119ffcu, &a);
    f1 = tc_lastf();
    r3 = tc_call(0x8012aafcu, &a);
    f1 = tc_lastf();
    r3 = rd32(r3 + 0x3ecu);
    r4 = rd32(0x80571398u);
    r28 = 0x804de14cu;
    r31 = 0u;
    wr32(r4 + 0x1b4u, 0u);
    r29 = 0u;
    wr32(r4 + 0x1b0u, r3 + 0x39u);
    do {
        r3 = tc_call(0x8012aafcu, &a);
        f1 = tc_lastf();
        r29 = r29 + 1u;
        r0 = (rd32(r3 + 0x3ecu) << 2u) & 0xfffffffcu;
        r0 = rd32(r28 + r0);
        r28 = r28 + 0x18u;
        r31 = r31 + r0;
    } while ((s32)r29 < 40);
    r0 = rd32(0x803541bcu);
    if (r0 != 0u) {
        r3 = rd32(0x805711ccu);
        r3 = rd32(r3 + 0xfcu);
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
        r3 = rd32(0x805711ccu);
        r3 = rd32(r3 + 0xfcu);
        if (r3 != 1u) {
            if (r3 != 2u) {
                r3 = 0u;
            } else {
                r3 = rd32(0x803541a8u);
                r3 = rd32(r3);
                r3 = r4 & r3;
            }
        } else {
            r3 = rd32(0x80354198u);
            r3 = rd32(r3);
            r3 = r4 & r3;
        }
    } else {
        r3 = 0u;
    }
    do {
        if (r3 == 0u) {
            if (r0 != 0u) {
                r3 = rd32(0x805711ccu);
                r3 = rd32(r3 + 0xfcu);
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
                r3 = rd32(0x805711ccu);
                r3 = rd32(r3 + 0xfcu);
                if (r3 != 1u) {
                    if (r3 != 2u) {
                        r3 = 0u;
                    } else {
                        r3 = rd32(0x803541a8u);
                        r3 = rd32(r3);
                        r3 = r4 & r3;
                    }
                } else {
                    r3 = rd32(0x80354198u);
                    r3 = rd32(r3);
                    r3 = r4 & r3;
                }
            } else {
                r3 = 0u;
            }
            if (r3 == 0u) {
                if (r0 != 0u) {
                    r3 = rd32(0x805711ccu);
                    r3 = rd32(r3 + 0xfcu);
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
                    r3 = rd32(0x805711ccu);
                    r3 = rd32(r3 + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
                            r3 = 0u;
                        } else {
                            r3 = rd32(0x803541a8u);
                            r3 = rd32(r3);
                            r3 = r4 & r3;
                        }
                    } else {
                        r3 = rd32(0x80354198u);
                        r3 = rd32(r3);
                        r3 = r4 & r3;
                    }
                } else {
                    r3 = 0u;
                }
                if (r3 == 0u) {
                    if (r0 != 0u) {
                        r3 = rd32(0x805711ccu);
                        r3 = rd32(r3 + 0xfcu);
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
                        r3 = rd32(0x805711ccu);
                        r3 = rd32(r3 + 0xfcu);
                        if (r3 != 1u) {
                            if (r3 != 2u) {
                                r3 = 0u;
                            } else {
                                r3 = rd32(0x803541a8u);
                                r3 = rd32(r3);
                                r3 = r4 & r3;
                            }
                        } else {
                            r3 = rd32(0x80354198u);
                            r3 = rd32(r3);
                            r3 = r4 & r3;
                        }
                    } else {
                        r3 = 0u;
                    }
                    if (r3 == 0u) {
                        if (r0 != 0u) {
                            r3 = rd32(0x805711ccu);
                            r3 = rd32(r3 + 0xfcu);
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
                            r3 = rd32(0x805711ccu);
                            r0 = rd32(r3 + 0xfcu);
                            if (r0 != 1u) {
                                if (r0 != 2u) {
                                    r0 = 0u;
                                } else {
                                    r3 = rd32(0x803541a8u);
                                    r0 = r4 & rd32(r3);
                                }
                            } else {
                                r3 = rd32(0x80354198u);
                                r0 = r4 & rd32(r3);
                            }
                        } else {
                            r0 = 0u;
                        }
                        if (r0 == 0u) break;
                    }
                }
                a.r[0] = 0x804de14cu;
                a.r[1] = 6u;
                r3 = tc_call(0x801f33e0u, &a);
                f1 = tc_lastf();
                a.r[0] = rd32(r30 + 0x1cu) + 0x80u;
                a.r[1] = 4u;
                r3 = tc_call(0x800f8544u, &a);
                f1 = tc_lastf();
                break;
            }
        }
        if ((s32)r31 <= 0) {
            a.r[0] = 0x804b9da0u;
            a.r[1] = 4u;
            r3 = tc_call(0x8010a75cu, &a);
            f1 = tc_lastf();
        } else {
            r3 = tc_call(0x8012aafcu, &a);
            f1 = tc_lastf();
            a.r[0] = 0x804de14cu;
            a.r[1] = rd32(r3 + 0x3ecu);
            r3 = tc_call(0x801f33e0u, &a);
            f1 = tc_lastf();
            a.r[0] = 0x804de14cu;
            r3 = tc_call(0x801f342cu, &a);
            f1 = tc_lastf();
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0xfadu;
            r3 = tc_call(0x8010a75cu, &a);
            f1 = tc_lastf();
            a.r[0] = rd32(r30 + 0x1cu) + 0x80u;
            a.r[1] = 3u;
            r3 = tc_call(0x800f8544u, &a);
            f1 = tc_lastf();
        }
    } while (0);
    r31 = rd32(r1 + 0x1cu);
    r30 = rd32(r1 + 0x18u);
    r29 = rd32(r1 + 0x14u);
    r28 = rd32(r1 + 0x10u);
    r0 = rd32(r1 + 0x24u);
    return 1u;
}
