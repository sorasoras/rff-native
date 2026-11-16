#include "tc_rt.h"

u32 fn_801c7068(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d9ce0u, &a);
    wr32(param_1, 0x803735a0u);
    wr32(param_1 + 0x128u, 0x1048u);
    wr32(param_1 + 0x120u, 0x2000u);
    wr32(param_1 + 0x12cu, 5u);
    wr32(param_1 + 0x130u, 0x137u);
    return param_1;
}
