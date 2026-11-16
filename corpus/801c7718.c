#include "tc_rt.h"

u32 fn_801c7718(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d9ce0u, &a);
    wr32(param_1 + 0x120u, 0u);
    wr32(param_1, 0x803734f4u);
    return param_1;
}
