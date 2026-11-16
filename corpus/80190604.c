#include "tc_rt.h"

u32 fn_80190604(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1 + 0x10u;
    a.r[1] = 0x80190668u;
    a.r[2] = 0x8019069cu;
    a.r[3] = 0x58u;
    a.r[4] = 2u;
    (void)tc_call(0x80255624u, &a);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1 + 0xc0u, 0u);
    wr32(param_1, 0u);
    return param_1;
}
