#include "tc_rt.h"

s32 fn_802025f0(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 2u;
    a.r[2] = 2u;
    a.r[3] = 4u;
    (void)tc_call(0x801970c0u, &a);
    wr32((u32)param_1 + 0x28u, 0x80377430u);
    a.r[0] = (u32)param_1 + 0x40u;
    (void)tc_call(0x801f0da4u, &a);
    a.r[0] = (u32)param_1 + 0x94u;
    (void)tc_call(0x80161490u, &a);
    wr32((u32)param_1 + 0x3cu, param_2);
    wr32((u32)param_1 + 0x34u, 0u);
    return param_1;
}
