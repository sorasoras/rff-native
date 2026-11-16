#include "tc_rt.h"

void fn_802404b0(void)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r3 = (u32)rd8(0x80570b2eu);
    r0 = (u32)rd8(0x80570b2du) & 7u;
    r5 = ((u32)rd8(0x80570b2bu) & 0xfu) | (((u32)rd8(0x80570b2cu) << 4u) & 0xf0u);
    wr8(0x817fdff8u, 8u);
    r0 = (r0 & 0xffffffc7u) | ((r3 << 3u) & 0x38u);
    wr8(0x817fdff9u, (u8)r5);
    wr8(0x817fdffau, (u8)r0);
    a.r[0] = 0xe0u;
    a.r[1] = 0x817fdff8u;
    a.r[2] = 3u;
    (void)tc_call(0x8023fda4u, &a);
    a.r[0] = 2u;
    (void)tc_call(0x8023f958u, &a);
    return;
}
