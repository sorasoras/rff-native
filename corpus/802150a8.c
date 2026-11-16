#include "tc_rt.h"

s32 fn_802150a8(s32 param_1, s32 param_2, u32 param_r5, u32 param_r6)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    r3 = tc_call(0x8021510cu, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x60u);
        a.r[1] = 5u;
        (void)tc_call(0x8021854cu, &a);
    }
    return (s32)r31;
}
