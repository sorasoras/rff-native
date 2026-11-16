#include "tc_rt.h"

void fn_801c391c(u32 param_1, s32 param_2)
{
    (void)param_1;
    wr32((u32)param_2 + 0xd30u, 0u);
    wr32((u32)param_2 + 0xd34u, 1u);
    return;
}
