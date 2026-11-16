#include "tc_rt.h"

void fn_8030152c(s32 param_1, u32 param_r4, u32 param_r5, u32 param_r6)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 4u);
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    (void)tc_call(0x80302240u, &a);
    return;
}
