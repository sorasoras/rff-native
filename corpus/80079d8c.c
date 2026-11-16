#include "tc_rt.h"

s32 fn_80079d8c(u32 param_1, u32 param_r4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1);
    a.r[1] = param_r4;
    r3 = tc_call(0x800794fcu, &a);
    if (r3 != 0u) {
        return (s32)r3;
    }
    a.r[0] = param_1;
    a.r[1] = 0x803369d0u;
    r3 = tc_call(0x8007953cu, &a);
    a.r[0] = rd32(param_1);
    a.r[1] = r3 & 0xffffu;
    r3 = tc_call(0x800794fcu, &a);
    if (r3 != 0u) {
        return (s32)r3;
    }
    r3 = 0u;
    return (s32)r3;
}
