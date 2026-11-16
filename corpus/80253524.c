#include "tc_rt.h"

void fn_80253524(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r6 = 0, r8 = 0;
    r3 = ((u32)param_1 << 1u) & 0xfffffffeu;
    r8 = rd32(param_2);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, (((((r3 + 0xe0u) << 0x18u) & 0xff000000u) | ((r8 >> 0x18u) & 0xffu)) & 0xfff00fffu) | ((r8 << 0xcu) & 0xff000u));
    r6 = (((r3 + 0xe1u) << 0x18u) & 0xff000000u) | ((r8 >> 8u) & 0xffu);
    r3 = rd32(0x80576c88u);
    wr8(0xcc008000u, 0x61u);
    r6 = (r6 & 0xfff00fffu) | ((r8 >> 4u) & 0xff000u);
    wr32(0xcc008000u, r6);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, r6);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, r6);
    wr16(r3 + 2u, 0u);
    return;
}
