#include "tc_rt.h"

s32 fn_80258df4(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x80258d4cu, &a);
    return (s32)r3;
}
