#include "tc_rt.h"

void fn_800ffc00(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(param_1 + 0xf8u, param_3);
    wr32(param_1 + 0xfcu, param_4);
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
    a.r[2] = 0x800ffc78u;
    a.r[3] = param_1;
    (void)tc_call(0x801e5b50u, &a);
    return;
}
