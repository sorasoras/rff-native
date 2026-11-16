#include "tc_rt.h"

void fn_800ad8a0(u32 param_1, u32 param_2, s32 param_3, s32 param_4, u32 param_5)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    (void)param_1;
    r30 = (u32)param_4;
    if ((u32)param_3 != 6u) {
        if ((u32)param_3 == 5u) {
            r30 = 0u - (u32)param_4;
        }
        a.r[0] = param_2;
        a.r[1] = param_5;
        r3 = tc_call(0x800a51f8u, &a);
        r30 = r30 + r3;
    }
    a.r[0] = param_2;
    a.r[1] = r30;
    a.r[2] = param_5;
    (void)tc_call(0x800a4914u, &a);
    return;
}
