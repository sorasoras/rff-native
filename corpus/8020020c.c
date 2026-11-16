#include "tc_rt.h"

void fn_8020020c(s32 param_1)
{
    u32 c0lt = 0, r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x6cu);
    c0lt = (s32)r0 < 1;
    if (r0 != 1u) {
        if (c0lt) {
            return;
        }
        if ((s32)r0 >= 3) {
            return;
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80200464u, &a);
        return;
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8020037cu, &a);
    return;
}
