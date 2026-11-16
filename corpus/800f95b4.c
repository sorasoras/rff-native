#include "tc_rt.h"

void fn_800f95b4(void)
{
    u32 r3 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
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
    r25 = 0u;
    r31 = 0u;
    do {
        r3 = r31 - 0x7fb66fa0u;
        r24 = r3 + 0x11cu;
        if ((u32)rd16(r3 + 0x11cu) != 0x2e8u) {
            r23 = 0u;
            r22 = 0u;
            r30 = 0u;
            do {
                a.r[0] = r24;
                a.r[1] = r30 - 0x7fb66dc0u;
                r3 = tc_call(0x800f9514u, &a);
                if (r3 != 0u) {
                    r23 = 1u;
                    break;
                }
                r22 = r22 + 1u;
                r30 = r30 + 4u;
            } while ((s32)r22 < 60);
            if (r23 == 0u) {
                wr16(0x817fdfc8u, 0x2e8u);
                r3 = rd32(0x804863d8u);
                wr8(0x817fdfcau, 1u);
                wr8(0x817fdfcbu, 1u);
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = 0x817fdfc8u;
                r3 = tc_call(0x8006bc2cu, &a);
                if (r3 == 0u) {
                    a.r[0] = r25;
                    (void)tc_call(0x800f955cu, &a);
                } else {
                    a.r[0] = 0x817fdfc8u;
                    a.r[1] = r24;
                    r3 = tc_call(0x800f9514u, &a);
                    if (r3 == 0u) {
                        a.r[0] = r25;
                        (void)tc_call(0x800f955cu, &a);
                    }
                }
            }
        }
        r25 = r25 + 1u;
        r31 = r31 + 6u;
    } while ((s32)r25 < 8);
    return;
}
