#include "tc_rt.h"

void fn_80106ad0(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = 0x4du;
    r3 = tc_call(0x801bfa94u, &a);
    r30 = r3;
    a.r[0] = 0x68u;
    r3 = tc_call(0x801ed134u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r30;
        a.r[2] = 0xffffffffu;
        (void)tc_call(0x801ec1f4u, &a);
    }
    wr32((u32)param_1 + 0x40u, r31);
    return;
}
