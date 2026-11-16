#include "tc_rt.h"

void fn_802dfac0(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x28u;
    (void)tc_call(0x8023961cu, &a);
    return;
}
