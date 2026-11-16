#include "tc_rt.h"

void fn_8031f65c(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r31 = 0;
    r8 = 0u;
    r6 = param_1 + rd32(param_1);
    r7 = r6 + 8u;
    while ((s32)r8 < (s32)rd16(r6 + 4u)) {
        r4 = (u32)rd8(r7);
        r3 = 0u;
        r0 = (u32)rd8(r7 + 1u);
        r7 = r7 + 2u;
        r4 = (r4 << 8u) & 0xffffff00u;
        r0 = r4 + r0;
        r11 = r7;
        r7 = r7 + r0;
        r9 = ((u32)rd8(r7 + 2u) << 8u) & 0xffffff00u;
        r10 = (u32)rd8(r7 + 3u);
        r0 = ((u32)rd8(r7 + 1u) << 0x10u) & 0xffff0000u;
        r5 = ((u32)rd8(r7) << 0x18u) & 0xff000000u;
        r7 = r7 + 8u;
        r0 = r5 + r0;
        r0 = r10 + r9 + r0;
        wr32(r6 + r0, r11);
        r9 = r6 + r0;
        r0 = rd32(r9 + 4u) + 8u;
        r4 = r9 + r0;
        r0 = rd32(r9 + r0);
        r4 = r0 + r4;
        r10 = r4 + 4u;
        r0 = (u32)rd16(r4 + 4u);
        r12 = r10 + 4u;
        r4 = (r0 << 3u) & 0xfffffff8u;
        r0 = (r0 << 2u) & 0xfffffffcu;
        r5 = r4 + r10;
        r10 = r10 + r0;
        r0 = (u32)rd16(r5 + 4u);
        r4 = r5 + 4u;
        r5 = r5 + 8u;
        r31 = r10 + 4u;
        r10 = (r0 << 3u) & 0xfffffff8u;
        r0 = (r0 << 2u) & 0xfffffffcu;
        r11 = r10 + r4;
        r10 = r4 + r0;
        r4 = r11 + 4u;
        r11 = r10 + 4u;
        for (;;) {
            r10 = rd32(r9 + 4u) + r9 + 8u;
            r10 = rd32(r10) + r10;
            if ((s32)r3 >= (s32)rd16(r10 + 4u)) break;
            wr32(r12, r4);
            r12 = r12 + 4u;
            r3 = r3 + 1u;
            r0 = rd32(r31);
            r31 = r31 + 4u;
            r4 = r4 + r0;
        }
        r10 = 0u;
        for (;;) {
            r3 = rd32(r9 + 4u) + r9 + 8u;
            r3 = rd32(r3) + r3;
            r3 = r3 + 4u;
            r3 = (((u32)rd16(r3) << 3u) & 0xfffffff8u) + r3;
            if ((s32)r10 >= (s32)rd16(r3 + 4u)) break;
            wr32(r5, r4);
            r5 = r5 + 4u;
            r10 = r10 + 1u;
            r0 = rd32(r11);
            r11 = r11 + 4u;
            r4 = r4 + r0;
        }
        r8 = r8 + 1u;
    }
    return;
}
