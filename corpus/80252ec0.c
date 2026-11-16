#include "tc_rt.h"

void fn_80252ec0(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8, u32 param_9, u32 param_10)
{
    u32 r3 = 0, r5 = 0, r12 = 0, r31 = 0;
    (void)param_9;
    (void)param_10;
    wr8(0xcc008000u, 0x61u);
    r31 = rd32(0x817fe00cu);
    r5 = (u32)rd8(0x817fe00bu);
    r3 = rd32(0x80576c88u);
    r12 = (((((((((param_2 & 3u) | ((param_3 << 2u) & 0xcu)) & 0xffffff8fu) | ((param_4 << 4u) & 0x70u)) & 0xfffffe7fu) | ((r31 << 7u) & 0x180u)) & 0xffffe1ffu) | ((param_5 << 9u) & 0x1e00u)) & 0xffff1fffu) | ((param_6 << 0xdu) & 0xe000u);
    r12 = (r12 & 0xfff8ffffu) | ((param_7 << 0x10u) & 0x70000u);
    r12 = (r12 & 0xfff7ffffu) | ((r5 << 0x13u) & 0x80000u);
    r12 = (r12 & 0xffefffffu) | ((param_8 << 0x14u) & 0x100000u);
    r12 = (r12 & 0xffffffu) | ((((u32)param_1 + 0x10u) << 0x18u) & 0xff000000u);
    wr32(0xcc008000u, r12);
    wr16(r3 + 2u, 0u);
    return;
}
