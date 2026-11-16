#include "tc_rt.h"

s32 fn_801c390c(u32 param_1, s32 param_2)
{
    (void)param_1;
    return (s32)((rd32((u32)param_2 + 0x148u) << 6u) & 0xc0000000u) >> 31;
}
