#include "tc_rt.h"

void fn_8024b034(s32 param_1)
{
    wr32(rd32(0x80571918u) + (rd32((u32)param_1 + 0x18u) * 0x70u), 0u);
    return;
}
