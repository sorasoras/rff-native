#include "tc_rt.h"

s32 fn_800c89e4(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x800c8bb8u, &a);
    r31 = r3;
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x800c8b78u, &a);
    r31 = r31 - r3;
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x800c8c28u, &a);
    r3 = (((r31 << 2u) & 0xfffffffcu) + r3) & 0xffffu;
    return (s32)r3;
}
