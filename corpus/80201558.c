#include "tc_rt.h"

void fn_80201558(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x40u;
    a.r[1] = 0x8033c543u;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = (u32)param_1 + 0x40u;
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    r3 = rd32((u32)param_1 + 0x2cu);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x802024ecu, &a);
    }
    r3 = rd32((u32)param_1 + 0x30u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x802030f8u, &a);
    }
    return;
}
