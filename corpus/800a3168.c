#include "tc_rt.h"

u32 fn_800a3168(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, param_2);
    wr32(0x817fdff0u, 0u);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = 0x817fdff8u;
    a.r[3] = 0x817fdff4u;
    a.r[4] = 0x817fdfecu;
    (void)tc_call(0x800a3130u, &a);
    a.r[0] = 0x817fdff0u;
    a.r[1] = rd32(0x817fdff8u);
    a.r[2] = rd32(0x817fdff4u);
    a.r[3] = (u32)(s8)rd8(0x817fdfecu);
    (void)tc_call(0x800a6adcu, &a);
    return rd32(0x817fdff0u);
}
