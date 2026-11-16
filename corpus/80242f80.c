#include "tc_rt.h"

void fn_80242f80(void)
{
    u32 r0 = 0, r3 = tc_argr(0u), r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r11 = 0, r12 = 0, r27 = 0;
    u32 r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r4 = 0u;
    r3 = 0u;
    r0 = 0u;
    r29 = 0u;
    r30 = 0u;
    while (r0 == 0u) {
        wr32(0xcd006c00u, (rd32(0xcd006c00u) & 0xffffffdfu) | 0x20u);
        wr32(0xcd006c00u, rd32(0xcd006c00u) & 0xfffffffdu);
        wr32(0xcd006c00u, (rd32(0xcd006c00u) & 0xfffffffeu) | 1u);
        r3 = rd32(0xcd006c08u) & 0x7fffffffu;
        while (r3 == (rd32(0xcd006c08u) & 0x7fffffffu)) {
        }
        r3 = tc_call(0x8023029cu, &a);
        f1 = tc_lastf();
        r27 = tc_lastr4();
        r28 = r3;
        wr32(0xcd006c00u, (rd32(0xcd006c00u) & 0xfffffffdu) | 2u);
        wr32(0xcd006c00u, (rd32(0xcd006c00u) & 0xfffffffeu) | 1u);
        r3 = rd32(0xcd006c08u) & 0x7fffffffu;
        while (r3 == (rd32(0xcd006c08u) & 0x7fffffffu)) {
        }
        r3 = tc_call(0x8023029cu, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r8 = r4 - r27;
        wr32(0xcd006c00u, rd32(0xcd006c00u) & 0xfffffffdu);
        r7 = (r3 - (r28 + (r27 > r4))) ^ 0x80000000u;
        wr32(0xcd006c00u, rd32(0xcd006c00u) & 0xfffffffeu);
        r10 = rd32(0x805717acu);
        r12 = rd32(0x805717ccu);
        r9 = rd32(0x805717a8u);
        r11 = rd32(0x805717c8u);
        if ((0u - (r7 - (r7 + ((((r11 - (r9 + (r10 > r12))) ^ 0x80000000u) + ((r12 - r10) > r8)) > r7)))) == 0u) {
            if ((0u - (r7 - (r7 + ((((u32)((u64)r11 + (u64)r9 + (u64)((r12 + r10) < r12)) ^ 0x80000000u) + ((r12 + r10) > r8)) > r7)))) == 0u) {
                r5 = rd32(0x805717c4u);
                r6 = r5 - r10;
                r5 = (rd32(0x805717c0u) - (r9 + (r10 > r5))) ^ 0x80000000u;
                r5 = r7 - (r7 + ((r5 + (r6 > r8)) > r7));
                r5 = 0u - r5;
                if (r5 != 0u) {
                    r30 = rd32(0x805717b0u);
                    r0 = 1u;
                    r29 = rd32(0x805717b4u);
                    continue;
                }
            }
            r0 = 0u;
        } else {
            r30 = rd32(0x805717b8u);
            r0 = 1u;
            r29 = rd32(0x805717bcu);
        }
    }
    r31 = r4 + r29;
    r29 = (u32)((u64)r3 + (u64)r30 + (u64)((r4 + r29) < r4));
    do {
        r3 = tc_call(0x8023029cu, &a);
        f1 = tc_lastf();
        r0 = r3 ^ 0x80000000u;
    } while ((0u - (r0 - (r0 + (((r29 ^ 0x80000000u) + (r31 > tc_lastr4())) > r0)))) != 0u);
    return;
}
