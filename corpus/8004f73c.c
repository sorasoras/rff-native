#include "tc_rt.h"

void fn_8004f73c(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8004f61cu, &a);
    if (r3 != 0u) {
        r3 = ((u32)param_1 * 0x2cu) - 0x7fc39730u;
        if (rd32(r3 + 0x1cu) == 0u) {
            r0 = ((u32)param_1 << 2u) & 0xfffffffcu;
            a.r[0] = r3;
            a.r[1] = rd32(r0 - 0x7fc395d0u);
            a.r[2] = rd32(r0 - 0x7fc395b0u);
            (void)tc_call(0x80305824u, &a);
        }
    }
    return;
}
