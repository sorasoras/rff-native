#include "tc_rt.h"

u32 fn_801511b8(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800af074u, &a);
    wr32(param_1, 0x803683c0u);
    wr32(param_1 + 0x1694u, 0x26u);
    wr32(param_1 + 0x1690u, 0x803685b8u);
    wr32(param_1 + 0x1698u, 0u);
    return param_1;
}
