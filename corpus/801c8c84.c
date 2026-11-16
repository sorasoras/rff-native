#include "tc_rt.h"

void fn_801c8c84(s32 param_1)
{
    wr32((u32)param_1 + 0x148u, rd32((u32)param_1 + 0x148u) & 0xfbffffffu);
    return;
}
