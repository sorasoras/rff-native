#include "tc_rt.h"

void fn_80069494(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x80069478u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + ((u32)param_2 * 0x1a0u) + 0x54cu;
        a.r[1] = (u32)param_1;
        a.r[2] = param_3;
        (void)tc_call(0x80070380u, &a);
    }
    return;
}
