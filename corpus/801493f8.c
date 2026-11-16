#include "tc_rt.h"

u32 fn_801493f8(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80148ae4u, &a);
    wr32(param_1 + 0x140u, 0x10u);
    wr32(param_1, 0x80365498u);
    wr32(param_1 + 0x77cu, 0x107au);
    return param_1;
}
