#include "tc_rt.h"

void fn_802d0874(s32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x18u;
    a.r[1] = param_r4;
    (void)tc_call(0x802cb1d8u, &a);
    return;
}
