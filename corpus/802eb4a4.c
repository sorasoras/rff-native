#include "tc_rt.h"

u32 fn_802eb4a4(s32 param_1)
{
    return ((((u32)rd8((u32)param_1 + 3u) >> 2u) & 1u) + 1u) & 1u;
}
