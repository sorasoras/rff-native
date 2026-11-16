#include "tc_rt.h"

void fn_80265534(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    if (rd32(0x8038f2e0u) != 0xffffffffu) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        r4 = (param_1 << 3u) & 0xfffffff8u;
        wr32(0xcd006438u, rd32(0xcd006438u) & (((r4 & 0x20u) != 0u) ? 0u : (u32)(251658240 >> (s32)(r4 & 0x1fu))));
        r4 = ((param_3 + 3u) >> 2u) & 0x3fffffffu;
        r5 = 0u;
        wr32(0x8038f2e0u, param_1);
        wr32(0x8038f2f0u, param_6);
        wr32(0x8038f2e8u, param_5);
        wr32(0x8038f2ecu, param_4);
        if (r4 != 0u) {
            r6 = r4 - 8u;
            if (r4 > 8u) {
                r8 = param_2;
                r7 = 0xcd006400u;
                ctr = ((r6 + 7u) >> 3u) & 0x1fffffffu;
                if (r6 > 0u) {
                    do {
                        r5 = r5 + 8u;
                        wr32(r7 + 0x80u, rd32(r8));
                        wr32(r7 + 0x84u, rd32(r8 + 4u));
                        wr32(r7 + 0x88u, rd32(r8 + 8u));
                        wr32(r7 + 0x8cu, rd32(r8 + 0xcu));
                        wr32(r7 + 0x90u, rd32(r8 + 0x10u));
                        wr32(r7 + 0x94u, rd32(r8 + 0x14u));
                        wr32(r7 + 0x98u, rd32(r8 + 0x18u));
                        r0 = rd32(r8 + 0x1cu);
                        r8 = r8 + 0x20u;
                        wr32(r7 + 0x9cu, r0);
                        r7 = r7 + 0x20u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            r7 = (r5 << 2u) & 0xfffffffcu;
            r6 = r7 - 0x33000000u;
            r7 = param_2 + r7;
            r6 = r6 + 0x6400u;
            ctr = r4 - r5;
            if (r5 < r4) {
                do {
                    r0 = rd32(r7);
                    r7 = r7 + 4u;
                    wr32(r6 + 0x80u, r0);
                    r6 = r6 + 4u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        r6 = ((((((rd32(0xcd006434u) | 0x80000000u) & 0xbfffffffu) | ((((0u - param_6) | param_6) >> 1u) & 0x40000000u)) & 0xff80ffffu) | (((param_3 & ~(u32)((s32)~((param_3 - 0x80u) | (0x80u - param_3)) >> 31)) << 0x10u) & 0x7f0000u)) & 0xffff80ffu) | (((param_5 & ~(u32)((s32)~((param_5 - 0x80u) | (0x80u - param_5)) >> 31)) << 8u) & 0x7f00u);
        r6 = (r6 & 0xfffffff9u) | ((param_1 << 1u) & 6u);
        wr32(0xcd006434u, r6 | 1u);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
