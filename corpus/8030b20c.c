#include "tc_rt.h"

void fn_8030b20c(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    wr8((u32)param_1 + 0x28u, 1u);
    a.r[0] = (u32)param_1 + 0x2cu;
    (void)tc_call(0x802300d0u, &a);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
