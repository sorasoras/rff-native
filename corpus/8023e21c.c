#include "tc_rt.h"

void fn_8023e21c(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r31 = 0;
    r31 = ((u32)rd8((u32)param_1 + 0x2cu) << 5u) & 0xffffffe0u;
    c0eq = rd32((u32)param_1 + 0x20u) == 0u;
    r12 = (u32)rd16((u32)param_1 + 0xau);
    r9 = (r31 * (u32)rd16((u32)param_1 + 0xeu)) + (rd32((u32)param_1 + 0x30u) + (((u32)rd16((u32)param_1 + 0x16u) << 1u) & 0xffffffe0u));
    wr32(param_2, r9);
    if (!c0eq) {
        r9 = r9 + r31;
    }
    r8 = (r12 >> 0x1fu) & 1u;
    wr32(param_3, r9);
    if ((((r12 & 1u) ^ r8) - r8) == 1u) {
        r0 = rd32(param_2);
        wr32(param_2, r9);
        wr32(param_3, r0);
    }
    wr32(param_2, rd32(param_2) & 0x3fffffffu);
    wr32(param_3, rd32(param_3) & 0x3fffffffu);
    if (rd32((u32)param_1 + 0x44u) != 0u) {
        r31 = ((u32)rd8((u32)param_1 + 0x2cu) << 5u) & 0xffffffe0u;
        c0eq = rd32((u32)param_1 + 0x20u) == 0u;
        r12 = (u32)rd16((u32)param_1 + 0xau);
        r9 = (r31 * (u32)rd16((u32)param_1 + 0xeu)) + (rd32((u32)param_1 + 0x48u) + (((u32)rd16((u32)param_1 + 0x16u) << 1u) & 0xffffffe0u));
        wr32(param_4, r9);
        if (!c0eq) {
            r9 = r9 + r31;
        }
        r8 = (r12 >> 0x1fu) & 1u;
        wr32(param_5, r9);
        if ((((r12 & 1u) ^ r8) - r8) == 1u) {
            r0 = rd32(param_4);
            wr32(param_4, r9);
            wr32(param_5, r0);
        }
        wr32(param_4, rd32(param_4) & 0x3fffffffu);
        wr32(param_5, rd32(param_5) & 0x3fffffffu);
    }
    if (rd32(param_2) >= 0x1000000u || rd32(param_3) >= 0x1000000u || rd32(param_4) >= 0x1000000u || rd32(param_5) >= 0x1000000u) {
        r11 = 1u;
    } else {
        r11 = 0u;
    }
    if (r11 != 0u) {
        wr32(param_2, (rd32(param_2) >> 5u) & 0x7ffffffu);
        wr32(param_3, (rd32(param_3) >> 5u) & 0x7ffffffu);
        wr32(param_4, (rd32(param_4) >> 5u) & 0x7ffffffu);
        wr32(param_5, (rd32(param_5) >> 5u) & 0x7ffffffu);
    }
    r9 = rd32(0x805716dcu);
    r0 = rd32(0x805716d8u) | 0x10000u;
    wr16(0x804e61d6u, (u16)rd32(param_2));
    r11 = (r11 << 0xcu) & 0xfffff000u;
    wr32(0x805716dcu, r9);
    wr32(0x805716d8u, r0);
    r0 = rd32(0x805716d8u) | 0x20000u;
    r10 = r11 | ((rd32(param_2) >> 0x10u) & 0xffffu);
    r9 = ((u32)rd8((u32)param_1 + 0x3cu) << 8u) & 0xffffff00u;
    wr32(0x805716dcu, rd32(0x805716dcu));
    wr32(0x805716d8u, r0);
    wr16(0x804e61d4u, (u16)(r10 | r9));
    r4 = rd32(0x805716dcu);
    r0 = rd32(0x805716d8u) | 0x1000u;
    wr16(0x804e61deu, (u16)rd32(param_3));
    wr32(0x805716dcu, r4);
    wr32(0x805716d8u, r0);
    r0 = rd32(0x805716d8u) | 0x2000u;
    r5 = (rd32(param_3) >> 0x10u) & 0xffffu;
    wr32(0x805716dcu, rd32(0x805716dcu));
    wr16(0x804e61dcu, (u16)r5);
    wr32(0x805716d8u, r0);
    if (rd32((u32)param_1 + 0x44u) != 0u) {
        r5 = rd32(0x805716dcu);
        r3 = rd32(0x805716d8u) | 0x4000u;
        wr16(0x804e61dau, (u16)rd32(param_4));
        wr32(0x805716dcu, r5);
        wr32(0x805716d8u, r3);
        r0 = rd32(0x805716d8u) | 0x8000u;
        r3 = (rd32(param_4) >> 0x10u) & 0xffffu;
        wr32(0x805716dcu, rd32(0x805716dcu));
        wr32(0x805716d8u, r0);
        wr16(0x804e61d8u, (u16)r3);
        r3 = rd32(0x805716dcu);
        r0 = rd32(0x805716d8u) | 0x400u;
        wr16(0x804e61e2u, (u16)rd32(param_5));
        wr32(0x805716dcu, r3);
        wr32(0x805716d8u, r0);
        r0 = rd32(0x805716d8u) | 0x800u;
        r4 = (rd32(param_5) >> 0x10u) & 0xffffu;
        wr32(0x805716dcu, rd32(0x805716dcu));
        wr16(0x804e61e0u, (u16)r4);
        wr32(0x805716d8u, r0);
    }
    return;
}
