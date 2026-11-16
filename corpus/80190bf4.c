#include "tc_rt.h"

void fn_80190bf4(s32 param_1, u32 param_2)
{
    wr32((u32)param_1 + 0xc0u, param_2);
    return;
}
