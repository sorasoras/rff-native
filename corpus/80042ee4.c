#include "tc_rt.h"

void fn_80042ee4(s32 param_1)
{
    u32 r3 = 0;
    r3 = (u32)param_1;
    if (param_1 < 1) {
        r3 = 1u;
    }
    if ((s32)r3 > 4) {
        r3 = 4u;
    }
    wr32(0x803c1c70u, r3);
    return;
}
