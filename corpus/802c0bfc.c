#include "tc_rt.h"

void fn_802c0bfc(s32 param_1)
{
    wr32((u32)param_1 + 0x10u, 0u);
    wr32((u32)param_1 + 0x14u, 0u);
    wr32((u32)param_1 + 0x18u, 0u);
    return;
}
