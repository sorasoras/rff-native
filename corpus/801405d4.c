#include "tc_rt.h"

u32 fn_801405d4(u32 param_1, u32 param_2)
{
    (void)param_1;
    return ((u32)rd8(param_2) >> 6u) & 1u;
}
