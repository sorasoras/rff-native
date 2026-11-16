#include "tc_rt.h"

void fn_80165f20(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_1 + 0x1694u;
    (void)tc_call(0x800b2b40u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x13u;
    (void)tc_call(0x800b31a0u, &a);
    return;
}
