#include "tc_rt.h"

void fn_80136eec(s32 param_1, u32 param_2)
{
    wr32((u32)param_1 + 0x30cu, param_2);
    return;
}
