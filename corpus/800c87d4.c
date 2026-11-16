#include "tc_rt.h"

void fn_800c87d4(s32 param_1, s32 param_2, u32 param_3)
{
    wr32((u32)param_1 + ((u32)param_2 * 0x60u) + 0x20u, param_3);
    return;
}
