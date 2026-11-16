#include "tc_rt.h"

void fn_80279f48(s32 param_1, u32 param_r4)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = (u32)rd8((u32)param_1 - 0x7faf36a0u);
    if (r0 <= 4u) {
        a.r[0] = r0;
        a.r[1] = param_r4;
        r3 = tc_call(0x8027fb80u, &a);
        if (r3 == 0u) {
            return;
        }
        (void)tc_call(0x80284b24u, &a);
    } else {
        (void)tc_call(0x80284b24u, &a);
    }
    return;
}
