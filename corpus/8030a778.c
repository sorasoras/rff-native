#include "tc_rt.h"

u32 fn_8030a778(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x100u;
    a.r[1] = param_4;
    a.r[2] = param_2;
    a.r[3] = param_3;
    r3 = tc_call(0x80307f20u, &a);
    if (r3 == 0u) {
        a.r[0] = (u32)param_1 + 0x100u;
        (void)tc_call(0x80307e90u, &a);
        r3 = 0u;
    } else {
        r3 = 1u;
    }
    return r3;
}
