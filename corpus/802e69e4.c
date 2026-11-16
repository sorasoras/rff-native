#include "tc_rt.h"

u32 fn_802e69e4(s32 param_1, u32 param_2)
{
    return (u32)rd8((u32)param_1 + (param_2 & 0xfffffffcu) + (param_2 & 3u) + 0xd8u);
}
