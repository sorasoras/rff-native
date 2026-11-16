#include "tc_rt.h"

s32 fn_802e3f0c(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r4 = (u32)rd16((u32)param_1 + 0xcu) - (u32)rd16((u32)param_1 + 0x10u);
    if ((s32)r4 < 0) {
        r4 = r4 + (u32)rd16((u32)param_1 + 6u);
    }
    r4 = r4 & 0xffffu;
    if ((u32)rd16((u32)param_1 + 0xeu) != 0u) {
        r4 = (r4 + 1u) & 0xffffu;
    }
    r31 = rd32((u32)param_1 + 0x14u) + r4;
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return (s32)r31;
}
