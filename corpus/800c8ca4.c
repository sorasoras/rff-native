#include "tc_rt.h"

u32 fn_800c8ca4(s32 param_1, s32 param_2)
{
    return (u32)rd8((u32)param_1 + ((u32)param_2 * 0x60u) + 0x53u);
}
