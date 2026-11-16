#include "tc_rt.h"

void fn_803215f8(u32 param_1, u32 param_2, s32 param_3, s32 param_4, u32 param_5, u32 param_6, u32 param_7)
{
    u32 r0 = 0, r4 = 0, r10 = 0, r11 = 0, r12 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    r0 = rd32(param_1);
    if ((s32)r0 < 1024) {
        r0 = r0 * 0x30u;
        r27 = (u32)(s16)rd16(param_2);
        r28 = (u32)rd8(param_2 + 2u);
        wr8(param_1 + r0 + 4u, 0u);
        r29 = (u32)rd8(param_2 + 3u);
        r30 = (u32)rd8(param_2 + 4u);
        r31 = (u32)rd8(param_2 + 5u);
        r12 = (u32)rd8(param_2 + 6u);
        r11 = (u32)rd8(param_2 + 7u);
        r10 = (u32)rd8(param_2 + 8u);
        wr8(param_1 + (rd32(param_1) * 0x30u) + 5u, 0u);
        r0 = (u32)rd8(param_2 + 9u);
        wr16(param_1 + (rd32(param_1) * 0x30u) + 6u, (u16)param_5);
        r4 = param_1 + (rd32(param_1) * 0x30u);
        wr16(r4 + 8u, (u16)r27);
        wr8(r4 + 0xau, (u8)r28);
        wr8(r4 + 0xbu, (u8)r29);
        wr8(r4 + 0xcu, (u8)r30);
        wr8(r4 + 0xdu, (u8)r31);
        wr8(r4 + 0xeu, (u8)r12);
        wr8(r4 + 0xfu, (u8)r11);
        wr8(r4 + 0x10u, (u8)r10);
        wr8(r4 + 0x11u, (u8)r0);
        wr32(param_1 + (rd32(param_1) * 0x30u) + 0x14u, (u32)param_3);
        wr32((u32)param_3 + 0x10u, rd32((u32)param_3 + 0x10u) + 1u);
        wr32(param_1 + (rd32(param_1) * 0x30u) + 0x18u, (u32)param_4);
        if (param_6 != 0u) {
            r4 = param_1 + (rd32(param_1) * 0x30u);
            wr8(r4 + 5u, (u8)((u32)rd8(r4 + 5u) | 1u));
            r4 = param_1 + (rd32(param_1) * 0x30u);
            wrf32d(r4 + 0x1cu, (f64)rdf32(param_6));
            wrf32d(r4 + 0x20u, (f64)rdf32(param_6 + 4u));
            wrf32d(r4 + 0x24u, (f64)rdf32(param_6 + 8u));
        }
        if (param_7 != 0u) {
            r4 = param_1 + (rd32(param_1) * 0x30u);
            wr8(r4 + 5u, (u8)((u32)rd8(r4 + 5u) | 2u));
            r4 = param_1 + (rd32(param_1) * 0x30u);
            wrf32d(r4 + 0x28u, (f64)rdf32(param_7));
            wrf32d(r4 + 0x2cu, (f64)rdf32(param_7 + 4u));
            wrf32d(r4 + 0x30u, (f64)rdf32(param_7 + 8u));
        }
        wr32(param_1, rd32(param_1) + 1u);
    }
    return;
}
