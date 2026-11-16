#include "tc_rt.h"

void fn_801521b0(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    (void)tc_call(0x800b62f8u, &a);
    a.r[0] = (u32)param_1 + 0x16a0u;
    a.r[1] = param_2;
    (void)tc_call(0x8015344cu, &a);
    a.r[0] = (u32)param_1 + 0x1890u;
    a.r[1] = param_2;
    (void)tc_call(0x8015344cu, &a);
    return;
}
