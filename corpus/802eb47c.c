#include "tc_rt.h"

void fn_802eb47c(s32 param_1, u32 param_2, u32 param_3)
{
    wr32((u32)param_1 + 0x18u, (((rd32((u32)param_1 + 0x18u) & 0xff8fffffu) | ((param_2 << 0x14u) & 0x700000u)) & 0xfff7ffffu) | ((param_3 << 0x13u) & 0x80000u));
    return;
}
