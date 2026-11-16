#include "tc_rt.h"

void fn_802532b4(u32 param_1, u32 param_2, s32 param_3, s32 param_4, u32 param_5)
{
    u32 r6 = 0, r8 = 0;
    TcArgs a = {0};
    r8 = 0u;
    if ((u32)param_4 != 0u) {
        r8 = 6u;
    }
    r6 = 0u;
    if ((u32)param_3 != 0u) {
        r6 = 7u;
    }
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = r6;
    a.r[4] = param_5;
    a.r[5] = r8;
    a.r[6] = r8;
    a.r[7] = 0u;
    a.s[1] = 0u;
    (void)tc_call(0x80252ec0u, &a);
    return;
}
