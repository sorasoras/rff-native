#include "tc_rt.h"

s32 fn_800d5158(s32 param_1)
{
    return (s32)((rd32((u32)param_1 + 0x72cu) << 2u) & 0xc0000000u) >> 31;
}
