#include "tc_rt.h"

s32 fn_8026a16c(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdff8u, 4u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0x817fdff8u;
    a.r[3] = 0u;
    a.r[4] = 1u;
    r3 = tc_call(0x8026a1b8u, &a);
    if (r3 == 0u && rd32(0x817fdff8u) != 4u) {
        r3 = 0x700u;
    }
    return (s32)r3;
}
