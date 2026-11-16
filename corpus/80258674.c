#include "tc_rt.h"

s32 fn_80258674(u32 param_1)
{
    u32 r4 = 0;
    r4 = (u32)((s32)param_1 >> 31);
    return (s32)((r4 ^ param_1) - r4);
}
