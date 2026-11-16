#include "tc_rt.h"

s32 fn_802dcd9c(s32 param_1)
{
    return (s32)(rd32((u32)param_1 + 0x2cu) + rd32((u32)param_1 + 0x34u)) >> 16;
}
