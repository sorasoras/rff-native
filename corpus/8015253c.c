#include "tc_rt.h"

void fn_8015253c(u32 param_1, s32 param_2)
{
    u32 r29 = 0, r30 = 0;
    TcArgs a = {0};
    (void)param_1;
    r30 = (u32)param_2 + 0x16a0u;
    r29 = 0u;
    do {
        a.r[0] = r30;
        a.r[1] = 0u;
        (void)tc_call(0x801531a0u, &a);
        r29 = r29 + 1u;
        wr8(r30 + 0x3cu, 0u);
        r30 = r30 + 0x1f0u;
    } while ((s32)r29 < 2);
    return;
}
