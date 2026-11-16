#include "tc_rt.h"

void fn_802fbf1c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = param_2;
    a.r[1] = param_3;
    a.r[2] = param_4;
    a.r[3] = param_5;
    a.r[4] = param_6;
    (void)tc_call(0x802ffe20u, &a);
    return;
}
