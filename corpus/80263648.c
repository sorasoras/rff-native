#include "tc_rt.h"

void fn_80263648(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r28 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = ((param_r3 << 6u) & 0xffffffc0u) - 0x7faff5d0u;
    r3 = tc_call(0x8022c2b0u, &a);
    r28 = r3;
    wr32(r30, param_r4);
    if (param_r3 != 2u) {
        a.r[0] = param_r3;
        a.r[1] = r30;
        (void)tc_call(0x80262ec4u, &a);
    } else {
        a.r[0] = 0u;
        a.r[1] = 0x80500a30u;
        (void)tc_call(0x80262ec4u, &a);
    }
    a.r[0] = r28;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
