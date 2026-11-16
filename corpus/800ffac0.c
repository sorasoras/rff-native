#include "tc_rt.h"

void fn_800ffac0(s32 param_1, s32 param_2)
{
    u32 r5 = 0;
    if ((u32)param_2 != 0u) {
        wr32((u32)param_2 + 0xdcu, rd32((u32)param_1 + 0xdcu));
        wr32((u32)param_2 + 0xe0u, (u32)param_1);
    }
    r5 = rd32((u32)param_1 + 0xdcu);
    if (r5 != 0u) {
        wr32(r5 + 0xe0u, (u32)param_2);
    }
    wr32((u32)param_1 + 0xdcu, (u32)param_2);
    return;
}
