#include "tc_rt.h"

void fn_800f81e4(s32 param_1, s32 param_2)
{
    u32 r5 = 0;
    if ((u32)param_2 != 0u) {
        wr32((u32)param_2 + 0x18u, (u32)param_1);
        wr32((u32)param_2 + 0x14u, rd32((u32)param_1 + 0x14u));
        r5 = rd32((u32)param_1 + 0x14u);
        if (r5 != 0u) {
            wr32(r5 + 0x18u, (u32)param_2);
        }
        wr32((u32)param_1 + 0x14u, (u32)param_2);
        return;
    }
    return;
}
