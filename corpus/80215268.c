#include "tc_rt.h"

u32 fn_80215268(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 == 0u) {
        return 0u;
    }
    if (rd32(param_2 + 0x10u) != 0u) {
        a.r[0] = rd32(param_2);
        a.r[1] = (u32)param_1;
        a.r[2] = rd32(param_2 + 0xcu);
        a.r[3] = param_2 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        return r3;
    }
    if (rd32(param_2 + 0x20u) != 0u) {
        a.r[0] = param_2 + 0x24u;
        a.r[1] = 0x20u;
        a.r[2] = (u32)param_1;
        r3 = tc_call(0x80094e80u, &a);
        return r3;
    }
    a.r[0] = rd32(param_2);
    a.r[1] = (u32)param_1;
    a.r[2] = rd32(param_2 + 0xcu);
    a.r[3] = param_2 + 0x18u;
    r3 = tc_call(0x80040cd8u, &a);
    return r3;
}
