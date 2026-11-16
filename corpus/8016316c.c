#include "tc_rt.h"

void fn_8016316c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80163174u, &a);
    return;
}
