#include "tc_rt.h"

void fn_8008bf04(s32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + (rd32((u32)param_1 + 0x4150u) * 0x4150u);
    a.r[1] = param_r4;
    (void)tc_call(0x800893e8u, &a);
    return;
}
