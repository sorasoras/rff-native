#include "tc_rt.h"

u32 fn_801ec130(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(param_1 + 0x64u, 0x803760fcu);
    a.r[0] = param_2;
    r3 = tc_call(0x800510acu, &a);
    r31 = r3;
    a.r[0] = 0u;
    r3 = tc_call(0x801b3a7cu, &a);
    a.r[0] = r3;
    a.r[1] = r31;
    r3 = tc_call(0x801b39d8u, &a);
    wr32(param_1, r3);
    a.r[0] = r3;
    a.r[1] = param_2;
    a.r[2] = 0x801ec1b8u;
    a.r[3] = param_1;
    (void)tc_call(0x801e5b50u, &a);
    (void)tc_call(0x801e5c20u, &a);
    wr32(param_1 + 0x60u, param_2);
    return param_1;
}
