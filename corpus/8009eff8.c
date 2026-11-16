#include "tc_rt.h"

u32 fn_8009eff8(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        a.r[0] = rd32(param_1);
        a.r[1] = param_2;
        a.r[2] = rd32(param_1 + 4u);
        a.r[3] = rd32(param_1 + 8u);
        r3 = tc_call(0x8009ca2cu, &a);
        if ((u32)(s8)r3 != 0u) {
            r3 = 1u;
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
