#include "tc_rt.h"

void fn_800ddc64(s32 param_1)
{
    u32 fl_ = 0, r0 = 0, r1 = 0, r3 = 0, r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r11 = 0, r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r1 = 0x817fe000u;
    for (;;) {
        wr32(r1 - 0x10u, r1);
        r1 = r1 - 0x10u;
        r6 = 0u;
        r8 = 0u;
        wr32(r1 + 0xcu, r31);
        r31 = 1u;
        wr32(r1 + 8u, 0u);
        for (;;) {
            r7 = 0u;
            r9 = 0u;
            r10 = 0u;
            for (;;) {
                do {
                    if (r6 == 0u) {
                        for (;;) {
                            if (r7 > 0x10u) {
                                fl_ = 1u;
                                break;
                            }
                            for (;;) {
                                r11 = rd32(r10 - 0x7fca9344u);
                                if (r11 == 0x800ddc64u) {
                                    fl_ = 2u;
                                    break;
                                }
                                if (r11 == 0x817ff000u) {
                                    return;
                                }
                                if (r11 == 0x800ddf58u) {
                                    fl_ = 3u;
                                    break;
                                }
                                if (r11 == 0x800ddf48u) {
                                    fl_ = 4u;
                                    break;
                                }
                                if (r11 == 0x800ddf34u) {
                                    fl_ = 5u;
                                    break;
                                }
                                if (r11 == 0x800ddf28u) {
                                    fl_ = 6u;
                                    break;
                                }
                                if (r11 == 0x800ddf18u) {
                                    fl_ = 7u;
                                    break;
                                }
                                if (r11 == 0x800ddf10u) {
                                    fl_ = 8u;
                                    break;
                                }
                                if (r11 == 0x800ddf08u) {
                                    fl_ = 9u;
                                    break;
                                }
                                if (r11 == 0x800ddf04u) {
                                    fl_ = 10u;
                                    break;
                                }
                                if (r11 == 0x800ddefcu) {
                                    fl_ = 11u;
                                    break;
                                }
                                if (r11 == 0x800ddef0u) {
                                    fl_ = 12u;
                                    break;
                                }
                                if (r11 != 0x800ddca8u) {
                                    fl_ = 13u;
                                    break;
                                }
                            }
                            if (fl_ == 13u) {
                                fl_ = 0u;
                            } else {
                                if (fl_ == 12u) {
                                    fl_ = 0u;
                                    fl_ = 14u;
                                    break;
                                }
                                if (fl_ == 11u) {
                                    fl_ = 0u;
                                    fl_ = 15u;
                                    break;
                                }
                                if (fl_ == 10u) {
                                    fl_ = 0u;
                                    fl_ = 16u;
                                    break;
                                }
                                if (fl_ == 9u) {
                                    fl_ = 0u;
                                    fl_ = 17u;
                                    break;
                                }
                                if (fl_ == 8u) {
                                    fl_ = 0u;
                                    fl_ = 18u;
                                    break;
                                }
                                if (fl_ == 7u) {
                                    fl_ = 0u;
                                    fl_ = 19u;
                                    break;
                                }
                                if (fl_ == 6u) {
                                    fl_ = 0u;
                                    fl_ = 20u;
                                    break;
                                }
                                if (fl_ == 5u) {
                                    fl_ = 0u;
                                    fl_ = 21u;
                                    break;
                                }
                                if (fl_ == 4u) {
                                    fl_ = 0u;
                                    fl_ = 22u;
                                    break;
                                }
                                if (fl_ == 3u) {
                                    fl_ = 0u;
                                    fl_ = 23u;
                                    break;
                                }
                                if (fl_ == 2u) {
                                    fl_ = 0u;
                                    fl_ = 24u;
                                    break;
                                }
                            }
                            if (r11 != 0x800ddca0u) {
                                if (r11 == 0x800ddc98u) {
                                    fl_ = 25u;
                                    break;
                                }
                                fl_ = 26u;
                                break;
                            }
                        }
                        do {
                            if (fl_ == 26u) {
                                fl_ = 0u;
                                fl_ = 27u;
                                fl_ = 31u;
                                break;
                            }
                            if (fl_ == 25u) {
                                fl_ = 0u;
                                fl_ = 32u;
                                break;
                            }
                            if (fl_ == 24u) {
                                fl_ = 0u;
                                fl_ = 28u;
                                fl_ = 31u;
                                break;
                            }
                            if (fl_ == 23u) {
                                fl_ = 0u;
                                fl_ = 29u;
                                fl_ = 31u;
                                break;
                            }
                            if (fl_ == 22u) {
                                fl_ = 0u;
                                fl_ = 30u;
                                fl_ = 31u;
                                break;
                            }
                            if (fl_ == 21u) {
                                fl_ = 0u;
                            } else {
                                if (fl_ == 20u) {
                                    fl_ = 0u;
                                    break;
                                }
                                if (fl_ == 19u) {
                                    fl_ = 0u;
                                    fl_ = 33u;
                                    break;
                                }
                                if (fl_ == 18u) {
                                    fl_ = 0u;
                                    fl_ = 34u;
                                    break;
                                }
                                if (fl_ == 17u) {
                                    fl_ = 0u;
                                    fl_ = 35u;
                                    break;
                                }
                                if (fl_ == 16u) {
                                    fl_ = 0u;
                                    fl_ = 36u;
                                    break;
                                }
                                if (fl_ == 15u) {
                                    fl_ = 0u;
                                    fl_ = 37u;
                                    break;
                                }
                                if (fl_ == 14u) {
                                    fl_ = 0u;
                                    fl_ = 38u;
                                    break;
                                }
                                if (fl_ == 1u) {
                                    fl_ = 0u;
                                    fl_ = 39u;
                                    break;
                                }
                            }
                            fl_ = 39u;
                            break;
                        } while (0);
                        if (fl_ == 39u) {
                            fl_ = 0u;
                            fl_ = 42u;
                            fl_ = 45u;
                            fl_ = 47u;
                            fl_ = 49u;
                            break;
                        }
                        if (fl_ != 38u) {
                            if (fl_ != 37u) {
                                if (fl_ != 36u) {
                                    if (fl_ != 35u) {
                                        if (fl_ != 34u) {
                                            if (fl_ != 33u) {
                                                if (fl_ == 32u) {
                                                    fl_ = 0u;
                                                    fl_ = 40u;
                                                    fl_ = 43u;
                                                    fl_ = 45u;
                                                    fl_ = 47u;
                                                    fl_ = 49u;
                                                    break;
                                                }
                                                if (fl_ == 31u) {
                                                    fl_ = 0u;
                                                    fl_ = 41u;
                                                    fl_ = 43u;
                                                    fl_ = 45u;
                                                    fl_ = 47u;
                                                    fl_ = 49u;
                                                    break;
                                                }
                                                fl_ = 46u;
                                                fl_ = 47u;
                                                fl_ = 49u;
                                                break;
                                            }
                                            fl_ = 0u;
                                            fl_ = 44u;
                                            fl_ = 45u;
                                            fl_ = 47u;
                                            fl_ = 49u;
                                            break;
                                        }
                                        fl_ = 0u;
                                        fl_ = 48u;
                                        fl_ = 49u;
                                        break;
                                    }
                                    fl_ = 0u;
                                    fl_ = 50u;
                                    break;
                                }
                                fl_ = 0u;
                                break;
                            }
                            fl_ = 0u;
                            fl_ = 51u;
                            break;
                        }
                        fl_ = 0u;
                    }
                    if ((u32)rd8(0x80492834u) == 0u) {
                        fl_ = 51u;
                        break;
                    }
                } while (0);
                do {
                    if (fl_ == 51u) {
                        fl_ = 0u;
                        r0 = 0u;
                    } else if (fl_ == 50u) {
                        fl_ = 0u;
                    } else {
                        if (fl_ == 49u) {
                            fl_ = 0u;
                            break;
                        }
                        r0 = 1u;
                    }
                } while (0);
                do {
                    if (fl_ == 48u) {
                        fl_ = 0u;
                    } else {
                        if (fl_ == 47u) {
                            fl_ = 0u;
                            break;
                        }
                        if (r0 == 0u) {
                            fl_ = 46u;
                            break;
                        }
                    }
                } while (0);
                do {
                    if (fl_ == 46u) {
                        fl_ = 0u;
                    } else {
                        if (fl_ == 45u) {
                            fl_ = 0u;
                            break;
                        }
                        if (r7 == 0u) {
                            fl_ = 44u;
                            break;
                        }
                    }
                } while (0);
                do {
                    if (fl_ == 44u) {
                        fl_ = 0u;
                        r0 = (u32)param_1 + r8;
                        wr32(r0 + r9 + 0x2a8u, 1u);
                    } else {
                        if (fl_ == 43u) {
                            fl_ = 0u;
                            break;
                        }
                        if (fl_ == 42u) {
                            fl_ = 0u;
                        } else {
                            r0 = (u32)param_1 + r8;
                            wr32(r0 + r9 + 0x2a8u, 0u);
                        }
                    }
                } while (0);
                if (fl_ == 41u) {
                    fl_ = 0u;
                    break;
                }
                if (fl_ == 40u) {
                    fl_ = 0u;
                    continue;
                }
                r7 = r7 + 1u;
                r10 = r10 + 4u;
                r9 = r9 + 8u;
                if ((s32)r7 >= 20) {
                    fl_ = 52u;
                    break;
                }
            }
            do {
                if (fl_ == 52u) {
                    fl_ = 0u;
                } else if (fl_ == 30u) {
                    fl_ = 0u;
                } else {
                    if (fl_ == 29u) {
                        fl_ = 0u;
                        fl_ = 53u;
                        fl_ = 55u;
                        break;
                    }
                    if (fl_ == 28u) {
                        fl_ = 0u;
                        fl_ = 54u;
                        fl_ = 55u;
                        break;
                    }
                    if (fl_ == 27u) {
                        fl_ = 0u;
                        break;
                    }
                }
                r6 = r6 + 1u;
                r8 = r8 + 0xa0u;
                if ((s32)r6 < 2) {
                    fl_ = 56u;
                    break;
                }
                r31 = rd32(r1 + 0xcu);
                r30 = rd32(r1 + 8u);
                return;
            } while (0);
            if (fl_ == 56u) {
                fl_ = 0u;
                continue;
            }
            if (fl_ == 55u) {
                fl_ = 0u;
                break;
            }
            if (r11 != 0x800ddc8cu) {
                a.r[0] = (u32)param_1;
                a.r[1] = 0x80492800u;
                a.r[2] = 0x80350000u;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                a.f[0] = tc_argf(0u);
                a.f[1] = tc_argf(1u);
                a.f[2] = tc_argf(2u);
                a.f[3] = tc_argf(3u);
                a.f[4] = tc_argf(4u);
                a.f[5] = tc_argf(5u);
                a.f[6] = tc_argf(6u);
                a.f[7] = tc_argf(7u);
                r3 = tc_call(r11, &a);
                f1 = tc_lastf();
                return;
            }
        }
        if (fl_ == 54u) {
            fl_ = 0u;
        } else if (fl_ == 53u) {
            fl_ = 0u;
            break;
        }
    }
    r31 = rd32(r1 + 0xcu);
    r30 = rd32(r1 + 8u);
    return;
}
