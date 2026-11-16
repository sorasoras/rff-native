#include "tc_rt.h"

s32 fn_8025dc90(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 c0eq = 0, c0lt = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r24 = 0, r25 = 0;
    u32 r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdb30u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
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
    r30 = param_3;
    r31 = 0u;
    wr16(0x817fdb3cu, 0x20u);
    for (;;) {
        if ((u32)rd16(r30) == 0u) {
            fl_ = 34u;
            break;
        }
        a.r[0] = r30;
        a.r[1] = 0x25u;
        r3 = tc_call(0x8025e8c0u, &a);
        f1 = tc_lastf();
        r29 = r3;
        if (r3 == 0u) {
            fl_ = 33u;
            break;
        }
        r3 = r3 - r30;
        r5 = (u32)((s32)(((r3 >> 0x1fu) & 1u) + r3) >> 1);
        r31 = r31 + r5;
        if (r5 != 0u) {
            a.r[0] = param_2;
            a.r[1] = r30;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.f[0] = f1;
            r3 = tc_call(param_1, &a);
            if (r3 == 0u) {
                fl_ = 1u;
                break;
            }
        }
        a.r[0] = r29;
        a.r[1] = param_4;
        a.r[2] = 0x817fdba0u;
        r3 = tc_call(0x8025c560u, &a);
        f1 = tc_lastf();
        r4 = (u32)rd16(0x817fdba6u);
        r30 = r3;
        c0lt = (s32)r4 < 104;
        if (r4 == 0x68u) {
            fl_ = 2u;
            break;
        }
        do {
            if (!c0lt) {
                c0lt = (s32)r4 < 116;
                if (r4 == 0x74u) {
                    fl_ = 2u;
                    fl_ = 4u;
                    fl_ = 8u;
                    break;
                }
                if (!c0lt) {
                    c0lt = (s32)r4 < 120;
                    if (r4 != 0x78u) {
                        if (!c0lt) {
                            fl_ = 3u;
                            fl_ = 4u;
                            fl_ = 8u;
                            break;
                        }
                        if ((s32)r4 >= 118) {
                            fl_ = 2u;
                            fl_ = 4u;
                            fl_ = 8u;
                            break;
                        }
                    }
                } else {
                    c0lt = (s32)r4 < 111;
                    if (r4 != 0x6fu) {
                        if (!c0lt) {
                            if ((s32)r4 >= 115) {
                                if ((u32)rd8(0x817fdba4u) != 5u) {
                                    a.r[0] = param_4;
                                    a.r[1] = 1u;
                                    r3 = tc_call(0x802550f0u, &a);
                                    r24 = rd32(r3);
                                    if (r24 == 0u) {
                                        r24 = 0x8033d768u;
                                    }
                                    if ((u32)rd8(0x817fdba3u) == 0u) {
                                        if ((u32)rd8(0x817fdba2u) == 0u) {
                                            a.r[0] = r24;
                                            r3 = tc_call(0x802550d4u, &a);
                                            r25 = r3;
                                        } else {
                                            r25 = rd32(0x817fdbacu);
                                            a.r[0] = r24;
                                            a.r[1] = 0u;
                                            a.r[2] = r25;
                                            r3 = tc_call(0x80259280u, &a);
                                            if (r3 != 0u) {
                                                r25 = r3 - r24;
                                            }
                                        }
                                    } else {
                                        r25 = (u32)rd16(r25) & 0xffu;
                                        if ((u32)rd8(0x817fdba2u) != 0u) {
                                            r0 = rd32(0x817fdbacu);
                                            if ((s32)r25 > (s32)r0) {
                                                r25 = r0;
                                            }
                                        }
                                    }
                                    a.r[0] = 0x817fdbb0u;
                                    a.r[1] = r24;
                                    a.r[2] = r25;
                                    r3 = tc_call(0x8025903cu, &a);
                                    f1 = tc_lastf();
                                    r24 = r3;
                                    if ((s32)r3 < 0) {
                                        fl_ = 2u;
                                        fl_ = 4u;
                                        fl_ = 8u;
                                        break;
                                    }
                                    r25 = 0x817fdbb0u;
                                    fl_ = 9u;
                                    break;
                                }
                                a.r[0] = param_4;
                                a.r[1] = 1u;
                                r3 = tc_call(0x802550f0u, &a);
                                f1 = tc_lastf();
                                r25 = rd32(r3);
                                if (r25 == 0u) {
                                    r25 = 0x8038f24cu;
                                }
                                if ((u32)rd8(0x817fdba3u) == 0u) {
                                    if ((u32)rd8(0x817fdba2u) == 0u) {
                                        a.r[0] = r25;
                                        r3 = tc_call(0x8025e7a4u, &a);
                                        f1 = tc_lastf();
                                        r24 = r3;
                                        fl_ = 9u;
                                        break;
                                    }
                                    r24 = rd32(0x817fdbacu);
                                    a.r[0] = r25;
                                    a.r[1] = 0u;
                                    a.r[2] = r24;
                                    r3 = tc_call(0x8025c538u, &a);
                                    f1 = tc_lastf();
                                    if (r3 == 0u) {
                                        fl_ = 9u;
                                        break;
                                    }
                                    r3 = r3 - r25;
                                    r24 = (u32)((s32)(((r3 >> 0x1fu) & 1u) + r3) >> 1);
                                    fl_ = 9u;
                                    break;
                                }
                                r3 = (u32)rd16(r25);
                                r25 = r25 + 2u;
                                r24 = r3 & 0xffu;
                                if ((u32)rd8(0x817fdba2u) == 0u) {
                                    fl_ = 9u;
                                    break;
                                }
                                r0 = rd32(0x817fdbacu);
                                if ((s32)r24 <= (s32)r0) {
                                    fl_ = 9u;
                                    break;
                                }
                                r24 = r0;
                                fl_ = 9u;
                                break;
                            }
                            fl_ = 5u;
                            fl_ = 8u;
                            break;
                        }
                        if ((s32)r4 >= 110) {
                            a.r[0] = param_4;
                            a.r[1] = 1u;
                            r3 = tc_call(0x802550f0u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            r0 = (u32)rd8(0x817fdba4u);
                            r25 = rd32(r3);
                            if (r0 > 8u) {
                                fl_ = 6u;
                                fl_ = 8u;
                                break;
                            }
                            r0 = (r0 << 2u) & 0xfffffffcu;
                            r3 = rd32(r0 - 0x7fc70e2cu);
                            a.r[0] = r3;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.f[0] = f1;
                            r3 = tc_call(r3, &a);
                            return (s32)r3;
                        }
                        if ((s32)r4 >= 106) {
                            fl_ = 7u;
                            fl_ = 8u;
                            break;
                        }
                        break;
                    }
                }
            } else {
                c0lt = (s32)r4 < 88;
                if (r4 != 0x58u) {
                    do {
                        if (!c0lt) {
                            c0lt = (s32)r4 < 99;
                            if (r4 == 0x63u) {
                                r25 = 0x817fdbb0u;
                                if ((u32)rd8(0x817fdba4u) != 5u) {
                                    a.r[0] = param_4;
                                    a.r[1] = 1u;
                                    r3 = tc_call(0x802550f0u, &a);
                                    wr8(0x817fdb38u, (u8)rd32(r3));
                                    r3 = tc_call(0x80258fbcu, &a);
                                    f1 = tc_lastf();
                                    r24 = r3;
                                    fl_ = 9u;
                                    fl_ = 10u;
                                    break;
                                }
                                a.r[0] = param_4;
                                a.r[1] = 1u;
                                r3 = tc_call(0x802550f0u, &a);
                                f1 = tc_lastf();
                                r24 = 1u;
                                wr16(0x817fdbb0u, (u16)rd32(r3));
                                fl_ = 9u;
                                fl_ = 10u;
                                break;
                            }
                            if (!c0lt) {
                                if ((s32)r4 >= 101) break;
                                fl_ = 11u;
                                break;
                            }
                            if (r4 != 0x61u) {
                                fl_ = 12u;
                                break;
                            }
                        } else {
                            c0lt = (s32)r4 < 65;
                            if (r4 != 0x41u) {
                                if (!c0lt) {
                                    if ((s32)r4 >= 72) {
                                        fl_ = 13u;
                                        break;
                                    }
                                    if ((s32)r4 >= 69) break;
                                    fl_ = 14u;
                                    break;
                                }
                                if (r4 == 0x25u) {
                                    wr16(0x817fdbb0u, 0x25u);
                                    r25 = 0x817fdbb0u;
                                    r24 = 1u;
                                    fl_ = 15u;
                                    break;
                                }
                                fl_ = 16u;
                                break;
                            }
                        }
                        if ((u32)rd8(0x817fdba4u) != 9u) {
                            a.r[0] = param_4;
                            a.r[1] = 3u;
                            r3 = tc_call(0x802550f0u, &a);
                            f1 = rdf64(r3);
                        } else {
                            a.r[0] = param_4;
                            a.r[1] = 3u;
                            r3 = tc_call(0x802550f0u, &a);
                            f1 = rdf64(r3);
                        }
                        r6 = rd32(0x817fdba4u);
                        r5 = rd32(0x817fdba8u);
                        r0 = rd32(0x817fdbacu);
                        wr32(0x817fdb40u, rd32(0x817fdba0u));
                        wr32(0x817fdb44u, r6);
                        wr32(0x817fdb48u, r5);
                        wr32(0x817fdb4cu, r0);
                        a.f[0] = f1;
                        a.r[0] = 0x817fdfb0u;
                        a.r[1] = 0x817fdb40u;
                        r3 = tc_call(0x8025d000u, &a);
                        f1 = tc_lastf();
                        r25 = r3;
                        if (r3 == 0u) {
                            fl_ = 13u;
                            break;
                        }
                        r3 = 0x817fdfaeu - r3;
                        r24 = (u32)((s32)(((r3 >> 0x1fu) & 1u) + r3) >> 1);
                        fl_ = 15u;
                        break;
                    } while (0);
                    if (fl_ == 16u) {
                        fl_ = 0u;
                        fl_ = 17u;
                        break;
                    }
                    if (fl_ == 15u) {
                        fl_ = 0u;
                        fl_ = 9u;
                        break;
                    }
                    if (fl_ == 14u) {
                        fl_ = 0u;
                        fl_ = 18u;
                        break;
                    }
                    if (fl_ == 13u) {
                        fl_ = 0u;
                        fl_ = 19u;
                        break;
                    }
                    if (fl_ == 12u) {
                        fl_ = 0u;
                        fl_ = 20u;
                        break;
                    }
                    if (fl_ == 11u) {
                        fl_ = 0u;
                        break;
                    }
                    if (fl_ == 10u) {
                        fl_ = 0u;
                        break;
                    }
                    if ((u32)rd8(0x817fdba4u) != 9u) {
                        a.r[0] = param_4;
                        a.r[1] = 3u;
                        r3 = tc_call(0x802550f0u, &a);
                        f1 = rdf64(r3);
                    } else {
                        a.r[0] = param_4;
                        a.r[1] = 3u;
                        r3 = tc_call(0x802550f0u, &a);
                        f1 = rdf64(r3);
                    }
                    r6 = rd32(0x817fdba4u);
                    r5 = rd32(0x817fdba8u);
                    r0 = rd32(0x817fdbacu);
                    wr32(0x817fdb50u, rd32(0x817fdba0u));
                    wr32(0x817fdb54u, r6);
                    wr32(0x817fdb58u, r5);
                    wr32(0x817fdb5cu, r0);
                    a.f[0] = f1;
                    a.r[0] = 0x817fdfb0u;
                    a.r[1] = 0x817fdb50u;
                    r3 = tc_call(0x8025d4f0u, &a);
                    f1 = tc_lastf();
                    r25 = r3;
                    if (r3 == 0u) {
                        fl_ = 19u;
                        break;
                    }
                    r3 = 0x817fdfaeu - r3;
                    r24 = (u32)((s32)(((r3 >> 0x1fu) & 1u) + r3) >> 1);
                    fl_ = 9u;
                    break;
                }
            }
            r0 = (u32)rd8(0x817fdba4u);
            if (r0 != 3u) {
                if (r0 != 4u) {
                    if (r0 != 6u) {
                        if (r0 != 7u) {
                            if (r0 != 8u) {
                                a.r[0] = param_4;
                                a.r[1] = 1u;
                                r3 = tc_call(0x802550f0u, &a);
                                r28 = rd32(r3);
                            } else {
                                a.r[0] = param_4;
                                a.r[1] = 1u;
                                r3 = tc_call(0x802550f0u, &a);
                                r28 = rd32(r3);
                            }
                        } else {
                            a.r[0] = param_4;
                            a.r[1] = 1u;
                            r3 = tc_call(0x802550f0u, &a);
                            r28 = rd32(r3);
                        }
                    } else {
                        a.r[0] = param_4;
                        a.r[1] = 2u;
                        r3 = tc_call(0x802550f0u, &a);
                        r27 = rd32(r3);
                        r26 = rd32(r3 + 4u);
                    }
                } else {
                    a.r[0] = param_4;
                    a.r[1] = 2u;
                    r3 = tc_call(0x802550f0u, &a);
                    r27 = rd32(r3);
                    r26 = rd32(r3 + 4u);
                }
            } else {
                a.r[0] = param_4;
                a.r[1] = 1u;
                r3 = tc_call(0x802550f0u, &a);
                r28 = rd32(r3);
            }
            r0 = (u32)rd8(0x817fdba4u);
            if (r0 == 2u) {
                r28 = r28 & 0xffffu;
            }
            if (r0 == 4u || r0 == 6u) {
                r8 = rd32(0x817fdba4u);
                r7 = rd32(0x817fdba8u);
                r0 = rd32(0x817fdbacu);
                wr32(0x817fdb70u, rd32(0x817fdba0u));
                wr32(0x817fdb74u, r8);
                wr32(0x817fdb78u, r7);
                wr32(0x817fdb7cu, r0);
                a.r[0] = r27;
                a.r[1] = r26;
                a.r[2] = 0x817fdfb0u;
                a.r[3] = 0x817fdb70u;
                r3 = tc_call(0x8025cd54u, &a);
                f1 = tc_lastf();
                r25 = r3;
                if (r3 == 0u) {
                    fl_ = 19u;
                    break;
                }
            } else {
                r7 = rd32(0x817fdba4u);
                r6 = rd32(0x817fdba8u);
                r0 = rd32(0x817fdbacu);
                wr32(0x817fdb60u, rd32(0x817fdba0u));
                wr32(0x817fdb64u, r7);
                wr32(0x817fdb68u, r6);
                wr32(0x817fdb6cu, r0);
                a.r[0] = r28;
                a.r[1] = 0x817fdfb0u;
                a.r[2] = 0x817fdb60u;
                r3 = tc_call(0x8025cb20u, &a);
                f1 = tc_lastf();
                r25 = r3;
                if (r3 == 0u) {
                    fl_ = 19u;
                    break;
                }
            }
            r3 = 0x817fdfaeu - r3;
            r24 = (u32)((s32)(((r3 >> 0x1fu) & 1u) + r3) >> 1);
            fl_ = 9u;
            break;
        } while (0);
        do {
            if (fl_ == 20u) {
                fl_ = 0u;
                fl_ = 21u;
                break;
            }
            if (fl_ == 19u) {
                fl_ = 0u;
                fl_ = 7u;
                break;
            }
            if (fl_ == 18u) {
                fl_ = 0u;
                fl_ = 22u;
                break;
            }
            if (fl_ == 17u) {
                fl_ = 0u;
                fl_ = 23u;
                break;
            }
            if (fl_ == 9u) {
                fl_ = 0u;
            } else {
                if (fl_ == 8u) {
                    fl_ = 0u;
                    break;
                }
                r0 = (u32)rd8(0x817fdba4u);
                if (r0 != 3u) {
                    if (r0 != 4u) {
                        if (r0 != 6u) {
                            if (r0 != 7u) {
                                if (r0 != 8u) {
                                    a.r[0] = param_4;
                                    a.r[1] = 1u;
                                    r3 = tc_call(0x802550f0u, &a);
                                    r28 = rd32(r3);
                                } else {
                                    a.r[0] = param_4;
                                    a.r[1] = 1u;
                                    r3 = tc_call(0x802550f0u, &a);
                                    r28 = rd32(r3);
                                }
                            } else {
                                a.r[0] = param_4;
                                a.r[1] = 1u;
                                r3 = tc_call(0x802550f0u, &a);
                                r28 = rd32(r3);
                            }
                        } else {
                            a.r[0] = param_4;
                            a.r[1] = 2u;
                            r3 = tc_call(0x802550f0u, &a);
                            r27 = rd32(r3);
                            r26 = rd32(r3 + 4u);
                        }
                    } else {
                        a.r[0] = param_4;
                        a.r[1] = 2u;
                        r3 = tc_call(0x802550f0u, &a);
                        r27 = rd32(r3);
                        r26 = rd32(r3 + 4u);
                    }
                } else {
                    a.r[0] = param_4;
                    a.r[1] = 1u;
                    r3 = tc_call(0x802550f0u, &a);
                    r28 = rd32(r3);
                }
                r0 = (u32)rd8(0x817fdba4u);
                if (r0 == 2u) {
                    r28 = (u32)(s16)r28;
                }
                if (r0 == 4u || r0 == 6u) {
                    r8 = rd32(0x817fdba4u);
                    r7 = rd32(0x817fdba8u);
                    r0 = rd32(0x817fdbacu);
                    wr32(0x817fdb90u, rd32(0x817fdba0u));
                    wr32(0x817fdb94u, r8);
                    wr32(0x817fdb98u, r7);
                    wr32(0x817fdb9cu, r0);
                    a.r[0] = r27;
                    a.r[1] = r26;
                    a.r[2] = 0x817fdfb0u;
                    a.r[3] = 0x817fdb90u;
                    r3 = tc_call(0x8025cd54u, &a);
                    f1 = tc_lastf();
                    r25 = r3;
                    if (r3 == 0u) {
                        fl_ = 7u;
                        break;
                    }
                } else {
                    r7 = rd32(0x817fdba4u);
                    r6 = rd32(0x817fdba8u);
                    r0 = rd32(0x817fdbacu);
                    wr32(0x817fdb80u, rd32(0x817fdba0u));
                    wr32(0x817fdb84u, r7);
                    wr32(0x817fdb88u, r6);
                    wr32(0x817fdb8cu, r0);
                    a.r[0] = r28;
                    a.r[1] = 0x817fdfb0u;
                    a.r[2] = 0x817fdb80u;
                    r3 = tc_call(0x8025cb20u, &a);
                    f1 = tc_lastf();
                    r25 = r3;
                    if (r3 == 0u) {
                        fl_ = 7u;
                        break;
                    }
                }
                r3 = 0x817fdfaeu - r3;
                r24 = (u32)((s32)(((r3 >> 0x1fu) & 1u) + r3) >> 1);
            }
        } while (0);
        if (fl_ == 23u) {
            fl_ = 0u;
            fl_ = 24u;
            break;
        }
        if (fl_ == 22u) {
            fl_ = 0u;
            fl_ = 25u;
            break;
        }
        if (fl_ == 21u) {
            fl_ = 0u;
            fl_ = 26u;
            break;
        }
        if (fl_ == 7u) {
            fl_ = 0u;
            fl_ = 2u;
            break;
        }
        if (fl_ == 6u) {
            fl_ = 0u;
            continue;
        }
        if (fl_ == 5u) {
            fl_ = 0u;
            fl_ = 27u;
            break;
        }
        if (fl_ == 4u) {
            fl_ = 0u;
            break;
        }
        r0 = (u32)rd8(0x817fdba0u);
        r29 = r24;
        if (r0 != 0u) {
            c0eq = r0 == 2u;
            r0 = 0x20u;
            if (c0eq) {
                r0 = 0x30u;
            }
            wr16(0x817fdb3cu, (u16)r0);
            r3 = (u32)rd16(r25);
            if ((r3 == 0x2bu || r3 == 0x2du || r3 == 0x20u) && r0 == 0x30u) {
                a.r[0] = param_2;
                a.r[1] = r25;
                a.r[2] = 1u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.f[0] = f1;
                r3 = tc_call(param_1, &a);
                f1 = tc_lastf();
                if (r3 == 0u) {
                    fl_ = 28u;
                    break;
                }
                r25 = r25 + 2u;
                r24 = r24 - 1u;
            }
            while ((s32)r29 < (s32)rd32(0x817fdba8u)) {
                a.r[0] = param_2;
                a.r[1] = 0x817fdb3cu;
                a.r[2] = 1u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.f[0] = f1;
                r3 = tc_call(param_1, &a);
                f1 = tc_lastf();
                if (r3 == 0u) {
                    r3 = 0xffffffffu;
                    return (s32)r3;
                }
                r29 = r29 + 1u;
            }
        }
        if (r24 != 0u) {
            a.r[0] = param_2;
            a.r[1] = r25;
            a.r[2] = r24;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.f[0] = f1;
            r3 = tc_call(param_1, &a);
            f1 = tc_lastf();
            if (r3 == 0u) {
                fl_ = 29u;
                break;
            }
        }
        if ((u32)rd8(0x817fdba0u) == 0u) {
            for (;;) {
                if ((s32)r29 >= (s32)rd32(0x817fdba8u)) {
                    fl_ = 31u;
                    break;
                }
                wr16(0x817fdb3au, 0x20u);
                a.r[0] = param_2;
                a.r[1] = 0x817fdb3au;
                a.r[2] = 1u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.f[0] = f1;
                r3 = tc_call(param_1, &a);
                f1 = tc_lastf();
                if (r3 == 0u) {
                    fl_ = 30u;
                    break;
                }
                r29 = r29 + 1u;
            }
            if (fl_ == 31u) {
                fl_ = 0u;
            } else if (fl_ == 30u) {
                fl_ = 0u;
                fl_ = 32u;
                break;
            }
        }
        r31 = r31 + r29;
    }
    do {
        if (fl_ == 34u) {
            fl_ = 0u;
            fl_ = 35u;
            fl_ = 36u;
            fl_ = 39u;
            fl_ = 41u;
            break;
        }
        if (fl_ == 33u) {
            fl_ = 0u;
            fl_ = 37u;
            fl_ = 39u;
            fl_ = 41u;
            break;
        }
        if (fl_ == 32u) {
            fl_ = 0u;
            fl_ = 40u;
            fl_ = 41u;
            break;
        }
        if (fl_ == 29u) {
            fl_ = 0u;
            fl_ = 38u;
            fl_ = 39u;
            fl_ = 41u;
            break;
        }
        if (fl_ == 28u) {
            fl_ = 0u;
            fl_ = 42u;
            break;
        }
        if (fl_ != 27u) {
            if (fl_ == 26u) {
                fl_ = 0u;
                break;
            }
            if (fl_ == 25u) {
                fl_ = 0u;
                fl_ = 43u;
                break;
            }
            if (fl_ == 24u) {
                fl_ = 0u;
                fl_ = 44u;
                break;
            }
            if (fl_ == 3u) {
                fl_ = 0u;
            } else {
                if (fl_ == 2u) {
                    fl_ = 0u;
                    fl_ = 45u;
                    break;
                }
                if (fl_ == 1u) {
                    fl_ = 0u;
                    fl_ = 46u;
                    break;
                }
            }
            if (r4 == 0xffffu) {
                fl_ = 45u;
                break;
            }
            fl_ = 45u;
            break;
        }
        fl_ = 0u;
        fl_ = 45u;
        break;
    } while (0);
    do {
        if (fl_ == 46u) {
            fl_ = 0u;
            fl_ = 47u;
            break;
        }
        if (fl_ == 45u) {
            fl_ = 0u;
            fl_ = 48u;
            break;
        }
        if (fl_ == 44u) {
            fl_ = 0u;
            fl_ = 49u;
            break;
        }
        if (fl_ != 43u) {
            if (fl_ == 42u) {
                fl_ = 0u;
                break;
            }
            if (fl_ == 41u) {
                fl_ = 0u;
                break;
            }
            fl_ = 48u;
            break;
        }
        fl_ = 0u;
        fl_ = 48u;
        break;
    } while (0);
    do {
        if (fl_ == 49u) {
            fl_ = 0u;
            fl_ = 50u;
            break;
        }
        if (fl_ == 48u) {
            fl_ = 0u;
            fl_ = 51u;
            break;
        }
        if (fl_ == 47u) {
            fl_ = 0u;
            fl_ = 52u;
            break;
        }
        if (fl_ != 40u) {
            if (fl_ == 39u) {
                fl_ = 0u;
                break;
            }
            r3 = 0xffffffffu;
            return (s32)r3;
        }
        fl_ = 0u;
    } while (0);
    do {
        if (fl_ != 52u) {
            if (fl_ == 51u) {
                fl_ = 0u;
            } else {
                if (fl_ != 50u) {
                    if (fl_ != 38u) {
                        if (fl_ == 37u) {
                            fl_ = 0u;
                            break;
                        }
                        if (fl_ == 36u) {
                            fl_ = 0u;
                            break;
                        }
                        r3 = 0xffffffffu;
                        return (s32)r3;
                    }
                    fl_ = 0u;
                    r3 = 0xffffffffu;
                    return (s32)r3;
                }
                fl_ = 0u;
            }
            a.r[0] = r29;
            r3 = tc_call(0x8025e7a4u, &a);
            f1 = tc_lastf();
            r31 = r31 + r3;
            if (r3 != 0u) {
                a.r[0] = param_2;
                a.r[1] = r29;
                a.r[2] = r3;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.f[0] = f1;
                r3 = tc_call(param_1, &a);
                if (r3 == 0u) {
                    r3 = 0xffffffffu;
                    return (s32)r3;
                }
            }
            r3 = r31;
            return (s32)r3;
        }
        fl_ = 0u;
        r3 = 0xffffffffu;
        return (s32)r3;
    } while (0);
    if (fl_ == 35u) {
        fl_ = 0u;
    } else {
        a.r[0] = r30;
        r3 = tc_call(0x8025e7a4u, &a);
        f1 = tc_lastf();
        r31 = r31 + r3;
        if (r3 != 0u) {
            a.r[0] = param_2;
            a.r[1] = r30;
            a.r[2] = r3;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.f[0] = f1;
            r3 = tc_call(param_1, &a);
            if (r3 == 0u) {
                r3 = 0xffffffffu;
                return (s32)r3;
            }
        }
    }
    r3 = r31;
    return (s32)r3;
}
