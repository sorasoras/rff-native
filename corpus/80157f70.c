#include "tc_rt.h"

void fn_80157f70(s32 param_1, u32 param_2)
{
    wr32((u32)param_1 + 0x18u, param_2);
    return;
}
