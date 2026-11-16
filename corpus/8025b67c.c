#include "tc_rt.h"

u32 fn_8025b67c(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = param_1;
    a.r[0] = param_2;
    a.r[1] = 1u;
    a.r[2] = (u32)param_3;
    a.r[3] = param_1;
    r3 = tc_call(0x80258854u, &a);
    if ((u32)param_3 == r3) {
        return r30;
    }
    r30 = 0u;
    return r30;
}
