#include "tc_rt.h"

u32 fn_800d639c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800ce4d4u, &a);
    wr32(param_1, 0x80355cd0u);
    a.r[0] = param_1 + 0x24u;
    (void)tc_call(0x800d290cu, &a);
    wr32(param_1 + 0x20u, 0u);
    wr32(param_1 + 0x3cu, 0u);
    return param_1;
}
