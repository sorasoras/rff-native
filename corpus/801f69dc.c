#include "tc_rt.h"

void fn_801f69dc(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x30u;
    (void)tc_call(0x801f0ff4u, &a);
    return;
}
