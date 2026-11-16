#include "tc_rt.h"

void fn_801bfe58(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 0x38u);
    if (r31 != 0u) {
        a.r[0] = 0u;
        r3 = tc_call(0x801b3a7cu, &a);
        a.r[0] = r3;
        a.r[1] = r31;
        (void)tc_call(0x801b3a38u, &a);
        wr32((u32)param_1 + 0x38u, 0u);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801c088cu, &a);
    return;
}
