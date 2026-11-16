#include "tc_rt.h"

u32 fn_80258854(s32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r25 = 0, r26 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r26 = (u32)param_1;
    a.r[0] = (u32)param_4;
    a.r[1] = 0u;
    r3 = tc_call(0x8025eb08u, &a);
    if (r3 == 0u) {
        a.r[0] = (u32)param_4;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x8025eb08u, &a);
    }
    r30 = param_2 * (u32)param_3;
    if (r30 != 0u && (u32)rd8((u32)param_4 + 0xau) == 0u) {
        r0 = (rd32((u32)param_4 + 4u) >> 0x16u) & 7u;
        if (r0 != 0u) {
            if (r0 == 2u) {
                (void)tc_call(0x8025968cu, &a);
            }
            r3 = rd32((u32)param_4 + 4u);
            r31 = 1u;
            r4 = 0u;
            if (((r3 >> 0x13u) & 1u) == 0u || ((r3 >> 0x19u) & 3u) == 2u) {
                r4 = 1u;
            }
            if (r4 == 0u && ((rd32((u32)param_4 + 4u) >> 0x19u) & 3u) != 1u) {
                r31 = 0u;
            }
            if (((rd32((u32)param_4 + 8u) >> 0x1du) & 7u) == 0u) {
                r3 = rd32((u32)param_4 + 4u);
                r0 = (r3 >> 0x1bu) & 7u;
                if (((r3 >> 0x1bu) & 2u) != 0u) {
                    r0 = r0 & 4u;
                    if (r0 != 0u) {
                        a.r[0] = (u32)param_4;
                        a.r[1] = 0u;
                        a.r[2] = 2u;
                        r3 = tc_call(0x80258df8u, &a);
                        if (r3 != 0u) {
                            r3 = 0u;
                            return r3;
                        }
                    }
                    wr32((u32)param_4 + 8u, (rd32((u32)param_4 + 8u) & 0x1fffffffu) | 0x20000000u);
                    a.r[0] = (u32)param_4;
                    (void)tc_call(0x80258774u, &a);
                }
            }
            if (((rd32((u32)param_4 + 8u) >> 0x1du) & 7u) == 1u) {
                r29 = 0u;
                if (r30 != 0u) {
                    r3 = rd32((u32)param_4 + 0x1cu);
                    r4 = rd32((u32)param_4 + 0x24u);
                    if (r4 != r3 || r31 != 0u) {
                        r3 = r4 - r3;
                        wr32((u32)param_4 + 0x28u, rd32((u32)param_4 + 0x20u) - r3);
                        do {
                            r5 = rd32((u32)param_4 + 0x28u);
                            r25 = 0u;
                            wr32(0x817fdfd8u, r5);
                            if (r5 > r30) {
                                r5 = r30;
                                wr32(0x817fdfd8u, r30);
                            }
                            if (((rd32((u32)param_4 + 4u) >> 0x19u) & 3u) == 1u && r5 != 0u) {
                                a.r[0] = r26;
                                a.r[1] = 0xau;
                                a.r[2] = r5;
                                r3 = tc_call(0x802592acu, &a);
                                r25 = r3;
                                if (r3 != 0u) {
                                    wr32(0x817fdfd8u, r3 + 1u - r26);
                                }
                            }
                            r5 = rd32(0x817fdfd8u);
                            if (r5 != 0u) {
                                a.r[0] = rd32((u32)param_4 + 0x24u);
                                a.r[1] = r26;
                                a.r[2] = r5;
                                (void)tc_call(0x80004338u, &a);
                                r4 = rd32(0x817fdfd8u);
                                r0 = rd32((u32)param_4 + 0x28u);
                                r26 = r26 + r4;
                                r30 = r30 - r4;
                                wr32((u32)param_4 + 0x24u, rd32((u32)param_4 + 0x24u) + r4);
                                r0 = r0 - rd32(0x817fdfd8u);
                                wr32((u32)param_4 + 0x28u, r0);
                            }
                            if (rd32((u32)param_4 + 0x28u) == 0u || r25 != 0u || ((rd32((u32)param_4 + 4u) >> 0x19u) & 3u) == 0u) {
                                a.r[0] = (u32)param_4;
                                a.r[1] = 0u;
                                r3 = tc_call(0x8025879cu, &a);
                                if (r3 != 0u) {
                                    wr8((u32)param_4 + 0xau, 1u);
                                    r30 = 0u;
                                    wr32((u32)param_4 + 0x28u, 0u);
                                    break;
                                }
                            }
                            r29 = r29 + rd32(0x817fdfd8u);
                        } while (r30 != 0u && r31 != 0u);
                    }
                }
                if (r30 != 0u && r31 == 0u) {
                    r25 = rd32((u32)param_4 + 0x1cu);
                    r31 = rd32((u32)param_4 + 0x20u);
                    wr32((u32)param_4 + 0x1cu, r26);
                    wr32((u32)param_4 + 0x20u, r30);
                    wr32((u32)param_4 + 0x24u, r26 + r30);
                    a.r[0] = (u32)param_4;
                    a.r[1] = 0x817fdfd8u;
                    r3 = tc_call(0x8025879cu, &a);
                    if (r3 == 0u) {
                        r29 = r29 + rd32(0x817fdfd8u);
                    } else {
                        wr8((u32)param_4 + 0xau, 1u);
                        wr32((u32)param_4 + 0x28u, 0u);
                    }
                    wr32((u32)param_4 + 0x1cu, r25);
                    wr32((u32)param_4 + 0x20u, r31);
                    a.r[0] = (u32)param_4;
                    (void)tc_call(0x80258774u, &a);
                    wr32((u32)param_4 + 0x28u, 0u);
                }
                if (((rd32((u32)param_4 + 4u) >> 0x19u) & 3u) != 2u) {
                    wr32((u32)param_4 + 0x28u, 0u);
                }
                r3 = ppc_divwu(r29, param_2);
                return r3;
            }
            wr8((u32)param_4 + 0xau, 1u);
            r3 = 0u;
            wr32((u32)param_4 + 0x28u, 0u);
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
