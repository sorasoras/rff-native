#include "tc_rt.h"

u32 fn_801832c8(u32 param_1, s32 param_2, s32 param_3)
{
    (void)param_1;
    return (u32)rd8((u32)param_2 + (((u32)param_3 << 3u) & 0xfffffff8u));
}
