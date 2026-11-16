#include "tc_rt.h"

void fn_8023e4d4(s32 param_1, s32 param_2, s32 param_3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    r10 = (u32)rd16((u32)param_1 + 0x1au);
    r7 = rd32(0x805716d8u) | 0x10000000u;
    wr32(0x805716dcu, rd32(0x805716dcu));
    r0 = rd32(0x804e6258u);
    wr16(0x804e61beu, (u16)r10);
    c0eq = r0 == 8u;
    wr32(0x805716d8u, r7);
    r0 = rd32(0x805716d8u) | 0x20000000u;
    r6 = rd32(0x805716dcu);
    wr16(0x804e61bcu, (u16)(((u32)rd8((u32)param_1 + 0x1eu) & 0xffff00ffu) | (((u32)rd8((u32)param_1 + 0x1du) << 8u) & 0xff00u)));
    wr32(0x805716dcu, r6);
    wr32(0x805716d8u, r0);
    if (c0eq) {
        r10 = (u32)rd16((u32)param_1 + 0x20u);
        r9 = (u32)rd8((u32)param_1 + 0x1fu) + 0xacu;
    } else {
        r9 = (u32)param_2 + (u32)rd8((u32)param_1 + 0x1fu) - 0x28u;
        r10 = (u32)param_2 + (u32)rd16((u32)param_1 + 0x20u) + 0x28u - (0x2d0u - (u32)param_3);
    }
    r8 = (u32)rd8((u32)param_1 + 0x1cu);
    r5 = rd32(0x805716d8u) | 0x4000000u;
    wr32(0x805716dcu, rd32(0x805716dcu));
    wr32(0x805716d8u, r5);
    r3 = rd32(0x805716dcu);
    r0 = rd32(0x805716d8u) | 0x8000000u;
    wr16(0x804e61c2u, (u16)(r8 | ((r9 << 7u) & 0xff80u)));
    wr32(0x805716dcu, r3);
    wr16(0x804e61c0u, (u16)(((r9 >> 9u) & 0x7fffffu) | ((r10 << 1u) & 0xfffffffeu)));
    wr32(0x805716d8u, r0);
    return;
}
