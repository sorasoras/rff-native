#include "tc_rt.h"

void fn_80301414(s32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x10u);
    a.r[1] = param_r4;
    (void)tc_call(0x803014ccu, &a);
    return;
}
