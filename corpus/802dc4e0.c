#include "tc_rt.h"

void fn_802dc4e0(s32 param_1)
{
    u32 ctr = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    r7 = rd32(0x8039c140u);
    r6 = rd32(0x8039c2d0u);
    r9 = 0u;
    ctr = 2u;
    do {
        r8 = (u32)param_1 + ((r9 << 2u) & 0x3fcu);
        wr32(r8 + 0x28u, rd32((u32)param_1 + 8u));
        r5 = (u32)param_1 + (r9 & 0xffu);
        r9 = r9 + 8u;
        wr32(r8 + 0x6cu, r6);
        wr8(r5 + 0xecu, 0x40u);
        wr32(r8 + 0xacu, r7);
        wr32(r8 + 0x2cu, rd32((u32)param_1 + 8u));
        wr32(r8 + 0x70u, r6);
        wr8(r5 + 0xedu, 0x40u);
        wr32(r8 + 0xb0u, r7);
        wr32(r8 + 0x30u, rd32((u32)param_1 + 8u));
        wr32(r8 + 0x74u, r6);
        wr8(r5 + 0xeeu, 0x40u);
        wr32(r8 + 0xb4u, r7);
        wr32(r8 + 0x34u, rd32((u32)param_1 + 8u));
        wr32(r8 + 0x78u, r6);
        wr8(r5 + 0xefu, 0x40u);
        wr32(r8 + 0xb8u, r7);
        wr32(r8 + 0x38u, rd32((u32)param_1 + 8u));
        wr32(r8 + 0x7cu, r6);
        wr8(r5 + 0xf0u, 0x40u);
        wr32(r8 + 0xbcu, r7);
        wr32(r8 + 0x3cu, rd32((u32)param_1 + 8u));
        wr32(r8 + 0x80u, r6);
        wr8(r5 + 0xf1u, 0x40u);
        wr32(r8 + 0xc0u, r7);
        wr32(r8 + 0x40u, rd32((u32)param_1 + 8u));
        wr32(r8 + 0x84u, r6);
        wr8(r5 + 0xf2u, 0x40u);
        wr32(r8 + 0xc4u, r7);
        wr32(r8 + 0x44u, rd32((u32)param_1 + 8u));
        wr32(r8 + 0x88u, r6);
        wr8(r5 + 0xf3u, 0x40u);
        wr32(r8 + 0xc8u, r7);
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
