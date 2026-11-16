#include "tc_rt.h"

void fn_80100038(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801000b0u, &a);
    r31 = rd32(param_1 + 0xf0u);
    if (r31 != 0u) {
        a.r[0] = 0u;
        r3 = tc_call(0x801b3a7cu, &a);
        a.r[0] = r3;
        a.r[1] = r31;
        (void)tc_call(0x801b3a38u, &a);
    }
    r31 = rd32(param_1);
    if (r31 != 0u && rd32(param_1 + 0xd4u) != 0u) {
        a.r[0] = 0u;
        r3 = tc_call(0x801b3a7cu, &a);
        a.r[0] = r3;
        a.r[1] = r31;
        (void)tc_call(0x801b3a38u, &a);
    }
    return;
}
