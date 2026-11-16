#include "tc_rt.h"

u32 fn_80164db8(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80148ae4u, &a);
    wr32(param_1 + 0x77cu, 0x106eu);
    wr32(param_1, 0x803696a0u);
    return param_1;
}
