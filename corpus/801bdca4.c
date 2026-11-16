#include "tc_rt.h"

void fn_801bdca4(s32 param_1)
{
    u32 r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1 + 0x2d8u;
    r29 = 0u;
    do {
        a.r[0] = r30;
        (void)tc_call(0x801f10e4u, &a);
        a.r[0] = r30;
        a.r[1] = 0x8033b883u;
        (void)tc_call(0x801f100cu, &a);
        a.r[0] = r30;
        a.r[1] = 0u;
        (void)tc_call(0x801f10b8u, &a);
        r29 = r29 + 1u;
        r30 = r30 + 0x68u;
    } while ((s32)r29 < 10);
    return;
}
