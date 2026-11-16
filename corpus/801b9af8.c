#include "tc_rt.h"

void fn_801b9af8(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = rd32((u32)param_1 + 0x2cu);
    (void)tc_call(0x801894d8u, &a);
    return;
}
