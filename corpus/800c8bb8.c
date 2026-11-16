#include "tc_rt.h"

s32 fn_800c8bb8(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x800c8b88u, &a);
    r31 = r3 & 0xffu;
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x800c8b78u, &a);
    r3 = r3 + r31;
    if ((s32)r3 > 99) {
        r3 = 0x63u;
    }
    return (s32)r3;
}
