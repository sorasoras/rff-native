#include "tc_rt.h"

s32 fn_80137be0(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    a.r[2] = 5u;
    a.r[3] = 5u;
    (void)tc_call(0x801892ccu, &a);
    wr32((u32)param_1 + 0x28u, 0x803639f0u);
    a.r[0] = (u32)param_1 + 0x38u;
    (void)tc_call(0x80163efcu, &a);
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x80190604u, &a);
    wr32((u32)param_1 + 0x30u, 0u);
    wr32((u32)param_1 + 0x2cu, 0u);
    return param_1;
}
