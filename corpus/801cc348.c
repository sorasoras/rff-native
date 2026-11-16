#include "tc_rt.h"

u32 fn_801cc348(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801e6f24u, &a);
    wr32(param_1, 0x803744b0u);
    wr32(param_1 + 0xd4cu, 0x80374670u);
    return param_1;
}
