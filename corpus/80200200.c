#include "tc_rt.h"

void fn_80200200(s32 param_1)
{
    wr32((u32)param_1 + 0x6cu, 0u);
    return;
}
