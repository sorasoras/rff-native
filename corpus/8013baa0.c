#include "tc_rt.h"

void fn_8013baa0(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = 0x64eu;
    r3 = tc_call(0x800f92e8u, &a);
    wr32(param_1, r3);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0u;
    (void)tc_call(0x8013bdc0u, &a);
    a.r[0] = 0x50u;
    r3 = tc_call(0x801f0d34u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x801f0da4u, &a);
    }
    wr32(param_1 + 4u, r31);
    a.r[0] = r31;
    a.r[1] = rd32(param_1);
    (void)tc_call(0x801f0e3cu, &a);
    wr32(param_1 + 8u, param_2);
    wr32(param_1 + 0xcu, 4u);
    return;
}
