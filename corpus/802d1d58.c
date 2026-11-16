#include "tc_rt.h"

u32 fn_802d1d58(s32 param_1, u32 param_2)
{
    return (u32)rd8((u32)param_1 + (param_2 & 0xfffffffcu) + (param_2 & 3u) + 0xd4u);
}
