#include "tc_rt.h"

void fn_80144130(s32 param_1)
{
    wr32((u32)param_1 + 8u, 9u);
    wr32((u32)param_1 + 0xcu, 0u);
    return;
}
