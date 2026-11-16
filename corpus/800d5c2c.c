#include "tc_rt.h"

u32 fn_800d5c2c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d6bc8u, &a);
    wr32(param_1 + 0x9cu, 0u);
    wr32(param_1, 0x80355c70u);
    wr32(param_1 + 0xa0u, 0u);
    wr32(param_1 + 0xa4u, 0u);
    wr32(param_1 + 0xa8u, 0u);
    return param_1;
}
