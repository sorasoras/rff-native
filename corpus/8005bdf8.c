#include "tc_rt.h"

s32 fn_8005bdf8(s32 param_1)
{
    return (s32)((rd32((u32)param_1 + 0x148u) << 2u) & 0xc0000000u) >> 31;
}
