#include "tc_rt.h"

s32 fn_8013aebc(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    a.r[2] = 1u;
    a.r[3] = 1u;
    (void)tc_call(0x801892ccu, &a);
    wr32((u32)param_1 + 0x28u, 0x80363ce8u);
    a.r[0] = (u32)param_1 + 0x30u;
    (void)tc_call(0x801f0da4u, &a);
    wr32((u32)param_1 + 0x80u, 0u);
    return param_1;
}
