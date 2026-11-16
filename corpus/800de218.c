#include "tc_rt.h"

void fn_800de218(s32 param_1)
{
    u32 fl_ = 0, r0 = 0, r1 = 0, r3 = 0, r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r1 = 0x817fe000u;
    for (;;) {
        wr32(r1 - 0x10u, r1);
        r1 = r1 - 0x10u;
        r5 = 0u;
        r7 = 0u;
        wr32(r1 + 0xcu, r31);
        r31 = 0x80492800u;
        wr32(r1 + 8u, 0u);
        for (;;) {
            r6 = 0u;
            r8 = 0u;
            r9 = 0u;
            for (;;) {
                do {
                    if (r5 == 0u) {
                        for (;;) {
                            if (r6 > 0xfu) {
                                fl_ = 1u;
                                break;
                            }
                            for (;;) {
                                r10 = rd32(r9 - 0x7fca92c0u);
                                if (r10 == 0x800de218u) {
                                    fl_ = 2u;
                                    break;
                                }
                                if (r10 == 0x817ff000u) {
                                    return;
                                }
                                if (r10 == 0x800de4b8u) {
                                    fl_ = 3u;
                                    break;
                                }
                                if (r10 == 0x800de4a8u) {
                                    fl_ = 4u;
                                    break;
                                }
                                if (r10 == 0x800de494u) {
                                    fl_ = 5u;
                                    break;
                                }
                                if (r10 == 0x800de488u) {
                                    fl_ = 6u;
                                    break;
                                }
                                if (r10 == 0x800de478u) {
                                    fl_ = 7u;
                                    break;
                                }
                                if (r10 == 0x800de470u) {
                                    fl_ = 8u;
                                    break;
                                }
                                if (r10 == 0x800de468u) {
                                    fl_ = 9u;
                                    break;
                                }
                                if (r10 == 0x800de464u) {
                                    fl_ = 10u;
                                    break;
                                }
                                if (r10 == 0x800de45cu) {
                                    fl_ = 11u;
                                    break;
                                }
                                if (r10 == 0x800de450u) {
                                    fl_ = 12u;
                                    break;
                                }
                                if (r10 != 0x800de25cu) {
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
                            if (r10 != 0x800de254u) {
                                if (r10 == 0x800de24cu) {
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
                        if (r6 == 0u) {
                            fl_ = 44u;
                            break;
                        }
                    }
                } while (0);
                do {
                    if (fl_ == 44u) {
                        fl_ = 0u;
                        r0 = (u32)param_1 + r7;
                        wr32(r0 + r8 + 0x168u, 1u);
                    } else {
                        if (fl_ == 43u) {
                            fl_ = 0u;
                            break;
                        }
                        if (fl_ == 42u) {
                            fl_ = 0u;
                        } else {
                            r0 = (u32)param_1 + r7;
                            wr32(r0 + r8 + 0x168u, 0u);
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
                r6 = r6 + 1u;
                r9 = r9 + 4u;
                r8 = r8 + 8u;
                if ((s32)r6 >= 20) {
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
                r5 = r5 + 1u;
                r7 = r7 + 0xa0u;
                if ((s32)r5 < 2) {
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
            if (r10 != 0x800de240u) {
                a.r[0] = (u32)param_1;
                a.r[1] = 0x80350000u;
                a.r[2] = r5;
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
                r3 = tc_call(r10, &a);
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
