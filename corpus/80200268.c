#include "tc_rt.h"

void fn_80200268(s32 param_1)
{
    u32 c0lt = 0, r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x6cu);
    c0lt = (s32)r0 < 1;
    if (r0 != 1u) {
        if (!c0lt) {
            return;
        }
        if ((s32)r0 < 0) {
            return;
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80200308u, &a);
        return;
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x802003f0u, &a);
    return;
}
