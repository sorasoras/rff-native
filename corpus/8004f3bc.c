#include "tc_rt.h"

void fn_8004f3bc(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = (((0u - param_1) | param_1) >> 0x1fu) & 1u;
    r28 = 0u;
    r29 = rd32(0x803c6608u);
    while (r28 < r29) {
        a.r[0] = 0x803c65d0u;
        a.r[1] = r28;
        r3 = tc_call(0x80303ed8u, &a);
        a.r[0] = r3;
        a.r[1] = r30;
        a.r[2] = param_2;
        (void)tc_call(0x80305bc8u, &a);
        r28 = r28 + 1u;
    }
    return;
}
