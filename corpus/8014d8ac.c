#include "tc_rt.h"

s32 fn_8014d8ac(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    a.r[0] = param_1;
    a.r[1] = rd32(r3 + 4u);
    r3 = tc_call(0x8009f49cu, &a);
    r3 = (u32)(s8)r3;
    return (s32)r3;
}
