#include "tc_rt.h"

void fn_80050edc(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    TcArgs a = {0};
    (void)param_4;
    a.r[0] = 0x803c8db8u;
    a.r[1] = param_1;
    a.r[2] = param_2;
    a.r[3] = param_3;
    (void)tc_call(0x80157ba4u, &a);
    return;
}
