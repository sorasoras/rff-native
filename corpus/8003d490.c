#include "tc_rt.h"

u32 fn_8003d490(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r3 = tc_call(0x80045118u, &a);
    wr8(0x817fdff3u, (u8)r3);
    wr8(0x817fdff0u, (u8)((r3 >> 0x18u) & 0xffu));
    wr8(0x817fdff1u, (u8)((r3 >> 0x10u) & 0xffu));
    wr8(0x817fdff2u, (u8)((r3 >> 8u) & 0xffu));
    a.r[0] = 1u;
    (void)tc_call(0x80251e90u, &a);
    wr32(0x817fdfecu, rd32(0x817fdff0u));
    a.r[0] = 4u;
    a.r[1] = 0x817fdfecu;
    (void)tc_call(0x80251ce0u, &a);
    wr32(0x817fdfe8u, rd32(0x817fdff0u));
    a.r[0] = 4u;
    a.r[1] = 0x817fdfe8u;
    (void)tc_call(0x80251db8u, &a);
    a.r[0] = 4u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 2u;
    a.r[6] = 1u;
    (void)tc_call(0x80251eb4u, &a);
    return 1u;
}
