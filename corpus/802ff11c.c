#include "tc_rt.h"

void fn_802ff11c(s32 param_1)
{
    wr8((u32)param_1 + 0x7eu, 0u);
    wr8((u32)param_1 + 0x74u, 0u);
    wr32((u32)param_1 + 0x78u, 0u);
    wr8((u32)param_1 + 5u, 1u);
    return;
}
