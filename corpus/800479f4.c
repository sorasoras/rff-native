#include "tc_rt.h"

u32 fn_800479f4(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r28 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0x803c1d40u;
    r28 = param_1;
    r29 = param_2;
    if (rd32(0x803c1e3cu) == 0u) {
        a.r[0] = 0u;
        r3 = tc_call(0x800496e8u, &a);
        wr32(0x803c1e3cu, r3);
        if (r3 == 0u) {
            r3 = 0u;
            wr32(param_4, 2u);
            return r3;
        }
    }
    r4 = rd32(0x803c1e3cu);
    r3 = rd32(r4 + 8u);
    if (r3 != 0u) {
        if (r3 >= param_3) {
            r3 = param_3;
        }
        r4 = rd32(r4 + 4u);
        r31 = r3;
        if (param_2 != 0u) {
            r6 = 0u;
            if (r3 != 0u) {
                r5 = r3 - 8u;
                if (r3 > 8u) {
                    ctr = ((r5 + 7u) >> 3u) & 0x1fffffffu;
                    if (r5 > 0u) {
                        do {
                            r6 = r6 + 8u;
                            wr16(r29, rd16(r4));
                            wr16(r28, rd16(r4 + 2u));
                            wr16(r29 + 2u, rd16(r4 + 4u));
                            wr16(r28 + 2u, rd16(r4 + 6u));
                            wr16(r29 + 4u, rd16(r4 + 8u));
                            wr16(r28 + 4u, rd16(r4 + 0xau));
                            wr16(r29 + 6u, rd16(r4 + 0xcu));
                            wr16(r28 + 6u, rd16(r4 + 0xeu));
                            wr16(r29 + 8u, rd16(r4 + 0x10u));
                            wr16(r28 + 8u, rd16(r4 + 0x12u));
                            wr16(r29 + 0xau, rd16(r4 + 0x14u));
                            wr16(r28 + 0xau, rd16(r4 + 0x16u));
                            wr16(r29 + 0xcu, rd16(r4 + 0x18u));
                            wr16(r28 + 0xcu, rd16(r4 + 0x1au));
                            wr16(r29 + 0xeu, rd16(r4 + 0x1cu));
                            r29 = r29 + 0x10u;
                            r0 = (u32)(s16)rd16(r4 + 0x1eu);
                            r4 = r4 + 0x20u;
                            wr16(r28 + 0xeu, (u16)r0);
                            r28 = r28 + 0x10u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
                ctr = r3 - r6;
                if (r6 < r3) {
                    do {
                        wr16(r29, rd16(r4));
                        r29 = r29 + 2u;
                        r0 = (u32)(s16)rd16(r4 + 2u);
                        r4 = r4 + 4u;
                        wr16(r28, (u16)r0);
                        r28 = r28 + 2u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        } else {
            r6 = 0u;
            if (r3 != 0u) {
                r5 = r3 - 8u;
                if (r3 > 8u) {
                    ctr = ((r5 + 7u) >> 3u) & 0x1fffffffu;
                    if (r5 > 0u) {
                        do {
                            r6 = r6 + 8u;
                            wr16(r28, rd16(r4 + 2u));
                            wr16(r28 + 2u, rd16(r4 + 6u));
                            wr16(r28 + 4u, rd16(r4 + 0xau));
                            wr16(r28 + 6u, rd16(r4 + 0xeu));
                            wr16(r28 + 8u, rd16(r4 + 0x12u));
                            wr16(r28 + 0xau, rd16(r4 + 0x16u));
                            wr16(r28 + 0xcu, rd16(r4 + 0x1au));
                            r0 = (u32)(s16)rd16(r4 + 0x1eu);
                            r4 = r4 + 0x20u;
                            wr16(r28 + 0xeu, (u16)r0);
                            r28 = r28 + 0x10u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
                ctr = r3 - r6;
                if (r6 < r3) {
                    do {
                        r0 = (u32)(s16)rd16(r4 + 2u);
                        r4 = r4 + 4u;
                        wr16(r28, (u16)r0);
                        r28 = r28 + 2u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r5 = rd32(0x803c1e3cu);
        wr32(r5 + 8u, rd32(r5 + 8u) - r3);
        wr32(rd32(0x803c1e3cu) + 4u, r4);
        r3 = rd32(0x803c1e3cu);
        if (rd32(r3 + 8u) != 0u) {
            wr32(param_4, 0u);
        } else {
            a.r[0] = r3;
            (void)tc_call(0x800496d4u, &a);
            wr32(0x803c1e3cu, 0u);
            wr32(param_4, 1u);
        }
    }
    r3 = r31;
    return r3;
}
