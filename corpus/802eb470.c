#include "tc_rt.h"

u32 fn_802eb470(s32 param_1)
{
    return (u32)rd8((u32)param_1 + 3u) & 3u;
}
