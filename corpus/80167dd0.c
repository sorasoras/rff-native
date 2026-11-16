#include "tc_rt.h"

void fn_80167dd0(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x16d0u;
    (void)tc_call(0x801678e4u, &a);
    return;
}
