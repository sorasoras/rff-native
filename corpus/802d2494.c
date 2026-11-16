#include "tc_rt.h"

void fn_802d2494(s32 param_1, u32 param_2, u32 param_3)
{
    wr8((u32)param_1 + ((param_2 >> 1u) & 0x7ffffffcu) + (param_2 & 3u) + 0xd8u, (u8)param_3);
    return;
}
