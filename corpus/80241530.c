#include "tc_rt.h"

void fn_80241530(void)
{
    u32 r0 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    if (rd32(0x80571768u) == 3u) {
        r0 = rd32(0x8057175cu);
        wr8(0x817fdff8u, 0xau);
        r0 = (r0 << 1u) & 0xfffffffeu;
        r0 = r0 | 1u;
        wr8(0x817fdff9u, (u8)r0);
        a.r[0] = 0xe0u;
        a.r[1] = 0x817fdff8u;
        a.r[2] = 2u;
        (void)tc_call(0x8023fda4u, &a);
        a.r[0] = 2u;
        (void)tc_call(0x8023f958u, &a);
    } else {
        wr8(0x817fdff8u, 0xau);
        wr8(0x817fdff9u, 0u);
        a.r[0] = 0xe0u;
        a.r[1] = 0x817fdff8u;
        a.r[2] = 2u;
        (void)tc_call(0x8023fda4u, &a);
        a.r[0] = 2u;
        (void)tc_call(0x8023f958u, &a);
    }
    return;
}
