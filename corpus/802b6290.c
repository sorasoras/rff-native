#include "tc_rt.h"

u32 fn_802b6290(u32 param_1, u32 param_2, u32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0;
    r4 = param_2;
    if (param_2 != 0u) {
        r7 = (((param_3 << 2u) & 0xfffffffcu) - param_3) & 0xffffu;
    } else {
        r7 = 5u;
    }
    if (r7 > 0xffu) {
        wr8(param_1, 0x36u);
        r6 = param_1 + 3u;
        wr8(param_1 + 1u, (u8)((r7 >> 8u) & 0xffu));
        wr8(param_1 + 2u, (u8)r7);
    } else {
        wr8(param_1 + 1u, (u8)r7);
        r6 = param_1 + 2u;
        wr8(param_1, 0x35u);
    }
    if (param_2 == 0u) {
        wr8(r6, 0xau);
        wr8(r6 + 1u, 0u);
        wr8(r6 + 2u, 0u);
        wr8(r6 + 3u, 0xffu);
        wr8(r6 + 4u, 0xffu);
        r6 = r6 + 5u;
    } else {
        r3 = 0u;
        if (param_3 != 0u) {
            r7 = param_3 + 0xfff8u;
            if (param_3 > 8u) {
                r8 = r7 & 0xffffu;
                ctr = ((r8 + 7u) >> 3u) & 0x1fffffffu;
                if (r8 > 0u) {
                    do {
                        wr8(r6, 9u);
                        r3 = r3 + 8u;
                        wr8(r6 + 1u, (u8)((s32)rd16(r4) >> 8));
                        wr8(r6 + 2u, (u8)rd16(r4));
                        wr8(r6 + 3u, 9u);
                        wr8(r6 + 4u, (u8)((s32)rd16(r4 + 2u) >> 8));
                        wr8(r6 + 5u, (u8)rd16(r4 + 2u));
                        wr8(r6 + 6u, 9u);
                        wr8(r6 + 7u, (u8)((s32)rd16(r4 + 4u) >> 8));
                        wr8(r6 + 8u, (u8)rd16(r4 + 4u));
                        wr8(r6 + 9u, 9u);
                        wr8(r6 + 0xau, (u8)((s32)rd16(r4 + 6u) >> 8));
                        wr8(r6 + 0xbu, (u8)rd16(r4 + 6u));
                        wr8(r6 + 0xcu, 9u);
                        wr8(r6 + 0xdu, (u8)((s32)rd16(r4 + 8u) >> 8));
                        wr8(r6 + 0xeu, (u8)rd16(r4 + 8u));
                        wr8(r6 + 0xfu, 9u);
                        wr8(r6 + 0x10u, (u8)((s32)rd16(r4 + 0xau) >> 8));
                        wr8(r6 + 0x11u, (u8)rd16(r4 + 0xau));
                        wr8(r6 + 0x12u, 9u);
                        wr8(r6 + 0x13u, (u8)((s32)rd16(r4 + 0xcu) >> 8));
                        wr8(r6 + 0x14u, (u8)rd16(r4 + 0xcu));
                        wr8(r6 + 0x15u, 9u);
                        wr8(r6 + 0x16u, (u8)((s32)rd16(r4 + 0xeu) >> 8));
                        r7 = (u32)rd16(r4 + 0xeu);
                        r4 = r4 + 0x10u;
                        wr8(r6 + 0x17u, (u8)r7);
                        r6 = r6 + 0x18u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            r7 = r3 & 0xffffu;
            ctr = param_3 - r7;
            if (r7 < param_3) {
                do {
                    wr8(r6, 9u);
                    r3 = r3 + 1u;
                    wr8(r6 + 1u, (u8)((s32)rd16(r4) >> 8));
                    r0 = (u32)rd16(r4);
                    r4 = r4 + 2u;
                    wr8(r6 + 2u, (u8)r0);
                    r6 = r6 + 3u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
    }
    return r6;
}
