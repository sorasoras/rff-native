#include "tc_rt.h"

u32 fn_800a0284(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = 0x817fdff0u;
    a.r[2] = 0x817fdfecu;
    a.r[3] = param_1;
    a.r[4] = param_2;
    a.r[5] = param_3;
    r3 = tc_call(0x800a0144u, &a);
    if ((u32)(s8)r3 != 0u && rd32(0x817fdff0u) != rd32(0x817fdfecu)) {
        r3 = 0u;
    }
    return r3;
}
