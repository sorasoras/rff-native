#include "tc_rt.h"

void fn_80252a04(void)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r29 = rd32(0x80576c88u);
    if (rd32(r29 + 0x5e4u) != 0xffu) {
        r0 = rd32(r29 + 0x254u);
        r28 = 0u;
        r27 = (r0 >> 0x10u) & 7u;
        r26 = ((r0 >> 0xau) & 0xfu) + 1u;
        while (r28 < r27) {
            c0lt = (s32)r28 < 2;
            if (r28 == 2u) {
                r0 = rd32(r29 + 0x170u);
                r25 = (r0 >> 0xcu) & 7u;
                r24 = (r0 >> 0xfu) & 7u;
            } else if (!c0lt) {
                if ((s32)r28 < 4) {
                    r0 = rd32(r29 + 0x170u);
                    r25 = (r0 >> 0x12u) & 7u;
                    r24 = (r0 >> 0x15u) & 7u;
                }
            } else {
                c0lt = (s32)r28 < 0;
                if (r28 == 0u) {
                    r0 = rd32(r29 + 0x170u);
                    r25 = r0 & 7u;
                    r24 = (r0 >> 3u) & 7u;
                } else if (!c0lt) {
                    r0 = rd32(r29 + 0x170u);
                    r25 = (r0 >> 6u) & 7u;
                    r24 = (r0 >> 9u) & 7u;
                }
            }
            if ((rd32(r29 + 0x5e4u) & (((r24 & 0x20u) != 0u) ? 0u : (1u << (r24 & 0x1fu)))) == 0u) {
                a.r[0] = r25;
                a.r[1] = r24;
                (void)tc_call(0x80252974u, &a);
            }
            r28 = r28 + 1u;
        }
        r28 = rd32(0x80576c88u);
        r27 = 0u;
        r31 = r28;
        r30 = r28 + 0x150u;
        while (r27 < r26) {
            r3 = (r27 << 1u) & 0xfffffffcu;
            r25 = rd32(r31 + 0x5a4u) & 0xfffffeffu;
            if ((r27 & 1u) == 0u) {
                r24 = (rd32(r30 + r3) >> 3u) & 7u;
            } else {
                r24 = (rd32(r30 + r3) >> 0xfu) & 7u;
            }
            if (r25 != 0xffu && (rd32(r29 + 0x5e4u) & (((r24 & 0x20u) != 0u) ? 0u : (1u << (r24 & 0x1fu)))) == 0u && (rd32(r28 + 0x5e8u) & (((r27 & 0x20u) != 0u) ? 0u : (1u << (r27 & 0x1fu)))) != 0u) {
                a.r[0] = r25;
                a.r[1] = r24;
                (void)tc_call(0x80252974u, &a);
            }
            r31 = r31 + 4u;
            r27 = r27 + 1u;
        }
    }
    return;
}
