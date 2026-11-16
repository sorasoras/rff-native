#include "tc_rt.h"

u32 fn_80270904(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = param_3;
    r3 = tc_call(0x80270700u, &a);
    return r3;
}
