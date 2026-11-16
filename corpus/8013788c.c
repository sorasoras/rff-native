#include "tc_rt.h"

void fn_8013788c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x40u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = (u32)param_1 + 0x1c0u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = (u32)param_1 + 0x32cu;
    a.r[1] = 1u;
    (void)tc_call(0x801f0fa0u, &a);
    return;
}
