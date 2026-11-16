#include "tc_rt.h"

void fn_801b8870(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 0x28u);
    if (r31 != 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801b8864u, &a);
        a.r[0] = r31;
        a.r[1] = r3;
        r3 = tc_call(0x801b97a8u, &a);
        r31 = r3;
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801b8864u, &a);
        a.r[0] = r3;
        a.r[1] = r31;
        (void)tc_call(0x80119ffcu, &a);
    }
    return;
}
