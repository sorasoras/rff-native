#include "tc_rt.h"

u32 fn_800a2d40(s32 param_1)
{
    return rd32((u32)param_1 + ((rd32((u32)param_1 + 0x3314u) << 2u) & 0xfffffffcu) + 4u);
}
