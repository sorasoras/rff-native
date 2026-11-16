#include "tc_rt.h"

s32 fn_8030647c(u32 param_1, u32 param_2, u32 param_r6)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[3] = 0u;
    a.r[4] = param_r6;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0xcu), &a);
    if (r3 != 0u) {
        return (s32)r3;
    }
    r3 = rd32(param_2);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x802f5fc0u, &a);
    }
    r3 = 0u;
    return (s32)r3;
}
