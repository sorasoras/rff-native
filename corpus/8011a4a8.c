#include "tc_rt.h"

void fn_8011a4a8(s32 param_1)
{
    wr32((u32)param_1 + 0xc0u, (u32)param_1 + 0x250u);
    return;
}
