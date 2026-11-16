#include "tc_rt.h"

u32 fn_8027c884(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = rd32(r31 + 0x8bcu);
    r31 = rd32(r31 + 0x8dcu);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    if (r30 != 0xffffffffu && r31 != 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x8027c74cu, &a);
        if (r3 == 0u) {
            r3 = 1u;
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
