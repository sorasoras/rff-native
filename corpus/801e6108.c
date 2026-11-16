#include "tc_rt.h"

u32 fn_801e6108(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1 + 8u;
    (void)tc_call(0x801f0da4u, &a);
    wr32(param_1, 0u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 0x68u, 0u);
    wr32(param_1 + 0x6cu, 1u);
    wr32(param_1 + 0x70u, 1u);
    return param_1;
}
