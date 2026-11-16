#include "tc_rt.h"

u32 fn_802633cc(s32 param_1)
{
    u32 c1gt = 0, c1lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r28 = 0, r29 = 0;
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (((u32)param_1 << 6u) & 0xffffffc0u) - 0x7faff5d0u;
    r29 = 0u;
    r30 = (u32)param_1 * 0x14u;
    r3 = r30 - 0x33000000u;
    while ((rd32(r31 + 0xcu) & 4u) != 0u) {
        if ((rd32(r3 + 0x680cu) & 1u) == 0u) {
            r3 = tc_call(0x8022c2b0u, &a);
            r28 = r3;
            if ((rd32(r31 + 0xcu) & 4u) != 0u) {
                if ((rd32(r31 + 0xcu) & 3u) != 0u) {
                    if ((rd32(r31 + 0xcu) & 2u) != 0u) {
                        r5 = rd32(r31 + 0x10u);
                        c1lt = (s32)r5 < 0;
                        c1gt = (s32)r5 > 0;
                        if (r5 != 0u) {
                            r4 = rd32(r31 + 0x14u);
                            r0 = rd32(r30 - 0x32ff97f0u);
                            r3 = 0u;
                            if (c1gt) {
                                r7 = r5 - 8u;
                                if ((s32)r5 > 8) {
                                    r8 = 0u;
                                    if (!c1lt && (s32)r5 <= 2147483646) {
                                        r8 = 1u;
                                    }
                                    if (r8 != 0u) {
                                        ctr = ((r7 + 7u) >> 3u) & 0x1fffffffu;
                                        if ((s32)r7 > 0) {
                                            do {
                                                r6 = ((3u - r3) << 3u) & 0xfffffff8u;
                                                r6 = ((r6 & 0x20u) != 0u) ? 0u : (r0 >> (r6 & 0x1fu));
                                                wr8(r4, (u8)r6);
                                                r6 = ((3u - (r3 + 1u)) << 3u) & 0xfffffff8u;
                                                r6 = ((r6 & 0x20u) != 0u) ? 0u : (r0 >> (r6 & 0x1fu));
                                                wr8(r4 + 1u, (u8)r6);
                                                r6 = ((3u - (r3 + 2u)) << 3u) & 0xfffffff8u;
                                                r6 = ((r6 & 0x20u) != 0u) ? 0u : (r0 >> (r6 & 0x1fu));
                                                wr8(r4 + 2u, (u8)r6);
                                                r6 = ((0u - r3) << 3u) & 0xfffffff8u;
                                                r6 = ((r6 & 0x20u) != 0u) ? 0u : (r0 >> (r6 & 0x1fu));
                                                wr8(r4 + 3u, (u8)r6);
                                                r6 = ((3u - (r3 + 4u)) << 3u) & 0xfffffff8u;
                                                r6 = ((r6 & 0x20u) != 0u) ? 0u : (r0 >> (r6 & 0x1fu));
                                                wr8(r4 + 4u, (u8)r6);
                                                r6 = ((3u - (r3 + 5u)) << 3u) & 0xfffffff8u;
                                                r6 = ((r6 & 0x20u) != 0u) ? 0u : (r0 >> (r6 & 0x1fu));
                                                wr8(r4 + 5u, (u8)r6);
                                                r6 = ((3u - (r3 + 6u)) << 3u) & 0xfffffff8u;
                                                r6 = ((r6 & 0x20u) != 0u) ? 0u : (r0 >> (r6 & 0x1fu));
                                                wr8(r4 + 6u, (u8)r6);
                                                r6 = ((3u - (r3 + 7u)) << 3u) & 0xfffffff8u;
                                                r6 = ((r6 & 0x20u) != 0u) ? 0u : (r0 >> (r6 & 0x1fu));
                                                wr8(r4 + 7u, (u8)r6);
                                                r4 = r4 + 8u;
                                                r3 = r3 + 8u;
                                                ctr = ctr - 1u;
                                            } while (ctr != 0u);
                                        }
                                    }
                                }
                                ctr = r5 - r3;
                                if ((s32)r3 < (s32)r5) {
                                    do {
                                        r5 = ((3u - r3) << 3u) & 0xfffffff8u;
                                        r5 = ((r5 & 0x20u) != 0u) ? 0u : (r0 >> (r5 & 0x1fu));
                                        wr8(r4, (u8)r5);
                                        r4 = r4 + 1u;
                                        r3 = r3 + 1u;
                                        ctr = ctr - 1u;
                                    } while (ctr != 0u);
                                }
                            }
                        }
                    }
                    wr32(r31 + 0xcu, rd32(r31 + 0xcu) & 0xfffffffcu);
                }
                r3 = tc_call(0x80226600u, &a);
                if (r3 == 0xffu) {
                    r3 = tc_call(0x80225448u, &a);
                    r3 = r3 & 0xf0000000u;
                    if ((r3 - 0x20000000u) != 0u && rd32(r31 + 0x10u) == 4u) {
                        r4 = r30 - 0x33000000u;
                        if ((rd32(r4 + 0x6800u) & 0x70u) == 0u && (((rd32(r4 + 0x6810u) - 0x1010000u) == 0u || (rd32(r4 + 0x6810u) - 0x5070000u) == 0u) || (rd32(r4 + 0x6810u) - 0x4220000u) == 1u)) {
                            if ((u32)rd16(0x800030e6u) != 0x8200u) {
                                a.r[0] = r28;
                                (void)tc_call(0x8022c2d8u, &a);
                                return r29;
                            }
                        }
                    }
                }
                r29 = 1u;
            }
            a.r[0] = r28;
            (void)tc_call(0x8022c2d8u, &a);
            return r29;
        }
    }
    return r29;
}
