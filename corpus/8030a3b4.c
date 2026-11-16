#include "tc_rt.h"

void fn_8030a3b4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 - 0xd0u;
    (void)tc_call(0x8030a380u, &a);
    return;
}
