#include "tc_rt.h"

void fn_8014e374(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x124u) == 2u) {
        a.r[0] = (u32)param_1;
        a.r[1] = param_2;
        a.r[2] = rd32((u32)param_1 + 0x120u);
        r3 = tc_call(0x800da8b8u, &a);
        if (r3 == 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = 0u;
            a.r[4] = 1u;
            (void)tc_call(0x800dab98u, &a);
        } else {
            a.r[0] = (u32)param_1;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = 1u;
            a.r[4] = 1u;
            (void)tc_call(0x800dab98u, &a);
            wr32((u32)param_1 + 0x124u, 6u);
        }
    }
    return;
}
