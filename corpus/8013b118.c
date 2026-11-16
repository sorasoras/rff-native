#include "tc_rt.h"

s32 fn_8013b118(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 6u;
    a.r[2] = 5u;
    a.r[3] = 0x1eu;
    (void)tc_call(0x801892ccu, &a);
    wr32((u32)param_1 + 0x28u, 0x80363d00u);
    a.r[0] = (u32)param_1 + 0x48u;
    (void)tc_call(0x801f0da4u, &a);
    wr32((u32)param_1 + 0x2cu, param_2);
    return param_1;
}
