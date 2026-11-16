#include "tc_rt.h"

void fn_8015207c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800b2674u, &a);
    a.r[0] = (u32)param_1 + 0x16a0u;
    a.r[1] = 0u;
    (void)tc_call(0x801531a0u, &a);
    a.r[0] = (u32)param_1 + 0x1890u;
    a.r[1] = 0u;
    (void)tc_call(0x801531a0u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801520c8u, &a);
    return;
}
