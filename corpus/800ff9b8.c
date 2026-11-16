#include "tc_rt.h"

u32 fn_800ff9b8(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1 + 0x24u;
    (void)tc_call(0x802ef1c4u, &a);
    a.r[0] = param_1 + 4u;
    a.r[1] = 0u;
    a.r[2] = 0x20u;
    (void)tc_call(0x8000443cu, &a);
    wr32(param_1 + 0xd4u, 0u);
    wr32(param_1 + 0xf0u, 0u);
    wr32(param_1 + 0xd8u, 0u);
    wr32(param_1 + 0xdcu, 0u);
    wr32(param_1 + 0xe0u, 0u);
    wr32(param_1 + 0xe4u, 0u);
    wr32(param_1 + 0xe8u, 0u);
    wr32(param_1 + 0xecu, 0u);
    wr32(param_1 + 0xf4u, 0u);
    wr32(param_1, 0u);
    return param_1;
}
