#include "tc_rt.h"

s32 fn_8015f7d8(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32(param_1 + 0x12cu) == 0x37u) {
        r3 = 0x4au;
    } else {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0xa4u), &a);
        if (r3 != 0u) {
            r3 = rd32(param_1 + 0x12cu);
        } else {
            r3 = 0x4au;
        }
    }
    return (s32)r3;
}
