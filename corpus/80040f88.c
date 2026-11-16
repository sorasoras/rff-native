#include "tc_rt.h"

void fn_80040f88(void)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)rd8(0x80571020u) == 0u) {
        r3 = tc_call(0x802271c8u, &a);
        r31 = r3;
        r3 = tc_call(0x802271b0u, &a);
        r30 = r3;
        r3 = tc_call(0x802271d0u, &a);
        r29 = r3;
        r3 = tc_call(0x802271b8u, &a);
        r28 = r3;
        a.r[0] = r31;
        a.r[1] = r30;
        a.r[2] = 0x80570678u;
        r3 = tc_call(0x80040f10u, &a);
        wr32(0x80571018u, r3);
        a.r[0] = r29;
        a.r[1] = r28;
        a.r[2] = 0x80570680u;
        r3 = tc_call(0x80040f10u, &a);
        wr32(0x8057101cu, r3);
        wr8(0x80571020u, 1u);
    }
    return;
}
