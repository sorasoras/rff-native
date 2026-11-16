#include "tc_rt.h"

u32 fn_80096c40(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x5cu);
    a.r[0] = r3;
    a.r[1] = 0x817fdfe8u;
    r3 = tc_call(0x8010ec48u, &a);
    if (r3 != 0u) {
        r3 = 1u;
        wr32(param_1, rd32(0x817fdfe8u));
    } else {
        r3 = 0u;
    }
    return r3;
}
