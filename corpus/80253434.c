#include "tc_rt.h"

void fn_80253434(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r9 = 0, r10 = 0, r11 = 0;
    r11 = rd32(0x80576c88u);
    r10 = r11 + (((u32)param_1 << 2u) & 0xfffffffcu);
    r9 = (((rd32(r10 + 0x1c0u) & 0xffff1fffu) | ((param_2 << 0xdu) & 0xe000u)) & 0xffffe3ffu) | ((param_3 << 0xau) & 0x1c00u);
    wr8(0xcc008000u, 0x61u);
    r9 = (r9 & 0xfffffc7fu) | ((param_4 << 7u) & 0x380u);
    r9 = (r9 & 0xffffff8fu) | ((param_5 << 4u) & 0x70u);
    wr32(0xcc008000u, r9);
    wr32(r10 + 0x1c0u, r9);
    wr16(r11 + 2u, 0u);
    return;
}
