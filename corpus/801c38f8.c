#include "tc_rt.h"

void fn_801c38f8(u32 param_1, s32 param_2)
{
    (void)param_1;
    wr32((u32)param_2 + 0xd30u, 1u);
    wr32((u32)param_2 + 0xd34u, 0u);
    return;
}
