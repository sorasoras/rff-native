#include "tc_rt.h"

u32 fn_801834a8(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    r0 = rd32(param_1 + 0x18u);
    wr16(0x817fdfe8u, 0x2e8u);
    r4 = rd32(param_1);
    wr8(0x817fdfeau, 1u);
    a.r[1] = r4;
    a.r[2] = param_2;
    a.r[3] = (u32)(s8)r0;
    r3 = tc_call(0x80183430u, &a);
    r0 = rd32(param_1 + 0x18u);
    wr16(0x817fdfe8u, (u16)r3);
    r4 = rd32(param_1);
    wr8(0x817fdfeau, 1u);
    a.r[1] = r4;
    a.r[2] = param_2;
    a.r[3] = (u32)(s8)r0;
    r3 = tc_call(0x80183458u, &a);
    wr8(0x817fdfebu, (u8)r3);
    return rd32(0x817fdfe8u);
}
