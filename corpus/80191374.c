#include "tc_rt.h"

void fn_80191374(s32 param_1, u32 param_2, u32 param_3)
{
    wr32((u32)param_1 + 0x150u, rd32(param_2));
    wr32((u32)param_1 + 0x154u, rd32(param_3));
    wr32((u32)param_1 + 0x160u, rd32(param_2 + 4u));
    wr32((u32)param_1 + 0x164u, rd32(param_3 + 4u));
    wr32((u32)param_1 + 0x170u, rd32(param_2 + 8u));
    wr32((u32)param_1 + 0x174u, rd32(param_3 + 8u));
    wr32((u32)param_1 + 0x180u, rd32(param_2 + 0xcu));
    wr32((u32)param_1 + 0x184u, rd32(param_3 + 0xcu));
    wr32((u32)param_1 + 0x190u, rd32(param_2 + 0x10u));
    wr32((u32)param_1 + 0x194u, rd32(param_3 + 0x10u));
    wr32((u32)param_1 + 0x1a0u, rd32(param_2 + 0x14u));
    wr32((u32)param_1 + 0x1a4u, rd32(param_3 + 0x14u));
    wr32((u32)param_1 + 0x1b0u, rd32(param_2 + 0x18u));
    wr32((u32)param_1 + 0x1b4u, rd32(param_3 + 0x18u));
    return;
}
