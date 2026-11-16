#include "tc_rt.h"

void fn_800970a8(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3);
    a.r[0] = r3;
    a.r[1] = 1u;
    a.r[2] = param_2;
    r3 = tc_call(0x800a2cf0u, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x4cu);
        a.r[1] = 1u;
        (void)tc_call(0x800ac4c0u, &a);
    }
    return;
}
