#include "tc_rt.h"

void fn_802c062c(s32 param_1, u32 param_2)
{
    wr32((u32)param_1 + 0x24u, param_2);
    return;
}
