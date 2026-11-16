#include "tc_rt.h"

u32 fn_80307144(s32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, c1lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    TcArgs a = {0};
    r6 = rd32((u32)param_1 + 4u);
    a.r[0] = (u32)rd8(r6 + 0x10u);
    a.r[1] = rd32(r6 + 0x14u);
    a.r[2] = r6 + 8u;
    r3 = tc_call(0x8030e93cu, &a);
    if (param_3 < (s32)rd8(r3)) {
        r0 = (u32)rd8(r3 + 1u);
        c0lt = (s32)r0 < 1;
        if (r0 == 1u) {
            r6 = r3 + (((u32)param_3 << 3u) & 0xfffffff8u);
            a.r[0] = (u32)rd8(r6 + 4u);
            a.r[1] = rd32(r6 + 8u);
            a.r[2] = rd32((u32)param_1 + 4u) + 8u;
            r3 = tc_call(0x8030e93cu, &a);
            if (r3 == 0u) {
                r3 = 0u;
                return r3;
            }
            r5 = 0x20u;
            wr8(param_2, rd8(r3));
            wr8(param_2 + 1u, rd8(r3 + 1u));
            r0 = (u32)rd8(r3 + 8u);
            wr32(param_2 + 4u, r0);
            if ((s32)r0 <= 32) {
                r5 = r0;
            }
            c1lt = (s32)r5 < 0;
            r8 = 0u;
            if ((s32)r5 > 0) {
                r6 = r5 - 8u;
                if ((s32)r5 > 8) {
                    r7 = 0u;
                    if (!c1lt && (s32)r5 <= 2147483646) {
                        r7 = 1u;
                    }
                    if (r7 != 0u) {
                        ctr = ((r6 + 7u) >> 3u) & 0x1fffffffu;
                        if ((s32)r6 > 0) {
                            do {
                                r4 = r3 + r8;
                                r6 = param_2 + r8;
                                r8 = r8 + 8u;
                                wr8(r6 + 8u, rd8(r4 + 9u));
                                wr8(r6 + 9u, rd8(r4 + 0xau));
                                wr8(r6 + 0xau, rd8(r4 + 0xbu));
                                wr8(r6 + 0xbu, rd8(r4 + 0xcu));
                                wr8(r6 + 0xcu, rd8(r4 + 0xdu));
                                wr8(r6 + 0xdu, rd8(r4 + 0xeu));
                                wr8(r6 + 0xeu, rd8(r4 + 0xfu));
                                wr8(r6 + 0xfu, rd8(r4 + 0x10u));
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                }
                ctr = r5 - r8;
                if ((s32)r8 < (s32)r5) {
                    do {
                        r4 = param_2 + r8;
                        r0 = (u32)rd8(r3 + r8 + 9u);
                        r8 = r8 + 1u;
                        wr8(r4 + 8u, (u8)r0);
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        } else if (c0lt && (s32)r0 >= 0) {
            r6 = r3 + (((u32)param_3 << 3u) & 0xfffffff8u);
            a.r[0] = (u32)rd8(r6 + 4u);
            a.r[1] = rd32(r6 + 8u);
            a.r[2] = rd32((u32)param_1 + 4u) + 8u;
            r3 = tc_call(0x8030e93cu, &a);
            if (r3 == 0u) {
                r3 = 0u;
                return r3;
            }
            wr8(param_2, 0x7fu);
            r5 = 0x20u;
            wr8(param_2 + 1u, 0x40u);
            r0 = (u32)rd8(r3);
            wr32(param_2 + 4u, r0);
            if ((s32)r0 <= 32) {
                r5 = r0;
            }
            c1lt = (s32)r5 < 0;
            r8 = 0u;
            if ((s32)r5 > 0) {
                r6 = r5 - 8u;
                if ((s32)r5 > 8) {
                    r7 = 0u;
                    if (!c1lt && (s32)r5 <= 2147483646) {
                        r7 = 1u;
                    }
                    if (r7 != 0u) {
                        ctr = ((r6 + 7u) >> 3u) & 0x1fffffffu;
                        if ((s32)r6 > 0) {
                            do {
                                r4 = r3 + r8;
                                r6 = param_2 + r8;
                                r8 = r8 + 8u;
                                wr8(r6 + 8u, rd8(r4 + 1u));
                                wr8(r6 + 9u, rd8(r4 + 2u));
                                wr8(r6 + 0xau, rd8(r4 + 3u));
                                wr8(r6 + 0xbu, rd8(r4 + 4u));
                                wr8(r6 + 0xcu, rd8(r4 + 5u));
                                wr8(r6 + 0xdu, rd8(r4 + 6u));
                                wr8(r6 + 0xeu, rd8(r4 + 7u));
                                wr8(r6 + 0xfu, rd8(r4 + 8u));
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                }
                ctr = r5 - r8;
                if ((s32)r8 < (s32)r5) {
                    do {
                        r4 = param_2 + r8;
                        r0 = (u32)rd8(r3 + r8 + 1u);
                        r8 = r8 + 1u;
                        wr8(r4 + 8u, (u8)r0);
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
