#include "tc_rt.h"

void fn_8025379c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r4 = 0;
    wr8(0xcc008000u, 0x61u);
    r4 = rd32(0x80576c88u);
    wr32(0xcc008000u, (((((((((param_2 & 0xffu) | 0xf3000000u) & 0xffff00ffu) | ((param_5 << 8u) & 0xff00u)) & 0xfff8ffffu) | ((param_1 << 0x10u) & 0x70000u)) & 0xffc7ffffu) | ((param_4 << 0x13u) & 0x380000u)) & 0xff3fffffu) | ((param_3 << 0x16u) & 0xc00000u));
    wr16(r4 + 2u, 0u);
    return;
}
