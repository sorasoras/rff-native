#include "tc_rt.h"

void fn_8025409c(u32 param_1, u32 param_2)
{
    u32 r7 = 0, r8 = 0;
    r8 = rd32(0x80576c88u);
    r7 = (((rd32(r8 + 0x224u) & 0xffffff00u) | (param_2 & 0xffu)) & 0xfffffeffu) | ((param_1 << 8u) & 0x100u);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, r7);
    wr32(r8 + 0x224u, r7);
    wr16(r8 + 2u, 0u);
    return;
}
