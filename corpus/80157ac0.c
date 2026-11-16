#include "tc_rt.h"

void fn_80157ac0(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    wr32((u32)param_2 + 8u, 0u);
    a.r[0] = (u32)param_1 + 8u;
    a.r[1] = (u32)param_2;
    (void)tc_call(0x802de984u, &a);
    return;
}
