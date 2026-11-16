#include "tc_rt.h"

void fn_801d5610(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 8u);
    a.r[1] = param_2;
    a.r[2] = 1u;
    (void)tc_call(0x8007fa58u, &a);
    return;
}
