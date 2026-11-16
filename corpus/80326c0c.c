#include "tc_rt.h"

void fn_80326c0c(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = tc_argr(4u), r25 = 0, r28 = 0, r30 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r25 = param_1;
    if ((u32)rd8(param_1 + 0xb8u) != 0u) {
        wr8(0x817fdfc8u, rd8(param_2 + 0x20u));
        wr8(0x817fdfc9u, rd8(param_2 + 0x21u));
        wr8(0x817fdfcau, rd8(param_2 + 0x22u));
    }
    if ((u32)rd8(param_1 + 0xb9u) != 0u) {
        wr8(0x817fdfccu, rd8(param_2 + 0x24u));
        wr8(0x817fdfcdu, rd8(param_2 + 0x25u));
        wr8(0x817fdfceu, rd8(param_2 + 0x26u));
    }
    if ((u32)rd8(param_1 + 0xbau) != 0u) {
        wr8(0x817fdfd0u, rd8(param_2 + 0x28u));
        wr8(0x817fdfd1u, rd8(param_2 + 0x29u));
        wr8(0x817fdfd2u, rd8(param_2 + 0x2au));
    }
    if ((u32)rd8(param_1 + 0xbbu) != 0u) {
        wr8(0x817fdfd4u, rd8(param_2 + 0x2cu));
        wr8(0x817fdfd5u, rd8(param_2 + 0x2du));
        wr8(0x817fdfd6u, rd8(param_2 + 0x2eu));
    }
    r0 = 0xffu;
    if (((u32)rd8(param_1 + 0xbcu) != 0u || (u32)rd8(param_1 + 0xbdu) != 0u || (u32)rd8(param_1 + 0xbeu) != 0u || (u32)rd8(param_1 + 0xbfu) != 0u) && (u32)rd8((u32)param_3 + 0x71u) != 0u) {
        a.r[0] = param_2;
        r3 = tc_call(0x8031d110u, &a);
        f1 = tc_lastf();
        r0 = r3;
    }
    if ((u32)rd8(param_1 + 0xbcu) != 0u) {
        r3 = r0 & 0xffu;
        r4 = (u32)rd8(param_2 + 0x23u);
        wr8(0x817fdfcbu, (u8)r4);
        if (r3 != 0xffu) {
            r3 = r4 * r3;
            r3 = r3 + 0x80u;
            r3 = (u32)((s32)r3 >> 8);
            wr8(0x817fdfcbu, (u8)r3);
        }
    }
    if ((u32)rd8(param_1 + 0xbdu) != 0u) {
        r3 = r0 & 0xffu;
        r4 = (u32)rd8(param_2 + 0x27u);
        wr8(0x817fdfcfu, (u8)r4);
        if (r3 != 0xffu) {
            r3 = r4 * r3;
            r3 = r3 + 0x80u;
            r3 = (u32)((s32)r3 >> 8);
            wr8(0x817fdfcfu, (u8)r3);
        }
    }
    if ((u32)rd8(param_1 + 0xbeu) != 0u) {
        r3 = r0 & 0xffu;
        r4 = (u32)rd8(param_2 + 0x2bu);
        wr8(0x817fdfd3u, (u8)r4);
        if (r3 != 0xffu) {
            r3 = r4 * r3;
            r3 = r3 + 0x80u;
            r3 = (u32)((s32)r3 >> 8);
            wr8(0x817fdfd3u, (u8)r3);
        }
    }
    if ((u32)rd8(param_1 + 0xbfu) != 0u) {
        r0 = r0 & 0xffu;
        r3 = (u32)rd8(param_2 + 0x2fu);
        wr8(0x817fdfd7u, (u8)r3);
        if (r0 != 0xffu) {
            r3 = r3 * r0;
            wr8(0x817fdfd7u, (u8)((s32)(r3 + 0x80u) >> 8));
        }
    }
    r3 = rd32(param_2 + 0xc8u);
    if ((u32)rd8(r3 + 0x6cu) != 0u) {
        if ((u32)rd8(param_1 + 0xb8u) != 0u || (u32)rd8(param_1 + 0xb9u) != 0u || (u32)rd8(param_1 + 0xbcu) != 0u || (u32)rd8(param_1 + 0xbdu) != 0u) {
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = 0x817fdfc8u;
            a.r[3] = 0x817fdfccu;
            r3 = tc_call(0x8031f22cu, &a);
            f1 = tc_lastf();
        }
        if ((u32)rd8(param_1 + 0xbau) != 0u || (u32)rd8(param_1 + 0xbbu) != 0u || (u32)rd8(param_1 + 0xbeu) != 0u || (u32)rd8(param_1 + 0xbfu) != 0u) {
            a.r[0] = rd32(param_2 + 0xc8u);
            a.r[1] = param_2;
            a.r[2] = 0x817fdfd0u;
            a.r[3] = 0x817fdfd4u;
            r3 = tc_call(0x8031f22cu, &a);
            f1 = tc_lastf();
        }
    }
    r30 = param_1;
    r28 = 0u;
    do {
        r3 = (u32)param_3 + r28;
        wr32(0x817fdfc4u, 0u);
        r4 = (u32)rd8(r3 + 0x61u);
        do {
            if (r4 != 0u || (u32)rd8(r3 + 0x69u) != 0u) {
                c0lt = (s32)r4 < 4;
                if (r4 == 4u) {
                    r5 = (u32)rd8(0x817fdfd4u);
                    r4 = (u32)rd8(0x817fdfd5u);
                    r0 = (u32)rd8(0x817fdfd6u);
                    wr8(0x817fdfc4u, (u8)r5);
                    wr8(0x817fdfc5u, (u8)r4);
                    wr8(0x817fdfc6u, (u8)r0);
                } else if (!c0lt) {
                    c0lt = (s32)r4 < 6;
                    if (r4 == 6u) {
                        r4 = (u32)rd8(0x817fdfd0u);
                        r0 = (u32)rd8(0x817fdfd4u);
                        r6 = (u32)rd8(0x817fdfd1u);
                        r7 = r4 * r0;
                        r5 = (u32)rd8(0x817fdfd5u);
                        r4 = (u32)rd8(0x817fdfd2u);
                        r0 = (u32)rd8(0x817fdfd6u);
                        r5 = r6 * r5;
                        wr8(0x817fdfc4u, (u8)((s32)(r7 + 0x80u) >> 8));
                        r4 = r4 * r0;
                        wr8(0x817fdfc5u, (u8)((s32)(r5 + 0x80u) >> 8));
                        wr8(0x817fdfc6u, (u8)((s32)(r4 + 0x80u) >> 8));
                    } else if (c0lt) {
                        r4 = (u32)rd8(0x817fdfc8u);
                        r0 = (u32)rd8(0x817fdfccu);
                        r6 = (u32)rd8(0x817fdfc9u);
                        r7 = r4 * r0;
                        r5 = (u32)rd8(0x817fdfcdu);
                        r4 = (u32)rd8(0x817fdfcau);
                        r0 = (u32)rd8(0x817fdfceu);
                        r5 = r6 * r5;
                        wr8(0x817fdfc4u, (u8)((s32)(r7 + 0x80u) >> 8));
                        r4 = r4 * r0;
                        wr8(0x817fdfc5u, (u8)((s32)(r5 + 0x80u) >> 8));
                        wr8(0x817fdfc6u, (u8)((s32)(r4 + 0x80u) >> 8));
                    }
                } else {
                    c0lt = (s32)r4 < 2;
                    if (r4 == 2u) {
                        r5 = (u32)rd8(0x817fdfccu);
                        r4 = (u32)rd8(0x817fdfcdu);
                        r0 = (u32)rd8(0x817fdfceu);
                        wr8(0x817fdfc4u, (u8)r5);
                        wr8(0x817fdfc5u, (u8)r4);
                        wr8(0x817fdfc6u, (u8)r0);
                    } else if (!c0lt) {
                        r5 = (u32)rd8(0x817fdfd0u);
                        r4 = (u32)rd8(0x817fdfd1u);
                        r0 = (u32)rd8(0x817fdfd2u);
                        wr8(0x817fdfc4u, (u8)r5);
                        wr8(0x817fdfc5u, (u8)r4);
                        wr8(0x817fdfc6u, (u8)r0);
                    } else if ((s32)r4 >= 1) {
                        r5 = (u32)rd8(0x817fdfc8u);
                        r4 = (u32)rd8(0x817fdfc9u);
                        r0 = (u32)rd8(0x817fdfcau);
                        wr8(0x817fdfc4u, (u8)r5);
                        wr8(0x817fdfc5u, (u8)r4);
                        wr8(0x817fdfc6u, (u8)r0);
                    }
                }
                r0 = (u32)rd8(r3 + 0x69u);
                c0lt = (s32)r0 < 4;
                if (r0 == 4u) {
                    wr8(0x817fdfc7u, rd8(0x817fdfd7u));
                } else if (!c0lt) {
                    c0lt = (s32)r0 < 6;
                    if (r0 == 6u) {
                        r3 = (u32)rd8(0x817fdfd3u);
                        r3 = r3 * (u32)rd8(0x817fdfd7u);
                        wr8(0x817fdfc7u, (u8)((s32)(r3 + 0x80u) >> 8));
                    } else if (c0lt) {
                        r3 = (u32)rd8(0x817fdfcbu);
                        r3 = r3 * (u32)rd8(0x817fdfcfu);
                        wr8(0x817fdfc7u, (u8)((s32)(r3 + 0x80u) >> 8));
                    }
                } else {
                    c0lt = (s32)r0 < 2;
                    if (r0 == 2u) {
                        wr8(0x817fdfc7u, rd8(0x817fdfcfu));
                    } else if (!c0lt) {
                        wr8(0x817fdfc7u, rd8(0x817fdfd3u));
                    } else if ((s32)r0 >= 1) {
                        wr8(0x817fdfc7u, rd8(0x817fdfcbu));
                    }
                }
                if ((u32)param_4 == 0u) {
                    r3 = (u32)rd8(0x817fdfc4u);
                    if (r3 == (u32)rd8(r30 + 0x94u)) {
                        r3 = (u32)rd8(0x817fdfc5u);
                        if (r3 == (u32)rd8(r30 + 0x95u)) {
                            r3 = (u32)rd8(0x817fdfc6u);
                            if (r3 == (u32)rd8(r30 + 0x96u)) {
                                r3 = (u32)rd8(0x817fdfc7u);
                                if (r3 == (u32)rd8(r30 + 0x97u)) break;
                            }
                        }
                    }
                }
                wr32(0x817fdfbcu, rd32(0x817fdfc4u));
                a.r[0] = r28 + 1u;
                a.r[1] = 0x817fdfbcu;
                r3 = tc_call(0x80253524u, &a);
                f1 = tc_lastf();
                r3 = (u32)rd8(0x817fdfc4u);
                r0 = (u32)rd8(0x817fdfc5u);
                wr8(r30 + 0x94u, (u8)r3);
                r3 = (u32)rd8(0x817fdfc6u);
                wr8(r30 + 0x95u, (u8)r0);
                r0 = (u32)rd8(0x817fdfc7u);
                wr8(r30 + 0x96u, (u8)r3);
                wr8(r30 + 0x97u, (u8)r0);
            }
        } while (0);
        r28 = r28 + 1u;
        r30 = r30 + 4u;
    } while ((s32)r28 < 3);
    r30 = 0u;
    do {
        r3 = (u32)param_3 + r30;
        wr32(0x817fdfc0u, 0u);
        r4 = (u32)rd8(r3 + 0x64u);
        do {
            if (r4 != 0u || (u32)rd8(r3 + 0x6cu) != 0u) {
                c0lt = (s32)r4 < 4;
                if (r4 == 4u) {
                    r5 = (u32)rd8(0x817fdfd4u);
                    r4 = (u32)rd8(0x817fdfd5u);
                    r0 = (u32)rd8(0x817fdfd6u);
                    wr8(0x817fdfc0u, (u8)r5);
                    wr8(0x817fdfc1u, (u8)r4);
                    wr8(0x817fdfc2u, (u8)r0);
                } else if (!c0lt) {
                    c0lt = (s32)r4 < 6;
                    if (r4 == 6u) {
                        r4 = (u32)rd8(0x817fdfd0u);
                        r0 = (u32)rd8(0x817fdfd4u);
                        r6 = (u32)rd8(0x817fdfd1u);
                        r7 = r4 * r0;
                        r5 = (u32)rd8(0x817fdfd5u);
                        r4 = (u32)rd8(0x817fdfd2u);
                        r0 = (u32)rd8(0x817fdfd6u);
                        r5 = r6 * r5;
                        wr8(0x817fdfc0u, (u8)((s32)(r7 + 0x80u) >> 8));
                        r4 = r4 * r0;
                        wr8(0x817fdfc1u, (u8)((s32)(r5 + 0x80u) >> 8));
                        wr8(0x817fdfc2u, (u8)((s32)(r4 + 0x80u) >> 8));
                    } else if (c0lt) {
                        r4 = (u32)rd8(0x817fdfc8u);
                        r0 = (u32)rd8(0x817fdfccu);
                        r6 = (u32)rd8(0x817fdfc9u);
                        r7 = r4 * r0;
                        r5 = (u32)rd8(0x817fdfcdu);
                        r4 = (u32)rd8(0x817fdfcau);
                        r0 = (u32)rd8(0x817fdfceu);
                        r5 = r6 * r5;
                        wr8(0x817fdfc0u, (u8)((s32)(r7 + 0x80u) >> 8));
                        r4 = r4 * r0;
                        wr8(0x817fdfc1u, (u8)((s32)(r5 + 0x80u) >> 8));
                        wr8(0x817fdfc2u, (u8)((s32)(r4 + 0x80u) >> 8));
                    }
                } else {
                    c0lt = (s32)r4 < 2;
                    if (r4 == 2u) {
                        r5 = (u32)rd8(0x817fdfccu);
                        r4 = (u32)rd8(0x817fdfcdu);
                        r0 = (u32)rd8(0x817fdfceu);
                        wr8(0x817fdfc0u, (u8)r5);
                        wr8(0x817fdfc1u, (u8)r4);
                        wr8(0x817fdfc2u, (u8)r0);
                    } else if (!c0lt) {
                        r5 = (u32)rd8(0x817fdfd0u);
                        r4 = (u32)rd8(0x817fdfd1u);
                        r0 = (u32)rd8(0x817fdfd2u);
                        wr8(0x817fdfc0u, (u8)r5);
                        wr8(0x817fdfc1u, (u8)r4);
                        wr8(0x817fdfc2u, (u8)r0);
                    } else if ((s32)r4 >= 1) {
                        r5 = (u32)rd8(0x817fdfc8u);
                        r4 = (u32)rd8(0x817fdfc9u);
                        r0 = (u32)rd8(0x817fdfcau);
                        wr8(0x817fdfc0u, (u8)r5);
                        wr8(0x817fdfc1u, (u8)r4);
                        wr8(0x817fdfc2u, (u8)r0);
                    }
                }
                r0 = (u32)rd8(r3 + 0x6cu);
                c0lt = (s32)r0 < 4;
                if (r0 == 4u) {
                    wr8(0x817fdfc3u, rd8(0x817fdfd7u));
                } else if (!c0lt) {
                    c0lt = (s32)r0 < 6;
                    if (r0 == 6u) {
                        r3 = (u32)rd8(0x817fdfd3u);
                        r3 = r3 * (u32)rd8(0x817fdfd7u);
                        wr8(0x817fdfc3u, (u8)((s32)(r3 + 0x80u) >> 8));
                    } else if (c0lt) {
                        r3 = (u32)rd8(0x817fdfcbu);
                        r3 = r3 * (u32)rd8(0x817fdfcfu);
                        wr8(0x817fdfc3u, (u8)((s32)(r3 + 0x80u) >> 8));
                    }
                } else {
                    c0lt = (s32)r0 < 2;
                    if (r0 == 2u) {
                        wr8(0x817fdfc3u, rd8(0x817fdfcfu));
                    } else if (!c0lt) {
                        wr8(0x817fdfc3u, rd8(0x817fdfd3u));
                    } else if ((s32)r0 >= 1) {
                        wr8(0x817fdfc3u, rd8(0x817fdfcbu));
                    }
                }
                if ((u32)param_4 == 0u) {
                    r3 = (u32)rd8(0x817fdfc0u);
                    if (r3 == (u32)rd8(r25 + 0xa0u)) {
                        r3 = (u32)rd8(0x817fdfc1u);
                        if (r3 == (u32)rd8(r25 + 0xa1u)) {
                            r3 = (u32)rd8(0x817fdfc2u);
                            if (r3 == (u32)rd8(r25 + 0xa2u)) {
                                r3 = (u32)rd8(0x817fdfc3u);
                                if (r3 == (u32)rd8(r25 + 0xa3u)) break;
                            }
                        }
                    }
                }
                wr32(0x817fdfb8u, rd32(0x817fdfc0u));
                a.r[0] = r30;
                a.r[1] = 0x817fdfb8u;
                r3 = tc_call(0x802535e8u, &a);
                f1 = tc_lastf();
                r3 = (u32)rd8(0x817fdfc0u);
                r0 = (u32)rd8(0x817fdfc1u);
                wr8(r25 + 0xa0u, (u8)r3);
                r3 = (u32)rd8(0x817fdfc2u);
                wr8(r25 + 0xa1u, (u8)r0);
                r0 = (u32)rd8(0x817fdfc3u);
                wr8(r25 + 0xa2u, (u8)r3);
                wr8(r25 + 0xa3u, (u8)r0);
            }
        } while (0);
        r30 = r30 + 1u;
        r25 = r25 + 4u;
    } while ((s32)r30 < 4);
    return;
}
