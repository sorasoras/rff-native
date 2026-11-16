#include "tc_rt.h"

void fn_8023a6f0(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r4 = (u32)rd8(0x80576b91u);
    r3 = (u32)rd8(0x80576b92u);
    r0 = (u32)rd8(0x80576b93u);
    wr8(0x817fdff0u, rd8(0x80576b90u));
    wr8(0x817fdff1u, (u8)r4);
    wr8(0x817fdff2u, (u8)r3);
    wr8(0x817fdff3u, (u8)r0);
    r3 = tc_call(0x802750ccu, &a);
    if ((r3 & 0xffu) == 0u) {
        a.r[0] = 1u;
        (void)tc_call(0x8022b25cu, &a);
    } else {
        a.r[0] = 0u;
        (void)tc_call(0x8022b25cu, &a);
    }
    r3 = tc_call(0x80275618u, &a);
    if ((u32)(s8)r3 != 2u) {
        r30 = 0x8033ca48u;
    } else {
        r30 = 0x8033ca64u;
    }
    r3 = tc_call(0x802750ccu, &a);
    if ((r3 & 0xffu) > 6u) {
        r5 = rd32(r30 + 4u);
    } else {
        r3 = tc_call(0x802750ccu, &a);
        r5 = rd32(r30 + ((r3 << 2u) & 0x3fcu));
    }
    r0 = rd32(0x817fdff0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, r0);
    a.r[0] = 0x817fdfecu;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = r5;
    (void)tc_call(0x8022a718u, &a);
    return;
}
