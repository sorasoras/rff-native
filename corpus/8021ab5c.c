#include "tc_rt.h"

u32 fn_8021ab5c(s32 param_1, s32 param_2)
{
    return rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 8u);
}
