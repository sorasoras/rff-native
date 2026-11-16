#include "tc_rt.h"

u32 fn_8017356c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d9ce0u, &a);
    wr32(param_1, 0x8036e190u);
    wr32(param_1 + 0x120u, 7u);
    wr32(param_1 + 0x124u, 0u);
    wr32(param_1 + 0x128u, 0u);
    return param_1;
}
