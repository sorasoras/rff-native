#include "tc_rt.h"

void fn_80250d98(u32 param_1, u32 param_2)
{
    u32 r8 = 0;
    r8 = rd32(0x80576c88u);
    wr32(r8 + 0x7cu, (((rd32(r8 + 0x7cu) & 0xffffff00u) | (param_1 & 0xffu)) & 0xfff8ffffu) | ((param_2 << 0x10u) & 0x70000u));
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, rd32(r8 + 0x7cu));
    wr16(r8 + 2u, 0u);
    return;
}
