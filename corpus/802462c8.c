#include "tc_rt.h"

void fn_802462c8(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    if ((u32)rd16((u32)param_1 + 0x38u) == param_2) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        r0 = rd32((u32)param_1 + 0x1cu);
        wr16((u32)param_1 + 0x38u, (u16)param_2);
        r0 = r0 | 4u;
        wr32((u32)param_1 + 0x1cu, r0);
        if (param_2 == 0u) {
            wr32((u32)param_1 + 0x20u, 1u);
        }
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
