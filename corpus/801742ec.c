#include "tc_rt.h"

u32 fn_801742ec(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d9ce0u, &a);
    wr32(param_1, 0x8036e348u);
    wr32(param_1 + 0x120u, 5u);
    wr32(param_1 + 0x124u, 0u);
    return param_1;
}
