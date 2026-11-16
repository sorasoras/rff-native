#include "tc_rt.h"

void fn_801894c8(s32 param_1, s32 param_2, u32 param_3)
{
    wr32(rd32((u32)param_1 + 0x24u) + (((u32)param_2 << 2u) & 0xfffffffcu), param_3);
    return;
}
