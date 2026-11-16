#include "tc_rt.h"

void fn_80132058(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r18 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0;
    u32 r23 = 0, r24 = 0, r25 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
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
    r30 = 0u;
    r25 = rd32((u32)param_1 + 0x44u);
    r7 = rd32(0x8033a1a4u);
    r6 = rd32(0x8033a1a8u);
    c0lt = (s32)r25 < 7;
    r5 = rd32(0x8033a1acu);
    r4 = rd32(0x8033a1b0u);
    r3 = rd32(0x8033a1b4u);
    r0 = rd32(0x8033a1b8u);
    wr32(0x817fdf98u, rd32(0x8033a1a0u));
    wr32(0x817fdf9cu, r7);
    wr32(0x817fdfa0u, r6);
    wr32(0x817fdfa4u, r5);
    wr32(0x817fdfa8u, r4);
    wr32(0x817fdfacu, r3);
    wr32(0x817fdfb0u, r0);
    if (r25 == 7u) {
        r31 = 2u;
        r30 = (u32)rd8(0x804990b5u);
    } else if (!c0lt) {
        if ((s32)r25 >= 9) {
            r31 = 4u;
        } else {
            r31 = 3u;
            r30 = (u32)rd8(0x804990b3u);
        }
    } else if ((s32)r25 >= 6) {
        r31 = 1u;
        r30 = (u32)rd8(0x804990b4u);
    } else if ((s32)r25 >= 0) {
        r31 = 0u;
        r30 = (u32)rd8(0x804990b2u);
    } else {
        r31 = 4u;
    }
    a.r[0] = 0x804ac83cu;
    a.r[1] = r31;
    r3 = tc_call(0x80165898u, &a);
    r24 = r3;
    r18 = 0u;
    if ((s32)r25 > 5) {
        r19 = 0u;
        while ((s32)r19 < (s32)r24) {
            a.r[0] = 0x804ac83cu;
            a.r[1] = r31;
            a.r[2] = r19;
            r3 = tc_call(0x80165a20u, &a);
            r18 = r18 + r3;
            r19 = r19 + 1u;
        }
    } else {
        a.r[0] = 0x804ac83cu;
        a.r[1] = r31;
        a.r[2] = rd32(((r25 << 2u) & 0xfffffffcu) - 0x7e802068u);
        r3 = tc_call(0x80165a20u, &a);
        r18 = r3;
    }
    wr32((u32)param_1 + 0x8e8u, r18);
    wr32((u32)param_1 + 0x8e4u, 0u);
    if ((s32)r18 > 0) {
        a.r[0] = 0u;
        r3 = tc_call(0x801b3a7cu, &a);
        a.r[0] = r3;
        a.r[1] = r18 * 0x24u;
        r3 = tc_call(0x801b39d8u, &a);
        wr32((u32)param_1 + 0x8e4u, r3);
    }
    r29 = rd32((u32)param_1 + 0x8e4u);
    r21 = 0u;
    if ((s32)r25 > 5) {
        r20 = 0u;
        while ((s32)r20 < (s32)r24) {
            a.r[0] = 0x804ac83cu;
            a.r[1] = r31;
            a.r[2] = r20;
            r3 = tc_call(0x80165a20u, &a);
            r23 = r3;
            a.r[0] = 0x804ac83cu;
            a.r[1] = r31;
            a.r[2] = r20;
            r3 = tc_call(0x801658e0u, &a);
            r22 = r3;
            a.r[0] = r29;
            a.r[1] = r3;
            a.r[2] = r23 * 0x24u;
            (void)tc_call(0x80004338u, &a);
            r19 = 0u;
            r18 = 0u;
            while ((s32)r19 < (s32)r23) {
                r0 = 0u;
                r3 = rd32(r29 + 4u) + 0x1ceu;
                if ((s32)r3 >= 462 && (s32)r3 <= 503) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    r0 = 0u;
                } else {
                    r3 = r3 - 0x7fb6716eu;
                    r3 = (u32)rd8(r3 + 0xd4u);
                    r0 = (ppc_cntlzw(r3 - 1u) >> 5u) & 0x7ffffffu;
                }
                do {
                    if (r0 == 0u) {
                        a.r[0] = 0x80492800u;
                        a.r[1] = r31;
                        a.r[2] = r20;
                        a.r[3] = r19;
                        r3 = tc_call(0x800839a4u, &a);
                        if (r3 == 0u) break;
                    }
                    if (rd32(r22 + r18) != 0x2e8u) {
                        r21 = r21 + 1u;
                    }
                } while (0);
                r19 = r19 + 1u;
                r18 = r18 + 0x24u;
                r29 = r29 + 0x24u;
            }
            r20 = r20 + 1u;
        }
    } else {
        a.r[0] = 0x804ac83cu;
        a.r[1] = r31;
        a.r[2] = rd32(((r25 << 2u) & 0xfffffffcu) - 0x7e802068u);
        r3 = tc_call(0x80165a20u, &a);
        r23 = r3;
        a.r[0] = 0x804ac83cu;
        a.r[1] = r31;
        a.r[2] = rd32(((r25 << 2u) & 0xfffffffcu) - 0x7e802068u);
        r3 = tc_call(0x801658e0u, &a);
        r22 = r3;
        a.r[0] = r29;
        a.r[1] = r3;
        a.r[2] = r23 * 0x24u;
        (void)tc_call(0x80004338u, &a);
        r20 = 0u;
        r18 = 0u;
        while ((s32)r20 < (s32)r23) {
            r0 = 0u;
            r3 = rd32(r29 + 4u) + 0x1ceu;
            if ((s32)r3 >= 462 && (s32)r3 <= 503) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                r0 = 0u;
            } else {
                r3 = r3 - 0x7fb6716eu;
                r3 = (u32)rd8(r3 + 0xd4u);
                r0 = (ppc_cntlzw(r3 - 1u) >> 5u) & 0x7ffffffu;
            }
            do {
                if (r0 == 0u) {
                    a.r[0] = 0x80492800u;
                    a.r[1] = r31;
                    a.r[2] = rd32(((r25 << 2u) & 0xfffffffcu) - 0x7e802068u);
                    a.r[3] = r20;
                    r3 = tc_call(0x800839a4u, &a);
                    if (r3 == 0u) break;
                }
                if (rd32(r22 + r18) != 0x2e8u) {
                    r21 = r21 + 1u;
                }
            } while (0);
            r20 = r20 + 1u;
            r18 = r18 + 0x24u;
            r29 = r29 + 0x24u;
        }
    }
    wr32((u32)param_1 + 0x8f0u, r21);
    wr32((u32)param_1 + 0x8ecu, 0u);
    if ((s32)r21 > 0) {
        a.r[0] = 0u;
        r3 = tc_call(0x801b3a7cu, &a);
        a.r[0] = r3;
        a.r[1] = r21 * 0x24u;
        r3 = tc_call(0x801b39d8u, &a);
        wr32((u32)param_1 + 0x8ecu, r3);
    }
    r29 = rd32((u32)param_1 + 0x8e4u);
    r19 = rd32((u32)param_1 + 0x8ecu);
    if ((s32)r25 > 5) {
        r20 = 0u;
        while ((s32)r20 < (s32)r24) {
            a.r[0] = 0x804ac83cu;
            a.r[1] = r31;
            a.r[2] = r20;
            r3 = tc_call(0x80165a20u, &a);
            r23 = r3;
            a.r[0] = 0x804ac83cu;
            a.r[1] = r31;
            a.r[2] = r20;
            r3 = tc_call(0x801658e0u, &a);
            r25 = r3;
            r21 = 0u;
            r22 = 0u;
            while ((s32)r21 < (s32)r23) {
                r0 = 0u;
                r3 = rd32(r29 + 4u) + 0x1ceu;
                if ((s32)r3 >= 462 && (s32)r3 <= 503) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    r0 = 0u;
                } else {
                    r3 = r3 - 0x7fb6716eu;
                    r3 = (u32)rd8(r3 + 0xd4u);
                    r0 = (ppc_cntlzw(r3 - 1u) >> 5u) & 0x7ffffffu;
                }
                do {
                    if (r0 == 0u) {
                        a.r[0] = 0x80492800u;
                        a.r[1] = r31;
                        a.r[2] = r20;
                        a.r[3] = r21;
                        r3 = tc_call(0x800839a4u, &a);
                        if (r3 == 0u) break;
                    }
                    if (rd32(r25 + r22) != 0x2e8u) {
                        a.r[0] = r19;
                        a.r[1] = r29;
                        a.r[2] = 0x24u;
                        (void)tc_call(0x80004338u, &a);
                        r19 = r19 + 0x24u;
                    }
                } while (0);
                r21 = r21 + 1u;
                r22 = r22 + 0x24u;
                r29 = r29 + 0x24u;
            }
            r20 = r20 + 1u;
        }
    } else {
        a.r[0] = 0x804ac83cu;
        a.r[1] = r31;
        a.r[2] = rd32(((r25 << 2u) & 0xfffffffcu) - 0x7e802068u);
        r3 = tc_call(0x80165a20u, &a);
        r23 = r3;
        a.r[0] = 0x804ac83cu;
        a.r[1] = r31;
        a.r[2] = rd32(((r25 << 2u) & 0xfffffffcu) - 0x7e802068u);
        r3 = tc_call(0x801658e0u, &a);
        r24 = r3;
        r20 = 0u;
        r21 = 0u;
        while ((s32)r20 < (s32)r23) {
            r0 = 0u;
            r3 = rd32(r29 + 4u) + 0x1ceu;
            if ((s32)r3 >= 462 && (s32)r3 <= 503) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                r0 = 0u;
            } else {
                r3 = r3 - 0x7fb6716eu;
                r3 = (u32)rd8(r3 + 0xd4u);
                r0 = (ppc_cntlzw(r3 - 1u) >> 5u) & 0x7ffffffu;
            }
            do {
                if (r0 == 0u) {
                    a.r[0] = 0x80492800u;
                    a.r[1] = r31;
                    a.r[2] = rd32(((r25 << 2u) & 0xfffffffcu) - 0x7e802068u);
                    a.r[3] = r20;
                    r3 = tc_call(0x800839a4u, &a);
                    if (r3 == 0u) break;
                }
                if (rd32(r24 + r21) != 0x2e8u) {
                    a.r[0] = r19;
                    a.r[1] = r29;
                    a.r[2] = 0x24u;
                    (void)tc_call(0x80004338u, &a);
                    r19 = r19 + 0x24u;
                }
            } while (0);
            r20 = r20 + 1u;
            r21 = r21 + 0x24u;
            r29 = r29 + 0x24u;
        }
    }
    wr32((u32)param_1 + 0x8f4u, r30);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80132608u, &a);
    return;
}
