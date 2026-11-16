#include "tc_rt.h"

void fn_8028ee24(s32 param_1)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    a.r[0] = 0x8053d5d0u;
    (void)tc_call(0x8028d78cu, &a);
    a.r[0] = 0x110u;
    r3 = tc_call(0x8028a0d4u, &a);
    r30 = r3;
    if (r3 != 0u) {
        r3 = r3 + 8u;
        a.r[0] = r3;
        a.r[1] = rd32(0x8053d57cu) + 2u;
        (void)tc_call(0x8028d2a4u, &a);
        a.r[0] = r30 + 0xeu;
        a.r[1] = (u32)param_1 + 4u;
        a.r[2] = 0x20u;
        (void)tc_call(0x8025bdf4u, &a);
        wr16(r30, 0x204u);
        a.r[0] = r30;
        (void)tc_call(0x8028d750u, &a);
    }
    return;
}
