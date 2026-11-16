#include "tc_rt.h"

void fn_802fc118(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0xf4u);
    a.r[1] = (u32)param_1;
    a.r[2] = param_2;
    (void)tc_call(0x802faf94u, &a);
    return;
}
