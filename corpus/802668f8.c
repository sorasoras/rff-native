#include "tc_rt.h"

void fn_802668f8(s32 param_1, u32 param_2, s32 param_3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r25 = 0, r26 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = param_2;
    r29 = 0u;
    r3 = 0u;
    while (r3 == 0u && (s32)r29 < param_3) {
        c0eq = rd32(0x80500d38u) == 0u;
        wr32(0x817fdfd8u, rd32(r30));
        if (!c0eq) {
            r4 = 0x817fdfd8u;
        } else {
            r4 = 0x817fdfdcu;
            r5 = (u32)rd8(0x817fdfdau);
            r3 = (u32)rd8(0x817fdfd9u);
            r0 = (u32)rd8(0x817fdfd8u);
            wr8(0x817fdfdcu, rd8(0x817fdfdbu));
            wr8(0x817fdfddu, (u8)r5);
            wr8(0x817fdfdeu, (u8)r3);
            wr8(0x817fdfdfu, (u8)r0);
        }
        r5 = rd32((u32)param_1 + 0xcu);
        r25 = 4u;
        r26 = 0u;
        r0 = 0x880u - r5;
        if (r0 < 4u) {
            r26 = 0x301u;
            r25 = r0;
        }
        if (r25 == 1u) {
            wr8((u32)param_1 + (r5 + 0x10u), rd8(r4));
        } else {
            a.r[0] = (u32)param_1 + (r5 + 0x10u);
            a.r[1] = r4;
            a.r[2] = r25;
            (void)tc_call(0x8000449cu, &a);
        }
        r3 = r26;
        r30 = r30 + 4u;
        r29 = r29 + 1u;
        wr32((u32)param_1 + 0xcu, rd32((u32)param_1 + 0xcu) + r25);
        wr32((u32)param_1 + 8u, rd32((u32)param_1 + 0xcu));
    }
    return;
}
