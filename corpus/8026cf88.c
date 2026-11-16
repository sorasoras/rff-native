#include "tc_rt.h"

s32 fn_8026cf88(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    if ((rd32((u32)param_1 + 0x38u) & 4u) != 0u) {
        a.r[0] = (u32)param_1 + 0x20u;
        (void)tc_call(0x8022d56cu, &a);
    }
    r3 = rd32((u32)param_1 + 0x3cu);
    while (r3 != 0u) {
        r0 = rd32(r3 + 4u);
        r3 = rd32(r3 + 0xcu);
        r31 = r31 + r0;
    }
    if ((rd32((u32)param_1 + 0x38u) & 4u) != 0u) {
        a.r[0] = (u32)param_1 + 0x20u;
        (void)tc_call(0x8022d648u, &a);
    }
    return (s32)r31;
}
