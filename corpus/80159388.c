#include "tc_rt.h"

void fn_80159388(s32 param_1, u32 param_2)
{
    wr32((u32)param_1 + 0x10u, param_2);
    return;
}
