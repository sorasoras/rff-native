#include "tc_rt.h"

void fn_800ca250(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0;
    r3 = (u32)param_1;
    for (;;) {
        r0 = rd32(r3 + 0x94u);
        wr32(r3 + 0x134u, param_2);
        wr32(r3 + 0x138u, param_3);
        if (r0 == 0u) break;
        r3 = r0;
    }
    return;
}
