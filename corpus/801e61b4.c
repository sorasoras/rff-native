#include "tc_rt.h"

void fn_801e61b4(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 4u, param_3);
    a.r[0] = param_2;
    a.r[1] = 0x801e61f8u;
    a.r[2] = (u32)param_1;
    r3 = tc_call(0x800f939cu, &a);
    wr32((u32)param_1 + 0x58u, r3);
    return;
}
