#include "tc_rt.h"

void fn_800b334c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x36cu;
    (void)tc_call(0x80154674u, &a);
    return;
}
