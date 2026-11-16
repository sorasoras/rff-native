#include "tc_rt.h"

u32 fn_802b3660(u32 param_1, s32 param_2, u32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r9 = 0, r10 = 0, r11 = 0;
    r5 = param_3;
    r11 = param_1 + 1u;
    r10 = r11;
    wr8(param_1, 0x35u);
    r9 = 0u;
    ctr = (u32)param_2;
    r11 = r11 + 1u;
    if ((u32)param_2 > 0u) {
        do {
            r0 = (u32)rd16(r5);
            if (r0 == 2u) {
                wr8(r11, 0x19u);
                wr8(r11 + 1u, (u8)((s32)rd16(r5 + 4u) >> 8));
                wr8(r11 + 2u, (u8)rd16(r5 + 4u));
                r11 = r11 + 3u;
            } else {
                if (r0 == 4u) {
                    wr8(r11, 0x1au);
                    wr8(r11 + 1u, (u8)((rd32(r5 + 4u) >> 0x18u) & 0xffu));
                    wr8(r11 + 2u, (u8)((rd32(r5 + 4u) >> 0x10u) & 0xffu));
                    wr8(r11 + 3u, (u8)((rd32(r5 + 4u) >> 8u) & 0xffu));
                    wr8(r11 + 4u, (u8)rd32(r5 + 4u));
                    r11 = r11 + 5u;
                } else {
                    wr8(r11, 0x1cu);
                    r4 = 0u;
                    r11 = r11 + 1u;
                    while ((s32)r4 < (s32)rd16(r5)) {
                        r3 = r5 + r4;
                        r4 = r4 + 1u;
                        wr8(r11, rd8(r3 + 4u));
                        r11 = r11 + 1u;
                    }
                }
            }
            r9 = r9 + 1u;
            r5 = r5 + 0x14u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    wr8(r10, (u8)(r11 - r10 - 1u));
    return r11;
}
