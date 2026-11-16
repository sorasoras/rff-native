#include "tc_rt.h"

void fn_801b5990(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801b58fcu, &a);
    r3 = rd32((u32)param_1 + 0x2cu);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x800fec80u, &a);
    }
    a.r[0] = (u32)param_1 + 0x19cu;
    a.r[1] = 1u;
    (void)tc_call(0x801f0fa0u, &a);
    a.r[0] = (u32)param_1 + 0xc4u;
    (void)tc_call(0x8019087cu, &a);
    return;
}
