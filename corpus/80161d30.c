#include "tc_rt.h"

void fn_80161d30(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        a.r[0] = (u32)param_1 + 4u;
        a.r[1] = 0x8033a6e8u;
        (void)tc_call(0x801f100cu, &a);
        a.r[0] = (u32)param_1 + 4u;
        a.r[1] = 0u;
        (void)tc_call(0x801f10b8u, &a);
    } else {
        a.r[0] = (u32)param_1 + 4u;
        a.r[1] = 0x8033a6e1u;
        (void)tc_call(0x801f100cu, &a);
        a.r[0] = (u32)param_1 + 4u;
        a.r[1] = 0u;
        (void)tc_call(0x801f10b8u, &a);
    }
    return;
}
