#include "tc_rt.h"

void fn_802176dc(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c1lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r26 = 0, r27 = 0;
    u32 r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r5 = param_3;
    r26 = 0u;
    r27 = 0u;
    for (;;) {
        r3 = rd32(param_1 + 8u);
        if ((s32)r26 >= (s32)r3) break;
        a.r[0] = rd32(rd32(param_1 + 4u) + r27);
        a.r[1] = rd32(param_2);
        a.r[2] = r5;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.f[0] = f1;
        r3 = tc_call(param_3, &a);
        f1 = tc_lastf();
        r5 = 0u;
        r6 = 0u;
        if ((s32)r3 > 0) {
            r4 = rd32(param_1 + 0xcu);
            r3 = rd32(param_1 + 8u) + 1u;
            if ((s32)r3 > (s32)r4) {
                r4 = rd32(param_1 + 0x10u);
                r3 = r3 + r4;
                r27 = r4 * (u32)ppc_divw((s32)(r3 - 1u), (s32)r4);
                r3 = tc_call(0x80097e5cu, &a);
                f1 = tc_lastf();
                r5 = 0u;
                r4 = (r27 << 2u) & 0xfffffffcu;
                r6 = r3;
                if (r4 == 0u) {
                    r28 = 0u;
                } else {
                    if (rd32(r3 + 0x10u) != 0u) {
                        r5 = rd32(r3 + 0xcu);
                        r6 = r3 + 0x18u;
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        r3 = tc_call(0x80040db8u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        r5 = 0u;
                        r6 = 0u;
                    } else {
                        if (rd32(r3 + 0x20u) != 0u) {
                            r3 = r3 + 0x24u;
                            a.r[0] = r3;
                            a.r[1] = 0x20u;
                            a.r[2] = r4;
                            r3 = tc_call(0x80094e80u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            r5 = 0u;
                            r6 = 0u;
                        } else {
                            r5 = rd32(r3 + 0xcu);
                            r6 = r3 + 0x18u;
                            r3 = rd32(r3);
                            a.r[0] = r3;
                            a.r[1] = r4;
                            a.r[2] = r5;
                            a.r[3] = r6;
                            r3 = tc_call(0x80040cd8u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            r5 = 0u;
                            r6 = 0u;
                        }
                    }
                    r28 = r3;
                }
                if (r28 != 0u) {
                    r29 = rd32(param_1 + 8u);
                    r3 = 0u;
                    c1lt = (s32)r29 < 0;
                    if ((s32)r29 > 0) {
                        r6 = r29 - 8u;
                        if ((s32)r29 > 8) {
                            r5 = 0u;
                            if (!c1lt && (s32)r29 <= 2147483646) {
                                r5 = 1u;
                            }
                            if (r5 != 0u) {
                                r5 = r28;
                                r4 = 0u;
                                ctr = ((r6 + 7u) >> 3u) & 0x1fffffffu;
                                if ((s32)r6 > 0) {
                                    do {
                                        r3 = r3 + 8u;
                                        wr32(r5, rd32(rd32(param_1 + 4u) + r4));
                                        wr32(r5 + 4u, rd32(rd32(param_1 + 4u) + r4 + 4u));
                                        wr32(r5 + 8u, rd32(rd32(param_1 + 4u) + r4 + 8u));
                                        wr32(r5 + 0xcu, rd32(rd32(param_1 + 4u) + r4 + 0xcu));
                                        wr32(r5 + 0x10u, rd32(rd32(param_1 + 4u) + r4 + 0x10u));
                                        wr32(r5 + 0x14u, rd32(rd32(param_1 + 4u) + r4 + 0x14u));
                                        wr32(r5 + 0x18u, rd32(rd32(param_1 + 4u) + r4 + 0x18u));
                                        r6 = rd32(param_1 + 4u) + r4;
                                        r4 = r4 + 0x20u;
                                        wr32(r5 + 0x1cu, rd32(r6 + 0x1cu));
                                        r5 = r5 + 0x20u;
                                        ctr = ctr - 1u;
                                    } while (ctr != 0u);
                                }
                            }
                        }
                        r5 = (r3 << 2u) & 0xfffffffcu;
                        r4 = r28 + r5;
                        ctr = r29 - r3;
                        if ((s32)r3 < (s32)r29) {
                            do {
                                r0 = rd32(rd32(param_1 + 4u) + r5);
                                r5 = r5 + 4u;
                                wr32(r4, r0);
                                r4 = r4 + 4u;
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(param_1) + 0xcu), &a);
                    wr32(param_1 + 8u, r29);
                }
                wr32(param_1 + 4u, r28);
                wr32(param_1 + 0xcu, r27);
            } else {
                r5 = rd32(param_1 + 0x10u);
                r0 = ((r4 >> 0x1fu) & 1u) + r4;
                r4 = r5 - 1u;
                r0 = (u32)((s32)r0 >> 1);
                r0 = r0 + r4;
                if ((s32)r3 < (s32)r0 || r3 == 0u) {
                    r29 = 0u;
                    r27 = r5 * (u32)ppc_divw((s32)(r3 + r4), (s32)r5);
                    if (r27 != 0u) {
                        r3 = tc_call(0x80097e5cu, &a);
                        f1 = tc_lastf();
                        r5 = 0u;
                        r4 = (r27 << 2u) & 0xfffffffcu;
                        r6 = r3;
                        if (r4 == 0u) {
                            r3 = 0u;
                        } else {
                            if (rd32(r3 + 0x10u) != 0u) {
                                r5 = rd32(r3 + 0xcu);
                                r6 = r3 + 0x18u;
                                r3 = rd32(r3);
                                a.r[0] = r3;
                                a.r[1] = r4;
                                a.r[2] = r5;
                                a.r[3] = r6;
                                r3 = tc_call(0x80040db8u, &a);
                                f1 = tc_lastf();
                                r4 = tc_lastr4();
                                r5 = 0u;
                                r6 = 0u;
                            } else {
                                if (rd32(r3 + 0x20u) != 0u) {
                                    r3 = r3 + 0x24u;
                                    a.r[0] = r3;
                                    a.r[1] = 0x20u;
                                    a.r[2] = r4;
                                    r3 = tc_call(0x80094e80u, &a);
                                    f1 = tc_lastf();
                                    r4 = tc_lastr4();
                                    r5 = 0u;
                                    r6 = 0u;
                                } else {
                                    r5 = rd32(r3 + 0xcu);
                                    r6 = r3 + 0x18u;
                                    r3 = rd32(r3);
                                    a.r[0] = r3;
                                    a.r[1] = r4;
                                    a.r[2] = r5;
                                    a.r[3] = r6;
                                    r3 = tc_call(0x80040cd8u, &a);
                                    f1 = tc_lastf();
                                    r4 = tc_lastr4();
                                    r5 = 0u;
                                    r6 = 0u;
                                }
                            }
                        }
                        r29 = r3;
                    }
                    if (rd32(param_1 + 4u) != 0u) {
                        r28 = rd32(param_1 + 8u);
                        r3 = 0u;
                        c1lt = (s32)r28 < 0;
                        if ((s32)r28 > 0) {
                            r6 = r28 - 8u;
                            if ((s32)r28 > 8) {
                                r5 = 0u;
                                if (!c1lt && (s32)r28 <= 2147483646) {
                                    r5 = 1u;
                                }
                                if (r5 != 0u) {
                                    r5 = r29;
                                    r4 = 0u;
                                    ctr = ((r6 + 7u) >> 3u) & 0x1fffffffu;
                                    if ((s32)r6 > 0) {
                                        do {
                                            r3 = r3 + 8u;
                                            wr32(r5, rd32(rd32(param_1 + 4u) + r4));
                                            wr32(r5 + 4u, rd32(rd32(param_1 + 4u) + r4 + 4u));
                                            wr32(r5 + 8u, rd32(rd32(param_1 + 4u) + r4 + 8u));
                                            wr32(r5 + 0xcu, rd32(rd32(param_1 + 4u) + r4 + 0xcu));
                                            wr32(r5 + 0x10u, rd32(rd32(param_1 + 4u) + r4 + 0x10u));
                                            wr32(r5 + 0x14u, rd32(rd32(param_1 + 4u) + r4 + 0x14u));
                                            wr32(r5 + 0x18u, rd32(rd32(param_1 + 4u) + r4 + 0x18u));
                                            r6 = rd32(param_1 + 4u) + r4;
                                            r4 = r4 + 0x20u;
                                            wr32(r5 + 0x1cu, rd32(r6 + 0x1cu));
                                            r5 = r5 + 0x20u;
                                            ctr = ctr - 1u;
                                        } while (ctr != 0u);
                                    }
                                }
                            }
                            r5 = (r3 << 2u) & 0xfffffffcu;
                            r4 = r29 + r5;
                            ctr = r28 - r3;
                            if ((s32)r3 < (s32)r28) {
                                do {
                                    r0 = rd32(rd32(param_1 + 4u) + r5);
                                    r5 = r5 + 4u;
                                    wr32(r4, r0);
                                    r4 = r4 + 4u;
                                    ctr = ctr - 1u;
                                } while (ctr != 0u);
                            }
                        }
                        a.r[0] = param_1;
                        a.r[1] = r4;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.f[0] = f1;
                        (void)tc_call(rd32(rd32(param_1) + 0xcu), &a);
                        wr32(param_1 + 8u, r28);
                    }
                    wr32(param_1 + 4u, r29);
                    wr32(param_1 + 0xcu, r27);
                }
            }
            r3 = rd32(param_1 + 8u);
            c1lt = (s32)r3 < (s32)r26;
            if ((s32)r3 > (s32)r26) {
                r6 = r26 + 8u;
                if ((s32)(r3 - r26) > 8) {
                    r7 = 0u;
                    r8 = 0u;
                    r9 = 0u;
                    r5 = 0u;
                    if (!c1lt && (s32)r26 >= -2147483647) {
                        r5 = 1u;
                    }
                    if (r5 != 0u && (s32)rd32(param_1 + 8u) >= -2147483647) {
                        r9 = 1u;
                    }
                    if (r9 != 0u && (r26 - 0x80000000u) != 0u) {
                        r8 = 1u;
                    }
                    if (r8 != 0u) {
                        r8 = rd32(param_1 + 8u);
                        r4 = 1u;
                        r5 = r8 & 0x80000000u;
                        if (r5 == ((0u - r26) & 0x80000000u) && r5 != ((r8 - r26) & 0x80000000u)) {
                            r4 = 0u;
                        }
                        if (r4 != 0u) {
                            r7 = 1u;
                        }
                    }
                    if (r7 != 0u) {
                        r4 = (r3 << 2u) & 0xfffffffcu;
                        ctr = ((r3 + 7u - r6) >> 3u) & 0x1fffffffu;
                        if ((s32)r3 > (s32)r6) {
                            do {
                                r3 = r3 - 8u;
                                r5 = rd32(param_1 + 4u) + r4;
                                wr32(r5, rd32(r5 - 4u));
                                r5 = rd32(param_1 + 4u) + r4;
                                wr32(r5 - 4u, rd32(r5 - 8u));
                                r5 = rd32(param_1 + 4u) + r4;
                                wr32(r5 - 8u, rd32(r5 - 0xcu));
                                r5 = rd32(param_1 + 4u) + r4;
                                wr32(r5 - 0xcu, rd32(r5 - 0x10u));
                                r5 = rd32(param_1 + 4u) + r4;
                                wr32(r5 - 0x10u, rd32(r5 - 0x14u));
                                r5 = rd32(param_1 + 4u) + r4;
                                wr32(r5 - 0x14u, rd32(r5 - 0x18u));
                                r5 = rd32(param_1 + 4u) + r4;
                                wr32(r5 - 0x18u, rd32(r5 - 0x1cu));
                                r5 = rd32(param_1 + 4u) + r4;
                                r4 = r4 - 0x20u;
                                wr32(r5 - 0x1cu, rd32(r5 - 0x20u));
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                }
                r4 = (r3 << 2u) & 0xfffffffcu;
                ctr = r3 - r26;
                if ((s32)r3 > (s32)r26) {
                    do {
                        r3 = rd32(param_1 + 4u) + r4;
                        r4 = r4 - 4u;
                        wr32(r3, rd32(r3 - 4u));
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            wr32(rd32(param_1 + 4u) + ((r26 << 2u) & 0xfffffffcu), rd32(param_2));
            wr32(param_1 + 8u, rd32(param_1 + 8u) + 1u);
            return;
        }
        r27 = r27 + 4u;
        r26 = r26 + 1u;
    }
    r4 = rd32(param_1 + 0xcu);
    r3 = r3 + 1u;
    if ((s32)r3 > (s32)r4) {
        r4 = rd32(param_1 + 0x10u);
        r3 = r3 + r4;
        r27 = r4 * (u32)ppc_divw((s32)(r3 - 1u), (s32)r4);
        r3 = tc_call(0x80097e5cu, &a);
        f1 = tc_lastf();
        r5 = 0u;
        r4 = (r27 << 2u) & 0xfffffffcu;
        r6 = r3;
        if (r4 == 0u) {
            r29 = 0u;
        } else {
            if (rd32(r3 + 0x10u) != 0u) {
                r5 = rd32(r3 + 0xcu);
                r6 = r3 + 0x18u;
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = r6;
                r3 = tc_call(0x80040db8u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r5 = 0u;
                r6 = 0u;
            } else {
                if (rd32(r3 + 0x20u) != 0u) {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = r4;
                    r3 = tc_call(0x80094e80u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r5 = 0u;
                    r6 = 0u;
                } else {
                    r5 = rd32(r3 + 0xcu);
                    r6 = r3 + 0x18u;
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    r3 = tc_call(0x80040cd8u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r5 = 0u;
                    r6 = 0u;
                }
            }
            r29 = r3;
        }
        if (r29 != 0u) {
            r28 = rd32(param_1 + 8u);
            r3 = 0u;
            c1lt = (s32)r28 < 0;
            if ((s32)r28 > 0) {
                r6 = r28 - 8u;
                if ((s32)r28 > 8) {
                    r5 = 0u;
                    if (!c1lt && (s32)r28 <= 2147483646) {
                        r5 = 1u;
                    }
                    if (r5 != 0u) {
                        r5 = r29;
                        r4 = 0u;
                        ctr = ((r6 + 7u) >> 3u) & 0x1fffffffu;
                        if ((s32)r6 > 0) {
                            do {
                                r3 = r3 + 8u;
                                wr32(r5, rd32(rd32(param_1 + 4u) + r4));
                                wr32(r5 + 4u, rd32(rd32(param_1 + 4u) + r4 + 4u));
                                wr32(r5 + 8u, rd32(rd32(param_1 + 4u) + r4 + 8u));
                                wr32(r5 + 0xcu, rd32(rd32(param_1 + 4u) + r4 + 0xcu));
                                wr32(r5 + 0x10u, rd32(rd32(param_1 + 4u) + r4 + 0x10u));
                                wr32(r5 + 0x14u, rd32(rd32(param_1 + 4u) + r4 + 0x14u));
                                wr32(r5 + 0x18u, rd32(rd32(param_1 + 4u) + r4 + 0x18u));
                                r6 = rd32(param_1 + 4u) + r4;
                                r4 = r4 + 0x20u;
                                wr32(r5 + 0x1cu, rd32(r6 + 0x1cu));
                                r5 = r5 + 0x20u;
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                }
                r5 = (r3 << 2u) & 0xfffffffcu;
                r4 = r29 + r5;
                ctr = r28 - r3;
                if ((s32)r3 < (s32)r28) {
                    do {
                        r0 = rd32(rd32(param_1 + 4u) + r5);
                        r5 = r5 + 4u;
                        wr32(r4, r0);
                        r4 = r4 + 4u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(param_1) + 0xcu), &a);
            wr32(param_1 + 8u, r28);
        }
        wr32(param_1 + 4u, r29);
        wr32(param_1 + 0xcu, r27);
    } else {
        r5 = rd32(param_1 + 0x10u);
        r0 = ((r4 >> 0x1fu) & 1u) + r4;
        r4 = r5 - 1u;
        r0 = (u32)((s32)r0 >> 1);
        r0 = r0 + r4;
        if ((s32)r3 < (s32)r0 || r3 == 0u) {
            r28 = 0u;
            r27 = r5 * (u32)ppc_divw((s32)(r3 + r4), (s32)r5);
            if (r27 != 0u) {
                r3 = tc_call(0x80097e5cu, &a);
                f1 = tc_lastf();
                r5 = 0u;
                r4 = (r27 << 2u) & 0xfffffffcu;
                r6 = r3;
                if (r4 == 0u) {
                    r3 = 0u;
                } else {
                    if (rd32(r3 + 0x10u) != 0u) {
                        r5 = rd32(r3 + 0xcu);
                        r6 = r3 + 0x18u;
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        r3 = tc_call(0x80040db8u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        r5 = 0u;
                        r6 = 0u;
                    } else {
                        if (rd32(r3 + 0x20u) != 0u) {
                            r3 = r3 + 0x24u;
                            a.r[0] = r3;
                            a.r[1] = 0x20u;
                            a.r[2] = r4;
                            r3 = tc_call(0x80094e80u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            r5 = 0u;
                            r6 = 0u;
                        } else {
                            r5 = rd32(r3 + 0xcu);
                            r6 = r3 + 0x18u;
                            r3 = rd32(r3);
                            a.r[0] = r3;
                            a.r[1] = r4;
                            a.r[2] = r5;
                            a.r[3] = r6;
                            r3 = tc_call(0x80040cd8u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            r5 = 0u;
                            r6 = 0u;
                        }
                    }
                }
                r28 = r3;
            }
            if (rd32(param_1 + 4u) != 0u) {
                r29 = rd32(param_1 + 8u);
                r3 = 0u;
                c1lt = (s32)r29 < 0;
                if ((s32)r29 > 0) {
                    r6 = r29 - 8u;
                    if ((s32)r29 > 8) {
                        r5 = 0u;
                        if (!c1lt && (s32)r29 <= 2147483646) {
                            r5 = 1u;
                        }
                        if (r5 != 0u) {
                            r5 = r28;
                            r4 = 0u;
                            ctr = ((r6 + 7u) >> 3u) & 0x1fffffffu;
                            if ((s32)r6 > 0) {
                                do {
                                    r3 = r3 + 8u;
                                    wr32(r5, rd32(rd32(param_1 + 4u) + r4));
                                    wr32(r5 + 4u, rd32(rd32(param_1 + 4u) + r4 + 4u));
                                    wr32(r5 + 8u, rd32(rd32(param_1 + 4u) + r4 + 8u));
                                    wr32(r5 + 0xcu, rd32(rd32(param_1 + 4u) + r4 + 0xcu));
                                    wr32(r5 + 0x10u, rd32(rd32(param_1 + 4u) + r4 + 0x10u));
                                    wr32(r5 + 0x14u, rd32(rd32(param_1 + 4u) + r4 + 0x14u));
                                    wr32(r5 + 0x18u, rd32(rd32(param_1 + 4u) + r4 + 0x18u));
                                    r6 = rd32(param_1 + 4u) + r4;
                                    r4 = r4 + 0x20u;
                                    wr32(r5 + 0x1cu, rd32(r6 + 0x1cu));
                                    r5 = r5 + 0x20u;
                                    ctr = ctr - 1u;
                                } while (ctr != 0u);
                            }
                        }
                    }
                    r5 = (r3 << 2u) & 0xfffffffcu;
                    r4 = r28 + r5;
                    ctr = r29 - r3;
                    if ((s32)r3 < (s32)r29) {
                        do {
                            r0 = rd32(rd32(param_1 + 4u) + r5);
                            r5 = r5 + 4u;
                            wr32(r4, r0);
                            r4 = r4 + 4u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(param_1) + 0xcu), &a);
                wr32(param_1 + 8u, r29);
            }
            wr32(param_1 + 4u, r28);
            wr32(param_1 + 0xcu, r27);
        }
    }
    wr32(rd32(param_1 + 4u) + ((rd32(param_1 + 8u) << 2u) & 0xfffffffcu), rd32(param_2));
    wr32(param_1 + 8u, rd32(param_1 + 8u) + 1u);
    return;
}
