#include "tc_rt.h"

void fn_80219ba0(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x6cu);
    if (r0 != 0u) {
        if ((r0 == 1u || r0 == 2u) || r0 == 3u) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x8021a3f0u, &a);
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x8021854cu, &a);
    }
    a.r[0] = rd32((u32)param_1 + 0x68u);
    r3 = tc_call(0x80074e90u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = rd32((u32)param_1 + 0x68u);
        (void)tc_call(0x80218828u, &a);
    }
    return;
}
