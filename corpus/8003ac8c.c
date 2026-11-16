#include "tc_rt.h"

void fn_8003ac8c(u32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5)
{
    (void)param_1;
    wr32((((u32)param_3 + param_2 + 0x1fu) & ~((u32)param_3 - 1u)) - 4u, param_2);
    wr32(param_2, param_4);
    wr32(param_2 + 4u, param_5);
    wr32(param_2 + 0x1cu, param_2);
    return;
}
