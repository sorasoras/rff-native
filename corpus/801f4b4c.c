#include "tc_rt.h"

void fn_801f4b4c(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 8u;
    a.r[1] = param_2;
    a.r[2] = 0x14u;
    (void)tc_call(0x80004338u, &a);
    return;
}
