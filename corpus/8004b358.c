#include "tc_rt.h"

void fn_8004b358(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)tc_call(0x8004b024u, &a);
    if ((u32)param_1 == 0u) {
        a.r[0] = 0xffu;
        a.r[1] = 0xffu;
        a.r[2] = 5u;
        a.r[3] = 4u;
        (void)tc_call(0x8004aed8u, &a);
    } else {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x80049874u, &a);
        r31 = r3;
        a.r[0] = param_2;
        a.r[1] = 1u;
        a.r[2] = 4u;
        r3 = tc_call(0x800499e4u, &a);
        a.r[0] = r3;
        a.r[1] = r31;
        a.r[2] = param_3;
        a.r[3] = 4u;
        (void)tc_call(0x8004aed8u, &a);
    }
    (void)tc_call(0x8004b0d0u, &a);
    return;
}
