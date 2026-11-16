#include "tc_rt.h"

u32 fn_800f55ec(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80148ae4u, &a);
    wr32(param_1 + 0x140u, 0x10u);
    wr32(param_1, 0x803651b0u);
    return param_1;
}
