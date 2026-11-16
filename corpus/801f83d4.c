#include "tc_rt.h"

void fn_801f83d4(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d3704u, &a);
    a.r[0] = param_1;
    a.r[1] = param_2;
    (void)tc_call(0x800d3858u, &a);
    a.r[0] = param_1;
    a.r[1] = 1u;
    (void)tc_call(0x800d5a14u, &a);
    return;
}
