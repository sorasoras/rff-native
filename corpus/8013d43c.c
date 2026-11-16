#include "tc_rt.h"

u32 fn_8013d43c(u32 param_1, s32 param_2, u32 param_3)
{
    u32 c0lt = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = param_3;
    wr32(0x817fdff8u, 0u);
    r30 = 0u;
    wr32(0x817fdff4u, 0u);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = 0u;
    (void)tc_call(0x8017a220u, &a);
    c0lt = param_2 < 258;
    do {
        if ((u32)param_2 != 0x102u) {
            if (!c0lt) {
                c0lt = param_2 < 319;
                if ((u32)param_2 != 0x13fu && (!c0lt || param_2 >= 260)) break;
            } else if (param_2 >= 230) {
                if (param_2 < 257) break;
            } else if (param_2 < 226) {
                break;
            }
            r4 = rd32(param_3);
            if ((s32)r4 >= 7) {
                r3 = 0u;
                return r3;
            }
            a.r[0] = 0x817fdfe8u;
            a.r[1] = r4;
            (void)tc_call(0x8017a250u, &a);
            r31 = param_3 + 4u;
        }
    } while (0);
    c0lt = param_2 < 242;
    do {
        if ((u32)param_2 != 0xf2u) {
            if (c0lt) {
                c0lt = param_2 < 118;
                if ((u32)param_2 == 0x76u) {
                    wr32(rd32(0x804863d8u) + 0x88cu, rd32(r31));
                    r3 = 0u;
                    return r3;
                }
                do {
                    if (!c0lt) {
                        c0lt = param_2 < 227;
                        if ((u32)param_2 == 0xe3u) {
                            fl_ = 1u;
                            fl_ = 3u;
                            break;
                        }
                        if (!c0lt) {
                            c0lt = param_2 < 229;
                            if ((u32)param_2 == 0xe5u) {
                                fl_ = 4u;
                                break;
                            }
                            if (c0lt) {
                                fl_ = 2u;
                                fl_ = 3u;
                                break;
                            }
                            if (param_2 < 241) {
                                r3 = 2u;
                                return r3;
                            }
                            r30 = 1u;
                        } else {
                            c0lt = param_2 < 198;
                            if ((u32)param_2 != 0xc6u) {
                                if (!c0lt) {
                                    if (param_2 >= 226) break;
                                    r3 = 2u;
                                    return r3;
                                }
                                if (param_2 >= 120) {
                                    r3 = 2u;
                                    return r3;
                                }
                                fl_ = 5u;
                                break;
                            }
                        }
                        a.r[0] = rd32(r31);
                        a.r[1] = rd32(r31 + 4u);
                        a.r[2] = rd32(r31 + 8u);
                        a.r[3] = rd32(r31 + 0xcu);
                        a.r[4] = rd32(r31 + 0x10u);
                        a.r[5] = rd32(r31 + 0x14u);
                        a.r[6] = r30;
                        r3 = tc_call(0x8013ceb8u, &a);
                        if (r3 == 0u) {
                            r3 = 0u;
                            return r3;
                        }
                        wr32(r3 + 0x80u, rd32(r31 + 0x18u));
                        r3 = 0u;
                        return r3;
                    }
                    c0lt = param_2 < 86;
                    if ((u32)param_2 != 0x56u) {
                        if (!c0lt) {
                            c0lt = param_2 < 114;
                            if ((u32)param_2 == 0x72u) {
                                r3 = 2u;
                                return r3;
                            }
                            if (!c0lt || param_2 >= 110) {
                                a.r[0] = (u32)param_2;
                                (void)tc_call(0x8013cd18u, &a);
                                r3 = 0u;
                                return r3;
                            }
                            r3 = 2u;
                            return r3;
                        }
                        c0lt = param_2 < 83;
                        if ((u32)param_2 == 0x53u) {
                            fl_ = 4u;
                            break;
                        }
                        if (!c0lt) {
                            if (param_2 >= 85) {
                                a.r[0] = rd32(r31);
                                r3 = tc_call(0x8013cc8cu, &a);
                                a.r[0] = r3;
                                a.r[1] = 0u;
                                (void)tc_call(0x800a796cu, &a);
                                r3 = 0u;
                                return r3;
                            }
                            fl_ = 6u;
                            break;
                        }
                        if (param_2 >= 82) {
                            fl_ = 7u;
                            break;
                        }
                        r3 = 2u;
                        return r3;
                    }
                } while (0);
                do {
                    if (fl_ == 7u) {
                        fl_ = 0u;
                        fl_ = 2u;
                        break;
                    }
                    if (fl_ == 6u) {
                        fl_ = 0u;
                        fl_ = 1u;
                        break;
                    }
                    if (fl_ == 5u) {
                        fl_ = 0u;
                        fl_ = 8u;
                        break;
                    }
                    if (fl_ != 4u) {
                        if (fl_ == 3u) {
                            fl_ = 0u;
                            break;
                        }
                        a.r[0] = 0x817fdfe8u;
                        r3 = tc_call(0x8017aa2cu, &a);
                        a.r[0] = r3;
                        a.r[1] = 0u;
                        (void)tc_call(0x800a796cu, &a);
                        r3 = 0u;
                        return r3;
                    }
                    fl_ = 0u;
                } while (0);
                if (fl_ == 8u) {
                    fl_ = 0u;
                    break;
                }
                if (fl_ != 2u) {
                    if (fl_ != 1u) {
                        a.r[0] = 0x817fdfe8u;
                        a.r[1] = rd32(r31) & 0xffffu;
                        a.r[2] = rd32(r31 + 4u) & 0xffu;
                        a.r[3] = rd32(r31 + 8u) & 0xffu;
                        (void)tc_call(0x8017aaacu, &a);
                        r3 = 0u;
                        return r3;
                    }
                    fl_ = 0u;
                    a.r[0] = 0x817fdfe8u;
                    a.r[1] = rd32(r31) & 0xffffu;
                    a.r[2] = rd32(r31 + 4u) & 0xffu;
                    a.r[3] = rd32(r31 + 8u) & 0xffu;
                    r3 = tc_call(0x8017ae64u, &a);
                    a.r[0] = r3;
                    a.r[1] = 0u;
                    (void)tc_call(0x800a796cu, &a);
                    r3 = 0u;
                    return r3;
                }
                fl_ = 0u;
                a.r[0] = 0x817fdfe8u;
                a.r[1] = rd32(r31) & 0xffffu;
                a.r[2] = rd32(r31 + 4u) & 0xffu;
                a.r[3] = rd32(r31 + 8u) & 0xffu;
                (void)tc_call(0x8013d404u, &a);
                r3 = 0u;
                return r3;
            }
            if (param_2 >= 320) {
                c0lt = param_2 < 377;
                if ((u32)param_2 == 0x179u) {
                    r3 = rd32(0x804863d8u);
                    if (r3 == 0u) {
                        r3 = 0u;
                        return r3;
                    }
                    r3 = rd32(r3 + 0xa48u);
                    if (r3 == 0u) {
                        r3 = 0u;
                        return r3;
                    }
                    r4 = rd32(r31 + 4u);
                    if ((s32)r4 <= 0 || r4 == (u32)rd8(r3 + 0x78u)) {
                        r4 = (u32)rd8(r3 + 0x79u) - rd32(r31);
                        if ((s32)r4 > 0) {
                            wr8(r3 + 0x79u, (u8)r4);
                            r3 = 0u;
                            return r3;
                        }
                        a.r[0] = 0x75u;
                        (void)tc_call(0x8013cd18u, &a);
                        r3 = 0u;
                        return r3;
                    }
                    r3 = 0u;
                    return r3;
                }
                if (!c0lt) {
                    c0lt = param_2 < 534;
                    if ((u32)param_2 == 0x216u) {
                        r3 = rd32(0x804863d8u);
                        if (r3 == 0u) {
                            r3 = 0u;
                            return r3;
                        }
                        wr32(r3 + 0xa60u, rd32(r31));
                        r3 = rd32(r3 + 0xa48u);
                        if (r3 == 0u) {
                            r3 = 0u;
                            return r3;
                        }
                        wr32(r3 + 0x7cu, rd32(r31));
                        r3 = 0u;
                        return r3;
                    }
                    if (c0lt && (u32)param_2 == 0x186u) {
                        a.r[0] = rd32(r31);
                        a.r[1] = rd32(r31 + 0xcu);
                        (void)tc_call(0x8013d38cu, &a);
                        a.r[0] = 0x817fdfe8u;
                        a.r[1] = rd32(r31) & 0xffffu;
                        a.r[2] = rd32(r31 + 4u) & 0xffu;
                        a.r[3] = rd32(r31 + 8u) & 0xffu;
                        (void)tc_call(0x8013d404u, &a);
                        r3 = 0u;
                        return r3;
                    }
                } else {
                    c0lt = param_2 < 365;
                    if ((u32)param_2 == 0x16du) {
                        a.r[0] = rd32(r31);
                        a.r[1] = 0x447u;
                        (void)tc_call(0x8013d38cu, &a);
                        a.r[0] = 0x817fdfe8u;
                        a.r[1] = rd32(r31) & 0xffffu;
                        a.r[2] = rd32(r31 + 4u) & 0xffu;
                        a.r[3] = rd32(r31 + 8u) & 0xffu;
                        (void)tc_call(0x8013d404u, &a);
                        r3 = 0u;
                        return r3;
                    }
                    if (c0lt && (u32)param_2 == 0x14au) {
                        r0 = rd32(0x804863d8u);
                        if (r0 == 0u) {
                            r3 = 0u;
                            return r3;
                        }
                        r3 = r0 + 0x54cu;
                        if (r3 == 0u) {
                            r3 = 0u;
                            return r3;
                        }
                        wr32(r3 + 0x84u, rd32(r31));
                        r3 = 0u;
                        return r3;
                    }
                }
            } else {
                c0lt = param_2 < 304;
                if ((u32)param_2 == 0x130u) {
                    a.r[0] = rd32(r31);
                    r3 = tc_call(0x800a4500u, &a);
                    r29 = r3;
                    if (r3 == 0u) {
                        r3 = 0u;
                        return r3;
                    }
                    r3 = tc_call(0x8006bb94u, &a);
                    r4 = r3;
                    if (rd32(r3 + 0x10u) == 0u) {
                        if (rd32(r3 + 0x20u) == 0u) {
                            r3 = rd32(r3);
                            a.r[0] = r3;
                            a.r[1] = 0xb8u;
                            a.r[2] = rd32(r4 + 0xcu);
                            a.r[3] = r4 + 0x18u;
                            r3 = tc_call(0x80040cd8u, &a);
                            f1 = tc_lastf();
                        } else {
                            r3 = r3 + 0x24u;
                            a.r[0] = r3;
                            a.r[1] = 0x20u;
                            a.r[2] = 0xb8u;
                            r3 = tc_call(0x80094e80u, &a);
                            f1 = tc_lastf();
                        }
                        r30 = r3;
                    } else {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0xb8u;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040db8u, &a);
                        f1 = tc_lastf();
                        r30 = r3;
                    }
                    if (r3 != 0u) {
                        r3 = r3;
                        a.r[0] = r3;
                        f1 = tc_callf(0x800d5c2cu, &a);
                    }
                    a.r[0] = r30;
                    a.r[1] = rd32(r31 + 4u);
                    a.r[2] = 0x804890c8u;
                    a.r[3] = 0x804890c8u;
                    a.r[4] = 1u;
                    a.r[5] = 1u;
                    a.r[6] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r30) + 0x48u), &a);
                    wr32(r30 + 0x7cu, 1u);
                    a.r[0] = r30;
                    a.r[1] = r29;
                    a.r[2] = 0x15u;
                    (void)tc_call(0x800d612cu, &a);
                    wr32(r30 + 0x80u, r29);
                    f0 = (f64)rdf32(0x80574410u);
                    wrf32d(r30 + 0x1cu, f0);
                    wrf32d(r30 + 0x20u, f0);
                    wrf32d(r30 + 0x24u, f0);
                    r3 = 0u;
                    return r3;
                }
                if (!c0lt) {
                    c0lt = param_2 < 316;
                    if ((u32)param_2 == 0x13cu) {
                        a.r[0] = rd32(r31);
                        (void)tc_call(0x8013d290u, &a);
                        r3 = 0u;
                        return r3;
                    }
                    if (!c0lt) {
                        if (param_2 >= 318) {
                            a.r[0] = 0x817fdfe8u;
                            r3 = tc_call(0x8017ad14u, &a);
                            r31 = r3;
                            a.r[0] = 0x817fdfe8u;
                            r3 = tc_call(0x8017aa2cu, &a);
                            r3 = r31 - r3;
                            a.r[0] = r3;
                            a.r[1] = 0u;
                            (void)tc_call(0x800a796cu, &a);
                            r3 = 0u;
                            return r3;
                        }
                    } else if (param_2 < 306) {
                        a.r[0] = rd32(r31);
                        r3 = tc_call(0x800a4500u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        r31 = r3;
                        if (r3 == 0u) {
                            r3 = 0u;
                            return r3;
                        }
                        r29 = rd32(0x8046adc4u);
                        while (r29 != 0u) {
                            r3 = r29;
                            r29 = rd32(r29);
                            r30 = rd32(r3 + 8u);
                            if (r31 == rd32(r30 + 0x80u)) {
                                a.r[0] = r30;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.f[0] = f1;
                                f1 = tc_callf(rd32(rd32(r30) + 0x18u), &a);
                                r4 = tc_lastr4();
                                if (r30 != 0u) {
                                    a.r[0] = r30;
                                    a.r[1] = 1u;
                                    a.r[2] = 0u;
                                    a.r[3] = 0u;
                                    a.r[4] = 0u;
                                    a.r[5] = 0u;
                                    a.r[6] = 0u;
                                    a.f[0] = f1;
                                    f1 = tc_callf(rd32(rd32(r30) + 8u), &a);
                                    r4 = tc_lastr4();
                                }
                            }
                        }
                        r3 = 0u;
                        return r3;
                    }
                } else {
                    c0lt = param_2 < 260;
                    if ((u32)param_2 == 0x104u) {
                        a.r[0] = rd32(r31);
                        a.r[1] = rd32(r31 + 4u);
                        r3 = tc_call(0x8013d2ccu, &a);
                        a.r[0] = r3;
                        a.r[1] = 0u;
                        (void)tc_call(0x800a796cu, &a);
                        r3 = 0u;
                        return r3;
                    }
                    if (c0lt) {
                        if (param_2 >= 258) {
                            a.r[0] = 0x817fdfe8u;
                            a.r[1] = rd32(r31) & 0xffffu;
                            a.r[2] = rd32(r31 + 4u) & 0xffu;
                            r3 = tc_call(0x8017af64u, &a);
                            a.r[0] = r3;
                            a.r[1] = 0u;
                            (void)tc_call(0x800a796cu, &a);
                            r3 = 0u;
                            return r3;
                        }
                        if (param_2 >= 256) {
                            a.r[0] = 0x817fdfe8u;
                            a.r[1] = rd32(r31) & 0xffffu;
                            a.r[2] = rd32(r31 + 4u) & 0xffu;
                            a.r[3] = rd32(r31 + 8u) & 0xffu;
                            r3 = tc_call(0x8017ac40u, &a);
                            a.r[0] = r3;
                            a.r[1] = 0u;
                            (void)tc_call(0x800a796cu, &a);
                            r3 = 0u;
                            return r3;
                        }
                    }
                }
            }
            r3 = 2u;
            return r3;
        }
        r30 = 1u;
    } while (0);
    a.r[0] = rd32(r31);
    a.r[1] = rd32(r31 + 4u);
    a.r[2] = rd32(r31 + 8u);
    a.r[3] = rd32(r31 + 0xcu);
    a.r[4] = rd32(r31 + 0x10u);
    a.r[5] = rd32(r31 + 0x14u);
    a.r[6] = r30;
    (void)tc_call(0x8013ceb8u, &a);
    r3 = 0u;
    return r3;
}
