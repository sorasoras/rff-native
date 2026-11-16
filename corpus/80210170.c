#include "tc_rt.h"

void fn_80210170(s32 param_1, u32 param_2)
{
    wr32((u32)param_1 + 0x178u, param_2);
    return;
}
