#include "tc_rt.h"

void fn_801fffb0(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x68u);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x80200e6cu, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80221898u, &a);
    return;
}
