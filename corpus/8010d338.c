#include "tc_rt.h"

void fn_8010d338(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = rd32(param_2);
    a.r[0] = r30;
    r3 = tc_call(0x80096df0u, &a);
    r31 = r3;
    a.r[0] = r30;
    r3 = tc_call(0x80096e04u, &a);
    wr32(0x80571158u, r31);
    r31 = r3;
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x4cu);
    if (rd32(r3 + 0x10u) == 0u) {
        r4 = rd32(0x804863d8u);
        wr32(r4 + 0x9cu, rd32(r4 + 0x9cu) | 0x40000000u);
        wr32(0x8057116cu, r31);
        r3 = rd32(0x8057110cu);
        wr32(0x80571160u, 1u);
        wr32(0x80571168u, 0u);
        wr32(r3 + 0x20u, 1u);
    }
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x58u);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 2u;
    a.r[3] = r30;
    a.r[4] = 0x18u;
    a.r[5] = param_2 + 4u;
    a.r[6] = 1u;
    (void)tc_call(0x8010c858u, &a);
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x4cu);
    a.r[0] = r3;
    (void)tc_call(0x800abcd4u, &a);
    if ((u32)param_1 == 0x157u) {
        r31 = rd32(param_2 + 8u);
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3 + 0x4cu);
        wr32(r3 + 0x50u, r31);
        wr32(0x805711a0u, 1u);
    }
    return;
}
