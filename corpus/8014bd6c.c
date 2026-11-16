#include "tc_rt.h"

s32 fn_8014bd6c(s32 param_1, s32 param_2)
{
    return (s32)(rd32((u32)param_1 + 8u) + ((u32)param_2 * 0xf0u));
}
