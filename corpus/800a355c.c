#include "tc_rt.h"

u32 fn_800a355c(u32 param_1, s32 param_2)
{
    return rd32((((u32)param_2 << 3u) & 0xfffffff8u) + rd32(param_1) + 0xcu);
}
