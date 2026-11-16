#include "tc_rt.h"

void fn_800ac284(s32 param_1, s32 param_2)
{
    wr32((u32)param_1 + 0x20u, (u32)param_2);
    if ((u32)param_2 != 0u) {
        wr32(0x8057118cu, rd32(0x8057118cu) & 0xffff7fffu);
        return;
    }
    if (rd32((u32)param_1 + 0x20u) == 0u) {
        wr32(0x8057118cu, rd32(0x8057118cu) | 0x8000u);
        return;
    }
    return;
}
