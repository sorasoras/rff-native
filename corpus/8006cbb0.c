#include "tc_rt.h"

void fn_8006cbb0(u32 param_1, s32 param_2)
{
    (void)param_1;
    wr32(0x80499094u, rd32(0x80499094u) & ~((((u32)param_2 & 0x20u) != 0u) ? 0u : (1u << ((u32)param_2 & 0x1fu))));
    if (param_2 < 7) {
        return;
    }
    return;
}
