#include "tc_rt.h"

void fn_8022a2f8(u32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5, s32 param_6, s32 param_7, u32 param_8)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r26 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r10 = param_8;
    wr32(0x817fde90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r26 = (u32)param_6;
    r31 = (u32)param_3 - 0x18u;
    r30 = param_2 - 0x30u;
    while ((s32)r31 >= (s32)r26) {
        r28 = param_5;
        r29 = param_1 + (((param_5 + (r26 * param_2)) << 1u) & 0xfffffffeu);
        for (;;) {
            r3 = (u32)rd8(r10);
            if ((u32)(s8)r3 == 0u) {
                return;
            }
            if ((u32)(s8)r3 == 0xau) {
                r26 = r26 + (u32)param_7;
                r10 = r10 + 1u;
                break;
            }
            if ((s32)r30 < (s32)r28) {
                r26 = r26 + (u32)param_7;
                break;
            }
            r6 = 0u;
            r7 = 0u;
            ctr = 3u;
            do {
                r3 = r6 + 1u;
                r5 = r6 + 2u;
                r4 = ((((r6 & 7u) + r7) << 2u) & 0xfffffffcu) - 0x7e802160u;
                r8 = r6 + 3u;
                wr32(r4, 0u);
                r0 = ((r3 >> 3u) & 0x1fffffffu) * 0x18u;
                r3 = r3 & 7u;
                wr32(r4 + 0x20u, 0u);
                r9 = r6 + 4u;
                r11 = r6 + 6u;
                r0 = r3 + r0;
                wr32(r4 + 0x40u, 0u);
                r0 = (r0 << 2u) & 0xfffffffcu;
                r4 = (r5 >> 3u) & 0x1fffffffu;
                r3 = r0 - 0x7e802160u;
                r5 = r5 & 7u;
                wr32(r3, 0u);
                r4 = r4 * 0x18u;
                r0 = r6 + 5u;
                wr32(r3 + 0x20u, 0u);
                r7 = r7 + 0x18u;
                r5 = r5 + r4;
                r12 = (r5 << 2u) & 0xfffffffcu;
                wr32(r3 + 0x40u, 0u);
                wr32(r12 - 0x7e802160u, 0u);
                r4 = r12 - 0x7e802160u;
                r3 = ((r8 >> 3u) & 0x1fffffffu) * 0x18u;
                r12 = r8 & 7u;
                wr32(r4 + 0x20u, 0u);
                r8 = (r9 >> 3u) & 0x1fffffffu;
                r12 = r12 + r3;
                r5 = r6 + 7u;
                wr32(r4 + 0x40u, 0u);
                r12 = (r12 << 2u) & 0xfffffffcu;
                r9 = r9 & 7u;
                r3 = r12 - 0x7e802160u;
                wr32(r3, 0u);
                r8 = r8 * 0x18u;
                r12 = (r0 >> 3u) & 0x1fffffffu;
                wr32(r3 + 0x20u, 0u);
                r0 = r0 & 7u;
                r8 = r9 + r8;
                r9 = (r11 >> 3u) & 0x1fffffffu;
                r8 = (r8 << 2u) & 0xfffffffcu;
                wr32(r3 + 0x40u, 0u);
                r4 = r8 - 0x7e802160u;
                wr32(r4, 0u);
                r12 = r12 * 0x18u;
                r11 = r11 & 7u;
                wr32(r4 + 0x20u, 0u);
                r0 = r0 + r12;
                r6 = r6 + 8u;
                wr32(r4 + 0x40u, 0u);
                r0 = (r0 << 2u) & 0xfffffffcu;
                wr32(r0 - 0x7e802160u, 0u);
                r3 = r0 - 0x7e802160u;
                wr32(r3 + 0x20u, 0u);
                wr32(r3 + 0x40u, 0u);
                r0 = ((r11 + (r9 * 0x18u)) << 2u) & 0xfffffffcu;
                wr32(r0 - 0x7e802160u, 0u);
                r4 = r0 - 0x7e802160u;
                wr32(r4 + 0x20u, 0u);
                wr32(r4 + 0x40u, 0u);
                r0 = (((r5 & 7u) + (((r5 >> 3u) & 0x1fffffffu) * 0x18u)) << 2u) & 0xfffffffcu;
                wr32(r0 - 0x7e802160u, 0u);
                r5 = r0 - 0x7e802160u;
                wr32(r5 + 0x20u, 0u);
                wr32(r5 + 0x40u, 0u);
                ctr = ctr - 1u;
            } while (ctr != 0u);
            a.r[0] = r10;
            a.r[1] = 0x817fdea0u;
            a.r[2] = 0u;
            a.r[3] = 6u;
            a.r[4] = 0x817fde98u;
            r3 = tc_call(0x8022b9bcu, &a);
            r10 = r3;
            r7 = 0u;
            r3 = 0u;
            do {
                r4 = r28;
                r8 = 0u;
                r5 = ((((r7 & 7u) + (((r7 >> 3u) & 0x1fffffffu) * 0x18u)) << 2u) & 0xfffffffcu) - 0x7e802160u;
                ctr = 0x18u;
                do {
                    r0 = ((7u - (r8 & 7u)) << 2u) & 0xfffffffcu;
                    r0 = ((r0 & 0x20u) != 0u) ? 0u : (rd32(r5 + ((r8 << 2u) & 0xffffffe0u)) >> (r0 & 0x1fu));
                    r9 = r0 & 0xfu;
                    if (r9 != 0u) {
                        r12 = ((r8 + r3) << 1u) & 0xfffffffeu;
                        r9 = (u32)rd8(param_4) * r9;
                        r6 = r29 + r12;
                        r9 = r9 * 0xefu;
                        r9 = ppc_mulhw(-2139062143, (s32)r9) + r9;
                        r9 = (u32)((s32)r9 >> 7);
                        r9 = r9 + ((r9 >> 0x1fu) & 1u);
                        r0 = (u32)((s32)(ppc_mulhw(-2004318071, (s32)r9) + r9) >> 3);
                        r0 = r0 + ((r0 >> 0x1fu) & 1u) + 0x10u;
                        wr8(r29 + r12, (u8)r0);
                        if ((r4 & 1u) == 0u) {
                            r0 = (u32)rd8(param_4 + 1u);
                            wr8(r6 - 1u, rd8(param_4 + 2u));
                            wr8(r6 + 1u, (u8)r0);
                        } else {
                            r0 = (u32)rd8(param_4 + 2u);
                            wr8(r6 - 1u, rd8(param_4 + 1u));
                            wr8(r6 + 1u, (u8)r0);
                        }
                    }
                    r4 = r4 + 1u;
                    r8 = r8 + 1u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                r7 = r7 + 1u;
                r3 = r3 + param_2;
            } while (r7 < 0x18u);
            r3 = rd32(0x817fde98u);
            r28 = r28 + r3;
            r29 = r29 + ((r3 << 1u) & 0xfffffffeu);
        }
    }
    return;
}
