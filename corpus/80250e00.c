#include "tc_rt.h"

void fn_80250e00(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r8 = 0, r9 = 0;
    r9 = rd32(0x80576c88u);
    r8 = r9 + (((u32)param_1 << 2u) & 0xfffffffcu);
    wr32(r8 + 0x108u, (((rd32(r8 + 0x108u) & 0xfffbffffu) | ((param_2 << 0x12u) & 0x40000u)) & 0xfff7ffffu) | ((param_3 << 0x13u) & 0x80000u));
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, rd32(r8 + 0x108u));
    wr16(r9 + 2u, 0u);
    return;
}
