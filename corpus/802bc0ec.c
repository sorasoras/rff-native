#include "tc_rt.h"

void fn_802bc0ec(void)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r30 = 0;
    u32 r31 = 0;
    r4 = rd32(0x80571bc4u);
    r3 = rd32(r4 + 0x6a4u);
    r0 = rd32(r4 + 0x69cu);
    r6 = r0 & 0xfffffffcu;
    r0 = r0 & 3u;
    if (r3 != 0x21u) {
        r0 = 3u - r0;
        r0 = (r0 << 3u) & 0xfffffff8u;
        r0 = r3 - r0;
        wr32(r4 + 0x6a4u, r0);
    } else {
        r0 = ((r0 << 3u) & 0xfffffff8u) + 1u;
        wr32(r4 + 0x6a4u, r0);
    }
    r3 = 0u;
    r4 = 0u;
    wr32(rd32(0x80571bc4u) + 0x69cu, r6);
    r6 = rd32(r6);
    wr32(rd32(0x80571bc4u) + 0x6a0u, r6);
    do {
        if (((u32)rd8(rd32(0x80571bc4u) + 0x6a8u) & (((r3 & 0x20u) != 0u) ? 0u : (1u << (r3 & 0x1fu)))) != 0u) {
            r12 = 0u;
            ctr = 0x10u;
            do {
                r31 = 0u;
                wr8(rd32(0x80571bc4u) + r4 + r12 + 0x300u, 0xffu);
                while (r31 < 5u) {
                    r6 = 4u - r31;
                    r8 = r31 + 1u;
                    r9 = rd32(0x80571bc4u) + r4;
                    r30 = ((r6 & 0x20u) != 0u) ? 0u : (r12 >> (r6 & 0x1fu));
                    r7 = r9 + ((r8 << 2u) & 0xfffffffcu);
                    if ((s32)r30 <= (s32)rd32(r7 + 0x344u)) {
                        r7 = rd32(r7 + 0x38cu);
                        r31 = 0x63u;
                        wr8(r9 + r12 + 0x300u, rd8(r7 + (rd32(r9 + 0x340u) + r30)));
                        wr8(rd32(0x80571bc4u) + r4 + r12 + 0x320u, (u8)r8);
                    }
                    r31 = r31 + 1u;
                }
                r12 = r12 + 1u;
                r31 = 0u;
                wr8(rd32(0x80571bc4u) + r4 + r12 + 0x300u, 0xffu);
                while (r31 < 5u) {
                    r6 = 4u - r31;
                    r8 = r31 + 1u;
                    r9 = rd32(0x80571bc4u) + r4;
                    r30 = ((r6 & 0x20u) != 0u) ? 0u : (r12 >> (r6 & 0x1fu));
                    r7 = r9 + ((r8 << 2u) & 0xfffffffcu);
                    if ((s32)r30 <= (s32)rd32(r7 + 0x344u)) {
                        r7 = rd32(r7 + 0x38cu);
                        r31 = 0x63u;
                        wr8(r9 + r12 + 0x300u, rd8(r7 + (rd32(r9 + 0x340u) + r30)));
                        wr8(rd32(0x80571bc4u) + r4 + r12 + 0x320u, (u8)r8);
                    }
                    r31 = r31 + 1u;
                }
                r12 = r12 + 1u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
        r3 = r3 + 1u;
        r4 = r4 + 0xe0u;
    } while (r3 < 4u);
    r8 = rd32(0x80571bc4u);
    r6 = ((u32)rd8(r8 + 0x687u) << 1u) & 0xfffffffeu;
    r9 = (((u32)rd8(r8 + 0x682u) << 1u) & 0xfffffffeu) + 1u;
    r11 = (((u32)rd8(r8 + 0x68eu) << 1u) & 0xfffffffeu) + 1u;
    r10 = (((u32)rd8(r8 + 0x688u) << 1u) & 0xfffffffeu) + 1u;
    r3 = (((u32)rd8(r8 + 0x68du) << 1u) & 0xfffffffeu) * 0xe0u;
    wr32(0x80571ce0u, r8 + ((((u32)rd8(r8 + 0x681u) << 1u) & 0xfffffffeu) * 0xe0u) + 0x300u);
    wr32(0x80571cc0u, r8 + (r6 * 0xe0u) + 0x300u);
    wr32(0x80571ca0u, r8 + r3 + 0x300u);
    wr32(0x80571c80u, r8 + (r9 * 0xe0u) + 0x300u);
    wr32(0x80571c60u, r8 + (r10 * 0xe0u) + 0x300u);
    wr32(0x80571c40u, r8 + (r11 * 0xe0u) + 0x300u);
    return;
}
