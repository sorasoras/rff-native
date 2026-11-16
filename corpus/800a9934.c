#include "tc_rt.h"

void fn_800a9934(s32 param_1, u32 param_2)
{
    wr32((u32)param_1 + 0x300u, param_2);
    return;
}
