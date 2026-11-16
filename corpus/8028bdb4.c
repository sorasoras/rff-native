#include "tc_rt.h"

u32 fn_8028bdb4(u32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr8(0x817fdff3u, 0u);
    r4 = (u32)rd8(0x80539ba7u);
    wr16(0x817fdfecu, rd16(param_1));
    wr16(0x817fdfeeu, rd16(param_1 + 2u));
    wr16(0x817fdff0u, (u16)r4);
    wr8(0x80539ba6u, 2u);
    a.r[0] = 0x817fdfe8u;
    (void)tc_call(0x8028c498u, &a);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = 0x8028b820u;
    (void)tc_call(0x8028c6a0u, &a);
    return 1u;
}
