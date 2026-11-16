#include "tc_rt.h"

void fn_800c8cb4(s32 param_1, s32 param_2, u32 param_3)
{
    wr8((u32)param_1 + ((u32)param_2 * 0x60u) + 0x53u, (u8)param_3);
    return;
}
