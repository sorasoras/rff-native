#include "tc_rt.h"

u32 fn_8022c6c0(u32 param_1)
{
    u32 r3 = 0, r5 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    r29 = rd32(0x800000c4u);
    r5 = rd32(0x800000c8u);
    r3 = param_1 & (r29 | r5);
    r31 = r29 & ~param_1;
    wr32(0x800000c4u, r31);
    r31 = r31 | r5;
    while (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r31;
        r3 = tc_call(0x8022c3e4u, &a);
    }
    a.r[0] = r30;
    (void)tc_call(0x8022c2d8u, &a);
    return r29;
}
