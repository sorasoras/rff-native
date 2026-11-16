#include "tc_rt.h"

s32 fn_8020106c(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 2u;
    a.r[2] = 1u;
    a.r[3] = 2u;
    (void)tc_call(0x801892ccu, &a);
    wr32((u32)param_1 + 0x28u, 0x803773f0u);
    a.r[0] = (u32)param_1 + 0x40u;
    (void)tc_call(0x801f0da4u, &a);
    wr32((u32)param_1 + 0x3cu, param_2);
    wr32((u32)param_1 + 0x2cu, 0u);
    wr32((u32)param_1 + 0x30u, 0u);
    wr32((u32)param_1 + 0x38u, 0u);
    return param_1;
}
