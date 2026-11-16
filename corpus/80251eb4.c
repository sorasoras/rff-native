#include "tc_rt.h"

void fn_80251eb4(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7)
{
    u32 r5 = 0, r8 = 0, r10 = 0, r11 = 0;
    r8 = param_6;
    r11 = param_1 & 3u;
    r10 = ((((param_2 << 1u) & 2u) | (param_4 & 1u)) & 0xffffffbfu) | ((param_3 << 6u) & 0x40u);
    if (param_7 == 0u) {
        r8 = 0u;
    }
    r10 = (r10 & 0xfffffe7fu) | ((r8 << 7u) & 0x180u);
    r5 = rd32(0x80576c88u);
    r10 = (r10 & 0xfffffdffu) | ((((2u - param_7) | (param_7 - 2u)) >> 0x16u) & 0x200u);
    r10 = (r10 & 0xfffffbffu) | ((((0u - param_7) | param_7) >> 0x15u) & 0x400u);
    r10 = (r10 & 0xffffffc3u) | ((param_5 << 2u) & 0x3cu);
    r10 = (r10 & 0xffff87ffu) | ((param_5 << 7u) & 0x7800u);
    wr32(r5 + ((r11 << 2u) & 0xfffffffcu) + 0xb8u, r10);
    wr32(r5 + 0x5fcu, rd32(r5 + 0x5fcu) | (((r11 & 0x20u) != 0u) ? 0u : (0x1000u << (r11 & 0x1fu))));
    if (param_1 == 4u) {
        wr32(r5 + 0xc0u, r10);
        wr32(r5 + 0x5fcu, rd32(r5 + 0x5fcu) | 0x5000u);
        return;
    }
    if (param_1 == 5u) {
        wr32(r5 + 0xc4u, r10);
        wr32(r5 + 0x5fcu, rd32(r5 + 0x5fcu) | 0xa000u);
        return;
    }
    return;
}
