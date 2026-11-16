#include "tc_rt.h"

void fn_802ec1f0(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x44u;
    a.r[1] = param_2;
    a.r[2] = 0x14u;
    (void)tc_call(0x8025bdf4u, &a);
    wr8((u32)param_1 + 0x58u, 0u);
    return;
}
