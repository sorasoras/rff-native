#include "tc_rt.h"

u32 fn_800f575c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801c79dcu, &a);
    wr32(param_1, 0x8035c2c0u);
    wr32(param_1 + 0x12cu, 0u);
    wr32(param_1 + 0x16cu, 5u);
    return param_1;
}
