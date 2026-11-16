#include "tc_rt.h"

u32 fn_8014fb80(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800af074u, &a);
    wr32(param_1, 0x80366250u);
    wr32(param_1 + 0x1694u, 0x25u);
    wr32(param_1 + 0x1698u, 1u);
    wr32(param_1 + 0x1690u, 0x8036648cu);
    wr32(param_1 + 0x16a0u, 0x26u);
    wr32(param_1 + 0x16a4u, 2u);
    wr32(param_1 + 0x169cu, 0x80366448u);
    return param_1;
}
