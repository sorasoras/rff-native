#include "tc_rt.h"

void fn_800365dc(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022b208u, &a);
    if ((r3 & 0xffffu) == 1u) {
        a.r[0] = 1u;
        a.r[1] = 0x120f00u;
        a.r[2] = 0x4e4f5320u;
        a.r[3] = 0x8034f5a0u;
        r3 = tc_call(0x80040cd8u, &a);
    } else {
        a.r[0] = 1u;
        a.r[1] = 0x20120u;
        a.r[2] = 0x4e4f5320u;
        a.r[3] = 0x8034f5a0u;
        r3 = tc_call(0x80040cd8u, &a);
    }
    wr32(0x80570fc0u, r3);
    a.r[0] = r3;
    (void)tc_call(0x8022beb8u, &a);
    wr32(0x80570fc4u, 0u);
    wr32(0x80570fc8u, 0u);
    return;
}
