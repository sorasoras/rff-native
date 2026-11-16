#include "tc_rt.h"

void fn_8010cb80(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r23 = 0, r24 = 0;
    u32 r25 = 0, r26 = 0, r27 = 0;
    TcArgs a = {0};
    a.r[0] = 0x80471ed0u;
    a.r[1] = rd32(param_2);
    r3 = tc_call(0x80091b10u, &a);
    r27 = r3;
    if (r3 != 0u) {
        c0lt = param_1 < 250;
        if ((u32)param_1 == 0xfau) {
            r25 = rd32(r3 + 4u);
            r24 = rd32(r3);
            r23 = 0u;
            while ((s32)r23 < (s32)rd32(param_2 + 4u)) {
                r3 = tc_call(0x8025bbd4u, &a);
                r26 = r3 - ((u32)ppc_divw((s32)r3, (s32)r25) * r25);
                r3 = tc_call(0x8025bbd4u, &a);
                r4 = rd32(r27 + 8u);
                r3 = r3 - ((u32)ppc_divw((s32)r3, (s32)r24) * r24);
                r0 = (r26 + (rd32(r27 + 4u) * r3)) * 0x9cu;
                r3 = rd32(r4 + r0);
                r26 = r4 + r0;
                r4 = (u32)rd8(r3);
                if (r4 != 0u || (u32)rd8(r3 + 1u) != 3u) {
                    r3 = rd32(r26 + 0x8cu);
                    if ((u32)((s32)((r3 << 1u) & 0xc0000000u) >> 31) != 0u) {
                        r3 = (r3 & 0xbfffffffu) | ((ppc_cntlzw(r4) << 0x19u) & 0x40000000u);
                        wr32(r26 + 0x8cu, r3);
                    }
                    wr8(rd32(r26), 0u);
                    r4 = rd32(r26 + 0x8cu);
                    if ((u32)((s32)r4 >> 31) != 0u) {
                        r4 = (r4 & 0x7fffffffu) | ((ppc_cntlzw((u32)rd8(rd32(r26) + 1u) - 3u) << 0x1au) & 0x80000000u);
                        wr32(r26 + 0x8cu, r4);
                    }
                    wr8(rd32(r26) + 1u, 3u);
                    r3 = tc_call(0x8025bbd4u, &a);
                    r5 = rd32(r26 + 0x8cu);
                    r6 = rd32((((r3 - (((ppc_mulhwu(0xaaaaaaabu, r3) >> 2u) & 0x3fffffffu) * 6u)) << 2u) & 0xfffffffcu) - 0x7fc9e338u);
                    if ((u32)((s32)r5 >> 31) != 0u) {
                        r5 = (r5 & 0x7fffffffu) | ((ppc_cntlzw((u32)rd8(rd32(r26) + 2u) - (r6 & 0xffu)) << 0x1au) & 0x80000000u);
                        wr32(r26 + 0x8cu, r5);
                    }
                    wr8(rd32(r26) + 2u, (u8)r6);
                }
                r23 = r23 + 1u;
            }
        } else if (!c0lt) {
            if ((u32)param_1 == 0x175u) {
                r24 = 0u;
                while ((s32)r24 < (s32)rd32(r27 + 4u)) {
                    r25 = 0u;
                    while ((s32)r25 < (s32)rd32(r27)) {
                        r23 = rd32(r27 + 8u) + ((r24 + (rd32(r27 + 4u) * r25)) * 0x9cu);
                        a.r[0] = r23;
                        a.r[1] = param_2 + 4u;
                        r3 = tc_call(0x8010cae4u, &a);
                        if (r3 != 0u) {
                            a.r[0] = r23;
                            (void)tc_call(0x8008f96cu, &a);
                        }
                        r25 = r25 + 1u;
                    }
                    r24 = r24 + 1u;
                }
            }
        } else {
            c0lt = param_1 < 243;
            if ((u32)param_1 == 0xf3u) {
                r23 = 0u;
                r24 = 0u;
                while ((s32)r24 < (s32)rd32(r27 + 4u)) {
                    r25 = 0u;
                    while ((s32)r25 < (s32)rd32(r27)) {
                        a.r[0] = rd32(r27 + 8u) + ((r24 + (rd32(r27 + 4u) * r25)) * 0x9cu);
                        a.r[1] = param_2 + 4u;
                        r3 = tc_call(0x8010cae4u, &a);
                        if (r3 != 0u) {
                            r23 = r23 + 1u;
                        }
                        r25 = r25 + 1u;
                    }
                    r24 = r24 + 1u;
                }
                a.r[0] = r23;
                a.r[1] = 0u;
                (void)tc_call(0x800a796cu, &a);
            } else if (c0lt && (u32)param_1 == 0xe7u) {
                r6 = rd32(param_2 + 4u);
                r7 = 0u;
                r5 = rd32(r3 + 4u);
                r8 = 0u;
                while ((s32)r8 < (s32)r5) {
                    r0 = rd32(r3);
                    r9 = 0u;
                    ctr = r0;
                    if ((s32)r0 > 0) {
                        do {
                            r4 = (u32)rd8(rd32(rd32(r3 + 8u) + ((r8 + (r5 * r9)) * 0x9cu)));
                            if (r6 != 0xau) {
                                if (r4 == r6) {
                                    r7 = r7 + 1u;
                                }
                            } else if ((r4 - 1u) <= 3u) {
                                r7 = r7 + 1u;
                            }
                            r9 = r9 + 1u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                    r8 = r8 + 1u;
                }
                a.r[0] = r7;
                a.r[1] = 0u;
                (void)tc_call(0x800a796cu, &a);
            }
        }
    }
    return;
}
