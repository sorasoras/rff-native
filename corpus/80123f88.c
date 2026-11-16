#include "tc_rt.h"

void fn_80123f88(s32 param_1, u32 param_2, s32 param_3)
{
    wr32((u32)param_1 + ((u32)param_3 * 0x58u) + 0x7cu, param_2);
    return;
}
