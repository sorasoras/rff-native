#include "tc_rt.h"

u32 fn_8022e98c(s32 param_1)
{
    u32 r3 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    if (rd32(0x804e0248u) != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r5 = 0u;
    } else {
        wr32(0x804e0244u, r3);
        r5 = 0x804e0214u;
        wr32(0x804e0248u, 1u);
    }
    r5 = r5 + (((u32)param_1 << 1u) & 0xfffffffeu);
    r31 = (u32)rd16(r5 + 0x1cu);
    a.r[0] = 0u;
    a.r[1] = 0x14u;
    (void)tc_call(0x8022e578u, &a);
    return r31;
}
