#include "tc_rt.h"

s32 fn_800d57a4(s32 param_1)
{
    return (s32)((rd32((u32)param_1 + 0x4b8u) << 1u) & 0xc0000000u) >> 31;
}
