#include "tc_rt.h"

void fn_80129504(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x1a0u;
    (void)tc_call(0x8012a388u, &a);
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x801e64d0u, &a);
    a.r[0] = (u32)param_1 + 0xb8u;
    (void)tc_call(0x801e64d0u, &a);
    a.r[0] = (u32)param_1 + 0x12cu;
    (void)tc_call(0x801e64d0u, &a);
    a.r[0] = rd32((u32)param_1 + 0x62cu);
    (void)tc_call(0x800fe9bcu, &a);
    return;
}
