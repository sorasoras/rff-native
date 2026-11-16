#include "tc_rt.h"

u32 fn_80116014(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_2 == 4u) {
        a.r[0] = (u32)param_1 + 0x40u;
        a.r[1] = param_3;
        (void)tc_call(0x80110380u, &a);
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
