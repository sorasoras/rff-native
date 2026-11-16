#include "tc_rt.h"

void fn_800b3354(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x36cu;
    (void)tc_call(0x801546a4u, &a);
    return;
}
