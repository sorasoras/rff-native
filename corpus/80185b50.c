#include "tc_rt.h"

void fn_80185b50(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x3e0u;
    (void)tc_call(0x801e63e8u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80197794u, &a);
    return;
}
