#include "tc_rt.h"

void fn_800c9c98(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x490u) != 0u) {
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3);
        a.r[0] = r3;
        r3 = tc_call(0x800a3460u, &a);
        if (r3 == 0u) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x800c985cu, &a);
        }
    }
    return;
}
