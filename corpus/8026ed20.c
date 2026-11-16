#include "tc_rt.h"

void fn_8026ed20(s32 param_1, u32 param_2)
{
    wr32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x33000000u, param_2);
    return;
}
