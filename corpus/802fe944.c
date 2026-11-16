#include "tc_rt.h"

void fn_802fe944(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r5 = 0;
    TcArgs a = {0};
    wr8((u32)param_3 + 0x294u, 0u);
    if ((u32)param_1 == 0u) {
        a.r[0] = (u32)param_3;
        a.r[1] = 0u;
        (void)tc_call(0x802f5fd8u, &a);
    } else {
        a.r[0] = (u32)param_3 + 0x100u;
        a.r[1] = param_2;
        a.r[2] = rd32((u32)param_3 + 0x288u);
        (void)tc_call(0x802fd854u, &a);
        r5 = rd32((u32)param_3 + 0x290u);
        if ((s32)r5 > 0) {
            a.r[0] = (u32)param_3 + 0x100u;
            a.r[1] = rd32((u32)param_3 + 0x28cu);
            a.r[2] = r5;
            (void)tc_call(0x802fdb20u, &a);
        }
        wr8((u32)param_3 + 0x295u, 1u);
    }
    return;
}
