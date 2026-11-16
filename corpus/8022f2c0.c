#include "tc_rt.h"

void fn_8022f2c0(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    while ((s32)rd32(r3 + 0x2ccu) <= 0 && (s32)rd32(r3 + 0x2d0u) > param_2) {
        a.r[0] = r3;
        a.r[1] = (u32)param_2;
        r3 = tc_call(0x8022f10cu, &a);
        if (r3 == 0u) break;
    }
    return;
}
