#include "tc_rt.h"

void fn_80183ebc(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0u;
    r3 = tc_call(0x801b3a7cu, &a);
    a.r[0] = r3;
    a.r[1] = param_1;
    (void)tc_call(0x801b3a38u, &a);
    return;
}
