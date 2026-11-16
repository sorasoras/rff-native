#include "tc_rt.h"

void fn_8007f7d4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1bcu);
    a.r[1] = rd32((u32)param_1 + 0x154u);
    (void)tc_call(0x800cf2d0u, &a);
    return;
}
