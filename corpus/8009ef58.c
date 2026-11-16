#include "tc_rt.h"

u32 fn_8009ef58(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    if (param_1 != 0u) {
        a.r[0] = rd32(param_1);
        a.r[1] = 0x817fdff8u;
        a.r[2] = rd32(param_1 + 4u);
        a.r[3] = rd32(param_1 + 8u);
        r3 = tc_call(0x8009c878u, &a);
        if ((u32)(s8)r3 != 0u) {
            return rd32(0x817fdff8u);
        }
    }
    wr32(0x817fdff8u, 0u);
    return rd32(0x817fdff8u);
}
