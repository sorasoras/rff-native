#include "tc_rt.h"

void fn_802afaa0(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    TcArgs a = {0};
    if ((u32)rd8((u32)param_1 + 0x6cu) == 5u) {
        a.r[0] = (u32)param_1;
        a.r[1] = param_2;
        a.r[2] = 0u;
        a.r[3] = param_3;
        a.r[4] = param_4;
        (void)tc_call(0x802b0530u, &a);
        return;
    }
    return;
}
