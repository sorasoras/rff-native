#include "tc_rt.h"

void fn_80070380(s32 param_1, u32 param_2, u32 param_3)
{
    wr32((u32)param_1 + 0x7cu, param_2);
    wr32((u32)param_1 + 0x80u, param_3);
    return;
}
