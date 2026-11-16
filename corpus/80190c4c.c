#include "tc_rt.h"

s32 fn_80190c4c(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x1ccu, 0x803700a8u);
    a.r[0] = (u32)param_1 + 0x10u;
    (void)tc_call(0x801f0da4u, &a);
    a.r[0] = (u32)param_1 + 0x60u;
    (void)tc_call(0x801e6108u, &a);
    a.r[0] = (u32)param_1 + 0xd4u;
    (void)tc_call(0x801e6108u, &a);
    return param_1;
}
