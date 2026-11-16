#include "tc_rt.h"

u32 fn_802a01e4(u32 param_1, s32 param_2, u32 param_3)
{
    u32 c0lt = 0, c1lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r8 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = param_3;
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    if (r3 != 0u) {
        wr16(r3 + 2u, 0x1au);
        wr16(r3 + 4u, 0u);
        c1lt = param_2 < 0;
        r4 = r3 + 0x12u;
        r5 = 0u;
        wr8(r3 + 8u, 0xdu);
        wr8(r3 + 9u, 4u);
        wr8(r3 + 0xau, 0x17u);
        wr8(r3 + 0xbu, rd8(param_1 + 5u));
        wr8(r3 + 0xcu, rd8(param_1 + 4u));
        wr8(r3 + 0xdu, rd8(param_1 + 3u));
        wr8(r3 + 0xeu, rd8(param_1 + 2u));
        wr8(r3 + 0xfu, rd8(param_1 + 1u));
        wr8(r3 + 0x10u, rd8(param_1));
        wr8(r3 + 0x11u, (u8)param_2);
        if (param_2 > 0) {
            r7 = (u32)param_2 - 8u;
            if (param_2 > 8) {
                r8 = 0u;
                if (!c1lt && param_2 <= 2147483646) {
                    r8 = 1u;
                }
                if (r8 != 0u) {
                    ctr = ((r7 + 7u) >> 3u) & 0x1fffffffu;
                    if ((s32)r7 > 0) {
                        do {
                            r5 = r5 + 8u;
                            wr8(r4, rd8(r31));
                            wr8(r4 + 1u, rd8(r31 + 1u));
                            wr8(r4 + 2u, rd8(r31 + 2u));
                            wr8(r4 + 3u, rd8(r31 + 3u));
                            wr8(r4 + 4u, rd8(r31 + 4u));
                            wr8(r4 + 5u, rd8(r31 + 5u));
                            wr8(r4 + 6u, rd8(r31 + 6u));
                            r0 = (u32)rd8(r31 + 7u);
                            r31 = r31 + 8u;
                            wr8(r4 + 7u, (u8)r0);
                            r4 = r4 + 8u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
            }
            ctr = (u32)param_2 - r5;
            if ((s32)r5 < param_2) {
                do {
                    r0 = (u32)rd8(r31);
                    r5 = r5 + 1u;
                    r31 = r31 + 1u;
                    wr8(r4, (u8)r0);
                    r4 = r4 + 1u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        c0lt = (s32)r5 < 16;
        r5 = 0x10u - r5;
        do {
            if (c0lt) {
                r0 = (r5 >> 3u) & 0x1fffffffu;
                ctr = r0;
                if (r0 != 0u) {
                    do {
                        wr8(r4, 0u);
                        wr8(r4 + 1u, 0u);
                        wr8(r4 + 2u, 0u);
                        wr8(r4 + 3u, 0u);
                        wr8(r4 + 4u, 0u);
                        wr8(r4 + 5u, 0u);
                        wr8(r4 + 6u, 0u);
                        wr8(r4 + 7u, 0u);
                        r4 = r4 + 8u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                    r5 = r5 & 7u;
                    if (r5 == 0u) break;
                }
                ctr = r5;
                do {
                    wr8(r4, 0u);
                    r4 = r4 + 1u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        } while (0);
        a.r[0] = r3;
        (void)tc_call(0x8029db78u, &a);
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
