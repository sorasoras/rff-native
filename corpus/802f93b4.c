#include "tc_rt.h"

void fn_802f93b4(u32 param_1, s32 param_2)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = (u32)param_2 + 0xf8u;
    (void)tc_call(0x802debd0u, &a);
    a.r[0] = (u32)param_2;
    (void)tc_call(0x802f70d4u, &a);
    return;
}
