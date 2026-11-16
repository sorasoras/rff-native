#include "tc_rt.h"

s32 fn_801d0a34(s32 param_1, u32 param_r4, u32 param_r5)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    r3 = tc_call(0x8007fd08u, &a);
    if (r3 == 0u) {
        return (s32)r3;
    }
    if (rd32((u32)param_1 + 0x3a4u) != 0u) {
        r3 = 0u;
    }
    return (s32)r3;
}
