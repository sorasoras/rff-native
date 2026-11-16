#include "tc_rt.h"

void fn_801c1fdc(s32 param_1, u32 param_2, u32 param_3)
{
    wr32((u32)param_1 + 4u, param_3);
    wr32((u32)param_1 + 0x38u, param_2);
    return;
}
