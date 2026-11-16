#include "tc_rt.h"

void fn_800fe6f8(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x74u;
    a.r[1] = 1u;
    (void)tc_call(0x802543b0u, &a);
    return;
}
