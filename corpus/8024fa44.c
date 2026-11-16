#include "tc_rt.h"

void fn_8024fa44(u32 param_1, u32 param_2)
{
    u32 ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r11 = 0;
    u32 r12 = 0, sw_ = 0;
    f64 f0 = 0.0, f2 = tc_argf(1u), f3 = tc_argf(2u), f4 = tc_argf(3u), f5 = tc_argf(4u), f6 = tc_argf(5u), f7 = tc_argf(6u), f8 = tc_argf(7u), f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r4 = param_2;
    for (;;) {
        r8 = rd32(0x80576c88u) + ((param_1 << 2u) & 0xfffffffcu);
        for (;;) {
            if (rd32(r4) == 0xffu) {
                fl_ = 104u;
                break;
            }
            for (;;) {
                r6 = rd32(r4);
                r7 = (u32)rd8(r4 + 0xcu);
                r0 = r6 - 9u;
                r10 = rd32(r4 + 8u);
                r9 = rd32(r4 + 4u);
                if (r0 > 0x10u) {
                    fl_ = 1u;
                    break;
                }
                for (;;) {
                    r0 = (r0 << 2u) & 0xfffffffcu;
                    r6 = rd32(r0 - 0x7fc71dfcu);
                    if (r6 == 0x8024fa44u) {
                        fl_ = 2u;
                        break;
                    }
                    if (r6 == 0x817ff000u) {
                        return;
                    }
                    if (r6 == 0x8024fbd8u) {
                        fl_ = 3u;
                        break;
                    }
                    if (r6 == 0x8024fbccu) {
                        fl_ = 4u;
                        break;
                    }
                    if (r6 == 0x8024fbc8u) {
                        fl_ = 5u;
                        break;
                    }
                    if (r6 == 0x8024fbb4u) {
                        fl_ = 6u;
                        break;
                    }
                    if (r6 == 0x8024fb9cu) {
                        fl_ = 7u;
                        break;
                    }
                    if (r6 == 0x8024fb84u) {
                        fl_ = 8u;
                        break;
                    }
                    if (r6 == 0x8024fb64u) {
                        fl_ = 9u;
                        break;
                    }
                    if (r6 == 0x8024fb4cu) {
                        fl_ = 10u;
                        break;
                    }
                    if (r6 == 0x8024fb34u) {
                        fl_ = 11u;
                        break;
                    }
                    if (r6 == 0x8024fb1cu) {
                        fl_ = 12u;
                        break;
                    }
                    if (r6 == 0x8024fb04u) {
                        fl_ = 13u;
                        break;
                    }
                    if (r6 == 0x8024faf0u) {
                        fl_ = 14u;
                        break;
                    }
                    if (r6 == 0x8024fadcu) {
                        fl_ = 15u;
                        break;
                    }
                    if (r6 == 0x8024fac8u) {
                        fl_ = 16u;
                        break;
                    }
                    if (r6 == 0x8024fab4u) {
                        fl_ = 17u;
                        break;
                    }
                    if (r6 == 0x8024faa0u) {
                        fl_ = 18u;
                        break;
                    }
                    if (r6 == 0x8024fa88u) {
                        fl_ = 19u;
                        break;
                    }
                    if (r6 != 0x8024fa74u) {
                        fl_ = 20u;
                        break;
                    }
                }
                if (fl_ == 20u) {
                    fl_ = 0u;
                } else {
                    if (fl_ == 19u) {
                        fl_ = 0u;
                        fl_ = 21u;
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
                    if (fl_ == 16u) {
                        fl_ = 0u;
                        fl_ = 24u;
                        break;
                    }
                    if (fl_ == 15u) {
                        fl_ = 0u;
                        fl_ = 25u;
                        break;
                    }
                    if (fl_ == 14u) {
                        fl_ = 0u;
                        fl_ = 26u;
                        break;
                    }
                    if (fl_ == 13u) {
                        fl_ = 0u;
                        fl_ = 27u;
                        break;
                    }
                    if (fl_ == 12u) {
                        fl_ = 0u;
                        fl_ = 28u;
                        break;
                    }
                    if (fl_ == 11u) {
                        fl_ = 0u;
                        fl_ = 29u;
                        break;
                    }
                    if (fl_ == 10u) {
                        fl_ = 0u;
                        fl_ = 30u;
                        break;
                    }
                    if (fl_ == 9u) {
                        fl_ = 0u;
                        fl_ = 31u;
                        break;
                    }
                    if (fl_ == 8u) {
                        fl_ = 0u;
                        fl_ = 32u;
                        break;
                    }
                    if (fl_ == 7u) {
                        fl_ = 0u;
                        fl_ = 33u;
                        break;
                    }
                    if (fl_ == 6u) {
                        fl_ = 0u;
                        fl_ = 34u;
                        break;
                    }
                    if (fl_ == 5u) {
                        fl_ = 0u;
                        fl_ = 35u;
                        break;
                    }
                    if (fl_ == 4u) {
                        fl_ = 0u;
                        fl_ = 36u;
                        break;
                    }
                    if (fl_ == 3u) {
                        fl_ = 0u;
                        fl_ = 37u;
                        break;
                    }
                    if (fl_ == 2u) {
                        fl_ = 0u;
                        fl_ = 38u;
                        break;
                    }
                }
                if (r6 != 0x8024fa58u) {
                    fl_ = 39u;
                    break;
                }
            }
            do {
                if (fl_ == 39u) {
                    fl_ = 0u;
                    fl_ = 42u;
                    break;
                }
                if (fl_ == 38u) {
                    fl_ = 0u;
                    fl_ = 40u;
                    fl_ = 43u;
                    break;
                }
                if (fl_ == 37u) {
                    fl_ = 0u;
                    fl_ = 41u;
                    fl_ = 43u;
                    break;
                }
                if (fl_ == 36u) {
                    fl_ = 0u;
                } else {
                    if (fl_ == 35u) {
                        fl_ = 0u;
                        break;
                    }
                    if (fl_ == 34u) {
                        fl_ = 0u;
                        fl_ = 44u;
                        break;
                    }
                    if (fl_ == 33u) {
                        fl_ = 0u;
                        fl_ = 45u;
                        break;
                    }
                    if (fl_ == 32u) {
                        fl_ = 0u;
                        fl_ = 46u;
                        break;
                    }
                    if (fl_ == 31u) {
                        fl_ = 0u;
                        fl_ = 47u;
                        break;
                    }
                    if (fl_ == 30u) {
                        fl_ = 0u;
                        fl_ = 48u;
                        break;
                    }
                    if (fl_ == 29u) {
                        fl_ = 0u;
                        fl_ = 49u;
                        break;
                    }
                    if (fl_ == 28u) {
                        fl_ = 0u;
                        fl_ = 50u;
                        break;
                    }
                    if (fl_ == 27u) {
                        fl_ = 0u;
                        fl_ = 51u;
                        break;
                    }
                    if (fl_ == 26u) {
                        fl_ = 0u;
                        fl_ = 52u;
                        break;
                    }
                    if (fl_ == 25u) {
                        fl_ = 0u;
                        fl_ = 53u;
                        break;
                    }
                    if (fl_ == 24u) {
                        fl_ = 0u;
                        fl_ = 54u;
                        break;
                    }
                    if (fl_ == 23u) {
                        fl_ = 0u;
                        fl_ = 55u;
                        break;
                    }
                    if (fl_ == 22u) {
                        fl_ = 0u;
                        fl_ = 56u;
                        break;
                    }
                    if (fl_ == 21u) {
                        fl_ = 0u;
                        fl_ = 57u;
                        break;
                    }
                    if (fl_ == 1u) {
                        fl_ = 0u;
                        fl_ = 58u;
                        break;
                    }
                }
                fl_ = 59u;
                break;
            } while (0);
            do {
                if (fl_ == 59u) {
                    fl_ = 0u;
                    fl_ = 60u;
                    break;
                }
                if (fl_ == 58u) {
                    fl_ = 0u;
                    fl_ = 61u;
                    break;
                }
                if (fl_ != 57u) {
                    if (fl_ != 56u) {
                        if (fl_ != 55u) {
                            if (fl_ != 54u) {
                                if (fl_ != 53u) {
                                    if (fl_ != 52u) {
                                        if (fl_ != 51u) {
                                            if (fl_ != 50u) {
                                                if (fl_ != 49u) {
                                                    if (fl_ != 48u) {
                                                        if (fl_ != 47u) {
                                                            if (fl_ != 46u) {
                                                                if (fl_ != 45u) {
                                                                    if (fl_ != 44u) {
                                                                        if (fl_ == 43u) {
                                                                            fl_ = 0u;
                                                                            break;
                                                                        }
                                                                        if (fl_ == 42u) {
                                                                            fl_ = 0u;
                                                                            break;
                                                                        }
                                                                        fl_ = 61u;
                                                                        break;
                                                                    }
                                                                    fl_ = 0u;
                                                                    fl_ = 62u;
                                                                    break;
                                                                }
                                                                fl_ = 0u;
                                                                fl_ = 63u;
                                                                break;
                                                            }
                                                            fl_ = 0u;
                                                            fl_ = 64u;
                                                            break;
                                                        }
                                                        fl_ = 0u;
                                                        fl_ = 65u;
                                                        break;
                                                    }
                                                    fl_ = 0u;
                                                    fl_ = 66u;
                                                    break;
                                                }
                                                fl_ = 0u;
                                                fl_ = 67u;
                                                break;
                                            }
                                            fl_ = 0u;
                                            fl_ = 68u;
                                            break;
                                        }
                                        fl_ = 0u;
                                        fl_ = 69u;
                                        break;
                                    }
                                    fl_ = 0u;
                                    fl_ = 70u;
                                    break;
                                }
                                fl_ = 0u;
                                fl_ = 71u;
                                break;
                            }
                            fl_ = 0u;
                            fl_ = 72u;
                            break;
                        }
                        fl_ = 0u;
                        fl_ = 73u;
                        break;
                    }
                    fl_ = 0u;
                    fl_ = 74u;
                    break;
                }
                fl_ = 0u;
                wr32(r8 + 0x1cu, (((((rd32(r8 + 0x1cu) & 0xfffffffeu) | (r9 & 1u)) & 0xfffffff1u) | ((r10 << 1u) & 0xeu)) & 0xfffffe0fu) | ((r7 << 4u) & 0x1f0u));
                fl_ = 61u;
                break;
            } while (0);
            do {
                if (fl_ == 74u) {
                    fl_ = 0u;
                } else {
                    if (fl_ == 73u) {
                        fl_ = 0u;
                        fl_ = 75u;
                        break;
                    }
                    if (fl_ == 72u) {
                        fl_ = 0u;
                        break;
                    }
                    if (fl_ == 71u) {
                        fl_ = 0u;
                        fl_ = 76u;
                        break;
                    }
                    if (fl_ == 70u) {
                        fl_ = 0u;
                        fl_ = 77u;
                        break;
                    }
                    if (fl_ == 69u) {
                        fl_ = 0u;
                        fl_ = 78u;
                        break;
                    }
                    if (fl_ == 68u) {
                        fl_ = 0u;
                        fl_ = 79u;
                        break;
                    }
                    if (fl_ == 67u) {
                        fl_ = 0u;
                        fl_ = 80u;
                        break;
                    }
                    if (fl_ == 66u) {
                        fl_ = 0u;
                        fl_ = 81u;
                        break;
                    }
                    if (fl_ == 65u) {
                        fl_ = 0u;
                        fl_ = 82u;
                        break;
                    }
                    if (fl_ == 64u) {
                        fl_ = 0u;
                        fl_ = 83u;
                        break;
                    }
                    if (fl_ == 63u) {
                        fl_ = 0u;
                        fl_ = 84u;
                        break;
                    }
                    if (fl_ == 62u) {
                        fl_ = 0u;
                        fl_ = 85u;
                        break;
                    }
                    if (fl_ == 61u) {
                        fl_ = 0u;
                        fl_ = 86u;
                        break;
                    }
                    if (fl_ == 60u) {
                        fl_ = 0u;
                        fl_ = 87u;
                        break;
                    }
                    if (fl_ == 41u) {
                        fl_ = 0u;
                        fl_ = 88u;
                        break;
                    }
                    if (fl_ == 40u) {
                        fl_ = 0u;
                        fl_ = 89u;
                        break;
                    }
                    sw_ = r6;
                    switch (sw_) {
                    case 0x8024fa88u:
                        wr32(r8 + 0x1cu, (((((rd32(r8 + 0x1cu) & 0xfffffffeu) | (r9 & 1u)) & 0xfffffff1u) | ((r10 << 1u) & 0xeu)) & 0xfffffe0fu) | ((r7 << 4u) & 0x1f0u));
                        fl_ = 90u;
                        break;
                    case 0x8024faa0u:
                        fl_ = 91u;
                        break;
                    case 0x8024fadcu:
                        fl_ = 92u;
                        break;
                    case 0x8024faf0u:
                        fl_ = 93u;
                        break;
                    case 0x8024fb04u:
                        fl_ = 94u;
                        break;
                    case 0x8024fb1cu:
                        fl_ = 95u;
                        break;
                    case 0x8024fb34u:
                        fl_ = 96u;
                        break;
                    case 0x8024fb4cu:
                        fl_ = 97u;
                        break;
                    case 0x8024fb64u:
                        fl_ = 98u;
                        break;
                    case 0x8024fb84u:
                        fl_ = 99u;
                        break;
                    case 0x8024fb9cu:
                        fl_ = 100u;
                        break;
                    case 0x8024fbb4u:
                        fl_ = 101u;
                        break;
                    case 0x8024fbc8u:
                        fl_ = 90u;
                        break;
                    default:
                        a.r[0] = param_1;
                        a.r[1] = r4;
                        a.r[2] = 0x80390000u;
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
                        r3 = tc_call(sw_, &a);
                        r0 = tc_junkr(0u);
                        r4 = tc_lastr4();
                        r5 = tc_junkr(5u);
                        r6 = tc_junkr(6u);
                        r7 = tc_junkr(7u);
                        r8 = tc_junkr(8u);
                        r9 = tc_junkr(9u);
                        r10 = tc_junkr(0xau);
                        r11 = tc_junkr(0xbu);
                        r12 = tc_junkr(0xcu);
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
                    if (fl_ == 101u) {
                        fl_ = 0u;
                        fl_ = 85u;
                        break;
                    }
                    if (fl_ == 100u) {
                        fl_ = 0u;
                        fl_ = 84u;
                        break;
                    }
                    if (fl_ == 99u) {
                        fl_ = 0u;
                        fl_ = 83u;
                        break;
                    }
                    if (fl_ == 98u) {
                        fl_ = 0u;
                        fl_ = 82u;
                        break;
                    }
                    if (fl_ == 97u) {
                        fl_ = 0u;
                        fl_ = 81u;
                        break;
                    }
                    if (fl_ == 96u) {
                        fl_ = 0u;
                        fl_ = 80u;
                        break;
                    }
                    if (fl_ == 95u) {
                        fl_ = 0u;
                        fl_ = 79u;
                        break;
                    }
                    if (fl_ == 94u) {
                        fl_ = 0u;
                        fl_ = 78u;
                        break;
                    }
                    if (fl_ == 93u) {
                        fl_ = 0u;
                        fl_ = 77u;
                        break;
                    }
                    if (fl_ == 92u) {
                        fl_ = 0u;
                        fl_ = 76u;
                        break;
                    }
                    if (fl_ == 91u) {
                        fl_ = 0u;
                    } else if (fl_ == 90u) {
                        fl_ = 0u;
                        fl_ = 86u;
                        break;
                    }
                }
                wr32(r8 + 0x1cu, (rd32(r8 + 0x1cu) & 0xffffe3ffu) | ((r10 << 0xau) & 0x1c00u));
                if (r9 == 2u) {
                    fl_ = 75u;
                    break;
                }
            } while (0);
            if (fl_ == 89u) {
                fl_ = 0u;
                fl_ = 103u;
                break;
            }
            if (fl_ == 88u) {
                fl_ = 0u;
                fl_ = 102u;
                break;
            }
            if (fl_ == 87u) {
                fl_ = 0u;
                continue;
            }
            if (fl_ == 86u) {
                fl_ = 0u;
            } else if (fl_ == 85u) {
                fl_ = 0u;
                wr32(r8 + 0x5cu, (((((rd32(r8 + 0x5cu) & 0xff7fffffu) | ((r9 << 0x17u) & 0x800000u)) & 0xf8ffffffu) | ((r10 << 0x18u) & 0x7000000u)) & 0x7ffffffu) | ((r7 << 0x1bu) & 0xf8000000u));
            } else if (fl_ == 84u) {
                fl_ = 0u;
                wr32(r8 + 0x5cu, (((((rd32(r8 + 0x5cu) & 0xffffbfffu) | ((r9 << 0xeu) & 0x4000u)) & 0xfffc7fffu) | ((r10 << 0xfu) & 0x38000u)) & 0xff83ffffu) | ((r7 << 0x12u) & 0x7c0000u));
            } else if (fl_ == 83u) {
                fl_ = 0u;
                wr32(r8 + 0x5cu, (((((rd32(r8 + 0x5cu) & 0xffffffdfu) | ((r9 << 5u) & 0x20u)) & 0xfffffe3fu) | ((r10 << 6u) & 0x1c0u)) & 0xffffc1ffu) | ((r7 << 9u) & 0x3e00u));
            } else if (fl_ == 82u) {
                fl_ = 0u;
                wr32(r8 + 0x3cu, (((rd32(r8 + 0x3cu) & 0xf7ffffffu) | ((r9 << 0x1bu) & 0x8000000u)) & 0x8fffffffu) | ((r10 << 0x1cu) & 0x70000000u));
                wr32(r8 + 0x5cu, (rd32(r8 + 0x5cu) & 0xffffffe0u) | (r7 & 0x1fu));
            } else if (fl_ == 81u) {
                fl_ = 0u;
                wr32(r8 + 0x3cu, (((((rd32(r8 + 0x3cu) & 0xfffbffffu) | ((r9 << 0x12u) & 0x40000u)) & 0xffc7ffffu) | ((r10 << 0x13u) & 0x380000u)) & 0xf83fffffu) | ((r7 << 0x16u) & 0x7c00000u));
            } else if (fl_ == 80u) {
                fl_ = 0u;
                wr32(r8 + 0x3cu, (((((rd32(r8 + 0x3cu) & 0xfffffdffu) | ((r9 << 9u) & 0x200u)) & 0xffffe3ffu) | ((r10 << 0xau) & 0x1c00u)) & 0xfffc1fffu) | ((r7 << 0xdu) & 0x3e000u));
            } else if (fl_ == 79u) {
                fl_ = 0u;
                wr32(r8 + 0x3cu, (((((rd32(r8 + 0x3cu) & 0xfffffffeu) | (r9 & 1u)) & 0xfffffff1u) | ((r10 << 1u) & 0xeu)) & 0xfffffe0fu) | ((r7 << 4u) & 0x1f0u));
            } else if (fl_ == 78u) {
                fl_ = 0u;
                wr32(r8 + 0x1cu, (((((rd32(r8 + 0x1cu) & 0xffdfffffu) | ((r9 << 0x15u) & 0x200000u)) & 0xfe3fffffu) | ((r10 << 0x16u) & 0x1c00000u)) & 0xc1ffffffu) | ((r7 << 0x19u) & 0x3e000000u));
            } else if (fl_ == 77u) {
                fl_ = 0u;
                wr32(r8 + 0x1cu, (((rd32(r8 + 0x1cu) & 0xfffdffffu) | ((r9 << 0x11u) & 0x20000u)) & 0xffe3ffffu) | ((r10 << 0x12u) & 0x1c0000u));
            } else if (fl_ == 76u) {
                fl_ = 0u;
                wr32(r8 + 0x1cu, (((rd32(r8 + 0x1cu) & 0xffffdfffu) | ((r9 << 0xdu) & 0x2000u)) & 0xfffe3fffu) | ((r10 << 0xeu) & 0x1c000u));
            } else if (fl_ == 75u) {
                fl_ = 0u;
                wr32(r8 + 0x1cu, rd32(r8 + 0x1cu) | 0x80000200u);
            } else {
                wr32(r8 + 0x1cu, ((rd32(r8 + 0x1cu) & 0xfffffdffu) | ((r9 << 9u) & 0x200u)) & 0x7fffffffu);
            }
            r4 = r4 + 0x10u;
        }
        if (fl_ == 104u) {
            fl_ = 0u;
            fl_ = 105u;
            break;
        }
        if (fl_ == 103u) {
            fl_ = 0u;
        } else if (fl_ == 102u) {
            fl_ = 0u;
            fl_ = 106u;
            break;
        }
    }
    if (fl_ == 106u) {
        fl_ = 0u;
    } else if (fl_ == 105u) {
        fl_ = 0u;
    }
    r5 = rd32(0x80576c88u);
    r0 = param_1 & 0xffu;
    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
    r0 = r0 & 0xffu;
    wr32(r5 + 0x5fcu, rd32(r5 + 0x5fcu) | 0x10u);
    r0 = (u32)rd8(r5 + 0x5fbu) | r0;
    wr8(r5 + 0x5fbu, (u8)r0);
    return;
}
