#include "tc_rt.h"

s32 fn_802f86b4(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x802debd0u, &a);
    return (s32)r3;
}
