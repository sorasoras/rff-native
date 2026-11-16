#include "tc_rt.h"

void fn_802cf45c(s32 param_1, u32 param_2)
{
    u32 c1gt = 0, ctr = 0, r7 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    if (param_2 != 0u) {
        r7 = rd32((u32)param_1 + 0x4cu);
        r12 = (rd32((u32)param_1 + 0x50u) >> 0x14u) & 0xfu;
        c1gt = r12 > param_2;
        r11 = ((r7 >> 0x17u) & 0x1e0u) + (rd32((u32)param_1 + 0x58u) + (((r7 >> 0x18u) & 0xfu) * 0x14u));
        if (r12 < param_2) {
            r9 = param_2 - 8u;
            if ((param_2 - r12) > 8u && !c1gt) {
                r10 = r11 + ((r12 << 2u) & 0xfffffffcu);
                ctr = ((r9 + 7u - r12) >> 3u) & 0x1fffffffu;
                if (r12 < r9) {
                    do {
                        wr8(r10, 1u);
                        r12 = r12 + 8u;
                        wr8(r10 + 1u, 4u);
                        wr8(r10 + 2u, 0x3cu);
                        wr8(r10 + 3u, 0u);
                        wr8(r10 + 4u, 1u);
                        wr8(r10 + 5u, 4u);
                        wr8(r10 + 6u, 0x3cu);
                        wr8(r10 + 7u, 0u);
                        wr8(r10 + 8u, 1u);
                        wr8(r10 + 9u, 4u);
                        wr8(r10 + 0xau, 0x3cu);
                        wr8(r10 + 0xbu, 0u);
                        wr8(r10 + 0xcu, 1u);
                        wr8(r10 + 0xdu, 4u);
                        wr8(r10 + 0xeu, 0x3cu);
                        wr8(r10 + 0xfu, 0u);
                        wr8(r10 + 0x10u, 1u);
                        wr8(r10 + 0x11u, 4u);
                        wr8(r10 + 0x12u, 0x3cu);
                        wr8(r10 + 0x13u, 0u);
                        wr8(r10 + 0x14u, 1u);
                        wr8(r10 + 0x15u, 4u);
                        wr8(r10 + 0x16u, 0x3cu);
                        wr8(r10 + 0x17u, 0u);
                        wr8(r10 + 0x18u, 1u);
                        wr8(r10 + 0x19u, 4u);
                        wr8(r10 + 0x1au, 0x3cu);
                        wr8(r10 + 0x1bu, 0u);
                        wr8(r10 + 0x1cu, 1u);
                        wr8(r10 + 0x1du, 4u);
                        wr8(r10 + 0x1eu, 0x3cu);
                        wr8(r10 + 0x1fu, 0u);
                        r10 = r10 + 0x20u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            r9 = r11 + ((r12 << 2u) & 0xfffffffcu);
            ctr = param_2 - r12;
            if (r12 < param_2) {
                do {
                    wr8(r9, 1u);
                    wr8(r9 + 1u, 4u);
                    wr8(r9 + 2u, 0x3cu);
                    wr8(r9 + 3u, 0u);
                    r9 = r9 + 4u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        wr32((u32)param_1 + 0x50u, (rd32((u32)param_1 + 0x50u) & 0xff0fffffu) | ((param_2 << 0x14u) & 0xf00000u));
        return;
    }
    return;
}
