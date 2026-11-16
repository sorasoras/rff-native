#include "tc_rt.h"

void fn_802110a4(s32 param_1, u32 param_2)
{
    wr32((u32)param_1 + 0x1e8u, param_2);
    return;
}
