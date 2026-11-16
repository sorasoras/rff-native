#include "tc_rt.h"

u32 fn_802216dc(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    (void)tc_call(0x800f8170u, &a);
    wr32(param_1 + 0x1cu, param_2);
    wr32(param_1, 0x80378e58u);
    wr32(param_1 + 0x20u, 0u);
    wr32(0x80571420u, 0u);
    return param_1;
}
