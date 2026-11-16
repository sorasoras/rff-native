#include "tc_rt.h"

void fn_802533f4(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r9 = 0, r10 = 0, r11 = 0;
    r11 = rd32(0x80576c88u);
    r10 = r11 + (((u32)param_1 << 2u) & 0xfffffffcu);
    r9 = (((rd32(r10 + 0x180u) & 0xffff0fffu) | ((param_2 << 0xcu) & 0xf000u)) & 0xfffff0ffu) | ((param_3 << 8u) & 0xf00u);
    wr8(0xcc008000u, 0x61u);
    r9 = (r9 & 0xffffff0fu) | ((param_4 << 4u) & 0xf0u);
    r9 = (r9 & 0xfffffff0u) | (param_5 & 0xfu);
    wr32(0xcc008000u, r9);
    wr32(r10 + 0x180u, r9);
    wr16(r11 + 2u, 0u);
    return;
}
