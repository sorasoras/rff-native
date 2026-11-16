#include "tc_rt.h"

void fn_8023e1c8(void)
{
    u32 r3 = tc_argr(0u), r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    r31 = r3;
    r30 = rd32(0x8057174cu);
    do {
        a.r[0] = 0x80571728u;
        r3 = tc_call(0x8022ffe4u, &a);
        f1 = tc_lastf();
    } while (r30 == rd32(0x8057174cu));
    a.r[0] = r31;
    r3 = tc_call(0x8022c2d8u, &a);
    f1 = tc_lastf();
    return;
}
