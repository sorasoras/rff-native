#include "tc_rt.h"

void fn_8013f634(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8013f438u, &a);
    a.r[0] = r3;
    a.r[1] = param_1;
    a.r[2] = (u32)(s8)param_2;
    (void)tc_call(0x801404f8u, &a);
    return;
}
