#include "tc_rt.h"

void fn_802cc128(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r0 = 0, r3 = 0, r23 = 0, r24 = 0, r25 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdfc0u, 0xffffffffu);
    wr32(0x817fdfc4u, 0xffffffffu);
    wr32(0x817fdfc8u, 0xffffffffu);
    wr32(0x817fdfccu, 0xffffffffu);
    if (param_5 != 0u) {
        r24 = param_5;
        r23 = 0x817fdfc0u;
        r25 = 0u;
        do {
            wr8(0x817fdfb8u, rd8(r24));
            wr8(0x817fdfb9u, rd8(r24 + 1u));
            wr8(0x817fdfbau, rd8(r24 + 2u));
            wr8(0x817fdfbbu, rd8(r24 + 3u));
            a.r[0] = 0x817fdfbcu;
            a.r[1] = 0x817fdfb8u;
            a.r[2] = param_6;
            (void)tc_call(0x802cba90u, &a);
            r25 = r25 + 1u;
            r0 = (u32)rd8(0x817fdfbdu);
            wr8(r23, rd8(0x817fdfbcu));
            r24 = r24 + 4u;
            r3 = (u32)rd8(0x817fdfbeu);
            wr8(r23 + 1u, (u8)r0);
            r0 = (u32)rd8(0x817fdfbfu);
            wr8(r23 + 2u, (u8)r3);
            wr8(r23 + 3u, (u8)r0);
            r23 = r23 + 4u;
        } while ((s32)r25 < 4);
    }
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    a.r[4] = (u32)((s32)((0u - param_5) | param_5) >> 31) & 0x817fdfc0u;
    (void)tc_call(0x802cbbc8u, &a);
    return;
}
