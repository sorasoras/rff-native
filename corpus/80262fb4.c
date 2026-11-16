#include "tc_rt.h"

void fn_80262fb4(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5)
{
    u32 c1lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = ((param_1 << 6u) & 0xffffffc0u) - 0x7faff5d0u;
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    if ((rd32(r31 + 0xcu) & 3u) != 0u || (rd32(r31 + 0xcu) & 4u) == 0u) {
        r3 = r3;
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        wr32(r31 + 4u, (u32)param_5);
        if ((u32)param_5 != 0u) {
            r3 = (param_1 * 0x14u) - 0x33000000u;
            wr32(r3 + 0x6800u, (rd32(r3 + 0x6800u) & 0x7f5u) | 8u);
            r0 = ((param_1 << 2u) & 0xfffffffcu) - param_1;
            a.r[0] = ((r0 & 0x20u) != 0u) ? 0u : (0x200000u >> (r0 & 0x1fu));
            (void)tc_call(0x8022c6c0u, &a);
        }
        wr32(r31 + 0xcu, rd32(r31 + 0xcu) | 2u);
        if ((u32)param_4 != 0u) {
            r0 = 0u;
            r4 = 0u;
            c1lt = (s32)param_3 < 0;
            if ((s32)param_3 > 0) {
                r6 = param_3 - 8u;
                if ((s32)param_3 > 8) {
                    r5 = 0u;
                    if (!c1lt && (s32)param_3 <= 2147483646) {
                        r5 = 1u;
                    }
                    if (r5 != 0u) {
                        r3 = param_2;
                        ctr = ((r6 + 7u) >> 3u) & 0x1fffffffu;
                        if ((s32)r6 > 0) {
                            do {
                                r5 = ((3u - r4) << 3u) & 0xfffffff8u;
                                r5 = ((r5 & 0x20u) != 0u) ? 0u : ((u32)rd8(r3) << (r5 & 0x1fu));
                                r0 = r0 | r5;
                                r5 = ((3u - (r4 + 1u)) << 3u) & 0xfffffff8u;
                                r5 = ((r5 & 0x20u) != 0u) ? 0u : ((u32)rd8(r3 + 1u) << (r5 & 0x1fu));
                                r0 = r0 | r5;
                                r5 = ((3u - (r4 + 2u)) << 3u) & 0xfffffff8u;
                                r5 = ((r5 & 0x20u) != 0u) ? 0u : ((u32)rd8(r3 + 2u) << (r5 & 0x1fu));
                                r0 = r0 | r5;
                                r5 = ((0u - r4) << 3u) & 0xfffffff8u;
                                r5 = ((r5 & 0x20u) != 0u) ? 0u : ((u32)rd8(r3 + 3u) << (r5 & 0x1fu));
                                r0 = r0 | r5;
                                r5 = ((3u - (r4 + 4u)) << 3u) & 0xfffffff8u;
                                r5 = ((r5 & 0x20u) != 0u) ? 0u : ((u32)rd8(r3 + 4u) << (r5 & 0x1fu));
                                r0 = r0 | r5;
                                r5 = ((3u - (r4 + 5u)) << 3u) & 0xfffffff8u;
                                r5 = ((r5 & 0x20u) != 0u) ? 0u : ((u32)rd8(r3 + 5u) << (r5 & 0x1fu));
                                r0 = r0 | r5;
                                r5 = ((3u - (r4 + 6u)) << 3u) & 0xfffffff8u;
                                r5 = ((r5 & 0x20u) != 0u) ? 0u : ((u32)rd8(r3 + 6u) << (r5 & 0x1fu));
                                r0 = r0 | r5;
                                r5 = ((3u - (r4 + 7u)) << 3u) & 0xfffffff8u;
                                r5 = ((r5 & 0x20u) != 0u) ? 0u : ((u32)rd8(r3 + 7u) << (r5 & 0x1fu));
                                r0 = r0 | r5;
                                r3 = r3 + 8u;
                                r4 = r4 + 8u;
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                }
                r6 = param_2 + r4;
                ctr = param_3 - r4;
                if ((s32)r4 < (s32)param_3) {
                    do {
                        r3 = ((3u - r4) << 3u) & 0xfffffff8u;
                        r3 = ((r3 & 0x20u) != 0u) ? 0u : ((u32)rd8(r6) << (r3 & 0x1fu));
                        r0 = r0 | r3;
                        r6 = r6 + 1u;
                        r4 = r4 + 1u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            wr32((param_1 * 0x14u) - 0x32ff97f0u, r0);
        }
        wr32(r31 + 0x14u, param_2);
        wr32(r31 + 0x10u, param_3 & (u32)((s32)(((u32)param_4 - 1u) | (1u - (u32)param_4)) >> 31));
        wr32((param_1 * 0x14u) - 0x32ff97f4u, (((u32)param_4 << 2u) & 0xfffffffcu) | 1u | (((param_3 - 1u) << 4u) & 0xfffffff0u));
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
