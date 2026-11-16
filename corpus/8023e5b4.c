#include "tc_rt.h"

void fn_8023e5b4(u32 param_1, s32 param_2, u32 param_3, s32 param_4, s32 param_5, s32 param_6, s32 param_7, s32 param_8, s32 param_9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r10 = 0, r11 = 0, r12 = 0, r30 = 0, r31 = 0;
    (void)param_9;
    r12 = rd32(0x817fe008u);
    if ((rd32(0x804e6254u) - 2u) <= 1u) {
        r11 = 1u;
        r30 = 2u;
    } else {
        r11 = 2u;
        r30 = 1u;
    }
    r31 = (param_1 >> 0x1fu) & 1u;
    if ((((param_1 & 1u) ^ r31) - r31) == 0u) {
        r31 = r30 * ((r11 * (u32)param_4) - (u32)param_2 - param_1);
        r3 = r30 * param_1;
        r6 = ((u32)param_7 + r31) & 0xffffu;
        r0 = (u32)param_5 + r3;
        r3 = (u32)param_6 + r3;
        r0 = r0 & 0xffffu;
        r7 = ((u32)param_8 + r31) & 0xffffu;
        r3 = r3 & 0xffffu;
    } else {
        r31 = r30 * ((r11 * (u32)param_4) - (u32)param_2 - param_1);
        r3 = r30 * param_1;
        r6 = ((u32)param_8 + r31) & 0xffffu;
        r0 = (u32)param_6 + r3;
        r3 = (u32)param_5 + r3;
        r0 = r0 & 0xffffu;
        r3 = r3 & 0xffffu;
        r7 = ((u32)param_7 + r31) & 0xffffu;
    }
    r10 = (u32)ppc_divw(param_2, (s32)r11) & 0xffffu;
    if (r12 != 0u) {
        r6 = r6 + 2u;
        r8 = ((r10 << 1u) & 0x1fffeu) - 2u;
        r10 = 0u;
        r6 = r6 & 0xffffu;
        r0 = r0 + r8;
        r3 = r3 + r8;
        r7 = (r7 + 2u) & 0xffffu;
        r0 = r0 & 0xffffu;
        r3 = r3 & 0xffffu;
    }
    r4 = rd32(0x805716d8u) | 0x80000000u;
    wr32(0x805716dcu, rd32(0x805716dcu));
    wr32(0x805716d8u, r4);
    r5 = rd32(0x805716dcu);
    r4 = rd32(0x805716d8u) | 0x1000000u;
    wr16(0x804e61c6u, (u16)r0);
    wr32(0x805716dcu, r5);
    wr32(0x805716d8u, r4);
    r5 = rd32(0x805716dcu);
    r4 = rd32(0x805716d8u) | 0x2000000u;
    wr16(0x804e61b8u, (u16)(param_3 | ((r10 << 4u) & 0xffff0u)));
    wr32(0x805716dcu, r5);
    wr32(0x805716d8u, r4);
    r4 = rd32(0x805716dcu);
    r0 = rd32(0x805716d8u) | 0x400000u;
    wr16(0x804e61c4u, (u16)r6);
    wr32(0x805716dcu, r4);
    wr32(0x805716d8u, r0);
    r4 = rd32(0x805716dcu);
    r0 = rd32(0x805716d8u) | 0x800000u;
    wr16(0x804e61cau, (u16)r3);
    wr32(0x805716dcu, r4);
    wr16(0x804e61c8u, (u16)r7);
    wr32(0x805716d8u, r0);
    return;
}
