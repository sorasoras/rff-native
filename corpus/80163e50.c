#include "tc_rt.h"

void fn_80163e50(s32 param_1)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + 0x20u);
    wr32(r3 + 0x48u, 0xffffffffu);
    wr32(r3 + 0x4cu, 0xffffffffu);
    return;
}
