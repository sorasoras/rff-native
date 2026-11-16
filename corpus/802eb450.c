#include "tc_rt.h"

void fn_802eb450(s32 param_1, u32 param_2, u32 param_3)
{
    wr32((u32)param_1 + 0x18u, (((rd32((u32)param_1 + 0x18u) & 0xf9ffffffu) | ((param_2 << 0x19u) & 0x6000000u)) & 0xfe7fffffu) | ((param_3 << 0x17u) & 0x1800000u));
    return;
}
