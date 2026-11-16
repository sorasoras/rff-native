#include "tc_rt.h"

u32 fn_80275244(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    a.r[0] = 0x817fdff8u;
    a.r[1] = 0u;
    r3 = tc_call(0x80274998u, &a);
    if (r3 == 0u) {
        wr32(0x817fdff8u, 0xb49d800u);
    }
    return rd32(0x817fdff8u);
}
