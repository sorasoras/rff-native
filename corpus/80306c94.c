#include "tc_rt.h"

void fn_80306c94(s32 param_1, u32 param_2)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 0x354u;
    a.r[0] = r31;
    (void)tc_call(0x8022d56cu, &a);
    a.r[0] = (u32)param_1 + 0x384u;
    a.r[1] = param_2;
    (void)tc_call(0x802debd0u, &a);
    a.r[0] = r31;
    (void)tc_call(0x8022d648u, &a);
    return;
}
