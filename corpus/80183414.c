#include "tc_rt.h"

s32 fn_80183414(u32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    (void)param_1;
    return (s32)(rd32((u32)param_2 + (((u32)param_3 << 3u) & 0xfffffff8u) + 4u) + (((u32)(s8)param_4 << 3u) & 0xfffffff8u));
}
