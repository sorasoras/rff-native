#include "tc_rt.h"

s32 fn_80049a50(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x80049984u, &a);
    wr32(param_4, r3);
    r31 = (u32)rd8(0x803c6242u);
    wr8(0x803c6242u, (u8)(r31 + 1u));
    a.r[0] = r31;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = rd32(param_4);
    a.r[4] = 0u;
    a.r[5] = 0x7du;
    (void)tc_call(0x8024ff44u, &a);
    return (s32)r31;
}
