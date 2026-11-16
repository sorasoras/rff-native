#include "tc_rt.h"

void fn_8014d7d0(s32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0x1cu);
    r0 = rd32(r3 + 0x48u);
    c0eq = r0 == 0u;
    if (c0eq) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x8014d2d8u, &a);
        return;
    }
    if (!c0eq) {
        a.r[0] = r0;
        a.r[1] = 0xfu;
        (void)tc_call(0x802f5fd8u, &a);
        return;
    }
    return;
}
