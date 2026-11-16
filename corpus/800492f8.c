#include "tc_rt.h"

u32 fn_800492f8(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    a.r[0] = 0x803c4e80u;
    a.r[1] = 0x817fdff8u;
    a.r[2] = param_1;
    r3 = tc_call(0x8022cb74u, &a);
    if (r3 == 1u) {
        r3 = rd32(0x817fdff8u);
    } else {
        r3 = 0u;
    }
    return r3;
}
