#include "tc_rt.h"

void fn_800d8a8c(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = 0x804b1df8u;
    wr32(0x817fdff4u, 0u);
    r29 = 0u;
    do {
        a.r[0] = 0x817fdfd8u;
        a.r[1] = r30;
        (void)tc_call(0x80320f94u, &a);
        a.r[0] = 0x817fdfd8u;
        r3 = tc_call(0x80321010u, &a);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            r3 = rd32(r3 + 0xcu);
        }
        r0 = 0u;
        if (r3 == 1u || r3 == 2u) {
            r0 = 1u;
        }
        if (r0 != 0u) {
            r4 = rd32(r30 + 0x20u);
            if (rd32(r30 + 0x24u) == rd32(r30 + 0xcu) && (s32)r4 >= 0) {
                r6 = rd32(r30 + 0x2cu);
                r0 = rd32(r30 + 0x30u);
                wr32(0x817fdfe0u, rd32(r30 + 0x28u));
                wr32(0x817fdfe4u, r6);
                wr32(0x817fdfe8u, r0);
                a.r[0] = 0x804b9da0u;
                a.r[1] = r4;
                a.r[2] = 0x817fdfe0u;
                r3 = tc_call(0x8010a754u, &a);
                wr32(r30 + 0x10u, r3);
            }
            wr32(r30 + 0xcu, rd32(r30 + 0xcu) + 1u);
            r0 = rd32(r30 + 0x18u);
            if ((s32)r0 > 0) {
                r0 = r0 - 1u;
                wr32(r30 + 0x18u, r0);
                if (r0 == 0u) {
                    a.r[0] = r30;
                    (void)tc_call(0x80157f30u, &a);
                }
            }
            r0 = rd32(r30 + 0x14u);
            if ((s32)r0 > 0) {
                r0 = r0 - 1u;
                wr32(r30 + 0x14u, r0);
                if (r0 == 0u) {
                    a.r[0] = r30;
                    (void)tc_call(0x80157e6cu, &a);
                }
            }
        }
        r29 = r29 + 1u;
        r30 = r30 + 0x54u;
    } while ((s32)r29 < 320);
    return;
}
