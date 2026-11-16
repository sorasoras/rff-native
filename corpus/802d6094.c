#include "tc_rt.h"

void fn_802d6094(s32 param_1, u32 param_2)
{
    wr32((u32)param_1 + 0x48u, param_2);
    return;
}
