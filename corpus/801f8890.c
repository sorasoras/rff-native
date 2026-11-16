#include "tc_rt.h"

void fn_801f8890(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    r31 = 0u;
    if ((u32)param_2 == 0u) {
        r31 = 1u;
    }
    r3 = tc_call(0x801f888cu, &a);
    a.r[0] = r3;
    a.r[1] = r31;
    (void)tc_call(0x800d5a14u, &a);
    return;
}
