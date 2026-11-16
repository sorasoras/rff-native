#include "tc_rt.h"

u32 fn_802507d4(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(0x805719a4u);
    r3 = tc_call(0x8022c2b0u, &a);
    wr32(0x805719a4u, param_1);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return r31;
}
