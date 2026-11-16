#include "tc_rt.h"

void fn_801eb04c(s32 param_1)
{
    u32 c0lt = 0, r3 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[1] = 1u;
    (void)tc_call(0x8017bff8u, &a);
    r25 = (u32)param_1;
    r26 = 0x817fdfb8u;
    r23 = 0u;
    r24 = rd32(rd32(rd32(rd32((u32)param_1 + 0x2ecu) + 8u) + 0x18u));
    do {
        a.r[0] = 0x80475e24u;
        a.r[1] = r23;
        r3 = tc_call(0x8017c25cu, &a);
        c0lt = (s32)r3 < 0;
        if (r3 == 0u) {
            if ((u32)rd8(r25 + 0x1578u) >= 5u || (u32)rd8(r25 + 0x1579u) >= 5u || (u32)rd8(r25 + 0x157au) >= 5u || (u32)rd8(r25 + 0x157bu) >= 5u) {
                wr16(r26, 0x20f0u);
            } else {
                wr16(r26, 0x2f00u);
            }
        } else if (!c0lt) {
            if ((s32)r3 < 2) {
                wr16(r26, 0x2ff0u);
            }
        } else if ((s32)r3 >= -1) {
            wr16(r26, 0x2000u);
        }
        r23 = r23 + 1u;
        r25 = r25 + 4u;
        r26 = r26 + 2u;
    } while ((s32)r23 < 9);
    a.r[0] = (u32)param_1 + 0x15acu;
    a.r[1] = 0x817fdfb8u;
    a.r[2] = 0x12u;
    (void)tc_call(0x80004338u, &a);
    a.r[0] = r24;
    a.r[1] = 0x817fdfb8u;
    a.r[2] = 0x12u;
    (void)tc_call(0x80004338u, &a);
    return;
}
