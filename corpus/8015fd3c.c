#include "tc_rt.h"

void fn_8015fd3c(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    wr32((u32)param_1 + 0x138u, param_2);
    wr32((u32)param_1 + 0x134u, param_3);
    wr32((u32)param_1 + 0x13cu, param_4);
    return;
}
