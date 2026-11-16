#include "tc_rt.h"

s32 fn_801f4690(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        wr32((u32)param_1 + 0x1cu, 0x80376a64u);
        a.r[0] = (u32)param_1 + 0x20u;
        (void)tc_call(0x802deaf8u, &a);
        r3 = (u32)param_1 + 0x20u;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x802dea2cu, &a);
        }
        if (param_2 > 0) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801f4aa4u, &a);
        }
    }
    return param_1;
}
