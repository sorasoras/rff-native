#include "tc_rt.h"

static void px_rec(u32 sp_, u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r11 = 0, r27 = 0, r30 = 0, r31 = 0;
    wr32(sp_ - 0x20u, sp_);
    r1 = sp_ - 0x20u;
    wr32(r1 + 0x24u, 0x817ff000u);
    r11 = r1 + 0x20u;
    wr32(r11 - 0x14u, 0u);
    wr32(r11 - 0x10u, 0u);
    wr32(r11 - 0xcu, 0u);
    wr32(r11 - 8u, 0u);
    wr32(r11 - 4u, 0u);
    r7 = rd32(param_1 + 4u);
    if (param_2 != 0u) {
        r0 = param_2 * 0xcu;
        r8 = rd32(param_1 + 0x10u);
        r4 = r7 + r0;
        r0 = rd32(r7 + r0);
        r4 = rd32(r4 + 4u);
        r0 = r0 & 0xffffffu;
        r30 = r8 + r0;
        if (r4 != 0u) {
            r0 = r4 * 0xcu;
            r4 = r7 + r0;
            r0 = rd32(r7 + r0);
            r4 = rd32(r4 + 4u);
            r0 = r0 & 0xffffffu;
            r31 = r8 + r0;
            if (r4 != 0u) {
                r4 = r4 * 0xcu;
                r0 = rd32(r7 + r4);
                r4 = r7 + r4;
                r4 = rd32(r4 + 4u);
                r0 = r0 & 0xffffffu;
                r27 = r8 + r0;
                px_rec(r1, param_1, r4, (u32)param_3, (u32)param_4);
                r4 = r3;
                if (r3 != (u32)param_4) {
                    r4 = r3 + 1u;
                    r6 = (u32)param_4 - r4;
                    wr8((u32)param_3 + r3, 0x2fu);
                    r3 = (u32)param_3 + r4;
                    r5 = r6;
                    while (r5 != 0u && (u32)(s8)rd8(r27) != 0u) {
                        r0 = (u32)rd8(r27);
                        r5 = r5 - 1u;
                        r27 = r27 + 1u;
                        wr8(r3, (u8)r0);
                        r3 = r3 + 1u;
                    }
                    r4 = r4 + (r6 - r5);
                }
            } else {
                r4 = 0u;
            }
            if (r4 != (u32)param_4) {
                r3 = r4 + 1u;
                r6 = (u32)param_4 - r3;
                wr8((u32)param_3 + r4, 0x2fu);
                r4 = (u32)param_3 + r3;
                r5 = r6;
                while (r5 != 0u && (u32)(s8)rd8(r31) != 0u) {
                    r0 = (u32)rd8(r31);
                    r5 = r5 - 1u;
                    r31 = r31 + 1u;
                    wr8(r4, (u8)r0);
                    r4 = r4 + 1u;
                }
                r4 = r3 + (r6 - r5);
            }
        } else {
            r4 = 0u;
        }
        if (r4 != (u32)param_4) {
            r6 = r4 + 1u;
            wr8((u32)param_3 + r4, 0x2fu);
            r3 = (u32)param_3 + r6;
            r4 = (u32)param_4 - r6;
            while (r4 != 0u && (u32)(s8)rd8(r30) != 0u) {
                r0 = (u32)rd8(r30);
                r4 = r4 - 1u;
                r30 = r30 + 1u;
                wr8(r3, (u8)r0);
                r3 = r3 + 1u;
            }
        }
    }
    return;
}

void fn_80275f6c(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    px_rec(0x817fe000u, param_1, param_2, param_3, param_4);
}
