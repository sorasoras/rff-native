#include "tc_rt.h"

void fn_801c1198(u32 param_1, s32 param_2, u32 param_3)
{
    TcArgs a = {0};
    (void)param_1;
    if ((u32)param_2 != 0u) {
        a.r[0] = param_3;
        a.r[1] = (u32)param_2;
        (void)tc_call(0x801a790cu, &a);
        return;
    }
    return;
}
