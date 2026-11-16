#include "tc_rt.h"

u32 fn_8009ea90(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    wr32(0x817fdff8u, 0u);
    a.r[0] = param_1;
    a.r[1] = 0x817fdff0u;
    r3 = tc_call(0x8009c4e4u, &a);
    if ((u32)(s8)r3 != 0u) {
        r0 = rd32(0x817fdff0u);
        while (r0 != 0u) {
            a.r[0] = param_1;
            a.r[1] = 0x817fdfecu;
            r3 = tc_call(0x8009c4e4u, &a);
            if ((u32)(s8)r3 == 0u) break;
            a.r[0] = param_1;
            a.r[1] = 0x817fdfe8u;
            r3 = tc_call(0x8009c4e4u, &a);
            if ((u32)(s8)r3 == 0u) break;
            r0 = rd32(0x817fdff0u) - 1u;
            wr32(0x817fdff0u, r0);
        }
        if (rd32(0x817fdff0u) == 0u) {
            r31 = 1u;
        }
    }
    return r31;
}
