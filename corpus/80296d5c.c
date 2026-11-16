#include "tc_rt.h"

void fn_80296d5c(s32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    TcArgs a = {0};
    r12 = rd32(0x8053dec8u);
    if (r12 != 0u) {
        r5 = (u32)param_1 + 2u;
        r4 = 0u;
        for (;;) {
            r6 = r4 & 0xffu;
            if (r6 >= (u32)rd8((u32)param_1 + 1u)) break;
            r11 = (u32)rd8(r5);
            r4 = r4 + 1u;
            r10 = (u32)rd8(r5 + 1u);
            r9 = (u32)rd8(r5 + 2u);
            r8 = (u32)rd8(r5 + 3u);
            r7 = (u32)rd8(r5 + 4u);
            r6 = (u32)rd8(r5 + 5u);
            wr8(0x817fdff7u, rd8(r5 + 6u));
            wr8(0x817fdff6u, rd8(r5 + 7u));
            wr8(0x817fdff5u, rd8(r5 + 8u));
            wr8(0x817fdff4u, rd8(r5 + 9u));
            wr8(0x817fdff3u, rd8(r5 + 0xau));
            wr8(0x817fdff2u, rd8(r5 + 0xbu));
            wr8(0x817fdff1u, rd8(r5 + 0xcu));
            wr8(0x817fdff0u, rd8(r5 + 0xdu));
            wr8(0x817fdfefu, rd8(r5 + 0xeu));
            wr8(0x817fdfeeu, rd8(r5 + 0xfu));
            wr8(0x817fdfedu, rd8(r5 + 0x10u));
            wr8(0x817fdfecu, rd8(r5 + 0x11u));
            wr8(0x817fdfebu, rd8(r5 + 0x12u));
            wr8(0x817fdfeau, rd8(r5 + 0x13u));
            wr8(0x817fdfe9u, rd8(r5 + 0x14u));
            r0 = (u32)rd8(r5 + 0x15u);
            wr8(r5, (u8)r6);
            wr8(r5 + 1u, (u8)r7);
            wr8(r5 + 2u, (u8)r8);
            wr8(r5 + 3u, (u8)r9);
            wr8(r5 + 4u, (u8)r10);
            wr8(r5 + 5u, (u8)r11);
            r0 = (u32)(u8)r0;
            wr8(r5 + 6u, (u8)r0);
            wr8(r5 + 7u, rd8(0x817fdfe9u));
            wr8(r5 + 8u, rd8(0x817fdfeau));
            wr8(r5 + 9u, rd8(0x817fdfebu));
            wr8(r5 + 0xau, rd8(0x817fdfecu));
            wr8(r5 + 0xbu, rd8(0x817fdfedu));
            wr8(r5 + 0xcu, rd8(0x817fdfeeu));
            wr8(r5 + 0xdu, rd8(0x817fdfefu));
            wr8(r5 + 0xeu, rd8(0x817fdff0u));
            wr8(r5 + 0xfu, rd8(0x817fdff1u));
            wr8(r5 + 0x10u, rd8(0x817fdff2u));
            wr8(r5 + 0x11u, rd8(0x817fdff3u));
            wr8(r5 + 0x12u, rd8(0x817fdff4u));
            wr8(r5 + 0x13u, rd8(0x817fdff5u));
            wr8(r5 + 0x14u, rd8(0x817fdff6u));
            wr8(r5 + 0x15u, rd8(0x817fdff7u));
            r5 = r5 + 0x16u;
        }
        a.r[0] = (u32)param_1;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        a.f[0] = 0.0;
        (void)tc_call(r12, &a);
    }
    return;
}
