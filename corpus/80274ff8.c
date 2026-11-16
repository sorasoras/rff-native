#include "tc_rt.h"

s32 fn_80274ff8(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    a.r[0] = 0x817fdff8u;
    a.r[1] = 1u;
    r3 = tc_call(0x802747f0u, &a);
    if (r3 == 0u) {
        wr8(0x817fdff8u, 0u);
    } else {
        if ((u32)rd8(0x817fdff8u) != 1u) {
            wr8(0x817fdff8u, 0u);
        }
    }
    return (s32)rd8(0x817fdff8u);
}
