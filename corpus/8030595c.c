#include "tc_rt.h"

void fn_8030595c(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 4u;
    a.r[0] = r31;
    (void)tc_call(0x8022d56cu, &a);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    a.r[0] = (u32)param_1 + 0x1cu;
    a.r[1] = param_2;
    (void)tc_call(0x802f9b24u, &a);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    a.r[0] = r31;
    (void)tc_call(0x8022d648u, &a);
    return;
}
