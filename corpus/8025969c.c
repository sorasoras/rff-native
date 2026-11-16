#include "tc_rt.h"

u32 fn_8025969c(s32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    u32 r11 = 0, r12 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r8 = 1u;
    r6 = (u32)(s8)rd8((u32)param_1 + 1u);
    r31 = (u32)param_1 + 1u;
    wr8(0x817fdfd9u, 0u);
    wr8(0x817fdfd8u, 1u);
    wr8(0x817fdfdau, 0u);
    wr8(0x817fdfdbu, 0u);
    wr8(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    if (r6 != 0x25u) {
        for (;;) {
            r5 = r6 - 0x20u;
            r9 = 1u;
            if (r5 > 0x10u) {
                r9 = 0u;
            } else {
                r5 = (r5 << 2u) & 0xfffffffcu;
                r3 = rd32(r5 - 0x7fc71210u);
                sw_ = r3;
                switch (sw_) {
                case 0x80259754u:
                    if ((u32)rd8(0x817fdfd9u) == 1u) break;
                    wr8(0x817fdfd9u, 2u);
                    break;
                case 0x80259784u:
                    r9 = 0u;
                    break;
                case 0x80259768u:
                    wr8(0x817fdfdbu, 1u);
                    break;
                case 0x8025974cu:
                    wr8(0x817fdfd9u, 1u);
                    break;
                case 0x80259744u:
                    wr8(0x817fdfd8u, 0u);
                    break;
                case 0x80259770u:
                    if ((u32)rd8(0x817fdfd8u) == 0u) break;
                    wr8(0x817fdfd8u, 2u);
                    break;
                default:
                    a.r[0] = r3;
                    a.r[1] = 0x80390000u;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = 0u;
                    a.r[5] = 1u;
                    a.r[6] = 1u;
                    a.f[0] = 0.0;
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
                    return r3;
                }
            }
            if (r9 == 0u) break;
            r31 = r31 + 1u;
            r6 = (u32)(s8)rd8(r31);
        }
        if (r6 != 0x2au) {
            r4 = rd32(0x8038ed00u);
            for (;;) {
                r0 = 0u;
                if ((s32)r6 < 0 || (s32)r6 >= 256) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    r0 = (u32)rd16(rd32(r4 + 8u) + ((r6 << 1u) & 0xfffffffeu)) & 8u;
                } else {
                    r0 = 0u;
                }
                if (r0 == 0u) break;
                r3 = r6 + (rd32(0x817fdfe0u) * 0xau);
                r31 = r31 + 1u;
                r6 = (u32)rd8(r31);
                wr32(0x817fdfe0u, r3 - 0x30u);
                r6 = (u32)(s8)r6;
            }
        } else {
            a.r[0] = param_2;
            a.r[1] = 1u;
            r3 = tc_call(0x802550f0u, &a);
            f1 = tc_lastf();
            r5 = 0u;
            r8 = 0u;
            r9 = 0u;
            r0 = rd32(r3);
            wr32(0x817fdfe0u, r0);
            if ((s32)r0 < 0) {
                r0 = 0u - r0;
                wr8(0x817fdfd8u, 0u);
                wr32(0x817fdfe0u, r0);
            }
            r31 = r31 + 1u;
            r6 = (u32)(s8)rd8(r31);
        }
        r7 = rd32(0x817fdfe0u);
        if ((s32)r7 <= 509) {
            if (r6 == 0x2eu) {
                r31 = r31 + 1u;
                r6 = (u32)rd8(r31);
                wr8(0x817fdfdau, 1u);
                r6 = (u32)(s8)r6;
                if (r6 != 0x2au) {
                    r4 = rd32(0x8038ed00u);
                    for (;;) {
                        r0 = 0u;
                        if ((s32)r6 < 0 || (s32)r6 >= 256) {
                            r0 = 1u;
                        }
                        if (r0 == 0u) {
                            r0 = (u32)rd16(rd32(r4 + 8u) + ((r6 << 1u) & 0xfffffffeu)) & 8u;
                        } else {
                            r0 = 0u;
                        }
                        if (r0 == 0u) break;
                        r3 = r6 + (rd32(0x817fdfe4u) * 0xau);
                        r31 = r31 + 1u;
                        r6 = (u32)rd8(r31);
                        wr32(0x817fdfe4u, r3 - 0x30u);
                        r6 = (u32)(s8)r6;
                    }
                } else {
                    a.r[0] = param_2;
                    a.r[1] = 1u;
                    r3 = tc_call(0x802550f0u, &a);
                    f1 = tc_lastf();
                    r5 = 0u;
                    r7 = 0u;
                    r8 = 0u;
                    r9 = 0u;
                    r0 = rd32(r3);
                    wr32(0x817fdfe4u, r0);
                    if ((s32)r0 < 0) {
                        wr8(0x817fdfdau, 0u);
                    }
                    r31 = r31 + 1u;
                    r6 = (u32)(s8)rd8(r31);
                }
            }
            c0lt = (s32)r6 < 107;
            r4 = 1u;
            do {
                if (r6 != 0x6bu) {
                    if (!c0lt) {
                        c0lt = (s32)r6 < 116;
                        if (r6 == 0x74u) {
                            wr8(0x817fdfdcu, 8u);
                            break;
                        }
                        if (!c0lt) {
                            if (r6 == 0x7au) {
                                wr8(0x817fdfdcu, 7u);
                                break;
                            }
                        } else if ((s32)r6 < 109) {
                            r0 = (u32)rd8(r31 + 1u);
                            wr8(0x817fdfdcu, 3u);
                            r3 = (u32)(s8)r0;
                            if (r3 != 0x6cu) break;
                            r6 = r3;
                            wr8(0x817fdfdcu, 4u);
                            r31 = r31 + 1u;
                            break;
                        }
                    } else {
                        c0lt = (s32)r6 < 104;
                        if (r6 == 0x68u) {
                            r0 = (u32)rd8(r31 + 1u);
                            wr8(0x817fdfdcu, 2u);
                            r3 = (u32)(s8)r0;
                            if (r3 != 0x68u) break;
                            r6 = r3;
                            wr8(0x817fdfdcu, 1u);
                            r31 = r31 + 1u;
                            break;
                        }
                        if (!c0lt) {
                            if ((s32)r6 >= 106) {
                                wr8(0x817fdfdcu, 6u);
                                break;
                            }
                        } else if (r6 == 0x4cu) {
                            wr8(0x817fdfdcu, 9u);
                            break;
                        }
                    }
                }
                r4 = 0u;
            } while (0);
            if (r4 != 0u) {
                r31 = r31 + 1u;
                r6 = (u32)(s8)rd8(r31);
            }
            r0 = r6 - 0x41u;
            wr8(0x817fdfddu, (u8)r6);
            do {
                if (r0 > 0x37u) {
                    wr8(0x817fdfddu, 0xffu);
                } else {
                    r0 = (r0 << 2u) & 0xfffffffcu;
                    r3 = rd32(r0 - 0x7fc712f0u);
                    sw_ = r3;
                    switch (sw_) {
                    case 0x80259af0u:
                        if ((u32)rd8(0x817fdfdau) == 0u) {
                            wr32(0x817fdfe4u, 0xdu);
                        }
                        r0 = (u32)rd8(0x817fdfdcu);
                        if (r0 == 2u || r0 == 6u || r0 == 7u || r0 == 8u || r0 == 4u || r0 == 1u) {
                            wr8(0x817fdfddu, 0xffu);
                            fl_ = 1u;
                            break;
                        }
                        fl_ = 1u;
                        break;
                    case 0x80259c50u:
                        wr8(0x817fdfddu, 0xffu);
                        fl_ = 1u;
                        break;
                    case 0x80259b58u:
                        fl_ = 2u;
                        break;
                    case 0x80259aa0u:
                        r0 = (u32)rd8(0x817fdfdcu);
                        if (r0 == 2u || r0 == 6u || r0 == 7u || r0 == 8u || r0 == 4u) {
                            wr8(0x817fdfddu, 0xffu);
                            fl_ = 1u;
                            break;
                        }
                        if ((u32)rd8(0x817fdfdau) != 0u) {
                            fl_ = 1u;
                            break;
                        }
                        wr32(0x817fdfe4u, 6u);
                        fl_ = 1u;
                        break;
                    case 0x80259b44u:
                        if (rd32(0x817fdfe4u) != 0u) {
                            fl_ = 2u;
                            break;
                        }
                        wr32(0x817fdfe4u, 1u);
                        fl_ = 2u;
                        break;
                    case 0x80259a58u:
                        if ((u32)rd8(0x817fdfdcu) != 9u) {
                            if ((u32)rd8(0x817fdfdau) != 0u) {
                                if ((u32)rd8(0x817fdfd8u) != 2u) {
                                    fl_ = 1u;
                                    break;
                                }
                                wr8(0x817fdfd8u, 1u);
                                fl_ = 1u;
                                break;
                            }
                            wr32(0x817fdfe4u, 1u);
                            fl_ = 1u;
                            break;
                        }
                        wr8(0x817fdfddu, 0xffu);
                        fl_ = 1u;
                        break;
                    case 0x80259bd4u:
                        r3 = (u32)rd8(0x817fdfdcu);
                        if (r3 != 3u) {
                            if ((u32)rd8(0x817fdfdau) != 0u || r3 != 0u) {
                                wr8(0x817fdfddu, 0xffu);
                                fl_ = 1u;
                                break;
                            }
                            fl_ = 1u;
                            break;
                        }
                        wr8(0x817fdfdcu, 5u);
                        fl_ = 1u;
                        break;
                    case 0x80259c38u:
                        if ((u32)rd8(0x817fdfdcu) != 9u) {
                            fl_ = 1u;
                            break;
                        }
                        wr8(0x817fdfddu, 0xffu);
                        fl_ = 1u;
                        break;
                    case 0x80259bb0u:
                        wr8(0x817fdfddu, 0x78u);
                        wr8(0x817fdfdbu, 1u);
                        wr8(0x817fdfdcu, 3u);
                        wr32(0x817fdfe4u, 8u);
                        fl_ = 1u;
                        break;
                    case 0x80259c0cu:
                        r0 = (u32)rd8(0x817fdfdcu);
                        if (r0 != 3u) {
                            if (r0 == 0u) {
                                fl_ = 1u;
                                break;
                            }
                            wr8(0x817fdfddu, 0xffu);
                            fl_ = 1u;
                            break;
                        }
                        wr8(0x817fdfdcu, 5u);
                        fl_ = 1u;
                        break;
                    default:
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        a.r[4] = r7;
                        a.r[5] = r8;
                        a.r[6] = r9;
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
                        return r3;
                    }
                    if (fl_ == 2u) {
                        fl_ = 0u;
                    } else if (fl_ == 1u) {
                        fl_ = 0u;
                        break;
                    }
                    r0 = (u32)rd8(0x817fdfdcu);
                    if (r0 == 2u || r0 == 6u || r0 == 7u || r0 == 8u || r0 == 4u || r0 == 1u) {
                        wr8(0x817fdfddu, 0xffu);
                    } else if ((u32)rd8(0x817fdfdau) == 0u) {
                        wr32(0x817fdfe4u, 6u);
                    }
                }
            } while (0);
            r3 = r31 + 1u;
            r5 = rd32(0x817fdfdcu);
            r4 = rd32(0x817fdfe0u);
            r0 = rd32(0x817fdfe4u);
            wr32(param_3, rd32(0x817fdfd8u));
            wr32(param_3 + 4u, r5);
            wr32(param_3 + 8u, r4);
            wr32(param_3 + 0xcu, r0);
        } else {
            r5 = rd32(0x817fdfd8u);
            wr8(0x817fdfddu, 0xffu);
            r3 = r31 + 1u;
            r4 = rd32(0x817fdfdcu);
            wr32(param_3, r5);
            wr32(param_3 + 4u, r4);
            wr32(param_3 + 8u, r7);
            wr32(param_3 + 0xcu, 0u);
        }
    } else {
        wr8(0x817fdfddu, (u8)r6);
        r3 = r31 + 1u;
        r0 = rd32(0x817fdfdcu);
        wr32(param_3, rd32(0x817fdfd8u));
        wr32(param_3 + 4u, r0);
        wr32(param_3 + 8u, 0u);
        wr32(param_3 + 0xcu, 0u);
    }
    return r3;
}
