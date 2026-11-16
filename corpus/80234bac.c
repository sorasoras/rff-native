#include "tc_rt.h"

static u32 px_rec(u32 sp_, u32 param_1, u32 param_2, s32 param_3, f64 *f1_out)
{
    u32 r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r11 = tc_argr(8u), r27 = 0, r28 = 0, r29 = 0;
    u32 r30 = 0, r31 = 0;
    f64 f1 = *f1_out;
    wr32(sp_ - 0x20u, sp_);
    r1 = sp_ - 0x20u;
    wr32(r1 + 0x24u, 0x817ff000u);
    r11 = r1 + 0x20u;
    wr32(r11 - 0x14u, 0u);
    wr32(r11 - 0x10u, 0u);
    wr32(r11 - 0xcu, 0u);
    wr32(r11 - 8u, 0u);
    wr32(r11 - 4u, 0u);
    if (param_1 == 0u) {
        r3 = 0u;
    } else {
        r8 = rd32(0x805715b0u);
        r0 = param_1 * 0xcu;
        r7 = rd32(0x805715acu);
        r6 = r8 + 4u;
        r3 = rd32(r6 + r0);
        r0 = rd32(r8 + r0);
        r0 = r0 & 0xffffffu;
        r30 = r7 + r0;
        if (r3 == 0u) {
            r4 = 0u;
        } else {
            r0 = r3 * 0xcu;
            r3 = rd32(r6 + r0);
            r0 = rd32(r8 + r0);
            r0 = r0 & 0xffffffu;
            r31 = r7 + r0;
            if (r3 == 0u) {
                r4 = 0u;
            } else {
                r3 = r3 * 0xcu;
                r0 = rd32(r8 + r3);
                r3 = rd32(r6 + r3);
                r0 = r0 & 0xffffffu;
                r27 = r7 + r0;
                r3 = px_rec(r1, r3, param_2, (u32)param_3, &f1);
                r4 = r3;
                if (r3 == (u32)param_3) {
                    goto L_80234ca0;
                }
                r4 = r3 + 1u;
                r6 = (u32)param_3 - r4;
                wr8(param_2 + r3, 0x2fu);
                r3 = param_2 + r4;
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
        L_80234ca0:;
            if (r4 == (u32)param_3) {
                goto L_80234cf8;
            }
            r3 = r4 + 1u;
            r6 = (u32)param_3 - r3;
            wr8(param_2 + r4, 0x2fu);
            r4 = param_2 + r3;
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
    L_80234cf8:;
        if (r4 == (u32)param_3) {
            r3 = r4;
        } else {
            r6 = r4 + 1u;
            r5 = (u32)param_3 - r6;
            wr8(param_2 + r4, 0x2fu);
            r3 = param_2 + r6;
            r4 = r5;
            while (r4 != 0u && (u32)(s8)rd8(r30) != 0u) {
                r0 = (u32)rd8(r30);
                r4 = r4 - 1u;
                r30 = r30 + 1u;
                wr8(r3, (u8)r0);
                r3 = r3 + 1u;
            }
            r3 = r6 + (r5 - r4);
        }
    }
    r11 = r1 + 0x20u;
    r27 = rd32(r11 - 0x14u);
    r28 = rd32(r11 - 0x10u);
    r29 = rd32(r11 - 0xcu);
    r30 = rd32(r11 - 8u);
    r31 = rd32(r11 - 4u);
    r0 = rd32(r1 + 0x24u);
    *f1_out = f1; return r3;
}

void fn_80234bac(u32 param_1, u32 param_2, s32 param_3)
{
    f64 f1 = 0.0;
    px_rec(0x817fe000u, param_1, param_2, param_3, &f1);
}
