#include "tc_rt.h"

s32 fn_800d5504(s32 param_1, s32 param_2)
{
    if (param_2 >= 12) {
        return 0;
    }
    return (s32)((u32)param_1 + ((u32)param_2 * 0x60u));
}
