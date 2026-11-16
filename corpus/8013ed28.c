#include "tc_rt.h"

void fn_8013ed28(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(param_1, param_2);
    a.r[0] = param_2;
    a.r[1] = 0u;
    r3 = tc_call(0x800510bcu, &a);
    wr32(param_1 + 4u, r3);
    return;
}
