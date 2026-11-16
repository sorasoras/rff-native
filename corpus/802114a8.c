#include "tc_rt.h"

void fn_802114a8(s32 param_1, u32 param_2)
{
    wr32((u32)param_1 + 0xf4u, param_2);
    return;
}
