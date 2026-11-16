#include "tc_rt.h"

u32 fn_800fa708(u32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_r4;
    (void)tc_call(0x802216dcu, &a);
    wr32(param_1, 0x803606d0u);
    a.r[0] = param_1 + 0x34u;
    (void)tc_call(0x800f82d0u, &a);
    a.r[0] = param_1 + 0x70u;
    (void)tc_call(0x80210178u, &a);
    wr32(param_1 + 0x24u, 0u);
    wr32(param_1 + 0x28u, 0u);
    wr32(param_1 + 0x2cu, 0u);
    wr32(param_1 + 0x30u, 0u);
    return param_1;
}
