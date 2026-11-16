#include "tc_rt.h"

void fn_8022980c(void)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdfe8u, 1u);
    a.r[0] = 0x81280000u;
    (void)tc_call(0x80227208u, &a);
    a.r[0] = 0x812f0000u;
    (void)tc_call(0x802271f0u, &a);
    r3 = tc_call(0x802de0e8u, &a);
    if (r3 == 0u) {
        a.r[0] = 1u;
        a.r[1] = 2u;
        a.r[2] = 0u;
        a.r[3] = 0x817fdfe8u;
        r3 = tc_call(0x802de218u, &a);
        r0 = rd32(0x817fdfe8u);
        if (r0 == 1u) {
            if (r3 != 0u) {
                return;
            }
            r0 = (r0 * 0xd8u) + 0x1fu;
            a.r[0] = r0 & 0xffffffe0u;
            a.r[1] = 0x20u;
            r3 = tc_call(0x80227210u, &a);
            r31 = r3;
            a.r[0] = 1u;
            a.r[1] = 2u;
            a.r[2] = r3;
            a.r[3] = 0x817fdfe8u;
            r3 = tc_call(0x802de218u, &a);
            if (r3 == 0u) {
                a.r[0] = 1u;
                a.r[1] = 2u;
                a.r[2] = r31;
                r3 = tc_call(0x802de184u, &a);
                if (r3 == 0u) {
                    for (;;) {
                    }
                }
            }
        }
    }
    return;
}
