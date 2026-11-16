#include "tc_rt.h"

void fn_800ffa94(s32 param_1, s32 param_2)
{
    u32 r5 = 0;
    if ((u32)param_2 != 0u) {
        wr32((u32)param_2 + 0xdcu, (u32)param_1);
        wr32((u32)param_2 + 0xe0u, rd32((u32)param_1 + 0xe0u));
    }
    r5 = rd32((u32)param_1 + 0xe0u);
    if (r5 != 0u) {
        wr32(r5 + 0xdcu, (u32)param_2);
    }
    wr32((u32)param_1 + 0xe0u, (u32)param_2);
    return;
}
