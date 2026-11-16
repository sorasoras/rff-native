#include "tc_rt.h"

s32 fn_80094e80(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = (param_2 >> 4u) & 0xfffffffu;
    a.r[2] = (((u32)param_3 + 0xfu) >> 4u) & 0xfffffffu;
    r3 = tc_call(0x80094ce4u, &a);
    if (r3 != 0u) {
        r3 = r3 + 0x10u;
    } else {
        r3 = 0u;
    }
    return (s32)r3;
}
