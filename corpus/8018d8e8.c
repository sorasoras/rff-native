#include "tc_rt.h"

void fn_8018d8e8(s32 param_1)
{
    u32 c1lt = 0, ctr = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r30 = 0;
    u32 r31 = 0;
    r6 = 0u;
    wr32((u32)param_1 + 0xbcu, 0u);
    wr32((u32)param_1 + 0x94u, 0xffffffffu);
    wr32((u32)param_1 + 0x98u, 0xffffffffu);
    wr32((u32)param_1 + 0x9cu, 0xffffffffu);
    wr32((u32)param_1 + 0xa0u, 0xffffffffu);
    wr32((u32)param_1 + 0xa4u, 0xffffffffu);
    wr32((u32)param_1 + 0xa8u, 0xffffffffu);
    wr32((u32)param_1 + 0xacu, 0xffffffffu);
    wr32((u32)param_1 + 0xb0u, 0xffffffffu);
    wr32((u32)param_1 + 0xb4u, 0xffffffffu);
    wr32((u32)param_1 + 0xb8u, 0xffffffffu);
    r5 = rd32((u32)param_1 + 0x8cu);
    r5 = (u32)ppc_divw(ppc_divw((s32)rd32((u32)param_1 + 0x88u), (s32)r5), (s32)rd32((u32)param_1 + 0x90u)) * r5;
    c1lt = (s32)r5 < 0;
    if ((s32)r5 > 0) {
        r7 = r5 - 8u;
        if ((s32)r5 > 8) {
            r8 = 0u;
            if (!c1lt && (s32)r5 <= 2147483646) {
                r8 = 1u;
            }
            if (r8 != 0u) {
                r4 = (u32)param_1;
                ctr = ((r7 + 7u) >> 3u) & 0x1fffffffu;
                if ((s32)r7 > 0) {
                    do {
                        r7 = rd32((u32)param_1 + 0x8cu);
                        r30 = r6 + 1u;
                        r31 = r6 + 2u;
                        r12 = r6 + 3u;
                        r11 = r6 + 4u;
                        r10 = r6 + 5u;
                        r9 = r6 + 6u;
                        r8 = r6 + 7u;
                        r7 = r6 - ((u32)ppc_divw((s32)r6, (s32)r7) * r7);
                        r6 = r6 + 8u;
                        wr32(r4 + 0x94u, r7 + 1u);
                        r7 = rd32((u32)param_1 + 0x8cu);
                        r7 = r30 - ((u32)ppc_divw((s32)r30, (s32)r7) * r7);
                        wr32(r4 + 0x98u, r7 + 1u);
                        r7 = rd32((u32)param_1 + 0x8cu);
                        r7 = r31 - ((u32)ppc_divw((s32)r31, (s32)r7) * r7);
                        wr32(r4 + 0x9cu, r7 + 1u);
                        r7 = rd32((u32)param_1 + 0x8cu);
                        r7 = r12 - ((u32)ppc_divw((s32)r12, (s32)r7) * r7);
                        wr32(r4 + 0xa0u, r7 + 1u);
                        r7 = rd32((u32)param_1 + 0x8cu);
                        r7 = r11 - ((u32)ppc_divw((s32)r11, (s32)r7) * r7);
                        wr32(r4 + 0xa4u, r7 + 1u);
                        r7 = rd32((u32)param_1 + 0x8cu);
                        r7 = r10 - ((u32)ppc_divw((s32)r10, (s32)r7) * r7);
                        wr32(r4 + 0xa8u, r7 + 1u);
                        r7 = rd32((u32)param_1 + 0x8cu);
                        r7 = r9 - ((u32)ppc_divw((s32)r9, (s32)r7) * r7);
                        wr32(r4 + 0xacu, r7 + 1u);
                        r7 = rd32((u32)param_1 + 0x8cu);
                        r7 = r8 - ((u32)ppc_divw((s32)r8, (s32)r7) * r7);
                        wr32(r4 + 0xb0u, r7 + 1u);
                        r4 = r4 + 0x20u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r7 = (u32)param_1 + ((r6 << 2u) & 0xfffffffcu);
        ctr = r5 - r6;
        if ((s32)r6 < (s32)r5) {
            do {
                r4 = rd32((u32)param_1 + 0x8cu);
                r4 = r6 - ((u32)ppc_divw((s32)r6, (s32)r4) * r4);
                r6 = r6 + 1u;
                wr32(r7 + 0x94u, r4 + 1u);
                r7 = r7 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    return;
}
