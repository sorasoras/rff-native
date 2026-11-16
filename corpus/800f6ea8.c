#include "tc_rt.h"

void fn_800f6ea8(s32 param_1)
{
    wr32((u32)param_1 + 0x164u, 0xffffffffu);
    wr32((u32)param_1 + 0x168u, 0xffffffffu);
    return;
}
