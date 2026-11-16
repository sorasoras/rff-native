#include "tc_rt.h"

void fn_801b5ff8(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 0x28u);
    if (r31 != 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801b5fecu, &a);
        a.r[0] = r31;
        a.r[1] = rd32(r3 + 0x3ecu);
        r3 = tc_call(0x801894d8u, &a);
        r31 = r3;
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801b5fecu, &a);
        a.r[0] = r3;
        a.r[1] = r31;
        (void)tc_call(0x80119ffcu, &a);
    }
    return;
}
