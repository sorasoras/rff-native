#include "tc_rt.h"

void fn_80080d8c(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80059e38u, &a);
    if (r3 != 0u) {
        r4 = (u32)rd8(0x8049282du);
        r10 = (u32)rd8(0x8049282eu);
        r6 = (u32)rd8(0x8049282fu);
        r3 = (u32)rd8(0x8049282cu) + ((u32)rd8(0x80493020u) * 0x64u);
        r5 = (r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u)) & 0xffu;
        if ((r3 != 0x3e7u || r4 != 0x3bu) || r10 != 0x3bu) {
            r0 = (r6 + 1u) & 0xffu;
            r7 = ppc_mulhw(-2004318071, (s32)r0) + r0;
            r8 = (u32)((s32)r7 >> 5);
            r7 = (u32)((s32)r7 >> 5);
            r8 = r8 + ((r8 >> 0x1fu) & 1u);
            r10 = r10 + (r8 & 0xffu);
            r11 = r10 & 0xffu;
            r12 = r7 + ((r7 >> 0x1fu) & 1u);
            r7 = ppc_mulhw(-2004318071, (s32)r11) + r11;
            r8 = (u32)((s32)r7 >> 5);
            r7 = (u32)((s32)r7 >> 5);
            r8 = r8 + ((r8 >> 0x1fu) & 1u);
            r8 = r4 + (r8 & 0xffu);
            r8 = r8 & 0xffu;
            r10 = r7 + ((r7 >> 0x1fu) & 1u);
            r3 = ppc_mulhwu(0x51eb851fu, r3);
            r4 = ppc_mulhw(-2004318071, (s32)r8) + r8;
            r7 = (u32)((s32)r4 >> 5);
            r4 = (u32)((s32)r4 >> 5);
            r7 = r7 + ((r7 >> 0x1fu) & 1u);
            r3 = (r3 >> 5u) & 0x7ffffffu;
            r5 = r5 + (r7 & 0xffu);
            r0 = r0 - (r12 * 0x3cu);
            r3 = r3 * 0x64u;
            r9 = r0 & 0xffu;
            r12 = (r5 & 0xffu) + r3;
            r8 = (r8 - ((r4 + ((r4 >> 0x1fu) & 1u)) * 0x3cu)) & 0xffu;
            r10 = (r11 - (r10 * 0x3cu)) & 0xffu;
            if (r12 > 0x63u) {
                r4 = ppc_mulhwu(0x51eb851fu, r12);
                r0 = r4;
                r4 = (r4 >> 5u) & 0x7ffffffu;
                r4 = r4 * 0x64u;
                r0 = (r0 >> 5u) & 0xffu;
                wr8(0x80493020u, (u8)r0);
                wr8(0x8049282cu, (u8)(r12 - r4));
            } else {
                wr8(0x80493020u, 0u);
                wr8(0x8049282cu, (u8)r12);
            }
            wr8(0x8049282du, (u8)r8);
            wr8(0x8049282eu, (u8)r10);
            wr8(0x8049282fu, (u8)r9);
        }
    }
    return;
}
