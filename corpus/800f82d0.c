#include "tc_rt.h"

u32 fn_800f82d0(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1 + 4u;
    a.r[1] = 0u;
    (void)tc_call(0x800f8170u, &a);
    a.r[0] = param_1 + 0x20u;
    a.r[1] = 0u;
    (void)tc_call(0x800f8170u, &a);
    wr32(param_1 + 0x1cu, param_1 + 0x20u);
    wr32(param_1, 0u);
    wr32(param_1 + 0x34u, param_1 + 4u);
    return param_1;
}
