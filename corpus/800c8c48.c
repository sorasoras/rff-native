#include "tc_rt.h"

u32 fn_800c8c48(s32 param_1, s32 param_2)
{
    return rd32((u32)param_1 + ((u32)param_2 * 0x60u) + 0x34u);
}
