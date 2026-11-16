#include "tc_rt.h"

u32 fn_8006e5d4(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x70u), &a);
    if ((r3 != 0u || (u32)rd16(0x8049908au) == 0u) || rd32(param_1 + 0x290u) == 0x1du) {
        r3 = 0u;
    } else {
        r3 = 1u;
    }
    return r3;
}
