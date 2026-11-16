#include "tc_rt.h"

void fn_8020257c(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        a.r[0] = (u32)param_1 + 0x40u;
        a.r[1] = 0x8033c555u;
        (void)tc_call(0x801f100cu, &a);
        a.r[0] = (u32)param_1 + 0x40u;
        a.r[1] = 0u;
        (void)tc_call(0x801f10b8u, &a);
    } else {
        a.r[0] = (u32)param_1 + 0x40u;
        a.r[1] = 0x8033c55du;
        (void)tc_call(0x801f100cu, &a);
        a.r[0] = (u32)param_1 + 0x40u;
        a.r[1] = 0u;
        (void)tc_call(0x801f10b8u, &a);
    }
    return;
}
