#include "tc_rt.h"

s32 fn_802e0278(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x4cu), &a);
    r3 = (u32)(s8)((r3 >> 8u) & 0xffu);
    return (s32)r3;
}
