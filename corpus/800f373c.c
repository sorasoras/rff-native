#include "tc_rt.h"

s32 fn_800f373c(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_2 == 0x3e8u) {
        a.r[0] = param_1;
        a.r[1] = 1u;
        a.r[2] = 1u;
        r3 = tc_call(0x800f3794u, &a);
        return (s32)r3;
    }
    if ((u32)param_2 == 0x3e9u) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 1u;
        r3 = tc_call(0x800f3794u, &a);
        return (s32)r3;
    }
    if ((u32)param_2 == 0x3eau) {
        a.r[0] = param_1;
        a.r[1] = 1u;
        a.r[2] = 0u;
        r3 = tc_call(0x800f3794u, &a);
        return (s32)r3;
    }
    if ((u32)param_2 == 0x3ebu) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 0u;
        r3 = tc_call(0x800f3794u, &a);
        return (s32)r3;
    }
    return param_2;
}
