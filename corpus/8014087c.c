#include "tc_rt.h"

u32 fn_8014087c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d9ce0u, &a);
    wr32(param_1 + 0x120u, 4u);
    wr32(param_1, 0x803642c8u);
    return param_1;
}
