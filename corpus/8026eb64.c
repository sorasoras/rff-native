#include "tc_rt.h"

s32 fn_8026eb64(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8026f7d8u, &a);
    return (s32)r3;
}
