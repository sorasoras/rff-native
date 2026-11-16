#include "tc_rt.h"

void fn_80040040(s32 param_1, u32 param_2, u32 param_3)
{
    wr32((u32)param_1 + 0x70u, param_2);
    wr32((u32)param_1 + 0x74u, param_3);
    return;
}
