#include "tc_rt.h"

u32 fn_8014fcbc(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(param_1 + 0x70u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x1f4u), &a);
    a.r[0] = r31;
    a.r[1] = r3;
    r3 = tc_call(0x80031be0u, &a);
    if (r3 != 0u) {
        r3 = ((u32)rd16(r3 + 0x34u) >> 4u) & 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
