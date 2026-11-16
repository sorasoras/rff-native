#include "tc_rt.h"

u32 fn_80151428(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800af074u, &a);
    wr32(param_1, 0x803685e8u);
    wr32(param_1 + 0x1694u, 0x25u);
    wr32(param_1 + 0x1698u, 1u);
    wr32(param_1 + 0x1690u, 0x80368850u);
    wr32(param_1 + 0x16a0u, 0x26u);
    wr32(param_1 + 0x169cu, 0x80368820u);
    wr32(param_1 + 0x16b0u, 0x27u);
    wr32(param_1 + 0x16b4u, 2u);
    wr32(param_1 + 0x16acu, 0x803687dcu);
    return param_1;
}
