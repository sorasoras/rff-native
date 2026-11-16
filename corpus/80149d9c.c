#include "tc_rt.h"

u32 fn_80149d9c(u32 param_1, s32 param_2)
{
    return rd32(rd32(0x805712f0u) + (rd32(param_1) * 0x16cu) + ((u32)param_2 * 0x24u) + 8u);
}
