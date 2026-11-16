#include "tc_rt.h"

void fn_80086960(s32 param_1, u32 param_2)
{
    wr32((u32)param_1 + 0xc4u, param_2);
    wr32((u32)param_1 + 0x120u, param_2);
    return;
}
