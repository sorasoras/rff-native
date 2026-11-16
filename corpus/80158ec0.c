#include "tc_rt.h"

void fn_80158ec0(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    (void)param_2;
    (void)param_3;
    wr32((u32)param_1 + 0x920u, param_4);
    return;
}
