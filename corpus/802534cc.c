#include "tc_rt.h"

void fn_802534cc(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r9 = 0, r10 = 0, r11 = 0;
    r10 = rd32(0x80576c88u);
    r9 = r10 + (((u32)param_1 << 2u) & 0xfffffffcu);
    r11 = (rd32(r9 + 0x1c0u) & 0xfffbffffu) | ((param_2 << 0x12u) & 0x40000u);
    if ((s32)param_2 <= 1) {
        r11 = (r11 & 0xffcfffffu) | ((param_4 << 0x14u) & 0x300000u);
        r11 = (r11 & 0xfffcffffu) | ((param_3 << 0x10u) & 0x30000u);
    } else {
        r11 = (r11 & 0xffcfffffu) | ((param_2 << 0x13u) & 0x300000u);
        r11 = r11 | 0x30000u;
    }
    wr8(0xcc008000u, 0x61u);
    r11 = (r11 & 0xfff7ffffu) | ((param_5 << 0x13u) & 0x80000u);
    r11 = (r11 & 0xff3fffffu) | ((param_6 << 0x16u) & 0xc00000u);
    wr32(0xcc008000u, r11);
    wr32(r9 + 0x1c0u, r11);
    wr16(r10 + 2u, 0u);
    return;
}
