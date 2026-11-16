#include "tc_rt.h"

void fn_80240458(void)
{
    u32 r0 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r0 = (u32)rd8(0x80570b2au);
    r6 = (u32)rd8(0x80570b28u) & 3u;
    r5 = (u32)rd8(0x80570b29u);
    wr8(0x817fdff8u, 5u);
    r6 = (r6 & 0xffffffc3u) | ((r5 << 2u) & 0x3cu);
    wr8(0x817fdff9u, (u8)r6);
    wr8(0x817fdffau, (u8)r0);
    a.r[0] = 0xe0u;
    a.r[1] = 0x817fdff8u;
    a.r[2] = 3u;
    (void)tc_call(0x8023fda4u, &a);
    a.r[0] = 2u;
    (void)tc_call(0x8023f958u, &a);
    return;
}
