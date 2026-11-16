#include "tc_rt.h"

void fn_8013afe4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x30u;
    a.r[1] = 1u;
    (void)tc_call(0x801f0fa0u, &a);
    return;
}
