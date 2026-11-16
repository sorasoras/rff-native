#include "tc_rt.h"

void fn_801bd740(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x114u;
    a.r[1] = 1u;
    (void)tc_call(0x801f0fa0u, &a);
    r31 = (u32)param_1 + 0x2d8u;
    r30 = 0u;
    do {
        a.r[0] = r31;
        a.r[1] = 1u;
        (void)tc_call(0x801f0fa0u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x68u;
    } while ((s32)r30 < 10);
    a.r[0] = (u32)param_1 + 0x4cu;
    (void)tc_call(0x8019087cu, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801bdb74u, &a);
    return;
}
