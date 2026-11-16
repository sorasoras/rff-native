#include "tc_rt.h"

void fn_8016a7b8(u32 param_1, s32 param_2)
{
    (void)param_1;
    wr32((u32)param_2 + 0x148u, rd32((u32)param_2 + 0x148u) & 0xfbffffffu);
    return;
}
