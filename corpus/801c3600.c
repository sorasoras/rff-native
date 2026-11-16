#include "tc_rt.h"

void fn_801c3600(s32 param_1, u32 param_2)
{
    wr32((u32)param_1 + 0xcu, param_2);
    return;
}
