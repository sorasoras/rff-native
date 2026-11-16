#include "tc_rt.h"

void fn_80304184(u32 param_1, u32 param_2, u32 param_3, s32 param_4, u32 param_5)
{
    u32 c0eq = 0, c0lt = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r14 = 0, r15 = 0, r16 = 0, r17 = 0, r23 = 0;
    u32 r24 = 0, r25 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf50u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r0 = rd32(param_1 + 0x10u);
    wr8(0x817fdf58u, (u8)param_4);
    if (r0 != 0u) {
        a.r[0] = r0;
        r3 = tc_call(0x80301480u, &a);
    } else {
        r3 = 0u;
    }
    if (r3 != 0u) {
        if (rd32(param_2) != 0u) {
            a.r[0] = param_2;
            (void)tc_call(0x8030571cu, &a);
        }
        a.r[0] = rd32(param_1 + 0x10u);
        a.r[1] = param_3;
        a.r[2] = 0x817fdf90u;
        r3 = tc_call(0x803014ecu, &a);
        if (r3 != 0u) {
            wr32(0x817fdfb4u, 0u);
            r29 = rd32(0x817fdf9cu);
            r31 = 0u;
            r14 = rd32(0x817fdf94u);
            r30 = 0u;
            wr32(0x817fdfb0u, 0u);
            if (param_5 != 0u) {
                r3 = rd32(param_5);
                if ((r3 & 1u) != 0u) {
                    r31 = rd32(param_5 + 4u);
                    r30 = rd32(param_5 + 8u);
                }
                if ((r3 & 4u) != 0u) {
                    r29 = rd32(param_5 + 0x10u);
                }
                if ((r3 & 2u) != 0u) {
                    r14 = rd32(param_5 + 0xcu);
                }
                if ((r3 & 0x10u) != 0u) {
                    wr32(0x817fdfb4u, rd32(param_5 + 0x18u));
                    wr32(0x817fdfb0u, rd32(param_5 + 0x1cu));
                }
            }
            r28 = r29;
            if ((u32)rd8(0x817fdf58u) != 0u) {
                r28 = r29 - 1u;
            }
            if ((s32)r28 <= 127) {
                r15 = r28 & ~(u32)((s32)r28 >> 31);
            } else {
                r15 = 0x7fu;
            }
            r3 = tc_call(0x80306860u, &a);
            r3 = r3 + 0x354u;
            a.r[0] = r3;
            (void)tc_call(0x8022d56cu, &a);
            r14 = rd32(param_1 + 0x3cu) + (r14 * 0x5cu);
            a.r[0] = r14;
            a.r[1] = r15;
            r3 = tc_call(0x803061f0u, &a);
            if (r3 != 0u) {
                r25 = 0u;
                r24 = 0u;
                r23 = 0u;
                a.r[0] = rd32(param_1 + 0x10u);
                a.r[1] = param_3;
                r3 = tc_call(0x803014e4u, &a);
                c0lt = (s32)r3 < 2;
                do {
                    if (r3 != 2u) {
                        if (!c0lt) {
                            if ((s32)r3 < 4) {
                                if ((s32)r28 <= 127) {
                                    r15 = r28 & ~(u32)((s32)r28 >> 31);
                                } else {
                                    r15 = 0x7fu;
                                }
                                r17 = param_1 + 0xa0u;
                                a.r[0] = r17;
                                (void)tc_call(0x8022d56cu, &a);
                                r23 = 0u;
                                for (;;) {
                                    if (r23 != 0u) {
                                        fl_ = 8u;
                                        break;
                                    }
                                    a.r[0] = param_1 + 0x90u;
                                    r3 = tc_call(0x802facacu, &a);
                                    c0eq = r3 == 0u;
                                    if (c0eq) {
                                        if (rd32(param_1 + 0x94u) != 0u) {
                                            r16 = rd32(param_1 + 0x98u) - 0xe0u;
                                        } else {
                                            r16 = 0u;
                                        }
                                        if (r16 == 0u) {
                                            fl_ = 6u;
                                            break;
                                        }
                                        r3 = (u32)rd8(r16 + 0x8cu) + rd32(r16 + 0x48u);
                                        if ((s32)r3 <= 127) {
                                            r0 = r3 & ~(u32)((s32)r3 >> 31);
                                        } else {
                                            r0 = 0x7fu;
                                        }
                                        if ((s32)r15 < (s32)r0) {
                                            fl_ = 7u;
                                            break;
                                        }
                                        a.r[0] = param_1 + 0xa0u;
                                        (void)tc_call(0x8022d648u, &a);
                                        a.r[0] = r16;
                                        a.r[1] = 0u;
                                        (void)tc_call(0x802f5fd8u, &a);
                                        a.r[0] = param_1 + 0xa0u;
                                        (void)tc_call(0x8022d56cu, &a);
                                    } else {
                                        r23 = r3;
                                        if (!c0eq) {
                                            a.r[0] = r3;
                                            a.r[1] = param_1 + 0x90u;
                                            a.r[2] = r28;
                                            a.r[3] = 0u;
                                            r3 = tc_call(0x8030ececu, &a);
                                            r23 = r3;
                                        }
                                    }
                                }
                                do {
                                    if (fl_ == 8u) {
                                        fl_ = 0u;
                                        fl_ = 9u;
                                        break;
                                    }
                                    if (fl_ == 7u) {
                                        fl_ = 0u;
                                    } else if (fl_ == 6u) {
                                        fl_ = 0u;
                                        break;
                                    }
                                    a.r[0] = r17;
                                    (void)tc_call(0x8022d648u, &a);
                                    r23 = 0u;
                                    fl_ = 10u;
                                    break;
                                } while (0);
                                if (fl_ == 10u) {
                                    fl_ = 0u;
                                } else if (fl_ == 9u) {
                                    fl_ = 0u;
                                    r3 = rd32(param_1 + 0x98u);
                                    r0 = param_1 + 0x98u;
                                    while (r3 != r0) {
                                        r5 = (u32)rd8(r3 - 0x54u) + rd32(r3 - 0x98u);
                                        if ((s32)r5 <= 127) {
                                            r4 = r5 & ~(u32)((s32)r5 >> 31);
                                        } else {
                                            r4 = 0x7fu;
                                        }
                                        if ((s32)r15 < (s32)r4) break;
                                        r3 = rd32(r3);
                                    }
                                    wr32(0x817fdf5cu, r3);
                                    a.r[0] = param_1 + 0x94u;
                                    a.r[1] = 0x817fdf5cu;
                                    a.r[2] = r23 + 0xe0u;
                                    (void)tc_call(0x802deba4u, &a);
                                    a.r[0] = r17;
                                    (void)tc_call(0x8022d648u, &a);
                                } else {
                                    a.r[0] = r17;
                                    (void)tc_call(0x8022d648u, &a);
                                    r23 = 0u;
                                }
                                if (r23 != 0u) {
                                    a.r[0] = r23;
                                    a.r[1] = param_3;
                                    (void)tc_call(0x802f7458u, &a);
                                } else {
                                    r23 = 0u;
                                }
                                if (r23 != 0u) {
                                    r15 = r23;
                                    break;
                                }
                                r3 = tc_call(0x80306860u, &a);
                                r3 = r3 + 0x354u;
                                a.r[0] = r3;
                                (void)tc_call(0x8022d648u, &a);
                                return;
                            }
                        } else if ((s32)r3 >= 1) {
                            if ((s32)r28 <= 127) {
                                r16 = r28 & ~(u32)((s32)r28 >> 31);
                            } else {
                                r16 = 0x7fu;
                            }
                            r17 = param_1 + 0x50u;
                            a.r[0] = r17;
                            (void)tc_call(0x8022d56cu, &a);
                            r25 = 0u;
                            for (;;) {
                                if (r25 != 0u) {
                                    fl_ = 13u;
                                    break;
                                }
                                a.r[0] = param_1 + 0x40u;
                                r3 = tc_call(0x802facacu, &a);
                                c0eq = r3 == 0u;
                                if (c0eq) {
                                    if (rd32(param_1 + 0x44u) != 0u) {
                                        r15 = rd32(param_1 + 0x48u) - 0xe0u;
                                    } else {
                                        r15 = 0u;
                                    }
                                    if (r15 == 0u) {
                                        a.r[0] = r17;
                                        (void)tc_call(0x8022d648u, &a);
                                        r25 = 0u;
                                        fl_ = 11u;
                                        break;
                                    }
                                    r3 = (u32)rd8(r15 + 0x8cu) + rd32(r15 + 0x48u);
                                    if ((s32)r3 <= 127) {
                                        r0 = r3 & ~(u32)((s32)r3 >> 31);
                                    } else {
                                        r0 = 0x7fu;
                                    }
                                    if ((s32)r16 < (s32)r0) {
                                        fl_ = 12u;
                                        break;
                                    }
                                    a.r[0] = param_1 + 0x50u;
                                    (void)tc_call(0x8022d648u, &a);
                                    a.r[0] = r15;
                                    a.r[1] = 0u;
                                    (void)tc_call(0x802f5fd8u, &a);
                                    a.r[0] = param_1 + 0x50u;
                                    (void)tc_call(0x8022d56cu, &a);
                                } else {
                                    r25 = r3;
                                    if (!c0eq) {
                                        a.r[0] = r3;
                                        a.r[1] = param_1 + 0x40u;
                                        a.r[2] = r28;
                                        a.r[3] = 0u;
                                        r3 = tc_call(0x802fe644u, &a);
                                        r25 = r3;
                                    }
                                }
                            }
                            do {
                                if (fl_ == 13u) {
                                    fl_ = 0u;
                                    r3 = rd32(param_1 + 0x48u);
                                    r0 = param_1 + 0x48u;
                                    while (r3 != r0) {
                                        r5 = (u32)rd8(r3 - 0x54u) + rd32(r3 - 0x98u);
                                        if ((s32)r5 <= 127) {
                                            r4 = r5 & ~(u32)((s32)r5 >> 31);
                                        } else {
                                            r4 = 0x7fu;
                                        }
                                        if ((s32)r16 < (s32)r4) break;
                                        r3 = rd32(r3);
                                    }
                                    wr32(0x817fdf64u, r3);
                                    a.r[0] = param_1 + 0x44u;
                                    a.r[1] = 0x817fdf64u;
                                    a.r[2] = r25 + 0xe0u;
                                    (void)tc_call(0x802deba4u, &a);
                                    a.r[0] = r17;
                                    (void)tc_call(0x8022d648u, &a);
                                } else {
                                    if (fl_ == 12u) {
                                        fl_ = 0u;
                                    } else if (fl_ == 11u) {
                                        fl_ = 0u;
                                        break;
                                    }
                                    a.r[0] = r17;
                                    (void)tc_call(0x8022d648u, &a);
                                    r25 = 0u;
                                }
                            } while (0);
                            if (r25 != 0u) {
                                a.r[0] = r25;
                                a.r[1] = param_3;
                                (void)tc_call(0x802f7458u, &a);
                            } else {
                                r25 = 0u;
                            }
                            if (r25 != 0u) {
                                r15 = r25;
                                break;
                            }
                            r3 = tc_call(0x80306860u, &a);
                            r3 = r3 + 0x354u;
                            a.r[0] = r3;
                            (void)tc_call(0x8022d648u, &a);
                            return;
                        }
                        r3 = tc_call(0x80306860u, &a);
                        r3 = r3 + 0x354u;
                        a.r[0] = r3;
                        (void)tc_call(0x8022d648u, &a);
                        return;
                    }
                    if ((s32)r28 <= 127) {
                        r15 = r28 & ~(u32)((s32)r28 >> 31);
                    } else {
                        r15 = 0x7fu;
                    }
                    r17 = param_1 + 0x78u;
                    a.r[0] = r17;
                    (void)tc_call(0x8022d56cu, &a);
                    r24 = 0u;
                    for (;;) {
                        if (r24 != 0u) {
                            fl_ = 3u;
                            break;
                        }
                        a.r[0] = param_1 + 0x68u;
                        r3 = tc_call(0x802facacu, &a);
                        c0eq = r3 == 0u;
                        if (c0eq) {
                            if (rd32(param_1 + 0x6cu) != 0u) {
                                r16 = rd32(param_1 + 0x70u) - 0xe0u;
                            } else {
                                r16 = 0u;
                            }
                            if (r16 == 0u) {
                                fl_ = 1u;
                                break;
                            }
                            r3 = (u32)rd8(r16 + 0x8cu) + rd32(r16 + 0x48u);
                            if ((s32)r3 <= 127) {
                                r0 = r3 & ~(u32)((s32)r3 >> 31);
                            } else {
                                r0 = 0x7fu;
                            }
                            if ((s32)r15 < (s32)r0) {
                                fl_ = 2u;
                                break;
                            }
                            a.r[0] = param_1 + 0x78u;
                            (void)tc_call(0x8022d648u, &a);
                            a.r[0] = r16;
                            a.r[1] = 0u;
                            (void)tc_call(0x802f5fd8u, &a);
                            a.r[0] = param_1 + 0x78u;
                            (void)tc_call(0x8022d56cu, &a);
                        } else {
                            r24 = r3;
                            if (!c0eq) {
                                a.r[0] = r3;
                                a.r[1] = param_1 + 0x68u;
                                a.r[2] = r28;
                                a.r[3] = 0u;
                                r3 = tc_call(0x8030a3ccu, &a);
                                r24 = r3;
                            }
                        }
                    }
                    do {
                        if (fl_ == 3u) {
                            fl_ = 0u;
                            fl_ = 4u;
                            break;
                        }
                        if (fl_ == 2u) {
                            fl_ = 0u;
                        } else if (fl_ == 1u) {
                            fl_ = 0u;
                            break;
                        }
                        a.r[0] = r17;
                        (void)tc_call(0x8022d648u, &a);
                        r24 = 0u;
                        fl_ = 5u;
                        break;
                    } while (0);
                    if (fl_ == 5u) {
                        fl_ = 0u;
                    } else if (fl_ == 4u) {
                        fl_ = 0u;
                        r3 = rd32(param_1 + 0x70u);
                        r0 = param_1 + 0x70u;
                        while (r3 != r0) {
                            r5 = (u32)rd8(r3 - 0x54u) + rd32(r3 - 0x98u);
                            if ((s32)r5 <= 127) {
                                r4 = r5 & ~(u32)((s32)r5 >> 31);
                            } else {
                                r4 = 0x7fu;
                            }
                            if ((s32)r15 < (s32)r4) break;
                            r3 = rd32(r3);
                        }
                        wr32(0x817fdf60u, r3);
                        a.r[0] = param_1 + 0x6cu;
                        a.r[1] = 0x817fdf60u;
                        a.r[2] = r24 + 0xe0u;
                        (void)tc_call(0x802deba4u, &a);
                        a.r[0] = r17;
                        (void)tc_call(0x8022d648u, &a);
                    } else {
                        a.r[0] = r17;
                        (void)tc_call(0x8022d648u, &a);
                        r24 = 0u;
                    }
                    if (r24 != 0u) {
                        a.r[0] = r24;
                        a.r[1] = param_3;
                        (void)tc_call(0x802f7458u, &a);
                    } else {
                        r24 = 0u;
                    }
                    if (r24 == 0u) {
                        r3 = tc_call(0x80306860u, &a);
                        r3 = r3 + 0x354u;
                        a.r[0] = r3;
                        (void)tc_call(0x8022d648u, &a);
                        return;
                    }
                    r15 = r24;
                } while (0);
                a.r[0] = r14;
                a.r[1] = r15;
                r3 = tc_call(0x80305ef8u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if (r3 != 0u) {
                    a.r[0] = rd32(param_1 + 0x10u);
                    a.r[1] = param_3;
                    r3 = tc_call(0x803014e4u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    c0lt = (s32)r3 < 2;
                    do {
                        if (r3 != 2u) {
                            if (!c0lt) {
                                if ((s32)r3 < 4) {
                                    a.r[0] = rd32(param_1 + 0x10u);
                                    a.r[1] = param_3;
                                    a.r[2] = 0x817fdf70u;
                                    r3 = tc_call(0x80301504u, &a);
                                    f1 = tc_lastf();
                                    r4 = tc_lastr4();
                                    if (r3 != 0u) {
                                        a.r[0] = param_1;
                                        a.r[1] = r23;
                                        a.r[2] = 0x817fdf90u;
                                        a.r[3] = 0x817fdf70u;
                                        a.r[4] = r31;
                                        a.r[5] = r30;
                                        r3 = tc_call(0x80305100u, &a);
                                        f1 = tc_lastf();
                                        r4 = tc_lastr4();
                                        if (r3 == 0u) break;
                                        a.r[0] = r23;
                                        a.r[1] = r4;
                                        a.r[2] = 0u;
                                        a.r[3] = 0u;
                                        a.r[4] = 0u;
                                        a.r[5] = 0u;
                                        a.r[6] = 0u;
                                        a.r[7] = 0u;
                                        a.f[0] = f1;
                                        (void)tc_call(rd32(rd32(r23) + 0x10u), &a);
                                        r3 = tc_call(0x80306860u, &a);
                                        r3 = r3 + 0x354u;
                                        a.r[0] = r3;
                                        (void)tc_call(0x8022d648u, &a);
                                        return;
                                    }
                                    a.r[0] = r23;
                                    a.r[1] = r4;
                                    a.r[2] = 0u;
                                    a.r[3] = 0u;
                                    a.r[4] = 0u;
                                    a.r[5] = 0u;
                                    a.r[6] = 0u;
                                    a.r[7] = 0u;
                                    a.f[0] = f1;
                                    (void)tc_call(rd32(rd32(r23) + 0x10u), &a);
                                    r3 = tc_call(0x80306860u, &a);
                                    r3 = r3 + 0x354u;
                                    a.r[0] = r3;
                                    (void)tc_call(0x8022d648u, &a);
                                    return;
                                }
                            } else if ((s32)r3 >= 1) {
                                a.r[0] = r14;
                                a.r[1] = r25;
                                (void)tc_call(0x80306334u, &a);
                                a.r[0] = rd32(param_1 + 0x10u);
                                a.r[1] = param_3;
                                a.r[2] = 0x817fdf7cu;
                                r3 = tc_call(0x803014f4u, &a);
                                f1 = tc_lastf();
                                r4 = tc_lastr4();
                                if (r3 != 0u) {
                                    a.r[0] = param_1;
                                    a.r[1] = r25;
                                    a.r[2] = 0x817fdf90u;
                                    a.r[3] = 0x817fdf7cu;
                                    a.r[4] = r31;
                                    a.r[5] = r30;
                                    a.r[6] = rd32(0x817fdfb4u);
                                    a.r[7] = rd32(0x817fdfb0u);
                                    r3 = tc_call(0x80304bd8u, &a);
                                    f1 = tc_lastf();
                                    r4 = tc_lastr4();
                                    if (r3 == 0u) break;
                                    a.r[0] = r25;
                                    a.r[1] = r4;
                                    a.r[2] = 0u;
                                    a.r[3] = 0u;
                                    a.r[4] = 0u;
                                    a.r[5] = 0u;
                                    a.r[6] = 0u;
                                    a.r[7] = 0u;
                                    a.f[0] = f1;
                                    (void)tc_call(rd32(rd32(r25) + 0x10u), &a);
                                    r3 = tc_call(0x80306860u, &a);
                                    r3 = r3 + 0x354u;
                                    a.r[0] = r3;
                                    (void)tc_call(0x8022d648u, &a);
                                    return;
                                }
                                a.r[0] = r25;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.r[7] = 0u;
                                a.f[0] = f1;
                                (void)tc_call(rd32(rd32(r25) + 0x10u), &a);
                                r3 = tc_call(0x80306860u, &a);
                                r3 = r3 + 0x354u;
                                a.r[0] = r3;
                                (void)tc_call(0x8022d648u, &a);
                                return;
                            }
                            a.r[0] = r15;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            a.f[0] = f1;
                            (void)tc_call(rd32(rd32(r15) + 0x10u), &a);
                            r3 = tc_call(0x80306860u, &a);
                            r3 = r3 + 0x354u;
                            a.r[0] = r3;
                            (void)tc_call(0x8022d648u, &a);
                            return;
                        }
                        a.r[0] = rd32(param_1 + 0x10u);
                        a.r[1] = param_3;
                        a.r[2] = 0x817fdf68u;
                        r3 = tc_call(0x803014fcu, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        if (r3 == 0u) {
                            a.r[0] = r24;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            a.f[0] = f1;
                            (void)tc_call(rd32(rd32(r24) + 0x10u), &a);
                            r3 = tc_call(0x80306860u, &a);
                            r3 = r3 + 0x354u;
                            a.r[0] = r3;
                            (void)tc_call(0x8022d648u, &a);
                            return;
                        }
                        a.r[0] = param_1;
                        a.r[1] = r24;
                        a.r[2] = 0x817fdf90u;
                        a.r[3] = 0x817fdf68u;
                        a.r[4] = r31;
                        a.r[5] = r30;
                        r3 = tc_call(0x80304f48u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        if (r3 != 0u) {
                            a.r[0] = r24;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            a.f[0] = f1;
                            (void)tc_call(rd32(rd32(r24) + 0x10u), &a);
                            r3 = tc_call(0x80306860u, &a);
                            r3 = r3 + 0x354u;
                            a.r[0] = r3;
                            (void)tc_call(0x8022d648u, &a);
                            return;
                        }
                    } while (0);
                    if ((u32)rd8(0x817fdf58u) != 0u) {
                        a.r[0] = r15;
                        a.r[1] = r29;
                        (void)tc_call(0x802f710cu, &a);
                    }
                    a.r[0] = param_2;
                    a.r[1] = r15;
                    (void)tc_call(0x803056d0u, &a);
                    r3 = tc_call(0x80306860u, &a);
                    r3 = r3 + 0x354u;
                    a.r[0] = r3;
                    (void)tc_call(0x8022d648u, &a);
                } else {
                    a.r[0] = r15;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r15) + 0x10u), &a);
                    r3 = tc_call(0x80306860u, &a);
                    r3 = r3 + 0x354u;
                    a.r[0] = r3;
                    (void)tc_call(0x8022d648u, &a);
                }
            } else {
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d648u, &a);
            }
        }
    }
    return;
}
