#include "tc_rt.h"

u32 fn_8015f63c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d9ce0u, &a);
    wr32(param_1, 0x803690d8u);
    wr32(param_1 + 0x120u, 4u);
    wr32(param_1 + 0x13cu, 0u);
    return param_1;
}
