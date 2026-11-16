#include "tc_rt.h"

void fn_802535e8(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r6 = 0, r8 = 0, r9 = 0;
    r6 = ((u32)param_1 << 1u) & 0xfffffffeu;
    r9 = rd32(param_2);
    wr8(0xcc008000u, 0x61u);
    r8 = (((((r6 + 0xe0u) << 0x18u) & 0xff000000u) | ((r9 >> 0x18u) & 0xffu)) & 0xfff00fffu) | ((r9 << 0xcu) & 0xff000u);
    r3 = rd32(0x80576c88u);
    r6 = ((r6 + 0xe1u) << 0x18u) & 0xff000000u;
    r8 = (r8 & 0xff0fffffu) | 0x800000u;
    wr32(0xcc008000u, r8);
    r6 = (r6 & 0xffffff00u) | ((r9 >> 8u) & 0xffu);
    r6 = (r6 & 0xfff00fffu) | ((r9 >> 4u) & 0xff000u);
    wr8(0xcc008000u, 0x61u);
    r6 = (r6 & 0xff0fffffu) | 0x800000u;
    wr32(0xcc008000u, r6);
    wr16(r3 + 2u, 0u);
    return;
}
