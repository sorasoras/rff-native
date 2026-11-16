#include "tc_rt.h"

void fn_8030b25c(s32 param_1)
{
    wr32((u32)param_1 + 0x318u, 0u);
    wr8((u32)param_1 + 0x31cu, 0u);
    wr8((u32)param_1 + 0x31du, 0u);
    return;
}
