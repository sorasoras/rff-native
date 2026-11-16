#include "tc_rt.h"

s32 fn_80137110(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    a.r[2] = 6u;
    a.r[3] = 6u;
    (void)tc_call(0x801970c0u, &a);
    wr32((u32)param_1 + 0x28u, 0x80363a08u);
    a.r[0] = (u32)param_1 + 0x40u;
    (void)tc_call(0x80161490u, &a);
    a.r[0] = (u32)param_1 + 0x1b0u;
    (void)tc_call(0x80163efcu, &a);
    a.r[0] = (u32)param_1 + 0x1c0u;
    (void)tc_call(0x80161490u, &a);
    a.r[0] = (u32)param_1 + 0x32cu;
    (void)tc_call(0x801f0da4u, &a);
    wr32((u32)param_1 + 0x3cu, 0u);
    wr32((u32)param_1 + 0x1a8u, 0u);
    return param_1;
}
