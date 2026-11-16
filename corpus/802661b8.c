#include "tc_rt.h"

void fn_802661b8(void)
{
    u32 c0lt = 0, r0 = 0, r3 = tc_argr(0u), r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    wr32(0x817fdff8u, 0u);
    r30 = 0u;
    while (r31 == 0u) {
        a.r[0] = 0x817fdfe8u;
        r3 = tc_call(0x802663ccu, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            if (r30 != 0u) {
                r3 = rd32(0x80571a18u);
                if ((u32)rd8(r3) == 0u) {
                    r3 = tc_call(0x80268fa4u, &a);
                    f1 = tc_lastf();
                    if (r3 == 0u) {
                        r3 = tc_call(0x8026b2d8u, &a);
                        f1 = tc_lastf();
                    }
                    r30 = 0u;
                    continue;
                }
            }
            r30 = 1u;
            r3 = tc_call(0x80266f40u, &a);
            f1 = tc_lastf();
        } else {
            r0 = rd32(0x817fdfe8u);
            r30 = 0u;
            c0lt = (s32)r0 < 2;
            if (r0 == 2u) {
                a.r[0] = rd32(0x817fdff0u);
                r3 = tc_call(0x80266d5cu, &a);
                f1 = tc_lastf();
                a.r[0] = r3;
                r3 = tc_call(0x802670fcu, &a);
                f1 = tc_lastf();
            } else if (!c0lt) {
                c0lt = (s32)r0 < 5;
                if (r0 == 5u) {
                    r3 = tc_call(0x80268fb4u, &a);
                    f1 = tc_lastf();
                } else if (c0lt) {
                    a.r[0] = 0x817fdfe8u;
                    r3 = tc_call(0x802693bcu, &a);
                    f1 = tc_lastf();
                }
            } else {
                c0lt = (s32)r0 < 0;
                if (r0 != 0u && !c0lt) {
                    r31 = 1u;
                }
            }
            a.r[0] = 0x817fdfe8u;
            r3 = tc_call(0x802662b0u, &a);
            f1 = tc_lastf();
        }
    }
    return;
}
