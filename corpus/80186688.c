#include "tc_rt.h"

void fn_80186688(s32 param_1)
{
    u32 r0 = 0;
    r0 = rd32((u32)param_1 + 0x74u);
    wr32((u32)param_1 + 0x120u, 0u);
    r0 = r0 & 0xf7ffffffu;
    wr32((u32)param_1 + 0x74u, r0);
    return;
}
