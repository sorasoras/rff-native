#include "tc_rt.h"

void fn_80284864(s32 param_1, s32 param_2, u32 param_3, s32 param_4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r30 = 0;
    r7 = 0u;
    r0 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    if (param_3 != 0u) {
        r3 = param_3 + 0xfff8u;
        if (param_3 > 8u) {
            r8 = r3 & 0xffffu;
            ctr = ((r8 + 7u) >> 3u) & 0x1fffffffu;
            if (r8 > 0u) {
                do {
                    r30 = r7 & 0xffffu;
                    r11 = (u32)param_4 + r30;
                    r12 = (r11 >> 0x1fu) & 1u;
                    r3 = (u32)param_2 + r30;
                    r10 = ((r11 << 0x1du) & 0xe0000000u) - r12;
                    r11 = (u32)param_4 + ((r7 + 1u) & 0xffffu);
                    r10 = (r10 << 3u) | (r10 >> 0x1du);
                    r10 = r10 + r12;
                    r30 = r0 + (r10 & 0xffu);
                    r10 = (u32)param_4 + ((r7 + 2u) & 0xffffu);
                    r12 = (u32)rd8(r30 + 0x92cu);
                    r9 = (r11 << 0x1du) & 0xe0000000u;
                    r11 = (r11 >> 0x1fu) & 1u;
                    r30 = (u32)rd8(r30 + 0x924u);
                    r9 = r9 - r11;
                    r12 = (u32)rd8(r3) ^ r12;
                    r9 = (r9 << 3u) | (r9 >> 0x1du);
                    r12 = r30 + r12;
                    r9 = r9 + r11;
                    wr8(r3, (u8)r12);
                    r9 = r9 & 0xffu;
                    r8 = (u32)param_4 + ((r7 + 3u) & 0xffffu);
                    r30 = r0 + r9;
                    r9 = (r10 << 0x1du) & 0xe0000000u;
                    r10 = (r10 >> 0x1fu) & 1u;
                    r9 = r9 - r10;
                    r9 = (r9 << 3u) | (r9 >> 0x1du);
                    r9 = r9 + r10;
                    r10 = (r8 >> 0x1fu) & 1u;
                    wr8(r3 + 1u, (u8)((u32)rd8(r30 + 0x924u) + ((u32)rd8(r3 + 1u) ^ (u32)rd8(r30 + 0x92cu))));
                    r9 = r9 & 0xffu;
                    r30 = r0 + r9;
                    r9 = ((r8 << 0x1du) & 0xe0000000u) - r10;
                    r9 = (r9 << 3u) | (r9 >> 0x1du);
                    r9 = r9 + r10;
                    r8 = (u32)param_4 + ((r7 + 4u) & 0xffffu);
                    wr8(r3 + 2u, (u8)((u32)rd8(r30 + 0x924u) + ((u32)rd8(r3 + 2u) ^ (u32)rd8(r30 + 0x92cu))));
                    r30 = r0 + (r9 & 0xffu);
                    r10 = (r8 >> 0x1fu) & 1u;
                    r9 = ((r8 << 0x1du) & 0xe0000000u) - r10;
                    r9 = (r9 << 3u) | (r9 >> 0x1du);
                    r10 = r9 + r10;
                    r9 = (u32)param_4 + ((r7 + 5u) & 0xffffu);
                    r8 = (r9 << 0x1du) & 0xe0000000u;
                    r9 = (r9 >> 0x1fu) & 1u;
                    wr8(r3 + 3u, (u8)((u32)rd8(r30 + 0x924u) + ((u32)rd8(r3 + 3u) ^ (u32)rd8(r30 + 0x92cu))));
                    r12 = r0 + (r10 & 0xffu);
                    r8 = r8 - r9;
                    r10 = (u32)rd8(r12 + 0x92cu);
                    r8 = (r8 << 3u) | (r8 >> 0x1du);
                    r8 = r8 + r9;
                    r12 = (u32)rd8(r12 + 0x924u);
                    wr8(r3 + 4u, (u8)(r12 + ((u32)rd8(r3 + 4u) ^ r10)));
                    r30 = r0 + (r8 & 0xffu);
                    r10 = (u32)param_4 + ((r7 + 6u) & 0xffffu);
                    r11 = (r10 >> 0x1fu) & 1u;
                    r9 = ((r10 << 0x1du) & 0xe0000000u) - r11;
                    r8 = (r7 + 7u) & 0xffffu;
                    r7 = r7 + 8u;
                    r10 = (r9 << 3u) | (r9 >> 0x1du);
                    r9 = (u32)param_4 + r8;
                    wr8(r3 + 5u, (u8)((u32)rd8(r30 + 0x924u) + ((u32)rd8(r3 + 5u) ^ (u32)rd8(r30 + 0x92cu))));
                    r10 = (r10 + r11) & 0xffu;
                    r8 = (r9 << 0x1du) & 0xe0000000u;
                    r9 = (r9 >> 0x1fu) & 1u;
                    r12 = r0 + r10;
                    r8 = r8 - r9;
                    r10 = (u32)rd8(r12 + 0x92cu);
                    r8 = (r8 << 3u) | (r8 >> 0x1du);
                    r12 = (u32)rd8(r12 + 0x924u);
                    r8 = r8 + r9;
                    r8 = r8 & 0xffu;
                    wr8(r3 + 6u, (u8)(r12 + ((u32)rd8(r3 + 6u) ^ r10)));
                    r10 = r0 + r8;
                    r8 = (u32)rd8(r10 + 0x92cu);
                    r10 = (u32)rd8(r10 + 0x924u);
                    r8 = (u32)rd8(r3 + 7u) ^ r8;
                    r8 = r10 + r8;
                    wr8(r3 + 7u, (u8)r8);
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        r8 = r7 & 0xffffu;
        ctr = param_3 - r8;
        if (r8 < param_3) {
            do {
                r9 = r7 & 0xffffu;
                r7 = r7 + 1u;
                r8 = (u32)param_4 + r9;
                r3 = (r8 << 0x1du) & 0xe0000000u;
                r8 = (r8 >> 0x1fu) & 1u;
                r3 = r3 - r8;
                r3 = (r3 << 3u) | (r3 >> 0x1du);
                r3 = r3 + r8;
                r3 = r3 & 0xffu;
                r8 = r0 + r3;
                r3 = (u32)rd8(r8 + 0x92cu);
                r8 = (u32)rd8(r8 + 0x924u);
                r3 = (u32)rd8((u32)param_2 + r9) ^ r3;
                r3 = r8 + r3;
                wr8((u32)param_2 + r9, (u8)r3);
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    return;
}
