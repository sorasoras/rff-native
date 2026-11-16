#include "tc_rt.h"

u32 fn_800b2fe8(s32 param_1)
{
    return ((u32)rd8((u32)param_1 + 0x358u) >> 7u) & 1u;
}
