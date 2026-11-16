#include "tc_rt.h"

void fn_80038cb8(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r5 = 0;
    r5 = (u32)(s16)rd16((u32)param_1 + 0x16u);
    if ((s32)r5 < 0) {
        r0 = 0u;
    } else {
        r0 = rd32((u32)param_2 + 0x14u) + (rd32((u32)param_2 + 0x24u) * r5);
    }
    wr32((u32)param_1 + 0x1cu, r0);
    return;
}
