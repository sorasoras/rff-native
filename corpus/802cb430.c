#include "tc_rt.h"

u32 fn_802cb430(u32 param_1)
{
    u32 r5 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x802d1ec4u, &a);
    wr32(param_1 + 0x28u, 0u);
    r5 = param_1 + 0x28u;
    wr32(param_1 + 0x2cu, 0u);
    wr32(param_1, 0x80399af8u);
    wr32(param_1 + 0x20u, 0u);
    wr32(param_1 + 0x24u, 0u);
    wr32(param_1 + 0x28u, r5);
    wr32(param_1 + 0x2cu, r5);
    return param_1;
}
