#include "tc_rt.h"

void fn_800a2b74(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x800a36d0u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x800a2d40u, &a);
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = (u32)(s8)param_4;
        (void)tc_call(0x8009be04u, &a);
    }
    return;
}
