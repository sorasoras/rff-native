#include "tc_rt.h"

void fn_802c10f8(u32 param_1)
{
    u32 r4 = 0;
    r4 = rd32(param_1);
    if ((s32)r4 < 4) {
        wr8(r4 - 0x7fab8d28u, 0u);
        return;
    }
    return;
}
