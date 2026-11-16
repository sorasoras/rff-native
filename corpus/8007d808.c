#include "tc_rt.h"

s32 fn_8007d808(u32 param_1, u32 param_2, u32 param_3, u32 param_r7, u32 param_r8)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    r3 = tc_call(0x8007032cu, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = param_3;
        (void)tc_call(0x8007d874u, &a);
    }
    return (s32)r31;
}
