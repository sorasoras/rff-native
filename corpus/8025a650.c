#include "tc_rt.h"

u32 fn_8025a650(f64 param_1, s32 param_2, s32 param_3)
{
    u32 c0lt = 0, ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r0 = rd32((u32)param_3 + 0xcu);
    wrf64(0x817fdff8u, 0.0);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    r30 = (u32)rd8(rd32(0x8038eb18u));
    if ((s32)r0 <= 509) {
        wr8(0x817fdfb8u, 0u);
        wr16(0x817fdfbau, 0x20u);
        a.f[0] = param_1;
        a.r[0] = 0x817fdfb8u;
        a.r[1] = 0x817fdfbcu;
        (void)tc_call(0x802584d4u, &a);
        r5 = (u32)rd8(0x817fdfc0u) - 0x7e80203fu;
        while ((u32)rd8(0x817fdfc0u) > 1u) {
            r5 = r5 - 1u;
            if ((u32)rd8(r5) != 0x30u) break;
            r0 = (u32)(s16)rd16(0x817fdfbeu) + 1u;
            wr8(0x817fdfc0u, (u8)((u32)rd8(0x817fdfc0u) - 1u));
            wr16(0x817fdfbeu, (u16)r0);
        }
        r0 = (u32)rd8(0x817fdfc1u);
        c0lt = (s32)r0 < 73;
        if (r0 == 0x49u) {
            if (!(param_1 < rdf64(0x80576d88u))) {
                r4 = (u32)rd8((u32)param_3 + 5u);
                r31 = (u32)param_2 - 4u;
                r0 = 0u;
                if ((s32)r4 < 0 || (s32)r4 >= 256) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    r0 = (u32)rd16(rd32(rd32(0x8038ed00u) + 8u) + ((r4 << 1u) & 0xfffffffeu)) & 0x200u;
                } else {
                    r0 = 0u;
                }
                if (r0 == 0u) {
                    a.r[0] = r31;
                    a.r[1] = 0x8033d14cu;
                    (void)tc_call(0x8025bd34u, &a);
                } else {
                    a.r[0] = r31;
                    a.r[1] = 0x8033d148u;
                    (void)tc_call(0x8025bd34u, &a);
                }
            } else {
                r4 = (u32)rd8((u32)param_3 + 5u);
                r31 = (u32)param_2 - 5u;
                r0 = 0u;
                if ((s32)r4 < 0 || (s32)r4 >= 256) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    r0 = (u32)rd16(rd32(rd32(0x8038ed00u) + 8u) + ((r4 << 1u) & 0xfffffffeu)) & 0x200u;
                } else {
                    r0 = 0u;
                }
                if (r0 == 0u) {
                    a.r[0] = r31;
                    a.r[1] = 0x8033d143u;
                    (void)tc_call(0x8025bd34u, &a);
                } else {
                    a.r[0] = r31;
                    a.r[1] = 0x8033d13eu;
                    (void)tc_call(0x8025bd34u, &a);
                }
            }
            r3 = r31;
            return r3;
        }
        if (!c0lt) {
            if (r0 == 0x4eu) {
                if ((u32)(s8)rd8(0x817fdfbcu) == 0u) {
                    r4 = (u32)rd8((u32)param_3 + 5u);
                    r31 = (u32)param_2 - 4u;
                    r0 = 0u;
                    if ((s32)r4 < 0 || (s32)r4 >= 256) {
                        r0 = 1u;
                    }
                    if (r0 == 0u) {
                        r0 = (u32)rd16(rd32(rd32(0x8038ed00u) + 8u) + ((r4 << 1u) & 0xfffffffeu)) & 0x200u;
                    } else {
                        r0 = 0u;
                    }
                    if (r0 == 0u) {
                        a.r[0] = r31;
                        a.r[1] = 0x8033d15eu;
                        (void)tc_call(0x8025bd34u, &a);
                    } else {
                        a.r[0] = r31;
                        a.r[1] = 0x8033d15au;
                        (void)tc_call(0x8025bd34u, &a);
                    }
                } else {
                    r4 = (u32)rd8((u32)param_3 + 5u);
                    r31 = (u32)param_2 - 5u;
                    r0 = 0u;
                    if ((s32)r4 < 0 || (s32)r4 >= 256) {
                        r0 = 1u;
                    }
                    if (r0 == 0u) {
                        r0 = (u32)rd16(rd32(rd32(0x8038ed00u) + 8u) + ((r4 << 1u) & 0xfffffffeu)) & 0x200u;
                    } else {
                        r0 = 0u;
                    }
                    if (r0 == 0u) {
                        a.r[0] = r31;
                        a.r[1] = 0x8033d155u;
                        (void)tc_call(0x8025bd34u, &a);
                    } else {
                        a.r[0] = r31;
                        a.r[1] = 0x8033d150u;
                        (void)tc_call(0x8025bd34u, &a);
                    }
                }
                r3 = r31;
                return r3;
            }
        } else if (r0 == 0x30u) {
            wr16(0x817fdfbeu, 0u);
        }
        r31 = (u32)param_2 - 1u;
        r0 = (u32)rd8((u32)param_3 + 5u);
        c0lt = (s32)r0 < 101;
        wr16(0x817fdfbeu, (u16)((u32)rd8(0x817fdfc0u) + (u32)(s16)rd16(0x817fdfbeu) - 1u));
        wr8((u32)param_2 - 1u, 0u);
        if (r0 != 0x65u) {
            do {
                if (!c0lt) {
                    c0lt = (s32)r0 < 103;
                    if (r0 != 0x67u) {
                        if (!c0lt) {
                            r3 = r31;
                            return r3;
                        }
                        break;
                    }
                } else {
                    c0lt = (s32)r0 < 70;
                    if (r0 == 0x46u) break;
                    if (c0lt) {
                        if ((s32)r0 >= 69) {
                            fl_ = 1u;
                            break;
                        }
                        r3 = r31;
                        return r3;
                    }
                    if ((s32)r0 >= 72) {
                        r3 = r31;
                        return r3;
                    }
                }
                r4 = rd32((u32)param_3 + 0xcu);
                if ((s32)rd8(0x817fdfc0u) > (s32)r4) {
                    a.r[0] = 0x817fdfbcu;
                    a.r[1] = r4;
                    (void)tc_call(0x8025a528u, &a);
                }
                r4 = (u32)(s16)rd16(0x817fdfbeu);
                if ((s32)r4 >= -4) {
                    r3 = rd32((u32)param_3 + 0xcu);
                    if ((s32)r4 < (s32)r3) {
                        if ((u32)rd8((u32)param_3 + 3u) == 0u) {
                            r0 = (u32)rd8(0x817fdfc0u) - (r4 + 1u);
                            wr32((u32)param_3 + 0xcu, r0);
                            if ((s32)r0 >= 0) break;
                            wr32((u32)param_3 + 0xcu, 0u);
                            break;
                        }
                        wr32((u32)param_3 + 0xcu, r3 - (r4 + 1u));
                        break;
                    }
                }
                if ((u32)rd8((u32)param_3 + 3u) == 0u) {
                    wr32((u32)param_3 + 0xcu, (u32)rd8(0x817fdfc0u) - 1u);
                } else {
                    wr32((u32)param_3 + 0xcu, rd32((u32)param_3 + 0xcu) - 1u);
                }
                if ((u32)rd8((u32)param_3 + 5u) != 0x67u) {
                    wr8((u32)param_3 + 5u, 0x45u);
                    fl_ = 1u;
                    break;
                }
                wr8((u32)param_3 + 5u, 0x65u);
                fl_ = 1u;
                break;
            } while (0);
            if (fl_ != 1u) {
                r4 = (u32)rd8(0x817fdfc0u);
                r5 = (u32)(s16)rd16(0x817fdfbeu);
                r8 = r4 - r5 - 1u;
                if ((s32)r8 < 0) {
                    r8 = 0u;
                }
                r0 = rd32((u32)param_3 + 0xcu);
                if ((s32)r8 > (s32)r0) {
                    r0 = r8 - r0;
                    r4 = r4 - r0;
                    a.r[0] = 0x817fdfbcu;
                    a.r[1] = r4;
                    (void)tc_call(0x8025a528u, &a);
                    r4 = (u32)rd8(0x817fdfc0u);
                    r5 = (u32)(s16)rd16(0x817fdfbeu);
                    r8 = r4 - r5 - 1u;
                    if ((s32)r8 < 0) {
                        r8 = 0u;
                    }
                }
                r7 = r5 + 1u;
                if ((s32)r7 < 0) {
                    r7 = 0u;
                }
                if ((s32)(r7 + r8) <= 509) {
                    r5 = 0u;
                    r6 = r4 - 0x7e80203fu;
                    while ((s32)r5 < (s32)(rd32((u32)param_3 + 0xcu) - r8)) {
                        wr8(r31 - 1u, 0x30u);
                        r31 = r31 - 1u;
                        r5 = r5 + 1u;
                    }
                    r3 = 0u;
                    while ((s32)r3 < (s32)r8 && (s32)r3 < (s32)rd8(0x817fdfc0u)) {
                        r6 = r6 - 1u;
                        r3 = r3 + 1u;
                        wr8(r31 - 1u, rd8(r6));
                        r31 = r31 - 1u;
                    }
                    c0lt = (s32)r3 < (s32)r8;
                    r3 = r8 - r3;
                    do {
                        if (c0lt) {
                            r0 = (r3 >> 3u) & 0x1fffffffu;
                            ctr = r0;
                            if (r0 != 0u) {
                                do {
                                    wr8(r31 - 1u, 0x30u);
                                    wr8(r31 - 2u, 0x30u);
                                    wr8(r31 - 3u, 0x30u);
                                    wr8(r31 - 4u, 0x30u);
                                    wr8(r31 - 5u, 0x30u);
                                    wr8(r31 - 6u, 0x30u);
                                    wr8(r31 - 7u, 0x30u);
                                    wr8(r31 - 8u, 0x30u);
                                    r31 = r31 - 8u;
                                    ctr = ctr - 1u;
                                } while (ctr != 0u);
                                r3 = r3 & 7u;
                                if (r3 == 0u) break;
                            }
                            ctr = r3;
                            do {
                                wr8(r31 - 1u, 0x30u);
                                r31 = r31 - 1u;
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    } while (0);
                    if (rd32((u32)param_3 + 0xcu) != 0u || (u32)rd8((u32)param_3 + 3u) != 0u) {
                        wr8(r31 - 1u, (u8)r30);
                        r31 = r31 - 1u;
                    }
                    do {
                        if (r7 == 0u) {
                            wr8(r31 - 1u, 0x30u);
                            r31 = r31 - 1u;
                        } else {
                            r4 = 0u;
                            while ((s32)r4 < (s32)(r7 - (u32)rd8(0x817fdfc0u))) {
                                wr8(r31 - 1u, 0x30u);
                                r31 = r31 - 1u;
                                r4 = r4 + 1u;
                            }
                            r3 = r7 - r4;
                            if ((s32)r4 < (s32)r7) {
                                r0 = (r3 >> 3u) & 0x1fffffffu;
                                ctr = r0;
                                if (r0 != 0u) {
                                    do {
                                        wr8(r31 - 1u, rd8(r6 - 1u));
                                        wr8(r31 - 2u, rd8(r6 - 2u));
                                        wr8(r31 - 3u, rd8(r6 - 3u));
                                        wr8(r31 - 4u, rd8(r6 - 4u));
                                        wr8(r31 - 5u, rd8(r6 - 5u));
                                        wr8(r31 - 6u, rd8(r6 - 6u));
                                        wr8(r31 - 7u, rd8(r6 - 7u));
                                        r6 = r6 - 8u;
                                        wr8(r31 - 8u, rd8(r6));
                                        r31 = r31 - 8u;
                                        ctr = ctr - 1u;
                                    } while (ctr != 0u);
                                    r3 = r3 & 7u;
                                    if (r3 == 0u) break;
                                }
                                ctr = r3;
                                do {
                                    r6 = r6 - 1u;
                                    wr8(r31 - 1u, rd8(r6));
                                    r31 = r31 - 1u;
                                    ctr = ctr - 1u;
                                } while (ctr != 0u);
                            }
                        }
                    } while (0);
                    if ((u32)(s8)rd8(0x817fdfbcu) == 0u) {
                        r0 = (u32)rd8((u32)param_3 + 1u);
                        if (r0 != 1u) {
                            if (r0 != 2u) {
                                r3 = r31;
                                return r3;
                            }
                            wr8(r31 - 1u, 0x20u);
                            r31 = r31 - 1u;
                            r3 = r31;
                            return r3;
                        }
                        wr8(r31 - 1u, 0x2bu);
                        r31 = r31 - 1u;
                        r3 = r31;
                        return r3;
                    }
                    wr8(r31 - 1u, 0x2du);
                    r31 = r31 - 1u;
                    r3 = r31;
                    return r3;
                }
                r3 = 0u;
                return r3;
            }
            fl_ = 0u;
        }
        r4 = rd32((u32)param_3 + 0xcu) + 1u;
        if ((s32)rd8(0x817fdfc0u) > (s32)r4) {
            a.r[0] = 0x817fdfbcu;
            a.r[1] = r4;
            (void)tc_call(0x8025a528u, &a);
        }
        r6 = (u32)(s16)rd16(0x817fdfbeu);
        r8 = 0x2bu;
        if ((s32)r6 < 0) {
            r6 = 0u - r6;
            r8 = 0x2du;
        }
        r7 = 0u;
        while (r6 != 0u || (s32)r7 < 2) {
            r0 = ppc_mulhw(1717986919, (s32)r6);
            r7 = r7 + 1u;
            r3 = (u32)((s32)r0 >> 2);
            r0 = (u32)((s32)r0 >> 2);
            r3 = r3 + ((r3 >> 0x1fu) & 1u);
            r4 = r6 - (r3 * 0xau);
            r6 = r0 + ((r0 >> 0x1fu) & 1u);
            wr8(r31 - 1u, (u8)(r4 + 0x30u));
            r31 = r31 - 1u;
        }
        wr8(r31 - 1u, (u8)r8);
        r3 = rd32((u32)param_3 + 0xcu);
        wr8(r31 - 2u, rd8((u32)param_3 + 5u));
        r31 = r31 - 2u;
        if ((s32)(r3 + ((u32)param_2 - r31)) > 509) {
            r3 = 0u;
            return r3;
        }
        r4 = (u32)rd8(0x817fdfc0u);
        if ((s32)r4 < (s32)(r3 + 1u)) {
            r3 = r3 + 2u;
            r3 = r3 - r4;
            for (;;) {
                r3 = r3 - 1u;
                if (r3 == 0u) break;
                wr8(r31 - 1u, 0x30u);
                r31 = r31 - 1u;
            }
        }
        r3 = (u32)rd8(0x817fdfc0u);
        r4 = r3 - 0x7e80203fu;
        for (;;) {
            r3 = r3 - 1u;
            if (r3 == 0u) break;
            r4 = r4 - 1u;
            wr8(r31 - 1u, rd8(r4));
            r31 = r31 - 1u;
        }
        if (rd32((u32)param_3 + 0xcu) != 0u || (u32)rd8((u32)param_3 + 3u) != 0u) {
            wr8(r31 - 1u, (u8)r30);
            r31 = r31 - 1u;
        }
        wr8(r31 - 1u, rd8(0x817fdfc1u));
        r31 = r31 - 1u;
        if ((u32)(s8)rd8(0x817fdfbcu) == 0u) {
            r0 = (u32)rd8((u32)param_3 + 1u);
            if (r0 != 1u) {
                if (r0 == 2u) {
                    wr8(r31 - 1u, 0x20u);
                    r31 = r31 - 1u;
                }
            } else {
                wr8(r31 - 1u, 0x2bu);
                r31 = r31 - 1u;
            }
        } else {
            wr8(r31 - 1u, 0x2du);
            r31 = r31 - 1u;
        }
        r3 = r31;
        return r3;
    }
    r3 = 0u;
    return r3;
}
