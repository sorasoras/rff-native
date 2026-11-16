#include "tc_rt.h"

void fn_8003ca88(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    r30 = (u32)param_1 + rd32(0x80570ff4u) - 1u;
    for (;;) {
        r3 = tc_call(0x8023f378u, &a);
        if (r3 >= r30) break;
        (void)tc_call(0x8023e1c8u, &a);
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
