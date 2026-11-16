#include "tc_rt.h"

void fn_8022c320(void)
{
    u32 r0 = 0, r3 = tc_argr(0u), r4 = tc_argr(1u), r29 = 0, r30 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    wr32(0x805714e8u, 0x80003040u);
    a.r[0] = 0x80003040u;
    a.r[1] = 0u;
    a.r[2] = 0x80u;
    r3 = tc_call(0x8000443cu, &a);
    f1 = tc_lastf();
    wr32(0x800000c4u, 0u);
    wr32(0x800000c8u, 0u);
    wr32(0xcc003004u, 0xf0u);
    wr32(0xcd000034u, 0x40000000u);
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    r0 = rd32(0x800000c4u);
    r29 = r3;
    r4 = rd32(0x800000c8u);
    r30 = r0 | 0xfffffff0u;
    r0 = ~(r0 | r4);
    wr32(0x800000c4u, r30);
    r3 = r0 & 0xfffffff0u;
    r30 = r30 | r4;
    while (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r30;
        r3 = tc_call(0x8022c3e4u, &a);
        f1 = tc_lastf();
    }
    a.r[0] = r29;
    r3 = tc_call(0x8022c2d8u, &a);
    f1 = tc_lastf();
    a.r[0] = 4u;
    a.r[1] = 0x8022c9e4u;
    r3 = tc_call(0x80226494u, &a);
    f1 = tc_lastf();
    return;
}
