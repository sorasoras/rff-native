#include "tc_rt.h"

s32 fn_80184f54(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 6u;
    a.r[2] = 5u;
    a.r[3] = 0x3cu;
    (void)tc_call(0x801970c0u, &a);
    wr32((u32)param_1 + 0x28u, 0x8036f3e0u);
    a.r[0] = (u32)param_1 + 0x3cu;
    (void)tc_call(0x80161490u, &a);
    a.r[0] = (u32)param_1 + 0x1a4u;
    (void)tc_call(0x80161490u, &a);
    a.r[0] = (u32)param_1 + 0x318u;
    (void)tc_call(0x80190604u, &a);
    a.r[0] = (u32)param_1 + 0x3e0u;
    (void)tc_call(0x801e6108u, &a);
    wr32((u32)param_1 + 0x34u, 0u);
    wr32((u32)param_1 + 0x38u, 0u);
    a.r[0] = (u32)param_1 + 0x3cu;
    (void)tc_call(0x801614ccu, &a);
    wr32((u32)param_1 + 0x30cu, param_2);
    return param_1;
}
