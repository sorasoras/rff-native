#include "tc_rt.h"

void fn_80162c60(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x6cu);
    wr32((u32)param_1 + 0x68u, 0xffffffffu);
    a.r[0] = (u32)param_1;
    a.r[1] = r4;
    (void)tc_call(0x801629d4u, &a);
    return;
}
