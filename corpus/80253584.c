#include "tc_rt.h"

void fn_80253584(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r7 = 0, r8 = 0, r9 = 0;
    r3 = ((u32)param_1 << 1u) & 0xfffffffeu;
    r8 = rd32(param_2);
    r9 = rd32(param_2 + 4u);
    wr8(0xcc008000u, 0x61u);
    r0 = r3 + 0xe1u;
    r7 = (((((r3 + 0xe0u) << 0x18u) & 0xff000000u) | ((r8 >> 0x10u) & 0x7ffu)) & 0xff800fffu) | ((r9 << 0xcu) & 0x7ff000u);
    r3 = rd32(0x80576c88u);
    wr32(0xcc008000u, r7);
    wr8(0xcc008000u, 0x61u);
    r4 = ((((r0 << 0x18u) & 0xff000000u) | ((r9 >> 0x10u) & 0x7ffu)) & 0xff800fffu) | ((r8 << 0xcu) & 0x7ff000u);
    wr32(0xcc008000u, r4);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, r4);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, r4);
    wr16(r3 + 2u, 0u);
    return;
}
