#include "tc_rt.h"

u32 fn_8009c814(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    if ((rd32(param_1 + 0x1cu) & 1u) != 0u) {
        r4 = rd32(param_1);
        a.r[0] = rd32(param_1 + 0x10u) + ((param_3 << 2u) & 0xfffcu);
        a.r[1] = r4;
        a.r[2] = param_3;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(r4), &a);
        r0 = r3 & 0xffffu;
        r3 = 1u;
        wr32(param_2, r0);
    } else {
        r3 = 0u;
    }
    return r3;
}
