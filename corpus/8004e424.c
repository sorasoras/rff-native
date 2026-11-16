#include "tc_rt.h"

s32 fn_8004e424(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1;
    if (param_1 < 2) {
        r30 = 2u;
    }
    a.r[0] = 6u;
    a.r[1] = 0x280u;
    a.r[2] = 0x1e0u;
    a.r[3] = 0u;
    r3 = tc_call(0x8004b7f4u, &a);
    r31 = r3;
    a.r[0] = 4u;
    a.r[1] = (u32)ppc_divw(640, (s32)r30);
    a.r[2] = (u32)ppc_divw(480, (s32)r30);
    a.r[3] = 0u;
    r3 = tc_call(0x8004b7f4u, &a);
    r3 = r31 + r3;
    return (s32)r3;
}
