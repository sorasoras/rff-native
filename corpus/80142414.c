#include "tc_rt.h"

u32 fn_80142414(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = (u32)(s8)param_3;
    r3 = tc_call(0x80142318u, &a);
    r3 = (u32)rd8(r3 + 2u);
    return r3;
}
