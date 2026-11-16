#include "tc_rt.h"

void fn_8030a3bc(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 - 0xd0u;
    (void)tc_call(0x8030a37cu, &a);
    return;
}
