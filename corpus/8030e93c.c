#include "tc_rt.h"

s32 fn_8030e93c(s32 param_1, s32 param_2, s32 param_3)
{
    if ((u32)param_1 == 1u) {
        return (s32)((u32)param_2 + (u32)param_3);
    }
    if ((u32)param_1 == 0u) {
        return param_2;
    }
    return 0;
}
