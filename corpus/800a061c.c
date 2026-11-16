#include "tc_rt.h"

void fn_800a061c(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(param_3);
    a.r[0] = r31 + 1u;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = (u32)param_4;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(param_2), &a);
    r3 = r3 & 0xffffu;
    if ((u32)(s8)param_4 != 0u) {
        a.r[0] = r3;
        a.r[1] = param_1;
        (void)tc_call(0x8009f64cu, &a);
    } else {
        a.r[0] = r3;
        a.r[1] = param_1;
        (void)tc_call(0x8009f6fcu, &a);
    }
    wr32(param_3, r31 + 3u);
    return;
}
