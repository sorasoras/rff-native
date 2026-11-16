#include "tc_rt.h"

void fn_800b32f4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x36cu;
    (void)tc_call(0x80154170u, &a);
    return;
}
