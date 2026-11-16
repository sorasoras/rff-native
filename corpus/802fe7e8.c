#include "tc_rt.h"

void fn_802fe7e8(s32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x100u;
    a.r[1] = param_2;
    a.r[2] = param_3;
    (void)tc_call(0x802fd854u, &a);
    if (param_5 > 0) {
        a.r[0] = (u32)param_1 + 0x100u;
        a.r[1] = param_4;
        a.r[2] = (u32)param_5;
        (void)tc_call(0x802fdb20u, &a);
    }
    wr8((u32)param_1 + 0x295u, 1u);
    return;
}
