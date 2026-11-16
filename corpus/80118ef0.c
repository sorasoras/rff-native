#include "tc_rt.h"

s32 fn_80118ef0(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x80118fb4u, &a);
    if (param_2 >= (s32)(s8)r3 || param_2 < 0) {
        r3 = 0u;
    } else {
        r3 = rd32(param_1) + (((u32)param_2 << 1u) & 0xfffffffeu);
    }
    return (s32)r3;
}
