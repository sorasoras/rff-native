#include "tc_rt.h"

u32 fn_80221b7c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d5c2cu, &a);
    wr32(param_1 + 0xb8u, 0u);
    wr32(param_1, 0x80378eb0u);
    wr32(param_1 + 0xbcu, 0u);
    wr32(param_1 + 0xc0u, 0u);
    return param_1;
}
