#include "tc_rt.h"

u32 fn_801b81b0(u32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_r4;
    (void)tc_call(0x802216dcu, &a);
    wr32(param_1, 0x8037297cu);
    a.r[0] = param_1 + 0x2cu;
    (void)tc_call(0x800f82d0u, &a);
    return param_1;
}
