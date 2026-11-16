#include "tc_rt.h"

s32 fn_8026d278(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    r0 = (u32)((s32)param_2 >> 31);
    r31 = (r0 ^ param_2) - r0;
    r3 = tc_call(0x8022c2b0u, &a);
    r4 = r31 - 1u;
    r6 = rd32((u32)param_1 + 0x40u);
    r0 = ~(r4 | r4) & (r31 + rd32((u32)param_1 + 0x3cu) - 1u);
    if (r0 > r6) {
        r31 = 0u;
    } else {
        r31 = r6 - r0;
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return (s32)r31;
}
