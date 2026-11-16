#include "tc_rt.h"

void fn_8028ab90(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r31 = 0;
    TcArgs a = {0};
    r6 = (u32)param_4;
    if (param_1 <= 0xfff3u) {
        r31 = 0u;
        ctr = 3u;
        while (rd32(((r31 << 2u) & 0x3fcu) - 0x7fac64e8u) != 0u) {
            r31 = r31 + 1u;
            if (rd32(((r31 << 2u) & 0x3fcu) - 0x7fac64e8u) == 0u) break;
            r31 = r31 + 1u;
            if (rd32(((r31 << 2u) & 0x3fcu) - 0x7fac64e8u) == 0u) break;
            r31 = r31 + 1u;
            ctr = ctr - 1u;
            if (ctr == 0u) break;
        }
        if ((r31 & 0xffu) != 9u) {
            r3 = (((param_1 + 3u) & 0xfffffffcu) + 0xcu) * param_2;
            if ((u32)param_4 == 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x8028b7f0u, &a);
                r6 = r3;
            }
            if (r6 != 0u) {
                a.r[0] = r31 & 0xffu;
                a.r[1] = param_1;
                a.r[2] = param_2;
                a.r[3] = r6;
                (void)tc_call(0x80289bf4u, &a);
                r4 = 0u;
                r5 = (u32)rd8(0x80539b83u);
                r7 = (u32)rd16(((r31 << 4u) & 0xff0u) - 0x7fac6570u);
                ctr = r5;
                if ((s32)r5 > 0) {
                    while (r7 > (u32)rd16((((u32)rd8(r4 - 0x7fac6486u) << 4u) & 0xfffffff0u) - 0x7fac6570u)) {
                        r4 = r4 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) break;
                    }
                }
                if ((s32)r5 > (s32)r4) {
                    r8 = r4 + 8u;
                    if ((s32)(r5 - r4) > 8) {
                        r9 = 0u;
                        r10 = 0u;
                        r11 = 0u;
                        r7 = 0u;
                        if ((s32)rd8(0x80539b83u) >= (s32)r4 && (s32)r4 >= -2147483647) {
                            r7 = 1u;
                        }
                        if (r7 != 0u && (s32)rd8(0x80539b83u) >= -2147483647) {
                            r11 = 1u;
                        }
                        if (r11 != 0u && (r4 - 0x80000000u) != 0u) {
                            r10 = 1u;
                        }
                        if (r10 != 0u) {
                            r10 = (u32)rd8(0x80539b83u);
                            r6 = 1u;
                            r7 = r10 & 0x80000000u;
                            if (r7 == ((0u - r4) & 0x80000000u) && r7 != ((r10 - r4) & 0x80000000u)) {
                                r6 = 0u;
                            }
                            if (r6 != 0u) {
                                r9 = 1u;
                            }
                        }
                        if (r9 != 0u) {
                            ctr = ((r5 + 7u - r8) >> 3u) & 0x1fffffffu;
                            if ((s32)r5 > (s32)r8) {
                                do {
                                    r6 = r5 - 0x7faeef04u;
                                    r5 = r5 - 8u;
                                    r6 = r6 + 0x30000u;
                                    wr8(r6 - 0x7582u, rd8(r6 - 0x7583u));
                                    wr8(r6 - 0x7583u, rd8(r6 - 0x7584u));
                                    wr8(r6 - 0x7584u, rd8(r6 - 0x7585u));
                                    wr8(r6 - 0x7585u, rd8(r6 - 0x7586u));
                                    wr8(r6 - 0x7586u, rd8(r6 - 0x7587u));
                                    wr8(r6 - 0x7587u, rd8(r6 - 0x7588u));
                                    wr8(r6 - 0x7588u, rd8(r6 - 0x7589u));
                                    wr8(r6 - 0x7589u, rd8(r6 - 0x758au));
                                    ctr = ctr - 1u;
                                } while (ctr != 0u);
                            }
                        }
                    }
                    ctr = r5 - r4;
                    if ((s32)r5 > (s32)r4) {
                        do {
                            r6 = r5 - 0x7faeef04u;
                            r5 = r5 - 1u;
                            r6 = r6 + 0x30000u;
                            wr8(r6 - 0x7582u, rd8(r6 - 0x7583u));
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
                r5 = r31 & 0xffu;
                r4 = r4 - 0x7fabef04u;
                wr8(r4 - 0x7582u, (u8)r31);
                if (r5 < 9u) {
                    if ((u32)param_3 != 1u) {
                        wr16(0x80539b78u, (u16)((u32)rd16(0x80539b78u) & ~(((r5 & 0x20u) != 0u) ? 0u : (1u << (r5 & 0x1fu)))));
                    } else {
                        wr16(0x80539b78u, (u16)((u32)rd16(0x80539b78u) | (((r5 & 0x20u) != 0u) ? 0u : (1u << (r5 & 0x1fu)))));
                    }
                }
                wr8(0x80539b83u, (u8)((u32)rd8(0x80539b83u) + 1u));
            }
        }
    }
    return;
}
