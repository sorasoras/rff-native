#include "tc_rt.h"

void fn_80130f70(s32 param_1, u32 param_2)
{
    wr32((u32)param_1 + 0x50u, param_2);
    return;
}
