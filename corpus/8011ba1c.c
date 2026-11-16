#include "tc_rt.h"

s32 fn_8011ba1c(s32 param_1, s32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    return (s32)(((u32)param_3 * 0x5a0u) + ((u32)param_5 + ((u32)param_4 * 0x3cu)) + (((u32)param_1 * 0x2a300u) + ((u32)param_2 * 0xa8c0u)));
}
