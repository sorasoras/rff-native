#include "tc_rt.h"

u32 fn_802750cc(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    a.r[0] = 0x817fdff8u;
    a.r[1] = 0xbu;
    r3 = tc_call(0x802747f0u, &a);
    if (r3 == 0u) {
        r3 = tc_call(0x80275594u, &a);
        if ((u32)(s8)r3 == 0u) {
            wr8(0x817fdff8u, 0u);
            return (u32)rd8(0x817fdff8u);
        }
        wr8(0x817fdff8u, 1u);
    } else {
        if ((u32)rd8(0x817fdff8u) > 9u) {
            wr8(0x817fdff8u, 1u);
        }
    }
    return (u32)rd8(0x817fdff8u);
}
