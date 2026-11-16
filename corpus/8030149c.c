#include "tc_rt.h"

void fn_8030149c(s32 param_1)
{
    wr32((u32)param_1 + 4u, 0u);
    wr8((u32)param_1 + 8u, 0x2fu);
    wr8((u32)param_1 + 9u, 0u);
    return;
}
