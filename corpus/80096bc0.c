#include "tc_rt.h"

s32 fn_80096bc0(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdff8u, param_1);
    wr32(0x817fdffcu, param_2);
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x5cu);
    a.r[0] = r3;
    a.r[1] = 0xfffffffeu;
    a.r[2] = 0x817fdff8u;
    a.r[3] = 2u;
    r3 = tc_call(0x8010ebd4u, &a);
    r3 = (u32)(s8)r3;
    return (s32)r3;
}
