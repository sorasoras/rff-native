#include "tc_rt.h"

void fn_801c8314(s32 param_1, u32 param_2, s32 param_3)
{
    TcArgs a = {0};
    if ((u32)param_3 == 5u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801c82b0u, &a);
        wr32((u32)param_1 + 0x158u, 1u);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = param_2;
        a.r[2] = (u32)param_3;
        (void)tc_call(0x800da6bcu, &a);
    }
    return;
}
