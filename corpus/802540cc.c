#include "tc_rt.h"

void fn_802540cc(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    wr8(0xcc008000u, 0x61u);
    r3 = rd32(0x80576c88u);
    wr32(0xcc008000u, (((param_2 & 1u) | ((param_1 << 1u) & 2u)) & 0xffffffu) | 0x44000000u);
    wr16(r3 + 2u, 0u);
    return;
}
