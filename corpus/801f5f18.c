#include "tc_rt.h"

u32 fn_801f5f18(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8012aafcu, &a);
    wr32(r3 + 0x3f0u, 0u);
    r3 = tc_call(0x8012aafcu, &a);
    r28 = rd32(r3 + 0x3ecu);
    r29 = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x8012aafcu, &a);
    f1 = tc_lastf();
    a.r[0] = r29;
    a.r[1] = r3;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r29 + 0x28u) + 0xcu), &a);
    r3 = tc_call(0x8012aafcu, &a);
    r31 = rd32(rd32((u32)param_1 + 0x1cu) + 0x10u) + rd32(r3 + 0x3ecu);
    a.r[0] = 0x804de14cu;
    a.r[1] = r31;
    r3 = tc_call(0x801f3638u, &a);
    if (r3 == 0u) {
        r31 = r28 + rd32(rd32((u32)param_1 + 0x1cu) + 0x10u);
        r3 = tc_call(0x8012aafcu, &a);
        r29 = r3;
        a.r[0] = r3;
        a.r[1] = r28;
        a.r[2] = rd32(r3 + 0x3e8u);
        (void)tc_call(0x80119fb0u, &a);
        wr32(r29 + 0x3ecu, r28);
    }
    r3 = tc_call(0x8012aafcu, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    a.r[1] = rd32(r3 + 0x3ecu);
    r3 = tc_call(0x801894d8u, &a);
    r29 = r3;
    r3 = tc_call(0x8012aafcu, &a);
    a.r[0] = r3;
    a.r[1] = r29;
    f1 = tc_callf(0x80119ffcu, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x804de14cu;
    a.r[1] = r31;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x801f35a4u, &a);
    f1 = tc_lastf();
    r3 = rd32(r3 + 0x10u);
    r5 = rd32(0x80571398u);
    wr32(r5 + 0x1b4u, 2u);
    wr32(r5 + 0x1b0u, r3);
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
                    if (r0 == 0u) {
                        return 1u;
                    }
                    wr32(0x805713e0u, 1u);
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
                    (void)tc_call(0x801f42a4u, &a);
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 3u;
                    (void)tc_call(0x8010a75cu, &a);
                    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x80u;
                    a.r[1] = 3u;
                    (void)tc_call(0x800f8544u, &a);
                    return 1u;
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
            a.r[0] = 0x804de14cu;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x801f42a4u, &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 3u;
            (void)tc_call(0x8010a75cu, &a);
            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x80u;
            a.r[1] = 3u;
            (void)tc_call(0x800f8544u, &a);
            return 1u;
        }
    }
    a.r[0] = 0x804de14cu;
    a.r[1] = r31;
    f1 = tc_callf(0x801f3df0u, &a);
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
    (void)tc_call(0x801f41c0u, &a);
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0xfadu;
    (void)tc_call(0x8010a75cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x80u;
    a.r[1] = 3u;
    (void)tc_call(0x800f8544u, &a);
    return 1u;
}
