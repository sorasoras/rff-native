#include "tc_rt.h"

u32 fn_800d03dc(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800ce4d4u, &a);
    wr32(param_1, 0x80355ae8u);
    a.r[0] = param_1 + 0x24u;
    (void)tc_call(0x800cfca0u, &a);
    wr32(param_1 + 0x20u, 0u);
    wr32(param_1 + 0x48u, 0u);
    wr32(param_1 + 0x50u, 0u);
    wr32(param_1 + 0x58u, 4u);
    return param_1;
}
