#include "tc_rt.h"

void fn_800f3f18(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    (void)tc_call(0x80083eb8u, &a);
    return;
}
