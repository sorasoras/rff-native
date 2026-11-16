#include "tc_rt.h"

void fn_800d1928(s32 param_1)
{
    wr32((u32)param_1 + 0x148u, rd32(rd32((u32)param_1 + 0x78u) + 0x20u));
    return;
}
