#include "tc_rt.h"

void fn_802c8414(u32 param_1, u32 param_r4)
{
    u32 c0eq = 0, ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    u32 r11 = 0, r12 = 0, r29 = 0, r30 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_r4;
    r3 = tc_call(0x802ca370u, &a);
    f1 = tc_lastf();
    r7 = 0u;
    r6 = param_1 + ((r3 << 2u) & 0xfffffffcu);
    r4 = rd32(r6 + 0x20u);
    if ((s32)r4 > 0) {
        r5 = rd32(param_1 + 0xcu);
        r7 = r5 + 1u;
        if (r3 == r7 || r3 == (r5 + 9u)) {
            r5 = param_1 + ((r7 << 2u) & 0xfffffffcu);
            wr32(r5 + 0x20u, rd32(r5 + 0x20u) - 1u);
            r5 = param_1 + (((rd32(param_1 + 0xcu) + 9u) << 2u) & 0xfffffffcu);
            wr32(r5 + 0x20u, rd32(r5 + 0x20u) - 1u);
        } else {
            wr32(r6 + 0x20u, r4 - 1u);
        }
    }
    r4 = rd32(param_1 + 0x14u);
    if (r4 == 2u && r3 != 0xffffffffu && rd32(r6 + 0x20u) == 0u) {
        r5 = rd32(param_1);
        if (r5 == 2u || (s32)r3 >= (s32)rd32(param_1 + 0xcu)) {
            r0 = r3 - rd32(param_1 + 0xcu);
            if (r0 <= 9u) {
                r0 = (r0 << 2u) & 0xfffffffcu;
                r3 = rd32(r0 - 0x7fc666a8u);
                sw_ = r3;
                switch (sw_) {
                case 0x802c8568u:
                    if (r5 != 0u) break;
                    c0eq = r4 == 2u;
                    r4 = 1u;
                    if (!c0eq || rd32(rd32(param_1 + 0x448u) + 0x14u) == 1u || rd32(rd32(param_1 + 0x424u) + 0x14u) == 1u) {
                        r4 = 0u;
                    }
                    if (r4 == 0u) {
                        wr32(param_1 + 0x6cu, 0xcu);
                        break;
                    }
                    r31 = rd32(param_1 + 0x448u);
                    a.r[0] = r31;
                    (void)tc_call(0x802bed24u, &a);
                    wr32(r31 + 0x14u, 1u);
                    wr32(param_1 + 0x74u, 0xcu);
                    wr32(param_1 + 0x6cu, 0u);
                    break;
                case 0x802c85dcu:
                    if (r5 != 0u) {
                        if (r5 != 1u) break;
                        r3 = 0x803486e8u;
                        r31 = 0u;
                        ctr = 0x25u;
                        for (;;) {
                            if (rd32(r3) == 5u && rd32(r3 + 4u) == 0x14u) {
                                fl_ = 3u;
                                break;
                            }
                            r31 = r31 + 1u;
                            if (rd32(r3 + 8u) == 5u && rd32(r3 + 0xcu) == 0x14u) {
                                fl_ = 1u;
                                break;
                            }
                            r3 = r3 + 0x10u;
                            r31 = r31 + 1u;
                            ctr = ctr - 1u;
                            if (ctr == 0u) {
                                fl_ = 2u;
                                break;
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
                            r31 = 0xffffffffu;
                            fl_ = 5u;
                            break;
                        } while (0);
                        if (fl_ == 5u) {
                            fl_ = 0u;
                        } else if (fl_ == 4u) {
                            fl_ = 0u;
                        }
                        r5 = 0x803486e8u;
                        r0 = 1u;
                        r8 = 0u;
                        ctr = 0x25u;
                        for (;;) {
                            if (rd32(r5) == 4u && rd32(r5 + 4u) == 2u) {
                                fl_ = 8u;
                                break;
                            }
                            r8 = r8 + 1u;
                            if (rd32(r5 + 8u) == 4u && rd32(r5 + 0xcu) == 2u) {
                                fl_ = 6u;
                                break;
                            }
                            r5 = r5 + 0x10u;
                            r8 = r8 + 1u;
                            ctr = ctr - 1u;
                            if (ctr == 0u) {
                                fl_ = 7u;
                                break;
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
                            r8 = 0xffffffffu;
                            fl_ = 10u;
                            break;
                        } while (0);
                        if (fl_ == 10u) {
                            fl_ = 0u;
                        } else if (fl_ == 9u) {
                            fl_ = 0u;
                        }
                        r5 = 0x803486e8u;
                        r7 = 0u;
                        ctr = 0x25u;
                        for (;;) {
                            if (rd32(r5) == 5u && rd32(r5 + 4u) == 3u) {
                                fl_ = 13u;
                                break;
                            }
                            r7 = r7 + 1u;
                            if (rd32(r5 + 8u) == 5u && rd32(r5 + 0xcu) == 3u) {
                                fl_ = 11u;
                                break;
                            }
                            r5 = r5 + 0x10u;
                            r7 = r7 + 1u;
                            ctr = ctr - 1u;
                            if (ctr == 0u) {
                                fl_ = 12u;
                                break;
                            }
                        }
                        do {
                            if (fl_ == 13u) {
                                fl_ = 0u;
                                fl_ = 14u;
                                break;
                            }
                            if (fl_ == 12u) {
                                fl_ = 0u;
                            } else if (fl_ == 11u) {
                                fl_ = 0u;
                                break;
                            }
                            r7 = 0xffffffffu;
                            fl_ = 15u;
                            break;
                        } while (0);
                        if (fl_ == 15u) {
                            fl_ = 0u;
                        } else if (fl_ == 14u) {
                            fl_ = 0u;
                        }
                        r5 = 0x803486e8u;
                        r6 = 0u;
                        ctr = 0x25u;
                        for (;;) {
                            if (rd32(r5) == 4u && rd32(r5 + 4u) == 0x13u) {
                                fl_ = 18u;
                                break;
                            }
                            r6 = r6 + 1u;
                            if (rd32(r5 + 8u) == 4u && rd32(r5 + 0xcu) == 0x13u) {
                                fl_ = 16u;
                                break;
                            }
                            r5 = r5 + 0x10u;
                            r6 = r6 + 1u;
                            ctr = ctr - 1u;
                            if (ctr == 0u) {
                                fl_ = 17u;
                                break;
                            }
                        }
                        do {
                            if (fl_ == 18u) {
                                fl_ = 0u;
                                fl_ = 19u;
                                break;
                            }
                            if (fl_ == 17u) {
                                fl_ = 0u;
                            } else if (fl_ == 16u) {
                                fl_ = 0u;
                                break;
                            }
                            r6 = 0xffffffffu;
                            fl_ = 20u;
                            break;
                        } while (0);
                        if (fl_ == 20u) {
                            fl_ = 0u;
                        } else if (fl_ == 19u) {
                            fl_ = 0u;
                        }
                        r9 = 0x803486e8u;
                        r5 = 0u;
                        ctr = 0x25u;
                        for (;;) {
                            if (rd32(r9) == 5u && rd32(r9 + 4u) == 0x14u) {
                                fl_ = 23u;
                                break;
                            }
                            r5 = r5 + 1u;
                            if (rd32(r9 + 8u) == 5u && rd32(r9 + 0xcu) == 0x14u) {
                                fl_ = 21u;
                                break;
                            }
                            r9 = r9 + 0x10u;
                            r5 = r5 + 1u;
                            ctr = ctr - 1u;
                            if (ctr == 0u) {
                                fl_ = 22u;
                                break;
                            }
                        }
                        do {
                            if (fl_ == 23u) {
                                fl_ = 0u;
                                fl_ = 24u;
                                break;
                            }
                            if (fl_ == 22u) {
                                fl_ = 0u;
                            } else if (fl_ == 21u) {
                                fl_ = 0u;
                                break;
                            }
                            r5 = 0xffffffffu;
                            fl_ = 25u;
                            break;
                        } while (0);
                        if (fl_ == 25u) {
                            fl_ = 0u;
                        } else if (fl_ == 24u) {
                            fl_ = 0u;
                        }
                        do {
                            if ((r4 == 2u && rd32(rd32(param_1 + ((r8 << 2u) & 0xfffffffcu) + 0x2f0u) + 0x14u) != 1u && rd32(rd32(param_1 + ((r7 << 2u) & 0xfffffffcu) + 0x2f0u) + 0x14u) != 1u && rd32(rd32(param_1 + ((r6 << 2u) & 0xfffffffcu) + 0x2f0u) + 0x14u) != 1u) && rd32(rd32(param_1 + ((r5 << 2u) & 0xfffffffcu) + 0x2f0u) + 0x14u) != 1u) break;
                            r0 = 0u;
                        } while (0);
                        if (r0 == 0u) {
                            wr32(param_1 + 0x70u, r31);
                            break;
                        }
                        r29 = rd32(param_1 + ((r31 << 2u) & 0xfffffffcu) + 0x2f0u);
                        a.r[0] = r29;
                        (void)tc_call(0x802bed24u, &a);
                        wr32(r29 + 0x14u, 1u);
                        wr32(param_1 + 0x78u, r31);
                        wr32(param_1 + 0x70u, 0u);
                        break;
                    }
                    r3 = 0x803486e8u;
                    r31 = 0u;
                    ctr = 0x25u;
                    for (;;) {
                        if (rd32(r3) == 5u && rd32(r3 + 4u) == 3u) {
                            fl_ = 28u;
                            break;
                        }
                        r31 = r31 + 1u;
                        if (rd32(r3 + 8u) == 5u && rd32(r3 + 0xcu) == 3u) {
                            fl_ = 27u;
                            break;
                        }
                        r3 = r3 + 0x10u;
                        r31 = r31 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            r31 = 0xffffffffu;
                            fl_ = 26u;
                            break;
                        }
                    }
                    if (fl_ == 28u) {
                        fl_ = 0u;
                    } else if (fl_ == 27u) {
                        fl_ = 0u;
                    } else if (fl_ == 26u) {
                        fl_ = 0u;
                    }
                    r5 = 0x803486e8u;
                    r0 = 1u;
                    r8 = 0u;
                    ctr = 0x25u;
                    for (;;) {
                        if (rd32(r5) == 4u && rd32(r5 + 4u) == 2u) {
                            fl_ = 31u;
                            break;
                        }
                        r8 = r8 + 1u;
                        if (rd32(r5 + 8u) == 4u && rd32(r5 + 0xcu) == 2u) {
                            fl_ = 29u;
                            break;
                        }
                        r5 = r5 + 0x10u;
                        r8 = r8 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            fl_ = 30u;
                            break;
                        }
                    }
                    do {
                        if (fl_ == 31u) {
                            fl_ = 0u;
                            fl_ = 32u;
                            break;
                        }
                        if (fl_ == 30u) {
                            fl_ = 0u;
                        } else if (fl_ == 29u) {
                            fl_ = 0u;
                            break;
                        }
                        r8 = 0xffffffffu;
                        fl_ = 33u;
                        break;
                    } while (0);
                    if (fl_ == 33u) {
                        fl_ = 0u;
                    } else if (fl_ == 32u) {
                        fl_ = 0u;
                    }
                    r5 = 0x803486e8u;
                    r7 = 0u;
                    ctr = 0x25u;
                    for (;;) {
                        if (rd32(r5) == 5u && rd32(r5 + 4u) == 3u) {
                            fl_ = 36u;
                            break;
                        }
                        r7 = r7 + 1u;
                        if (rd32(r5 + 8u) == 5u && rd32(r5 + 0xcu) == 3u) {
                            fl_ = 34u;
                            break;
                        }
                        r5 = r5 + 0x10u;
                        r7 = r7 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            fl_ = 35u;
                            break;
                        }
                    }
                    do {
                        if (fl_ == 36u) {
                            fl_ = 0u;
                            fl_ = 37u;
                            break;
                        }
                        if (fl_ == 35u) {
                            fl_ = 0u;
                        } else if (fl_ == 34u) {
                            fl_ = 0u;
                            break;
                        }
                        r7 = 0xffffffffu;
                        fl_ = 38u;
                        break;
                    } while (0);
                    if (fl_ == 38u) {
                        fl_ = 0u;
                    } else if (fl_ == 37u) {
                        fl_ = 0u;
                    }
                    r5 = 0x803486e8u;
                    r6 = 0u;
                    ctr = 0x25u;
                    for (;;) {
                        if (rd32(r5) == 4u && rd32(r5 + 4u) == 0x13u) {
                            fl_ = 41u;
                            break;
                        }
                        r6 = r6 + 1u;
                        if (rd32(r5 + 8u) == 4u && rd32(r5 + 0xcu) == 0x13u) {
                            fl_ = 39u;
                            break;
                        }
                        r5 = r5 + 0x10u;
                        r6 = r6 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            fl_ = 40u;
                            break;
                        }
                    }
                    do {
                        if (fl_ == 41u) {
                            fl_ = 0u;
                            fl_ = 42u;
                            break;
                        }
                        if (fl_ == 40u) {
                            fl_ = 0u;
                        } else if (fl_ == 39u) {
                            fl_ = 0u;
                            break;
                        }
                        r6 = 0xffffffffu;
                        fl_ = 43u;
                        break;
                    } while (0);
                    if (fl_ == 43u) {
                        fl_ = 0u;
                    } else if (fl_ == 42u) {
                        fl_ = 0u;
                    }
                    r9 = 0x803486e8u;
                    r5 = 0u;
                    ctr = 0x25u;
                    for (;;) {
                        if (rd32(r9) == 5u && rd32(r9 + 4u) == 0x14u) {
                            fl_ = 46u;
                            break;
                        }
                        r5 = r5 + 1u;
                        if (rd32(r9 + 8u) == 5u && rd32(r9 + 0xcu) == 0x14u) {
                            fl_ = 44u;
                            break;
                        }
                        r9 = r9 + 0x10u;
                        r5 = r5 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            fl_ = 45u;
                            break;
                        }
                    }
                    do {
                        if (fl_ == 46u) {
                            fl_ = 0u;
                            fl_ = 47u;
                            break;
                        }
                        if (fl_ == 45u) {
                            fl_ = 0u;
                        } else if (fl_ == 44u) {
                            fl_ = 0u;
                            break;
                        }
                        r5 = 0xffffffffu;
                        fl_ = 48u;
                        break;
                    } while (0);
                    if (fl_ == 48u) {
                        fl_ = 0u;
                    } else if (fl_ == 47u) {
                        fl_ = 0u;
                    }
                    do {
                        if ((r4 == 2u && rd32(rd32(param_1 + ((r8 << 2u) & 0xfffffffcu) + 0x2f0u) + 0x14u) != 1u && rd32(rd32(param_1 + ((r7 << 2u) & 0xfffffffcu) + 0x2f0u) + 0x14u) != 1u && rd32(rd32(param_1 + ((r6 << 2u) & 0xfffffffcu) + 0x2f0u) + 0x14u) != 1u) && rd32(rd32(param_1 + ((r5 << 2u) & 0xfffffffcu) + 0x2f0u) + 0x14u) != 1u) break;
                        r0 = 0u;
                    } while (0);
                    if (r0 == 0u) {
                        wr32(param_1 + 0x70u, r31);
                        break;
                    }
                    r29 = rd32(param_1 + ((r31 << 2u) & 0xfffffffcu) + 0x2f0u);
                    a.r[0] = r29;
                    (void)tc_call(0x802bed24u, &a);
                    wr32(r29 + 0x14u, 1u);
                    wr32(param_1 + 0x78u, r31);
                    wr32(param_1 + 0x70u, 0u);
                    break;
                case 0x802c8b04u:
                    if (r5 != 1u) break;
                    r4 = 0x803486e8u;
                    r3 = 0u;
                    ctr = 0x25u;
                    for (;;) {
                        if (rd32(r4) == 6u && rd32(r4 + 4u) == 7u) {
                            fl_ = 51u;
                            break;
                        }
                        r3 = r3 + 1u;
                        if (rd32(r4 + 8u) == 6u && rd32(r4 + 0xcu) == 7u) {
                            fl_ = 49u;
                            break;
                        }
                        r4 = r4 + 0x10u;
                        r3 = r3 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            fl_ = 50u;
                            break;
                        }
                    }
                    do {
                        if (fl_ == 51u) {
                            fl_ = 0u;
                            fl_ = 52u;
                            break;
                        }
                        if (fl_ == 50u) {
                            fl_ = 0u;
                        } else if (fl_ == 49u) {
                            fl_ = 0u;
                            break;
                        }
                        r3 = 0xffffffffu;
                        fl_ = 53u;
                        break;
                    } while (0);
                    if (fl_ == 53u) {
                        fl_ = 0u;
                    } else if (fl_ == 52u) {
                        fl_ = 0u;
                    }
                    r3 = param_1 + ((r3 << 2u) & 0xfffffffcu);
                    r29 = rd32(r3 + 0x2f0u);
                    a.r[0] = r29;
                    (void)tc_call(0x802bed24u, &a);
                    wr32(r29 + 0x14u, 1u);
                    break;
                case 0x802c8b8cu:
                    if (r5 != 1u) break;
                    r4 = 0x803486e8u;
                    r3 = 0u;
                    ctr = 0x25u;
                    for (;;) {
                        if (rd32(r4) == 7u && rd32(r4 + 4u) == 7u) {
                            fl_ = 56u;
                            break;
                        }
                        r3 = r3 + 1u;
                        if (rd32(r4 + 8u) == 7u && rd32(r4 + 0xcu) == 7u) {
                            fl_ = 54u;
                            break;
                        }
                        r4 = r4 + 0x10u;
                        r3 = r3 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            fl_ = 55u;
                            break;
                        }
                    }
                    do {
                        if (fl_ == 56u) {
                            fl_ = 0u;
                            fl_ = 57u;
                            break;
                        }
                        if (fl_ == 55u) {
                            fl_ = 0u;
                        } else if (fl_ == 54u) {
                            fl_ = 0u;
                            break;
                        }
                        r3 = 0xffffffffu;
                        fl_ = 58u;
                        break;
                    } while (0);
                    if (fl_ == 58u) {
                        fl_ = 0u;
                    } else if (fl_ == 57u) {
                        fl_ = 0u;
                    }
                    r3 = param_1 + ((r3 << 2u) & 0xfffffffcu);
                    r29 = rd32(r3 + 0x2f0u);
                    a.r[0] = r29;
                    (void)tc_call(0x802bed24u, &a);
                    wr32(r29 + 0x14u, 1u);
                    break;
                case 0x802c8c14u:
                    if (r5 != 1u) break;
                    r4 = 0x803486e8u;
                    r3 = 0u;
                    ctr = 0x25u;
                    for (;;) {
                        if (rd32(r4) == 8u && rd32(r4 + 4u) == 7u) {
                            fl_ = 61u;
                            break;
                        }
                        r3 = r3 + 1u;
                        if (rd32(r4 + 8u) == 8u && rd32(r4 + 0xcu) == 7u) {
                            fl_ = 59u;
                            break;
                        }
                        r4 = r4 + 0x10u;
                        r3 = r3 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            fl_ = 60u;
                            break;
                        }
                    }
                    do {
                        if (fl_ == 61u) {
                            fl_ = 0u;
                            fl_ = 62u;
                            break;
                        }
                        if (fl_ == 60u) {
                            fl_ = 0u;
                        } else if (fl_ == 59u) {
                            fl_ = 0u;
                            break;
                        }
                        r3 = 0xffffffffu;
                        fl_ = 63u;
                        break;
                    } while (0);
                    if (fl_ == 63u) {
                        fl_ = 0u;
                    } else if (fl_ == 62u) {
                        fl_ = 0u;
                    }
                    r3 = param_1 + ((r3 << 2u) & 0xfffffffcu);
                    r29 = rd32(r3 + 0x2f0u);
                    a.r[0] = r29;
                    (void)tc_call(0x802bed24u, &a);
                    wr32(r29 + 0x14u, 1u);
                    break;
                case 0x802c8c9cu:
                    if (r5 != 1u) break;
                    r4 = 0x803486e8u;
                    r3 = 0u;
                    ctr = 0x25u;
                    for (;;) {
                        if (rd32(r4) == 9u && rd32(r4 + 4u) == 7u) {
                            fl_ = 66u;
                            break;
                        }
                        r3 = r3 + 1u;
                        if (rd32(r4 + 8u) == 9u && rd32(r4 + 0xcu) == 7u) {
                            fl_ = 64u;
                            break;
                        }
                        r4 = r4 + 0x10u;
                        r3 = r3 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            fl_ = 65u;
                            break;
                        }
                    }
                    do {
                        if (fl_ == 66u) {
                            fl_ = 0u;
                            fl_ = 67u;
                            break;
                        }
                        if (fl_ == 65u) {
                            fl_ = 0u;
                        } else if (fl_ == 64u) {
                            fl_ = 0u;
                            break;
                        }
                        r3 = 0xffffffffu;
                        fl_ = 68u;
                        break;
                    } while (0);
                    if (fl_ == 68u) {
                        fl_ = 0u;
                    } else if (fl_ == 67u) {
                        fl_ = 0u;
                    }
                    r3 = param_1 + ((r3 << 2u) & 0xfffffffcu);
                    r29 = rd32(r3 + 0x2f0u);
                    a.r[0] = r29;
                    (void)tc_call(0x802bed24u, &a);
                    wr32(r29 + 0x14u, 1u);
                    break;
                case 0x802c8d24u:
                    if (r5 != 1u) break;
                    r4 = 0x803486e8u;
                    r3 = 0u;
                    ctr = 0x25u;
                    for (;;) {
                        if (rd32(r4) == 0xau && rd32(r4 + 4u) == 7u) {
                            fl_ = 71u;
                            break;
                        }
                        r3 = r3 + 1u;
                        if (rd32(r4 + 8u) == 0xau && rd32(r4 + 0xcu) == 7u) {
                            fl_ = 69u;
                            break;
                        }
                        r4 = r4 + 0x10u;
                        r3 = r3 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            fl_ = 70u;
                            break;
                        }
                    }
                    do {
                        if (fl_ == 71u) {
                            fl_ = 0u;
                            fl_ = 72u;
                            break;
                        }
                        if (fl_ == 70u) {
                            fl_ = 0u;
                        } else if (fl_ == 69u) {
                            fl_ = 0u;
                            break;
                        }
                        r3 = 0xffffffffu;
                        fl_ = 73u;
                        break;
                    } while (0);
                    if (fl_ == 73u) {
                        fl_ = 0u;
                    } else if (fl_ == 72u) {
                        fl_ = 0u;
                    }
                    r3 = param_1 + ((r3 << 2u) & 0xfffffffcu);
                    r29 = rd32(r3 + 0x2f0u);
                    a.r[0] = r29;
                    (void)tc_call(0x802bed24u, &a);
                    wr32(r29 + 0x14u, 1u);
                    break;
                case 0x802c8dacu:
                    if (r5 != 2u) break;
                    r4 = 0x803486e8u;
                    r3 = 0u;
                    ctr = 0x25u;
                    for (;;) {
                        if (rd32(r4) == 0x11u && rd32(r4 + 4u) == 0xcu) {
                            fl_ = 76u;
                            break;
                        }
                        r3 = r3 + 1u;
                        if (rd32(r4 + 8u) == 0x11u && rd32(r4 + 0xcu) == 0xcu) {
                            fl_ = 74u;
                            break;
                        }
                        r4 = r4 + 0x10u;
                        r3 = r3 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            fl_ = 75u;
                            break;
                        }
                    }
                    do {
                        if (fl_ == 76u) {
                            fl_ = 0u;
                            fl_ = 77u;
                            break;
                        }
                        if (fl_ == 75u) {
                            fl_ = 0u;
                        } else if (fl_ == 74u) {
                            fl_ = 0u;
                            break;
                        }
                        r3 = 0xffffffffu;
                        fl_ = 78u;
                        break;
                    } while (0);
                    if (fl_ == 78u) {
                        fl_ = 0u;
                    } else if (fl_ == 77u) {
                        fl_ = 0u;
                    }
                    r3 = param_1 + ((r3 << 2u) & 0xfffffffcu);
                    r29 = rd32(r3 + 0x2f0u);
                    a.r[0] = r29;
                    (void)tc_call(0x802bed24u, &a);
                    wr32(r29 + 0x14u, 1u);
                    break;
                case 0x802c8e34u:
                    if (r5 != 2u) break;
                    r4 = 0x803486e8u;
                    r3 = 0u;
                    ctr = 0x25u;
                    for (;;) {
                        if (rd32(r4) == 0x12u && rd32(r4 + 4u) == 0xcu) {
                            fl_ = 81u;
                            break;
                        }
                        r3 = r3 + 1u;
                        if (rd32(r4 + 8u) == 0x12u && rd32(r4 + 0xcu) == 0xcu) {
                            fl_ = 79u;
                            break;
                        }
                        r4 = r4 + 0x10u;
                        r3 = r3 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            fl_ = 80u;
                            break;
                        }
                    }
                    do {
                        if (fl_ == 81u) {
                            fl_ = 0u;
                            fl_ = 82u;
                            break;
                        }
                        if (fl_ == 80u) {
                            fl_ = 0u;
                        } else if (fl_ == 79u) {
                            fl_ = 0u;
                            break;
                        }
                        r3 = 0xffffffffu;
                        fl_ = 83u;
                        break;
                    } while (0);
                    if (fl_ == 83u) {
                        fl_ = 0u;
                    } else if (fl_ == 82u) {
                        fl_ = 0u;
                    }
                    r3 = param_1 + ((r3 << 2u) & 0xfffffffcu);
                    r29 = rd32(r3 + 0x2f0u);
                    a.r[0] = r29;
                    (void)tc_call(0x802bed24u, &a);
                    wr32(r29 + 0x14u, 1u);
                    break;
                default:
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(sw_, &a);
                    r0 = 0u;
                    r4 = tc_lastr4();
                    r5 = 0u;
                    r6 = 0u;
                    r7 = 0u;
                    r8 = 0u;
                    r9 = 0u;
                    r10 = 0u;
                    r11 = 0u;
                    r12 = 0u;
                    f0 = 0.0;
                    f2 = 0.0;
                    f3 = 0.0;
                    f4 = 0.0;
                    f5 = 0.0;
                    f6 = 0.0;
                    f7 = 0.0;
                    f8 = 0.0;
                    f9 = 0.0;
                    f10 = 0.0;
                    f11 = 0.0;
                    f12 = 0.0;
                    f13 = 0.0;
                    ctr = 0u;
                    return;
                }
            }
        } else {
            r0 = rd32(param_1 + 0x10u);
            r5 = 0x80348688u;
            r4 = 0u;
            ctr = r0;
            do {
                if ((s32)r0 > 0) {
                    for (;;) {
                        if (r3 == rd32(r5) && rd32(r5 + 4u) == 2u) {
                            fl_ = 85u;
                            break;
                        }
                        r5 = r5 + 8u;
                        r4 = r4 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            fl_ = 84u;
                            break;
                        }
                    }
                    if (fl_ == 85u) {
                        fl_ = 0u;
                    } else if (fl_ == 84u) {
                        fl_ = 0u;
                        break;
                    }
                    fl_ = 86u;
                    break;
                }
            } while (0);
            if (fl_ == 86u) {
                fl_ = 0u;
            } else {
                r4 = 0xffffffffu;
            }
            r30 = rd32(param_1 + ((r4 << 2u) & 0xfffffffcu) + 0x2c0u);
            a.r[0] = r30;
            (void)tc_call(0x802bed24u, &a);
            wr32(r30 + 0x14u, 1u);
        }
    }
    return;
}
