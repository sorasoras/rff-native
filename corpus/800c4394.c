#include "tc_rt.h"

void fn_800c4394(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x900u) != 0u) {
        r3 = (u32)param_1 + 0x890u;
        a.r[0] = r3;
        a.r[1] = 0u;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(r3) + 0x18u), &a);
        return;
    }
    return;
}
