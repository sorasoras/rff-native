#include "tc_rt.h"

s32 fn_801fd73c(s32 param_1, u32 param_r4, u32 param_r5)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    (void)tc_call(0x801fa3a4u, &a);
    wr32((u32)param_1 + 0xc8u, 0x803770c0u);
    a.r[0] = (u32)param_1 + 0xd0u;
    (void)tc_call(0x800f82d0u, &a);
    a.r[0] = (u32)param_1 + 0x10cu;
    (void)tc_call(0x8012fb58u, &a);
    a.r[0] = (u32)param_1 + 0x9e0u;
    (void)tc_call(0x801e6108u, &a);
    wr32((u32)param_1 + 0x9dcu, 0u);
    return param_1;
}
