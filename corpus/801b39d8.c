#include "tc_rt.h"

u32 fn_801b39d8(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r7 = 0;
    TcArgs a = {0};
    r7 = rd32(param_1);
    if ((u32)param_2 == 0u) {
        return 0u;
    }
    if (rd32(r7 + 0x10u) != 0u) {
        a.r[0] = rd32(r7);
        a.r[1] = (u32)param_2;
        a.r[2] = rd32(r7 + 0xcu);
        a.r[3] = r7 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        return r3;
    }
    if (rd32(r7 + 0x20u) != 0u) {
        a.r[0] = r7 + 0x24u;
        a.r[1] = 0x20u;
        a.r[2] = (u32)param_2;
        r3 = tc_call(0x80094e80u, &a);
        return r3;
    }
    a.r[0] = rd32(r7);
    a.r[1] = (u32)param_2;
    a.r[2] = rd32(r7 + 0xcu);
    a.r[3] = r7 + 0x18u;
    r3 = tc_call(0x80040cd8u, &a);
    return r3;
}
