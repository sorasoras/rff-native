#include "tc_rt.h"

u32 fn_8030f534(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x802f5938u, &a);
    wr32(param_1 + 0xd0u, 0u);
    wr32(param_1 + 0xd4u, 0u);
    wr32(param_1 + 0xdcu, 0u);
    wr32(param_1 + 0xe0u, 0u);
    wr32(param_1, 0x8039d748u);
    wr32(param_1 + 0xd8u, 0x8039d76cu);
    wr32(param_1 + 0xe4u, 0x8039d780u);
    wr8(param_1 + 0xe8u, 0u);
    a.r[0] = param_1 + 0x114u;
    (void)tc_call(0x802fad50u, &a);
    return param_1;
}
