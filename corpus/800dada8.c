#include "tc_rt.h"

s32 fn_800dada8(s32 param_1)
{
    return (s32)((rd32((u32)param_1 + 0x74u) << 6u) & 0xc0000000u) >> 31;
}
