#include "tc_rt.h"

u32 fn_801996cc(s32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x3cu);
    c0lt = (s32)r0 < 2;
    if (r0 == 2u) {
        wr32((u32)param_1 + 0x3cu, 3u);
    } else if (!c0lt) {
        if ((s32)r0 < 6 && (s32)r0 < 4) {
            a.r[0] = (u32)param_1;
            f1 = tc_callf(0x8019a378u, &a);
            f0 = (f64)rdf32(0x80575678u);
            r5 = rd32(0x803541bcu);
            wrf32d(0x804879c4u, f0);
            wrf32d(0x80488b5cu, f0);
            if (r5 != 0u) {
                r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r0 != 1u) {
                    if (r0 != 2u) {
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
            do {
                if (r0 == 0u) {
                    if (r5 != 0u) {
                        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r0 != 1u) {
                            if (r0 != 2u) {
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
                    if (r0 == 0u) break;
                }
                if ((u32)rd8((u32)param_1 + 0x4fcu) >= 0xffu) {
                    wr32((u32)param_1 + 0x3cu, 5u);
                    a.r[0] = (u32)param_1;
                    a.r[1] = param_2;
                    a.r[2] = param_3;
                    (void)tc_call(0x8019ad7cu, &a);
                    return rd32((u32)param_1 + 0x3cu);
                }
            } while (0);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = (u32)param_1;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8019b970u, &a);
        }
    } else {
        c0lt = (s32)r0 < 0;
        if (r0 == 0u) {
            if (rd32((u32)param_1 + 0x20u) == 0u || (u32)rd8((u32)param_1 + 0x464u) == 6u) {
                if ((s32)rd32((u32)param_1 + 0x44u) > 0) {
                    wr32((u32)param_1 + 0x40u, 0u);
                    a.r[0] = (u32)param_1;
                    (void)tc_call(0x80199b80u, &a);
                    wr32((u32)param_1 + 0x3cu, 2u);
                }
            } else {
                if (rd32((u32)param_1 + 0x44u) == 0u) {
                    r3 = tc_call(0x8019b00cu, &a);
                    wr32((u32)param_1 + 0x460u, r3);
                }
                a.r[0] = (u32)param_1;
                (void)tc_call(0x8019a378u, &a);
                (void)tc_call(0x8019b07cu, &a);
                a.r[0] = (u32)param_1;
                (void)tc_call(0x8019a22cu, &a);
                a.r[0] = (u32)param_1;
                (void)tc_call(0x8019a1bcu, &a);
                a.r[0] = (u32)param_1;
                (void)tc_call(0x8019ac88u, &a);
                if ((s32)rd32((u32)param_1 + 0x44u) > 60) {
                    wr32((u32)param_1 + 0x3cu, 1u);
                    wr32((u32)param_1 + 0x44u, 0u);
                }
            }
            wr32((u32)param_1 + 0x44u, rd32((u32)param_1 + 0x44u) + 1u);
        } else if (!c0lt) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x8019a378u, &a);
            (void)tc_call(0x8019b07cu, &a);
            a.r[0] = (u32)param_1;
            (void)tc_call(0x8019a22cu, &a);
            a.r[0] = (u32)param_1;
            (void)tc_call(0x8019a1bcu, &a);
            a.r[0] = (u32)param_1;
            (void)tc_call(0x8019ac88u, &a);
            a.r[0] = (u32)param_1;
            (void)tc_call(0x8019a1f4u, &a);
            if ((s32)rd32((u32)param_1 + 0x458u) <= 0) {
                r5 = rd32(0x803541bcu);
                if (r5 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
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
                if (r5 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r0 = 0u;
                        } else {
                            r0 = r4 & rd32(rd32(0x803541acu));
                        }
                    } else {
                        r0 = r4 & rd32(rd32(0x8035419cu));
                    }
                } else {
                    r0 = 0u;
                }
                if (r0 == 0u) {
                    if (r5 != 0u) {
                        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r0 != 1u) {
                            if (r0 != 2u) {
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
                    if (r5 != 0u) {
                        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r0 != 1u) {
                            if (r0 != 2u) {
                                r0 = 0u;
                            } else {
                                r0 = r4 & rd32(rd32(0x803541acu));
                            }
                        } else {
                            r0 = r4 & rd32(rd32(0x8035419cu));
                        }
                    } else {
                        r0 = 0u;
                    }
                    if (r0 == 0u) {
                        a.r[0] = (u32)param_1;
                        (void)tc_call(0x8019a298u, &a);
                        return rd32((u32)param_1 + 0x3cu);
                    }
                }
            }
            r4 = rd32((u32)param_1 + 0x460u);
            if (r4 != 0xffffffffu) {
                a.r[0] = 0x804b9e80u;
                a.r[1] = r4;
                r3 = tc_call(0x80121060u, &a);
                if (r3 != 0u) {
                    a.r[0] = 0x804b9e80u;
                    a.r[1] = rd32((u32)param_1 + 0x460u);
                    (void)tc_call(0x801206f4u, &a);
                }
            }
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80199b80u, &a);
            wr32((u32)param_1 + 0x3cu, 2u);
        }
    }
    return rd32((u32)param_1 + 0x3cu);
}
