#include "tc_rt.h"

void fn_800ca28c(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + 0x140u);
    if (r3 != 0u) {
        wr32(r3 + 0x30u, rd32(r3 + 0x30u) | param_2);
        return;
    }
    return;
}
