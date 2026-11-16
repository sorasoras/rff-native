#include "tc_rt.h"

void fn_80250dcc(u32 param_1, u32 param_2)
{
    u32 r8 = 0;
    r8 = rd32(0x80576c88u);
    wr32(r8 + 0x7cu, (((rd32(r8 + 0x7cu) & 0xffff00ffu) | ((param_1 << 8u) & 0xff00u)) & 0xffc7ffffu) | ((param_2 << 0x13u) & 0x380000u));
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, rd32(r8 + 0x7cu));
    wr16(r8 + 2u, 0u);
    return;
}
