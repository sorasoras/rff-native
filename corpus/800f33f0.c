#include "tc_rt.h"

void fn_800f33f0(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_1 + 0x148u;
    (void)tc_call(0x800f33a0u, &a);
    return;
}
