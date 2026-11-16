#include "tc_rt.h"

void fn_80266688(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r24 = 0, r25 = 0, r26 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r31 = param_2;
    r30 = 0u;
    r3 = 0u;
    while (r3 == 0u && (s32)r30 < param_3) {
        if (rd32(0x80500d38u) != 0u) {
            r25 = r31;
        } else {
            r25 = 0x817fdfd8u;
        }
        r3 = rd32((u32)param_1 + 0xcu);
        r24 = 4u;
        r26 = 0u;
        r0 = rd32((u32)param_1 + 8u) - r3;
        if (r0 < 4u) {
            r26 = 0x302u;
            r24 = r0;
        }
        a.r[0] = r25;
        a.r[1] = (u32)param_1 + (r3 + 0x10u);
        a.r[2] = r24;
        (void)tc_call(0x8000449cu, &a);
        wr32((u32)param_1 + 0xcu, rd32((u32)param_1 + 0xcu) + r24);
        if (rd32(0x80500d38u) == 0u && r26 == 0u) {
            wr8(r31, rd8(r25 + 3u));
            wr8(r31 + 1u, rd8(r25 + 2u));
            wr8(r31 + 2u, rd8(r25 + 1u));
            wr8(r31 + 3u, rd8(r25));
        }
        r3 = r26;
        r31 = r31 + 4u;
        r30 = r30 + 1u;
    }
    return;
}
