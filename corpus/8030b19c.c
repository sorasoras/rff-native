#include "tc_rt.h"

void fn_8030b19c(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    wr8((u32)param_1 + 0x28u, 0u);
    for (;;) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x8030af24u, &a);
        if (r3 != 0u || (u32)rd8((u32)param_1 + 0x28u) != 0u) break;
        a.r[0] = (u32)param_1 + 0x2cu;
        (void)tc_call(0x8022ffe4u, &a);
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
