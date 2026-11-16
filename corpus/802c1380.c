#include "tc_rt.h"

void fn_802c1380(s32 param_1)
{
    wr32((u32)param_1 + 0x50u, 0u);
    wr32((u32)param_1 + 0x58u, 0xffffffffu);
    wr32((u32)param_1 + 0xb8u, 0u);
    wr32((u32)param_1 + 0xc0u, 0xffffffffu);
    wr32((u32)param_1 + 0x120u, 0u);
    wr32((u32)param_1 + 0x128u, 0xffffffffu);
    wr32((u32)param_1 + 0x188u, 0u);
    wr32((u32)param_1 + 0x190u, 0xffffffffu);
    return;
}
