#include "tc_rt.h"

u32 fn_8009f238(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1);
    r3 = tc_call(0x8009c624u, &a);
    if ((u32)(s8)r3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        r3 = tc_call(0x8009edf0u, &a);
    } else {
        a.r[0] = rd32(param_1);
        a.r[1] = param_1 + 0x10u;
        a.r[2] = rd32(param_1 + 0x14u);
        a.r[3] = param_1 + 0x18u;
        a.r[4] = rd32(param_1 + 4u);
        a.r[5] = param_2;
        r3 = tc_call(0x8009c080u, &a);
        if ((u32)(s8)r3 != 0u) {
            r0 = rd32(param_1 + 0x1cu);
            r3 = 1u;
            wr32(param_1 + 8u, param_2);
            r0 = r0 | 5u;
            wr32(param_1 + 0x1cu, r0);
        } else {
            r3 = 0u;
        }
    }
    return r3;
}
