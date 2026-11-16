#include "tc_rt.h"

void fn_803014e4(s32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 4u);
    a.r[1] = param_r4;
    (void)tc_call(0x80301af8u, &a);
    return;
}
