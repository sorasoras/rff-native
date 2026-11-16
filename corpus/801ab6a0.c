#include "tc_rt.h"

u32 fn_801ab6a0(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(param_1, 0x80371db0u);
    a.r[0] = param_1;
    r3 = tc_call(0x801c38acu, &a);
    wr32(param_1 + 4u, r3);
    wr32(param_1, 0x80371d90u);
    a.r[0] = param_1 + 8u;
    a.r[1] = 0x801ab714u;
    a.r[2] = 0x801ab4bcu;
    a.r[3] = 0xe8u;
    a.r[4] = 2u;
    (void)tc_call(0x80255624u, &a);
    wr32(param_1 + 0x1dcu, 0u);
    return param_1;
}
