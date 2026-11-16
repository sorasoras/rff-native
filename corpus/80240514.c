#include "tc_rt.h"

void fn_80240514(void)
{
    u32 r0 = 0, r6 = 0, r7 = 0, r8 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r8 = (u32)rd8(0x80570b2fu) & 0x7fu;
    r0 = (u32)rd8(0x80570b32u);
    r7 = (u32)rd8(0x80570b30u) & 0x7fu;
    r6 = (u32)rd8(0x80570b31u) & 0x7fu;
    wr8(0x817fdff8u, 0x7au);
    r0 = r0 & 0x7fu;
    wr8(0x817fdff9u, (u8)r8);
    wr8(0x817fdffau, (u8)r7);
    wr8(0x817fdffbu, (u8)r6);
    wr8(0x817fdffcu, (u8)r0);
    a.r[0] = 0xe0u;
    a.r[1] = 0x817fdff8u;
    a.r[2] = 5u;
    (void)tc_call(0x8023fda4u, &a);
    a.r[0] = 2u;
    (void)tc_call(0x8023f958u, &a);
    return;
}
