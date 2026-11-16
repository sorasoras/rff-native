#include "tc_rt.h"

void fn_801e722c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8007e848u, &a);
    return;
}
