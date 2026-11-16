#include "tc_rt.h"

u32 fn_801abdfc(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(param_1, 0x80371d70u);
    a.r[0] = param_1;
    r3 = tc_call(0x801c38acu, &a);
    wr32(param_1 + 4u, r3);
    r31 = param_1 + 8u;
    wr32(param_1, 0x80371d50u);
    a.r[0] = r31;
    (void)tc_call(0x8006f1b4u, &a);
    wr32(param_1 + 0xf0u, 0u);
    wr32(r31, 0x80350198u);
    return param_1;
}
