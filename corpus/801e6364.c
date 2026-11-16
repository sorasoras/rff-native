#include "tc_rt.h"

void fn_801e6364(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801e635cu, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 8u;
        a.r[1] = 1u;
        (void)tc_call(0x801f0fa0u, &a);
    }
    return;
}
