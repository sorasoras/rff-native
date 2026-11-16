#include "tc_rt.h"

void fn_802000a4(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8020012cu, &a);
    r31 = r3;
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x80200098u, &a);
    r4 = rd32(r3 + 0x3ecu);
    r3 = r31;
    r31 = rd32((u32)param_1 + 0x1cu) + 0x44u;
    a.r[0] = r3;
    a.r[1] = r4;
    r3 = tc_call(0x801894d8u, &a);
    a.r[0] = r31;
    a.r[1] = r3;
    (void)tc_call(0x80119ffcu, &a);
    return;
}
