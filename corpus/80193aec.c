#include "tc_rt.h"

void fn_80193aec(s32 param_1, u32 param_2, u32 param_3)
{
    wr32((u32)param_1 + 0x16cu, param_2);
    wr32((u32)param_1 + 0x170u, param_3);
    return;
}
